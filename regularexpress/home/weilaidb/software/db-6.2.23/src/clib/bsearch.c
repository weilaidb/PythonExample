void *bsearch(key, base, nmemb, size, cmp)
const void *key;
const void *base;
size_t nmemb;
size_t size;
int (*cmp) __P((const void *, const void *));
