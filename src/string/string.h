//taken from the string.h definition of size_t
#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ long unsigned int
#endif
#if !(defined (__GNUG__) && defined (size_t))
typedef __SIZE_TYPE__ size_t;
#endif


//taken from the stddef.h definition of NULL
#define NULL ((void *)0)





char *strcpy(char *destination, const char *source);
char *strncpy(char *destination, const char *source, size_t len);
char *strcat(char *destination, const char *source);
char *strncat(char *destination, const char *source, size_t len);
int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t len);
size_t strlen(const char *str);
char *strchr(const char *str, int c);
char *strrchr(const char *str, int c);
char *strstr(const char *haystack, const char *needle);
char *strrstr(const char *haystack, const char *needle);
void *memcpy(void *destination, const void *source, size_t num);
void *memmove(void *destination, const void *source, size_t num);
int memcmp(const void *ptr1, const void *ptr2, size_t num);
void *memset(void *source, int value, size_t num);
