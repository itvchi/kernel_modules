/*
    Module which use function from other module
*/
#include <linux/init.h>
#include <linux/module.h>

void printXtimes(uint x);

__init int importing_module_init (void)
{
    printk(KERN_INFO "Loading kernel module ...\n");
    printk(KERN_INFO "Call function from %s\n", __FUNCTION__);
    printXtimes(5);
    return 0;
}

void __exit importing_module_exit (void)
{
    printk(KERN_INFO "Call function from %s\n", __FUNCTION__);
    printXtimes(3);
    printk(KERN_INFO "Unloading module ...\n");
}

module_init(importing_module_init);
module_exit(importing_module_exit);

MODULE_LICENSE("GPL");