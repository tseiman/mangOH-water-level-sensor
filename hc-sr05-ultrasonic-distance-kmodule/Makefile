# Kernel module build command for ARM targets is:
# make ARCH=arm CROSS_COMPILE=arm-poky-linux-gnueabi-
#
# List of object file(s) to be built
obj-m+=hc-sr05.o
#
# Point to the directory containing sources for the kernel running on target
# system. The kernel directory must have the configuration build step executed,
# i.e. it must contain the target system's .config file.
#
# Legato tools contain such a directory, point to it.
KBUILD_DIR=/opt/swi/SWI9X07Y_02.18.06.00/sysroots/armv7a-neon-poky-linux-gnueabi/usr/src/kernel
#
# Kernel module build dependency
all:
	make -C $(KBUILD_DIR) M=$(PWD) modules
#
# Kernel module clean dependency
clean:
	make -C $(KBUILD_DIR) M=$(PWD) clean
