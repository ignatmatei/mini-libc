// SPDX-License-Identifier: BSD-3-Clause

#include "../include/unistd.h"
#include "../include/internal/syscall.h"
#include "../include/stdarg.h"
#include "../include/errno.h"

int close(int fd)
{
	/* TODO: Implement close(). */
	errno = - syscall(__NR_close, fd);
	if(errno)
	return -1;
	return 0;
}
