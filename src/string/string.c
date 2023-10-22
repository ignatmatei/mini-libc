// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>

char *strcpy(char *destination, const char *source)
{
	/* TODO: Implement strcpy(). */
	char *p = source;
	int i = 0;
	while(*(p + i) != NULL){
		*(destination + i) = *(p + i);
		i++;
	}
	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncpy(). */
	char *p = source;
	int i = 0 , j = 0;
	while(i < len){
		*(destination + i) = *(p + j);
		i++;
		if(*(p + j) != NULL)
		 j++;
	}
	return destination;
}

char *strcat(char *destination, const char *source)
{
	/* TODO: Implement strcat(). */
	int length = strlen(destination);
	strcpy((destination + length), source);
	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */
	int length = strlen(destination);
	strncpy((destination + length), source, len);
	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */
	int i = 0;
    while(*(str1 + i) != NULL  && *(str2 + i) != NULL){
		if(*(str1 + i) != *(str2 + i))
		 return(*(str1 + i) - *(str2) + i);
		i++;
	}
	return 0;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
	/* TODO: Implement strncmp(). */
	int i = 0;
    while(*(str1 + i) != NULL  && *(str2 + i) != NULL && i < len){
		if(*(str1 + i) != *(str2 + i))
		 return(*(str1 + i) - *(str2) + i);
		i++;
	}
	return 0;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;
 
	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */
	for(int i = 0; i < strlen(str); i++)
	 if(*(str + i) == c)
	  return str + i;
	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */
	int poz = 0;
	for(int i = 0; i < strlen(str);i++){
		if(*(str + i) == c)
		 poz = i;
	}
	if(poz)
	 return str + poz;
	return NULL;
}

char *strstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strstr(). */
	return NULL;
}

char *strrstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strrstr(). */
	return NULL;
}

void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */
	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */
	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	return -1;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */
	return source;
}
