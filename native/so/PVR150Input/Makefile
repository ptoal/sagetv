CC=gcc

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),FreeBSD)
CFLAGS = -c -fPIC -I$(JDK_HOME)/include/ -I$(JDK_HOME)/include/freebsd
else
CFLAGS = -c -fPIC -I$(JDK_HOME)/include/ -I$(JDK_HOME)/include/linux
endif
BINDIR=/usr/local/bin

OBJFILES=sage_PVR150Input.o

libPVR150Input.so: $(OBJFILES)
	$(CC) -shared -o libPVR150Input.so $(OBJFILES)

clean:
	rm -f *.o libPVR150Input.so *.c~ *.h~ *.class
