obj-m := exporting_module.o
obj-m += using_module.o
VKERNEL := $(shell uname -r)

all:
	make -C /lib/modules/$(VKERNEL)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(VKERNEL)/build M=$(PWD) clean