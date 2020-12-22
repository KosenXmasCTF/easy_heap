# easy_heap (仮)
![Genre: Pwn](https://img.shields.io/badge/genre-pwn-brightgreen?style=for-the-badge)
![Difficulty: Hard](https://img.shields.io/badge/difficulty-Hard-blue?style=for-the-badge)
![Author: iwancof](https://img.shields.io/badge/author-iwancof-lightgrey?style=for-the-badge)

libc-version: 2.32
彼はすべてを忘れてしまう、自身の名前も生きる意味さえも....。そこで彼に残された唯一の記憶、C言語の知識を使ってメモアプリを作ることにした。彼の脳はもともと0x300byteだけだったので、アプリに大変満足しているらしい！よかったね。
でも記憶の管理がガバガバな彼は、変なことを言われるとすぐにパニックになって思わずシェルを出しちゃうかもしれない！気をつけて！

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


