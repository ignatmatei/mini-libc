// SPDX-License-Identifier: BSD-3-Clause

#include "../include/sys/stat.h"
#include "../include/internal/syscall.h"
#include "../include/errno.h"

int fstat(int fd, struct stat *st)
{
	/* TODO: Implement fstat(). */
	errno = - syscall(__NR_fstat, fd, st);
	if(!errno)
	return 0;
	return -1;
}
