// SPDX-License-Identifier: BSD-3-Clause

#include <unistd.h>
#include "../include/internal/syscall.h"
#include "../include/errno.h"
#include <fcntl.h>

off_t lseek(int fd, off_t offset, int whence)
{
	/* TODO: Implement lseek(). */
	errno = - syscall(__NR_lseek, fd , offset , whence);
	if(!errno)
	return -1;
	return -errno;
}
