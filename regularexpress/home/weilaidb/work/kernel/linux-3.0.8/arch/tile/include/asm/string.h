#define _ASM_TILE_STRING_H
#define __HAVE_ARCH_MEMCHR
#define __HAVE_ARCH_MEMSET
#define __HAVE_ARCH_MEMCPY
#define __HAVE_ARCH_MEMMOVE
#define __HAVE_ARCH_STRCHR
#define __HAVE_ARCH_STRLEN
extern __kernel_size_t strlen(const char *);
extern char *strchr(const char *s, int c);
extern void *memchr(const void *s, int c, size_t n);
extern void *memset(void *, int, __kernel_size_t);
extern void *memcpy(void *, const void *, __kernel_size_t);
extern void *memmove(void *, const void *, __kernel_size_t);
