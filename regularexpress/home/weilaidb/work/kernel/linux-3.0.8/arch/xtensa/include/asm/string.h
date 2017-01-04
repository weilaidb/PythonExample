#define _XTENSA_STRING_H
#define __HAVE_ARCH_STRCPY
static inline char *strcpy(char *__dest, const char *__src)
#define __HAVE_ARCH_STRNCPY
static inline char *strncpy(char *__dest, const char *__src, size_t __n)
#define __HAVE_ARCH_STRCMP
static inline int strcmp(const char *__cs, const char *__ct)
#define __HAVE_ARCH_STRNCMP
static inline int strncmp(const char *__cs, const char *__ct, size_t __n)
#define __HAVE_ARCH_MEMSET
extern void *memset(void *__s, int __c, size_t __count);
#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *__to, __const__ void *__from, size_t __n);
#define __HAVE_ARCH_MEMMOVE
extern void *memmove(void *__dest, __const__ void *__src, size_t __n);
#define __HAVE_ARCH_BCOPY
#define __HAVE_ARCH_MEMSCAN
#define memscan memchr
