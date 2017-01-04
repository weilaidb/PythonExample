#define _ASM_CRIS_STRING_H
#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *, const void *, size_t);
#define __HAVE_ARCH_MEMSET
extern void *memset(void *, int, size_t);
#define __HAVE_ARCH_STRCMP
extern int strcmp(const char *s1, const char *s2);
