C=arm-none-eabi-gcc
CFLAGS=-c -mcpu=cortex-m4 -mthumb -std=gnu11 -Wall -O0
LDFLAGS= -nostdlib -T linker.ld 

all:clean main.o G64_project.o startup.o final.elf qemu

main.o:main.c
	$(CC) $(CFLAGS) main.c -o main.o
	
G64_project.o:G64_project.c
	$(CC) $(CFLAGS) G64_project.c -o G64_project.o

interrupts.o:startup.c
	$(CC) $(CFLAGS) startup.c -o startup.o

final.elf: main.o G64_project.o startup.o
	$(CC) $(LDFLAGS) main.o G64_project.o startup.o -o final.elf

qemu:
	qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -mcu STM32F407VG -kernel final.elf

clean:
	rm -rf *.o *.elf
