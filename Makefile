CC     = gcc
CFLAGS = -I.
OBJ    = power.o basicMath.o
DEPSM  = maind mains
DEPS   = myMath.h

all:     mains maind
mymathd: libmymathd.os
mymaths: libmyMaths.a


maind: main.o libmymathd.so
	gcc -Wall -o $@ $< $(CFLAGS) -L. ./libmymathd.so

mains: main.o libmyMaths.a 
	$(CC) -Wall $< -lmyMaths -L. -o $@


main.o: main.c
	$(CC)  -Wall -c -o $@ $^ $(CFLAGS) 

	
%.o : %.c $(DEPS)
	$(CC) -Wall -fPIC -c $^


libmymathd.so: $(OBJ)
	$(CC) -Wall -shared $^ -o $@

libmyMaths.a: $(OBJ)
	ar rcs $@ $^

clean: 
	rm *.o *.a *.so maind mains *.h.gch
 
