#define __SPARC_STRING_H__
extern void __memmove(void *,const void *,__kernel_size_t);
#define __HAVE_ARCH_MEMMOVE
#undef memmove
#define memmove(_to, _from, _n) \
()
#define __HAVE_ARCH_MEMCPY
#define memcpy(t, f, n) __builtin_memcpy(t, f, n)
#define __HAVE_ARCH_MEMSET
#define memset(s, c, count) __builtin_memset(s, c, count)
#define __HAVE_ARCH_MEMSCAN
#undef memscan
#define memscan(__arg0, __char, __arg2)						\
()
#define __HAVE_ARCH_MEMCMP
extern int memcmp(const void *,const void *,__kernel_size_t);
#define __HAVE_ARCH_STRLEN
extern __kernel_size_t strlen(const char *);
#define __HAVE_ARCH_STRNCMP
extern int __strncmp(const char *, const char *, __kernel_size_t);
static inline int __constant_strncmp(const char *src, const char *dest, __kernel_size_t count)
#undef strncmp
#define strncmp(__arg0, __arg1, __arg2)	\
(__builtin_constant_p(__arg2) ?	\
__constant_strncmp(__arg0, __arg1, __arg2) : \
__strncmp(__arg0, __arg1, __arg2))
