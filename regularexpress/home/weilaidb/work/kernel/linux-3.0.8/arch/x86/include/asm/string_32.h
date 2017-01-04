#define _ASM_X86_STRING_32_H
#define __HAVE_ARCH_STRCPY
extern char *strcpy(char *dest, const char *src);
#define __HAVE_ARCH_STRNCPY
extern char *strncpy(char *dest, const char *src, size_t count);
#define __HAVE_ARCH_STRCAT
extern char *strcat(char *dest, const char *src);
#define __HAVE_ARCH_STRNCAT
extern char *strncat(char *dest, const char *src, size_t count);
#define __HAVE_ARCH_STRCMP
extern int strcmp(const char *cs, const char *ct);
#define __HAVE_ARCH_STRNCMP
extern int strncmp(const char *cs, const char *ct, size_t count);
#define __HAVE_ARCH_STRCHR
extern char *strchr(const char *s, int c);
#define __HAVE_ARCH_STRLEN
extern size_t strlen(const char *s);
static __always_inline void *__memcpy(void *to, const void *from, size_t n)
static __always_inline void *__constant_memcpy(void *to, const void *from,
size_t n)
#define __HAVE_ARCH_MEMCPY
static inline void *__constant_memcpy3d(void *to, const void *from, size_t len)
static inline void *__memcpy3d(void *to, const void *from, size_t len)
#define memcpy(t, f, n)				\
(__builtin_constant_p((n))		\
? __constant_memcpy3d((t), (f), (n))	\
: __memcpy3d((t), (f), (n)))
#if (__GNUC__ >= 4)
#define memcpy(t, f, n) __builtin_memcpy(t, f, n)
#define memcpy(t, f, n)				\
(__builtin_constant_p((n))		\
? __constant_memcpy((t), (f), (n))	\
: __memcpy((t), (f), (n)))
#define memcpy(t, f, n) __memcpy((t), (f), (n))
#define __HAVE_ARCH_MEMMOVE
void *memmove(void *dest, const void *src, size_t n);
#define memcmp __builtin_memcmp
#define __HAVE_ARCH_MEMCHR
extern void *memchr(const void *cs, int c, size_t count);
static inline void *__memset_generic(void *s, char c, size_t count)
#define __constant_count_memset(s, c, count) __memset_generic((s), (c), (count))
static __always_inline
void *__constant_c_memset(void *s, unsigned long c, size_t count)
#define __HAVE_ARCH_STRNLEN
extern size_t strnlen(const char *s, size_t count);
#define __HAVE_ARCH_STRSTR
extern char *strstr(const char *cs, const char *ct);
static __always_inline
void *__constant_c_and_count_memset(void *s, unsigned long pattern,
size_t count)
#define __constant_c_x_memset(s, c, count)			\
(__builtin_constant_p(count)				\
? __constant_c_and_count_memset((s), (c), (count))	\
: __constant_c_memset((s), (c), (count)))
#define __memset(s, c, count)				\
(__builtin_constant_p(count)			\
? __constant_count_memset((s), (c), (count))	\
: __memset_generic((s), (c), (count)))
#define __HAVE_ARCH_MEMSET
#if (__GNUC__ >= 4)
#define memset(s, c, count) __builtin_memset(s, c, count)
#define memset(s, c, count)						\
(__builtin_constant_p(c)					\
? __constant_c_x_memset((s), (0x01010101UL * (unsigned char)(c)), \
(count))				\
: __memset((s), (c), (count)))
#define __HAVE_ARCH_MEMSCAN
extern void *memscan(void *addr, int c, size_t size);
