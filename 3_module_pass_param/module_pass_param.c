/*
    Simple kernel module which uses passed parameter
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

uint count = 2;
module_param(count, uint, 0);

__init int module_pass_param_init(void)
{
    uint i;
    printk(KERN_INFO "Hello from %s function\n", __FUNCTION__);
    for(i=0; i<count; i++)
        printk(KERN_INFO "Message %d of %d\n", i+1, count);

    return 0;
}

void module_pass_param_exit(void)
{
    printk(KERN_INFO "Removing module ...");
}

module_init(module_pass_param_init);
module_exit(module_pass_param_exit);

MODULE_LICENSE("GPL");