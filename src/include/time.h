#include "internal/types.h"
typedef long int time_t;

struct timespec {
    time_t tv_sec;  // seconds
    long tv_nsec;   // nanoseconds
};

typedef struct timespec timespec;

int nanosleep(struct timespec *req, struct timespec *rem);