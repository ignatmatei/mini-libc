// SPDX-License-Identifier: BSD-3-Clause

#include "../../src/include/stdlib.h"
#include "../../src/include/sys/mman.h"
#include "../../src/include/unistd.h"

#define		ALLOC_SIZE	(4 * 1024 * 1024)
#define		INFINITE	1000000

int main(void)
{
	char *p;
	write(1,"a",1);
    //printf("test start");
	p = mmap(NULL, ALLOC_SIZE, PROT_READ, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
	if (p == MAP_FAILED)
	{
		//printf("test succeded");
		write(1,"b",1);
		exit(EXIT_FAILURE);
	}
	write(1,"p",1);
	p[0] = 10;
    //printf("test not succeeded");
	return 0;
}
