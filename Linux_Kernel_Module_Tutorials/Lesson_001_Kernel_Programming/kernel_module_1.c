#include <linux/module.h>    //kmod interface
#include <linux/version.h>   //linux version stamp
#include <linux/kernel.h>    //resolve kernel symbol calls
#include <linux/init.h>

void func(void);

int val = 300;


void func (void)
{
	printk(" func invoked \n");
	printk(" val = %d",val);
} 

int init_mod(void)
{
	printk("module inserted \n");
	return 0;
}

void cleanup_mode(void)
{
	printk("module removed \n");
}

module_init(init_mod);
module_exit(cleanup_mode);

/* Kernel module Comments */
MODULE_AUTHOR("Embedded Turkey");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");
