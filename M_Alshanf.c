#include <linux/module.h>
#include <linux/kernel.h>

int hello_init(void) {
	printk("[Group-51][Ahmed Alqaydi, Abdalla Alsuwaidi, Mohammed Alangari] Hello, I am Mohammed AlShanfari, a student of CSE330 Fall 2022\n");
	return 0;
}

void hello_exit(void) {
	printk("GoodBye - Malshanf!\n");
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
