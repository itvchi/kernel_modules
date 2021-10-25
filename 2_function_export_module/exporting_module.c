/*
    Module which exports function for other module
*/
#include <linux/init.h>
#include <linux/module.h>

void printXtimes(uint x)
{
    uint i;
    for(i=0; i<x; i++)
        printk(KERN_INFO "Message %d of %d\n", i+1, x);
}

EXPORT_SYMBOL(printXtimes);

__init int exporting_module_init (void)
{
    printk(KERN_INFO "Loading kernel module ...\n");
    printk(KERN_INFO "Call function from %s\n", __FUNCTION__);
    printXtimes(3);
    return 0;
}

void __exit exporting_module_exit (void)
{
    printk(KERN_INFO "Call function from %s\n", __FUNCTION__);
    printXtimes(2);
    printk(KERN_INFO "Unloading module ...\n");
}

module_init(exporting_module_init);
module_exit(exporting_module_exit);

MODULE_LICENSE("GPL");