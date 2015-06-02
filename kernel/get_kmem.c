#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(get_kmem_free)
{
    long int free = 37L;
    printk("sys_get_kmem_free: %ld\n", free);
	return free;
}

SYSCALL_DEFINE0 (get_kmem_used)
{
    long used = (long) 42L;
    printk("sys_get_kmem_used: %ld\n", used);
	return used;
}
