#define STATIC static
#undef memset
#undef memcpy
#define memzero(s, n)     memset ((s), 0, (n))
static void error(char *m);
static unsigned long free_mem_ptr;
static unsigned long free_mem_end_ptr;
static void *memset(void *s, int c, size_t n)
#define BOOT_HEAP_SIZE             0x10000
#define BOOT_HEAP_SIZE             0x400000
#define BOOT_HEAP_SIZE             0x10000
static void error(char *x)
void
decompress_kernel(int mmu_on, unsigned char *zimage_data,
unsigned int zimage_len, unsigned long heap)
