# easy_heap (仮) writeup

## 概要
初心者向けの問題。最新のglibcだとPROTECT_PTRによってアドレスが変わっているので、それをどうにかする。
あとは典型的なUAFでstackのアドレスをmallocしてきてedit関数とかでROP
