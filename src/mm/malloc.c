// SPDX-License-Identifier: BSD-3-Clause

#include  "../include/internal/mm/mem_list.h"
#include "../include/internal/types.h"
#include "../include/internal/essentials.h"
#include "../include/sys/mman.h"
#include "../include/string.h"
#include "../include/stdlib.h"
//gpt
void *malloc(size_t size)
{
	/* TODO: Implement malloc(). */
static int initialized = 0;
    if (!initialized) {
        mem_list_init();
        initialized = 1;
    }

    void *allocated_memory = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (allocated_memory == MAP_FAILED) {
        return NULL;
    }

    if (mem_list_add(allocated_memory, size) != 0) {
        munmap(allocated_memory, size);
        return NULL;
    }

    return allocated_memory;
}

void *calloc(size_t nmemb, size_t size)
{
	/* TODO: Implement calloc(). */
	size_t total_size = nmemb * size;
    void *allocated_mem = malloc(total_size);

    if (allocated_mem != NULL) {
        memset(allocated_mem, 0, total_size);
        mem_list_add(allocated_mem, total_size);
		return allocated_mem;
    }
	return NULL;
}

void free(void *ptr)
{
	/* TODO: Implement free(). */
    if (!ptr)
        return;
    mem_list_del(ptr);
    //munmap(ptr, sizeof(struct mem_list));
}

void *realloc(void *ptr, size_t size)
{
	/* TODO: Implement realloc(). */
	if (ptr == NULL) {
        return malloc(size);
    }

    struct mem_list *item = mem_list_find(ptr);
    if (item == NULL) {
        return NULL;
    }

    size_t old_size = item->len;
    void *new_ptr = malloc(size);

    if (new_ptr != NULL) {
        memcpy(new_ptr, ptr, (size < old_size) ? size : old_size);
        mem_list_del(ptr);
        mem_list_add(new_ptr, size);
    }

    return new_ptr;
}

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
	/* TODO: Implement reallocarray(). */
	 size_t total_size = nmemb * size;
    return realloc(ptr, total_size);
}


