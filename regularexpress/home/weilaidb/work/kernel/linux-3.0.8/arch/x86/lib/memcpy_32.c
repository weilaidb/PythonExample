#undef memcpy
#undef memset
void *memcpy(void *to, const void *from, size_t n)
EXPORT_SYMBOL(memcpy);
void *memset(void *s, int c, size_t count)
EXPORT_SYMBOL(memset);
void *memmove(void *dest, const void *src, size_t n)
EXPORT_SYMBOL(memmove);
