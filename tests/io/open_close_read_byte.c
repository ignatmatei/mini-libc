// SPDX-License-Identifier: BSD-3-Clause

#include "../../src/include/stdlib.h"
#include "../../src/include/unistd.h"
#include "../../src/include/fcntl.h"
//#include <errno.h>
#include "../../src/include/internal/io.h"

#define EXISTENT_FILE	"./existent_file"

/* Read from file and write content to stdout. */
int main(void)
{
	int fd;
	int r;
	char buffer[128];
	int n;

	fd = open(EXISTENT_FILE, 0, 0);
	if (fd < 0)
		exit(EXIT_FAILURE);

	n = read(fd, buffer, 128);
	;
	if (n < 0)
		exit(EXIT_FAILURE);

	write(1, buffer, n);

	r = close(fd);
	if (r < 0)
		exit(EXIT_FAILURE);

	return 0;
}
