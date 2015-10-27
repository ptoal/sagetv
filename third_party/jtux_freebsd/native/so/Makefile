# CHANGE ME
JAVA_INCLUDE = /usr/local/openjdk8/include
INCLUDE = -I. -Iinclude -I$(JAVA_INCLUDE) -I$(JAVA_INCLUDE)/freebsd
CFLAGS  = -Wall -D_REENTRANT -D_THREAD_SAFE -std=c99 -O2
OBJECTS = jtux_clock.o jtux_dir.o jtux_file.o jtux_network.o \
          jtux_posixipc.o jtux_process.o jtux_sysvipc.o jtux_util.o

.c.o:
	$(CC) $(CFLAGS) -fPIC -DFREEBSD $(INCLUDE) -c $(<) -o $(@)

all: $(OBJECTS) java
	$(CC) -o libjtux.so -shared -lrt $(OBJECTS)

java:
	javac @jtux.java.list
	jar cf jtux.jar *.class

clean:
	rm -f *.o
	rm -f *.class

distclean: clean
	rm -f libjtux.so
	rm -f jtux.jar
