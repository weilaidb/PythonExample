#	define XZ_PREBOOT
#	include <linux/decompress/mm.h>
#define XZ_EXTERN STATIC
#	include <linux/slab.h>
#	include <linux/xz.h>
#define XZ_INTERNAL_CRC32 1
#	define XZ_DEC_X86
#	define XZ_DEC_POWERPC
#	define XZ_DEC_ARM
#	define XZ_DEC_IA64
#	define XZ_DEC_SPARC
#undef kmalloc
#undef kfree
#undef vmalloc
#undef vfree
#define kmalloc(size, flags) malloc(size)
#define kfree(ptr) free(ptr)
#define vmalloc(size) malloc(size)
#define vfree(ptr) do  while (0)
static bool memeq(const void *a, const void *b, size_t size)
static void memzero(void *buf, size_t size)
void *memmove(void *dest, const void *src, size_t size)
#define XZ_IOBUF_SIZE 4096
STATIC int INIT unxz(unsigned char *in, int in_size,
int (*fill)(void *dest, unsigned int size),
int (*flush)(void *src, unsigned int size),
unsigned char *out, int *in_used,
void (*error)(char *x))
#define decompress unxz
