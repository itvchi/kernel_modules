/*
    "Hello kernel" test module
*/
#include <linux/init.h>
#include <linux/module.h>

void printXtimes(uint x);

__initdata uint x = 10;

__init int test_module_init (void)
{
    printk(KERN_INFO "Loading kernel module ...\n");
    printk(KERN_INFO "Hello kernel\n");
    printXtimes(3);
    return 0;
}

__exit void test_module_exit (void)
{
    printXtimes(2);
    printk(KERN_INFO "Unloading module ...\n");
}

module_init(test_module_init);
module_exit(test_module_exit);

MODULE_LICENSE("GPL");