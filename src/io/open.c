// SPDX-License-Identifier: BSD-3-Clause

#include <fcntl.h>
#include "../include/internal/syscall.h"
#include <stdarg.h>
#include <errno.h>

int open(const char *filename, int flags, ...)
{
	/* TODO: Implement open system call. */
	mode_t mode = 0644;
	return syscall(__NR_open, filename, flags, mode);
	//return -1;
}
