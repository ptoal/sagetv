
JDK_HOME ?= /usr/local/j2sdk
UNAME_S := $(shell uname -s)

CC=gcc
ifeq ($(UNAME_S),FreeBSD)
CFLAGS = -c -fPIC -I$(JDK_HOME)/include/ -I$(JDK_HOME)/include/freebsd -Wimplicit -Wstrict-prototypes -Wall -Wno-unknown-pragmas -Iinclude
else
CFLAGS = -c -DLINUX -fPIC -I$(JDK_HOME)/include/ -I$(JDK_HOME)/include/linux -Wimplicit -Wstrict-prototypes -Wall -Wno-unknown-pragmas -Iinclude
endif
BINDIR=/usr/local/bin

OBJFILES=jtux_clock.o jtux_file.o jtux_sysvipc.o jtux_dir.o jtux_network.o jtux_process.o jtux_util.o

libjtux.so: $(OBJFILES)
	$(CC) -shared -lnsl -o libjtux.so $(OBJFILES)

clean:
	rm -f *.o libjtux.so *.c~ *.h~ *.class
