#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/init.h>

extern void func(void);

static __init int myinit(void)
{
	printk(" Calling Kernel Symbol \n ");
	func();
	return 0;
}

static __exit void myexit(void)
{
	printk(" cleanup invoked ");
}

module_init(myinit);
module_exit(myexit);

/* Kernel Module Comments*/
MODULE_AUTHOR(" EMBEDDED TURKEY ");
MODULE_DESCRIPTION(" DEP MODULE ");
MODULE_LICENSE(" GPL");
