obj-m = kernel_module_dep.o

obj-m = kernel_module_1.o
obj-m = kernel_module_2.o
obj-m = kernel_module_3.o


KDIR=/lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	rm -rf $(wildcard *.o *.ko *.mod *.c *.t test Module.symvers *.order *.markers)
 	
