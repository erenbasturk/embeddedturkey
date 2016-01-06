#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/init.h>
#include <linux/moduleparam.h>

static int val = 0;

module_param(val,int,S_IRUGO);
//module_param(val,int,S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(val, "INITIALISE ME AT INSERTION TIME");
MODULE_SUPPORTED_DEVICE("NULL");

void func(void);
void func1(void);

void func(void)
{
	printk(" func invoked \n");
	printk(" val = %d \n",val);
}

void func1(void)
{
	printk(" func 1 invoked \n");
}

int myinit(void)
{
	printk(" module inserted \n ");
	func();
	return 0;
}

void myexit(void)
{
	printk("module removed \n");
}

module_init(myinit);
module_exit(myexit);

/* Kernel Module Comments */
MODULE_AUTHOR("EMBEDDED TURKEY");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("DUAL BSD/GPL");
//All module param tyes are defined in <linux/moduleparam.h>
