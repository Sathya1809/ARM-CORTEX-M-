CC = arm-none-eabi-gcc
MACH =cortex-m4
CFLAGS =-c -mcpu=$(MACH) -mthumb -std=gnull 
LDFLAGS = -nostdlib -T STM32_ls.ld -Wl,-Map=final.map 

all:main.o led.o STM32_Startup.o final.elf

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^

led.o:led.c
	$(CC) $(CFLAGS) -o $@ $^

STM32_Startup.o:STM32_Startup.c
	$(CC) $(CFLAGS) -o $@ $^

final.elf:main.o led.o STM32_Startup.o
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -rf *.o *.elf