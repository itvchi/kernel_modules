obj-m := module_pass_param.o
VKERNEL := $(shell uname -r)

all:
	make -C /lib/modules/$(VKERNEL)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(VKERNEL)/build M=$(PWD) clean