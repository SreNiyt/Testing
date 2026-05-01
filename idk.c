#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sashimi Dev");
MODULE_DESCRIPTION("A simple test for the Sashimi Kernel");

static int __init sashimi_test_init(void) {
    printk(KERN_INFO "Sashimi: Module loaded successfully! -35mV stable?\n");
    return 0;
}

static void __exit sashimi_test_exit(void) {
    printk(KERN_INFO "Sashimi: Module unloaded. Cleaning up...\n");
}

module_init(sashimi_test_init);
module_exit(sashimi_test_exit);
