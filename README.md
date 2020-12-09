# easy_heap (仮)
![Genre: Pwn](https://img.shields.io/badge/genre-pwn-brightgreen?style=for-the-badge)
![Author: iwancof](https://img.shields.io/badge/author-iwancof-lightgrey?style=for-the-badge)

## Files
- main.c
- Makefile
- easy_heap

## Run
```
$ make
$ ./easy_heap
```

## exploit
```
$ python ./exploit.py
```

## writeup

初心者向けの問題。最新のglibcだとPROTECT_PTRによってアドレスが変わっているので、それをどうにかする。
あとは典型的なUAFがあるため、alloc -> edit -> alloc -> alloc で好きな場所を取ってこれる。


