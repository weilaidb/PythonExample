#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)merge.c     8.2 (Berkeley) 2/14/94";
#undef yasm__mergesort
#define NATURAL
#define THRESHOLD 16
static void setup(unsigned char *, unsigned char *, size_t, size_t,
int (*)(const void *, const void *));
static void insertionsort(unsigned char *, size_t, size_t,
int (*)(const void *, const void *));
#define ISIZE sizeof(int)
#define PSIZE sizeof(unsigned char *)
#define ICOPY_LIST(src, dst, last)                              \
do                                                      \
*(int*)dst = *(int*)src, src += ISIZE, dst += ISIZE;    \
while(src < last)
#define ICOPY_ELT(src, dst, i)                                  \
do                                                      \
*(int*) dst = *(int*) src, src += ISIZE, dst += ISIZE;  \
while (i -= ISIZE)
#define CCOPY_LIST(src, dst, last)              \
do                                      \
*dst++ = *src++;                \
while (src < last)
#define CCOPY_ELT(src, dst, i)                  \
do                                      \
*dst++ = *src++;                \
while (i -= 1)
#define EVAL(p) (unsigned char **)                                              \
((unsigned char *)0 +                                                   \
(((unsigned char *)p + PSIZE - 1 - (unsigned char *) 0) & ~(PSIZE - 1)))
int
yasm__mergesort(void *base, size_t nmemb, size_t size,
int (*cmp)(const void *, const void *))
#define swap(a, b)
#define reverse(bot, top)
void
setup(unsigned char *list1, unsigned char *list2, size_t n, size_t size,
int (*cmp)(const void *, const void *))
static void
insertionsort(unsigned char *a, size_t n, size_t size,
int (*cmp)(const void *, const void *))
