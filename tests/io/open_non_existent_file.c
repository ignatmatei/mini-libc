// SPDX-License-Identifier: BSD-3-Clause

#include "../../src/include/stdlib.h"
#include "../../src/include/unistd.h"
#include "../../src/include/fcntl.h"
#include "../../src/include/internal/io.h"
#include "../../src/include/errno.h"
#define NON_EXISTENT_FILE "./non_existent_file"

/* File doesn't exist, open should fail and errno should be set to -ENOENT. */
int main(void)
{
	int fd;

	fd = open(NON_EXISTENT_FILE, 0, 0);
	if (fd != -1 || errno != -ENOENT)
		exit(EXIT_FAILURE);
	return 0;
}
