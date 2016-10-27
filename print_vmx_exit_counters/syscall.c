#include <linux/kernel.h>
#include <linux/syscalls.h>

#include "../arch/x86/include/uapi/asm/vmx.h"

asmlinkage long sys_print_vmx_exit_counters(void) {
	printk(KERN_WARNING "Call function from vmx");
	//print_vmx_exit_counters();
	return 0;
}
