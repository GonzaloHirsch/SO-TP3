.PHONY: all server client clean

all: server client clean

GCCFLAGS=-g3 -ggdb -m64 -fno-exceptions -Wall -ffreestanding -fno-common -std=c99 -fno-stack-protector
GCC=gcc

server:
	$(GCC) $(GCCFLAGS) our_server.c -o our_server
	touch .whatAmI
	objcopy --add-section .whatAmI=.whatAmI  our_server

client:
	$(GCC) $(GCCFLAGS) client.c -o client

clean:
	rm -rf *.o *.elf *.bin
