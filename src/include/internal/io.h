/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef __IO_H__
#define __IO_H__	1

#ifdef __cplusplus
extern "C" {
#endif

#include "types.h"

ssize_t write(int fd, const void *buf, size_t len);
ssize_t read(int fd, void *buf, size_t len);
int close (int fd);
int open(const char *filename, int flags, ...);
off_t lseek(int fd, off_t offset, int whence);
#ifdef __cplusplus
}
#endif

#endif
