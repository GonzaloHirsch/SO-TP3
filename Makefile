.PHONY: clean all server client

all: clean server client

GCCFLAGS=-g3 -ggdb -m64 -fno-exceptions -Wall -ffreestanding -fno-common -std=c99 -fno-stack-protector
GCC=gcc
VALGRINDFLAGS=--leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt

server:
	$(GCC) $(GCCFLAGS) our_server.c -o our_server
	touch .whatAmI
	objcopy --add-section .whatAmI=.whatAmI  our_server

client:
	$(GCC) $(GCCFLAGS) client.c -o client

clean:
	rm -rf *.o *.elf *.bin

valgrind:
	valgrind $(VALGRINDFLAGS) ./our_server
