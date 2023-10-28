// SPDX-License-Identifier: BSD-3-Clause

#include "../../src/include/time.h"
#include "../../src/include/stddef.h"

int main(void)
{
	struct timespec wait = {10, 0};

	nanosleep(&wait, NULL);

	return 0;
}

