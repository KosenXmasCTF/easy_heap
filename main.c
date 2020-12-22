#include<stdio.h>
#include<stdlib.h>

#define BUFSIZE 0x100

void show_menu() {
  puts(" -- menu -- ");
  puts("0: allocate memory");
  puts("1: free memory");
  puts("2: edit memory");
  puts("3: show addresses");
  puts("4: show memory");
  puts("5: quit");
  puts(" --------- ");
}

int get_int() {
  int ret;
  scanf("%d%*c", &ret);

  return ret;
}

int get_index() {
  printf("enter index:");
  int ret = get_int();
  if(ret < 0 || 2 < ret) {
    puts("invalied index. index < 0 || 2 < index");
    exit(0);
  }
  return ret;
}

void allocate(char *address[3]) {
  int index = get_index();
  address[index] = malloc(BUFSIZE);
}
void free_at(char *address[3]) {
  int index = get_index();
  free(address[index]);
}
void edit(char *address[3]) {
  int index = get_index();
  printf("enter user input:");
  scanf("%1000s", address[index]);
}
void show_adr(char *address[3]) {
  for(int i = 0;i < 3;i++) {
    printf("%d: %p\n", i, address[i]);
  }
}
void show_mem(char *address[3]) {
  int index = get_index();
  printf("%s\n", address[index]);
}

int main() {
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

  char *address[3] = {0};
  printf("address at %p\n", &address);
  while(1) {
    show_menu();
    printf("enter command:");
    switch(get_int()) {
      case 0: {
        allocate(address);
        break;
      }
      case 1: {
        free_at(address);
        break;
      }
      case 2: {
        edit(address);
        break;
      }
      case 3: {
        show_adr(address);
        break;
      }
      case 4: {
        show_mem(address);
        break;
      }
      default: {
        return 0;
      }
    }
  }
  return 0;
}
