#define IN_ARCH_STRING_C 1
static inline char *__strend(const char *s)
static inline char *__strnend(const char *s, size_t n)
size_t strlen(const char *s)
EXPORT_SYMBOL(strlen);
size_t strnlen(const char * s, size_t n)
EXPORT_SYMBOL(strnlen);
char *strcpy(char *dest, const char *src)
EXPORT_SYMBOL(strcpy);
size_t strlcpy(char *dest, const char *src, size_t size)
EXPORT_SYMBOL(strlcpy);
char *strncpy(char *dest, const char *src, size_t n)
EXPORT_SYMBOL(strncpy);
char *strcat(char *dest, const char *src)
EXPORT_SYMBOL(strcat);
size_t strlcat(char *dest, const char *src, size_t n)
EXPORT_SYMBOL(strlcat);
char *strncat(char *dest, const char *src, size_t n)
EXPORT_SYMBOL(strncat);
int strcmp(const char *cs, const char *ct)
EXPORT_SYMBOL(strcmp);
char * strrchr(const char * s, int c)
EXPORT_SYMBOL(strrchr);
char * strstr(const char * s1,const char * s2)
EXPORT_SYMBOL(strstr);
void *memchr(const void *s, int c, size_t n)
EXPORT_SYMBOL(memchr);
int memcmp(const void *cs, const void *ct, size_t n)
EXPORT_SYMBOL(memcmp);
void *memscan(void *s, int c, size_t n)
EXPORT_SYMBOL(memscan);
void *memcpy(void *dest, const void *src, size_t n)
EXPORT_SYMBOL(memcpy);
void *memset(void *s, int c, size_t n)
EXPORT_SYMBOL(memset);
