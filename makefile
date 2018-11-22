BIN_DESTINATION = /usr/local/bin
LIB_DESTINATION = /usr/local/lib

all: test_powerlib

# -Wl, -soname, -test_powerlib.so.1 ?
test_powerlib: libpower.so test.c
	gcc test.c -L. -lpower -Wl,-rpath,. -o test_powerlib

libpower.so: power.o
	gcc -shared -fPIC power.o -o libpower.so

power.o : power.c power.h
	gcc -c -fPIC power.c -o power.o

clean: 
	rm test_powerlib *.o *.so

install: test_powerlib
	cp test_powerlib $(BIN_DESTINATION); cp libpower.so $(LIB_DESTINATION)

uninstall: test_powerlib
	rm $(BIN_DESTINATION)/test_powerlib; rm $(LIB_DESTINATION)/libpower.so

