#define _ASM_X86_STRING_64_H
static __always_inline void *__inline_memcpy(void *to, const void *from, size_t n)
#define __HAVE_ARCH_MEMCPY 1
#if (__GNUC__ == 4 && __GNUC_MINOR__ >= 3) || __GNUC__ > 4
extern void *memcpy(void *to, const void *from, size_t len);
extern void *__memcpy(void *to, const void *from, size_t len);
#define memcpy(dst, src, len)					\
()
#define memcpy(dst, src, len) __inline_memcpy((dst), (src), (len))
#define __HAVE_ARCH_MEMSET
void *memset(void *s, int c, size_t n);
#define __HAVE_ARCH_MEMMOVE
void *memmove(void *dest, const void *src, size_t count);
int memcmp(const void *cs, const void *ct, size_t count);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *cs, const char *ct);
