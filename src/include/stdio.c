#include "stdio.h"
#include "../string/string.h"
#include  "unistd.h"

int puts(const char *str) {
    write(1, str, strlen(str));
    write(1, "\n", 1);
    return 0;// Return success
}
