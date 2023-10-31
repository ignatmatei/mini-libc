#include "stdio.h"
#include "../string/string.h"
#include  "unistd.h"

int puts(const char *str) {
    write(1, str, strlen(str));
    return 0;// Return success
}
