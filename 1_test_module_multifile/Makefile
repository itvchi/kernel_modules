obj-m := test_module_multi.o
VKERNEL := $(shell uname -r)

test_module_multi-objs := test_module.o function_module.o

all:
	make -C /lib/modules/$(VKERNEL)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(VKERNEL)/build M=$(PWD) clean