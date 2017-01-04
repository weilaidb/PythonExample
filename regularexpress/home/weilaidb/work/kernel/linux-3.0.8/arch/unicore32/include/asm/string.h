#define __UNICORE_STRING_H__
#define __HAVE_ARCH_STRRCHR
extern char *strrchr(const char *s, int c);
#define __HAVE_ARCH_STRCHR
extern char *strchr(const char *s, int c);
#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *, const void *, __kernel_size_t);
#define __HAVE_ARCH_MEMMOVE
extern void *memmove(void *, const void *, __kernel_size_t);
#define __HAVE_ARCH_MEMCHR
extern void *memchr(const void *, int, __kernel_size_t);
#define __HAVE_ARCH_MEMSET
extern void *memset(void *, int, __kernel_size_t);
