#define DECOMPR_MM_H
#define STATIC_RW_DATA static
STATIC_RW_DATA unsigned long malloc_ptr;
STATIC_RW_DATA int malloc_count;
static void *malloc(int size)
static void free(void *where)
#define large_malloc(a) malloc(a)
#define large_free(a) free(a)
#define INIT
#define malloc(a) kmalloc(a, GFP_KERNEL)
#define free(a) kfree(a)
#define large_malloc(a) vmalloc(a)
#define large_free(a) vfree(a)
#define INIT __init
#define STATIC
