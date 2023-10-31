#include "../include/time.h"
#include "../include/errno.h"
#include "../include/internal/syscall.h"

int nanosleep(struct timespec *req, struct timespec *rem)
{
    errno = -syscall(__NR_nanosleep, req, rem);
    if (!errno)
    return 0;
    return -1;
}
