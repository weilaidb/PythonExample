#define DEVICE_NAME "Z2RAM"
extern int m68k_realnum_memory;
extern struct mem_info m68k_memory[NUM_MEMINFO];
#define Z2MINOR_COMBINED      (0)
#define Z2MINOR_Z2ONLY        (1)
#define Z2MINOR_CHIPONLY      (2)
#define Z2MINOR_MEMLIST1      (4)
#define Z2MINOR_MEMLIST2      (5)
#define Z2MINOR_MEMLIST3      (6)
#define Z2MINOR_MEMLIST4      (7)
#define Z2MINOR_COUNT         (8)
#define Z2RAM_CHUNK1024       ( Z2RAM_CHUNKSIZE >> 10 )
static DEFINE_MUTEX(z2ram_mutex);
static u_long *z2ram_map    = NULL;
static u_long z2ram_size    = 0;
static int z2_count         = 0;
static int chip_count       = 0;
static int list_count       = 0;
static int current_device   = -1;
static DEFINE_SPINLOCK(z2ram_lock);
static struct gendisk *z2ram_gendisk;
static void do_z2_request(struct request_queue *q)
static void
get_z2ram( void )
static void
get_chipram( void )
static int z2_open(struct block_device *bdev, fmode_t mode)
static int
z2_release(struct gendisk *disk, fmode_t mode)
static const struct block_device_operations z2_fops =
;
static struct kobject *z2_find(dev_t dev, int *part, void *data)
static struct request_queue *z2_queue;
static int __init
z2_init(void)
static void __exit z2_exit(void)
module_init(z2_init);
module_exit(z2_exit);
MODULE_LICENSE("GPL");
