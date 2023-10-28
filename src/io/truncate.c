// SPDX-License-Identifier: BSD-3-Clause

#include "../include/unistd.h"
#include "../include/internal/syscall.h"
#include "../include/errno.h"
#include "../include/fcntl.h"

int truncate(const char *path, off_t length)
{
	/* TODO: Implement truncate(). */
	errno = - syscall(__NR_truncate, path, length);
	if( ! errno)
	return 0;
	return -1;
}
