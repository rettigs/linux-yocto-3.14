#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/syscalls.h>

/*
 * Returns the number of holes in memory.
 */
SYSCALL_DEFINE0(get_kmem_free)
{
	extern long get_kmem_free(void);
	return get_kmem_free();
}

/*
 * Returns the number of allocated blocks of memory.
 */
SYSCALL_DEFINE0(get_kmem_used)
{
	extern long get_kmem_used(void);
	return get_kmem_used();
}
