#include "time.h"
#include "errno.h"
#include "internal/syscall.h"

int nanosleep(struct timespec *req, struct timespec *rem)
{
    errno = -syscall(__NR_nanosleep, req, rem);
    if(!errno)
    return 0;
    return -1;    
}