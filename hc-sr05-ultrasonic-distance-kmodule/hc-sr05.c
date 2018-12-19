#include <linux/module.h>   /* Needed by all modules */
#include <linux/kernel.h>   /* Needed for KERN_INFO */
#include <linux/init.h>     /* Needed for the macros */

#define VERSION "test.01"

static int __init ktest_module_init(void)
{
    printk(KERN_INFO "Driver version %s\n", VERSION);
    printk(KERN_INFO "Buona Sera :)\n");
    return 0;
}
 
static void __exit ktest_module_exit(void)
{
    printk(KERN_INFO "Ciao!\n");
}
 
module_init(ktest_module_init);
module_exit(ktest_module_exit);


