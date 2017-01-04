#define __SPARC64_STRING_H__
#define __HAVE_ARCH_MEMMOVE
extern void *memmove(void *, const void *, __kernel_size_t);
#define __HAVE_ARCH_MEMCPY
#define memcpy(t, f, n) __builtin_memcpy(t, f, n)
#define __HAVE_ARCH_MEMSET
#define memset(s, c, count) __builtin_memset(s, c, count)
#define __HAVE_ARCH_MEMSCAN
#undef memscan
#define memscan(__arg0, __char, __arg2)					\
()
#define __HAVE_ARCH_MEMCMP
extern int memcmp(const void *,const void *,__kernel_size_t);
#define __HAVE_ARCH_STRLEN
extern __kernel_size_t strlen(const char *);
#define __HAVE_ARCH_STRNCMP
extern int strncmp(const char *, const char *, __kernel_size_t);
