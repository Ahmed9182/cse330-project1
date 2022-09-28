#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main() {
	long  int shoutOut = syscall(229);
	printf("System Call sys_hello returned %ld\n", shoutOut);
	return 0;
}
