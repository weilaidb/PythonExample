#define _LINUX_BSEARCH_H
void *bsearch(const void *key, const void *base, size_t num, size_t size,
int (*cmp)(const void *key, const void *elt));
