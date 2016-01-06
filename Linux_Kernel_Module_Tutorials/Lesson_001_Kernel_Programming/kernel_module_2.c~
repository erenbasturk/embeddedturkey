#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/version.h>

/* Kernel module Comments */
MODULE_AUTHOR("EMBEDDED TURKEY");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");

void func(void);

EXPORT_SYMBOL(func); //func exported

static int val = 300;

void func(void)
{
	printk("func invoked \n");
	printk(" val = %d", val);
}

void func1(void)
{
	printk("func 1 invoked");
}

int myinit(void)
{
	printk("module inserted\n");
	return 0;
}

void myexit(void)
{
	printk("module removed\n");	
}

module_init(myinit);
module_exit(myexit);

