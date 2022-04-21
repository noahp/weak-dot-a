main: lib1.a lib2.a main.o

%.o: %.c
	$(CC) -c -o $@ $<

%.a: %.o
	$(AR) rcs $@ $<
