char *strcpy(char *dest, const char *src)
EXPORT_SYMBOL(strcpy);
char *strncpy(char *dest, const char *src, size_t count)
EXPORT_SYMBOL(strncpy);
char *strcat(char *dest, const char *src)
EXPORT_SYMBOL(strcat);
char *strncat(char *dest, const char *src, size_t count)
EXPORT_SYMBOL(strncat);
int strcmp(const char *cs, const char *ct)
EXPORT_SYMBOL(strcmp);
int strncmp(const char *cs, const char *ct, size_t count)
EXPORT_SYMBOL(strncmp);
char *strchr(const char *s, int c)
EXPORT_SYMBOL(strchr);
size_t strlen(const char *s)
EXPORT_SYMBOL(strlen);
void *memchr(const void *cs, int c, size_t count)
EXPORT_SYMBOL(memchr);
void *memscan(void *addr, int c, size_t size)
EXPORT_SYMBOL(memscan);
size_t strnlen(const char *s, size_t count)
EXPORT_SYMBOL(strnlen);
