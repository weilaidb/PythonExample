int strnicmp(const char *s1, const char *s2, size_t len)
EXPORT_SYMBOL(strnicmp);
int strcasecmp(const char *s1, const char *s2)
EXPORT_SYMBOL(strcasecmp);
int strncasecmp(const char *s1, const char *s2, size_t n)
EXPORT_SYMBOL(strncasecmp);
#undef strcpy
char *strcpy(char *dest, const char *src)
EXPORT_SYMBOL(strcpy);
char *strncpy(char *dest, const char *src, size_t count)
EXPORT_SYMBOL(strncpy);
size_t strlcpy(char *dest, const char *src, size_t size)
EXPORT_SYMBOL(strlcpy);
#undef strcat
char *strcat(char *dest, const char *src)
EXPORT_SYMBOL(strcat);
char *strncat(char *dest, const char *src, size_t count)
EXPORT_SYMBOL(strncat);
size_t strlcat(char *dest, const char *src, size_t count)
EXPORT_SYMBOL(strlcat);
#undef strcmp
int strcmp(const char *cs, const char *ct)
EXPORT_SYMBOL(strcmp);
int strncmp(const char *cs, const char *ct, size_t count)
EXPORT_SYMBOL(strncmp);
char *strchr(const char *s, int c)
EXPORT_SYMBOL(strchr);
char *strrchr(const char *s, int c)
EXPORT_SYMBOL(strrchr);
char *strnchr(const char *s, size_t count, int c)
EXPORT_SYMBOL(strnchr);
char *skip_spaces(const char *str)
EXPORT_SYMBOL(skip_spaces);
char *strim(char *s)
EXPORT_SYMBOL(strim);
size_t strlen(const char *s)
EXPORT_SYMBOL(strlen);
size_t strnlen(const char *s, size_t count)
EXPORT_SYMBOL(strnlen);
size_t strspn(const char *s, const char *accept)
EXPORT_SYMBOL(strspn);
size_t strcspn(const char *s, const char *reject)
EXPORT_SYMBOL(strcspn);
char *strpbrk(const char *cs, const char *ct)
EXPORT_SYMBOL(strpbrk);
char *strsep(char **s, const char *ct)
EXPORT_SYMBOL(strsep);
bool sysfs_streq(const char *s1, const char *s2)
EXPORT_SYMBOL(sysfs_streq);
int strtobool(const char *s, bool *res)
EXPORT_SYMBOL(strtobool);
void *memset(void *s, int c, size_t count)
EXPORT_SYMBOL(memset);
void *memcpy(void *dest, const void *src, size_t count)
EXPORT_SYMBOL(memcpy);
void *memmove(void *dest, const void *src, size_t count)
EXPORT_SYMBOL(memmove);
#undef memcmp
int memcmp(const void *cs, const void *ct, size_t count)
EXPORT_SYMBOL(memcmp);
void *memscan(void *addr, int c, size_t size)
EXPORT_SYMBOL(memscan);
char *strstr(const char *s1, const char *s2)
EXPORT_SYMBOL(strstr);
char *strnstr(const char *s1, const char *s2, size_t len)
EXPORT_SYMBOL(strnstr);
void *memchr(const void *s, int c, size_t n)
EXPORT_SYMBOL(memchr);
