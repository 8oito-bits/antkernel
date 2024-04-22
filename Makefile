KERNEL_NAME=ant_kernel

X86-64_C_SRCS = $(wildcard arch/x86_64/*.c)
X86-64_ASM_SRCS = $(wildcard arch/x86_64/*.S)
X86-64_INCLUDE = arch/x86_64/include/

X86-64_OBJS = $(X86-64_C_SRCS:.c=.o)
X86-64_OBJS += $(X86-64_ASM_SRCS:.S=.o)

DRIVERS_SRCS = $(shell find drivers/ -name '*.c')
DRIVERS_OBJS = $(DRIVERS_SRCS:.c=.o)

ANT_INCLUDE = include/
DRIVERS_INCLUDE = drivers/

CC = gcc
AS = as
LD = ld
CFLAGS = -ffreestanding -nostdlib -nostdinc -I $(ANT_INCLUDE) -I $(DRIVERS_INCLUDE) -I $(X86-64_INCLUDE)
LDFLAGS = -T arch/x86_64/ant.ld

$(KERNEL_NAME): $(X86-64_OBJS) $(DRIVERS_OBJS)
	$(LD) $(LDFLAGS) $^ -o $@
	#strip $(KERNEL_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

%.o: %.S
	$(AS) --64 $< -o $@

.PHONY: clean

clean:
	rm -rf $(X86-64_OBJS) $(DRIVERS_OBJS) $(KERNEL_NAME)
