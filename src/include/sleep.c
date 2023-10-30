#include "unistd.h"
#include "time.h"
#include "errno.h"
#include "stdlib.h"
//chatgpt
unsigned int sleep(unsigned int seconds) 
{
    timespec ts;
    ts.tv_sec = seconds;
    ts.tv_nsec = 0;
    int ret;
    do {
        ret = nanosleep(&ts, &ts);
    } while(ret == -1 && errno == EINTR);
    if(ret)
     exit(EXIT_FAILURE);
    return 0;
}