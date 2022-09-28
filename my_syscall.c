#include <linux/kernel.h>

asmlinkage long sys_hello(void) {
	printk("This is the new system call AlqaydiAlsuwaidiAlangariAlShanfari implemented.\n");
	return 0;
}
