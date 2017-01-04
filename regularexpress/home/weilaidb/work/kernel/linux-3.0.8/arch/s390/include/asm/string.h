#define _S390_STRING_H_
#define __HAVE_ARCH_MEMCHR
#define __HAVE_ARCH_MEMCMP
#define __HAVE_ARCH_MEMCPY
#define __HAVE_ARCH_MEMSCAN
#define __HAVE_ARCH_MEMSET
#define __HAVE_ARCH_STRCAT
#define __HAVE_ARCH_STRCMP
#define __HAVE_ARCH_STRCPY
#define __HAVE_ARCH_STRLCAT
#define __HAVE_ARCH_STRLCPY
#define __HAVE_ARCH_STRLEN
#define __HAVE_ARCH_STRNCAT
#define __HAVE_ARCH_STRNCPY
#define __HAVE_ARCH_STRNLEN
#define __HAVE_ARCH_STRRCHR
#define __HAVE_ARCH_STRSTR
extern int memcmp(const void *, const void *, size_t);
extern void *memcpy(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
extern int strcmp(const char *,const char *);
extern size_t strlcat(char *, const char *, size_t);
extern size_t strlcpy(char *, const char *, size_t);
extern char *strncat(char *, const char *, size_t);
extern char *strncpy(char *, const char *, size_t);
extern char *strrchr(const char *, int);
extern char *strstr(const char *, const char *);
#undef __HAVE_ARCH_MEMMOVE
#undef __HAVE_ARCH_STRCHR
#undef __HAVE_ARCH_STRNCHR
#undef __HAVE_ARCH_STRNCMP
#undef __HAVE_ARCH_STRNICMP
#undef __HAVE_ARCH_STRPBRK
#undef __HAVE_ARCH_STRSEP
#undef __HAVE_ARCH_STRSPN
#if !defined(IN_ARCH_STRING_C)
static inline void *memchr(const void * s, int c, size_t n)
static inline void *memscan(void *s, int c, size_t n)
static inline char *strcat(char *dst, const char *src)
static inline char *strcpy(char *dst, const char *src)
static inline size_t strlen(const char *s)
static inline size_t strnlen(const char * s, size_t n)
void *memchr(const void * s, int c, size_t n);
void *memscan(void *s, int c, size_t n);
char *strcat(char *dst, const char *src);
char *strcpy(char *dst, const char *src);
size_t strlen(const char *s);
size_t strnlen(const char * s, size_t n);
