// SPDX-License-Identifier: BSD-3-Clause

#include "../include/unistd.h"
#include "../include/internal/syscall.h"
#include "../include/errno.h"
#include "../include/fcntl.h"

int ftruncate(int fd, off_t length)
{
	/* TODO: Implement ftruncate(). */
	errno = - syscall(__NR_ftruncate , fd , length);
	if(!errno)
	return 0;
	return -1;
}
