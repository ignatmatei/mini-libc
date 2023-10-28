// SPDX-License-Identifier: BSD-3-Clause

#include "../include/sys/stat.h"
#include "../include/internal/syscall.h"
#include "../include/fcntl.h"
#include "../include/errno.h"

int stat(const char *restrict path, struct stat *restrict buf)
{
	/* TODO: Implement stat(). */
	errno = - syscall(__NR_stat, path, buf);
	if(!errno)
	return 0;
	return -1;
}
