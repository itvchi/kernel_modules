/*
    Function module for test multifile module compilation
*/
#include <linux/init.h>
#include <linux/module.h>

void printXtimes(uint x)
{
    uint i;
    for(i=0; i<x; i++)
        printk(KERN_INFO "Message %d of %d\n", i+1, x);
}