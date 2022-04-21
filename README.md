# weak symbols in static libraries

The `lib` symbol is weakly exported in lib1.a and lib2.a, and normally defined
in main.c . The `main.c` definition is the one used in the final binary.

```bash
❯ make && ./main
cc -c -o main.o main.c
cc -c -o lib1.o lib1.c
ar rcs lib1.a lib1.o
cc -c -o lib2.o lib2.c
ar rcs lib2.a lib2.o
cc   main.o lib1.a lib2.a   -o main
rm lib2.o lib1.o
lib() was compiled from: main.c
```
