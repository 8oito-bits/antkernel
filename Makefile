KERNEL_NAME=ant_kernel

X86-64_C_SRCS = $(wildcard arch/x86_64/*.c)
X86-64_ASM_SRCS = $(wildcard arch/x86_64/*.S)
X86-64_OBJS = $(X86-64_C_SRCS:.c=.o)
X86-64_OBJS += $(X86-64_ASM_SRCS:.S=.o)
X86-64_INCLUDE = arch/x86_64/include/

LIBK_SRCS = $(wildcard libk/*.c)
LIBK_OBJS = $(LIBK_SRCS:.c=.o)
LIBK_INCLUDE = libk/include

DRIVERS_SRCS = $(shell find drivers/ -name '*.c')
DRIVERS_OBJS = $(DRIVERS_SRCS:.c=.o)
DRIVERS_INCLUDE = drivers/

ANT_INCLUDE = include/

CC = gcc
AS = as
LD = ld
CFLAGS = -ffreestanding -nostdlib -I $(ANT_INCLUDE) -I $(DRIVERS_INCLUDE) -I $(X86-64_INCLUDE) -I $(LIBK_INCLUDE)
LDFLAGS = -T arch/x86_64/ant.ld -z noexecstack

$(KERNEL_NAME): $(X86-64_OBJS) $(DRIVERS_OBJS) $(LIBK_OBJS)
	$(LD) $(LDFLAGS) $^ -o $@
	strip $(KERNEL_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

%.o: %.S
	$(AS) --64 $< -o $@

.PHONY: clean

clean:
	rm -rf $(X86-64_OBJS) $(DRIVERS_OBJS) $(KERNEL_NAME)
