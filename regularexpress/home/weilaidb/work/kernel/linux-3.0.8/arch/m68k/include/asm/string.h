#define _M68K_STRING_H_
static inline size_t __kernel_strlen(const char *s)
static inline char *__kernel_strcpy(char *dest, const char *src)
#define __HAVE_ARCH_STRLEN
#define strlen(s)	(__builtin_constant_p(s) ?	\
__builtin_strlen(s) :		\
__kernel_strlen(s))
#define __HAVE_ARCH_STRNLEN
static inline size_t strnlen(const char *s, size_t count)
#define __HAVE_ARCH_STRCPY
#if __GNUC__ >= 4
#define strcpy(d, s)	(__builtin_constant_p(s) &&	\
__builtin_strlen(s) <= 32 ?	\
__builtin_strcpy(d, s) :	\
__kernel_strcpy(d, s))
#define strcpy(d, s)	__kernel_strcpy(d, s)
#define __HAVE_ARCH_STRNCPY
static inline char *strncpy(char *dest, const char *src, size_t n)
#define __HAVE_ARCH_STRCAT
#define strcat(d, s)	()
#define __HAVE_ARCH_STRCMP
static inline int strcmp(const char *cs, const char *ct)
#define __HAVE_ARCH_MEMMOVE
extern void *memmove(void *, const void *, __kernel_size_t);
#define memcmp(d, s, n) __builtin_memcmp(d, s, n)
#define __HAVE_ARCH_MEMSET
extern void *memset(void *, int, __kernel_size_t);
#define memset(d, c, n) __builtin_memset(d, c, n)
#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *, const void *, __kernel_size_t);
#define memcpy(d, s, n) __builtin_memcpy(d, s, n)
