// SPDX-License-Identifier: BSD-3-Clause

#include "../include/sys/mman.h"
#include "../include/errno.h"
#include "../include/internal/syscall.h"
long __syscall_ret1(unsigned long r)
{
 	if (r > -4096UL) {
		write(1,"f",1);
		errno = -r;
		return -1;
	}
	write(1,"o",1);
	return r;
}

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset)
{
	/* TODO: Implement mmap(). */
	long int x = syscall(__NR_mmap, addr , length , prot, flags, fd, offset);
	if(x < 0) {
		errno = -x;
		return MAP_FAILED;
	}
	return (void*) x;
}

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags)
{
	/* TODO: Implement mremap(). */
	long int x =   syscall (__NR_mremap, old_address, old_size, new_size, flags);
	return (void*) x;
	//return MAP_FAILED;
}
int munmap(void *addr, size_t length)
{
	/* TODO: Implement munmap(). */
	int x = syscall(__NR_munmap, addr, length);
	if(x < 0)
	{
		errno = - x;
		return -1;
	}
	return 0;
}
