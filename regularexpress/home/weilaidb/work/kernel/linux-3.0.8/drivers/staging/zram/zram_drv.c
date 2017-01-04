#define KMSG_COMPONENT "zram"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define DEBUG
static int zram_major;
struct zram *devices;
unsigned int num_devices;
static void zram_stat_inc(u32 *v)
static void zram_stat_dec(u32 *v)
static void zram_stat64_add(struct zram *zram, u64 *v, u64 inc)
static void zram_stat64_sub(struct zram *zram, u64 *v, u64 dec)
static void zram_stat64_inc(struct zram *zram, u64 *v)
static int zram_test_flag(struct zram *zram, u32 index,
enum zram_pageflags flag)
static void zram_set_flag(struct zram *zram, u32 index,
enum zram_pageflags flag)
static void zram_clear_flag(struct zram *zram, u32 index,
enum zram_pageflags flag)
static int page_zero_filled(void *ptr)
static void zram_set_disksize(struct zram *zram, size_t totalram_bytes)
static void zram_free_page(struct zram *zram, size_t index)
static void handle_zero_page(struct page *page)
static void handle_uncompressed_page(struct zram *zram,
struct page *page, u32 index)
static void zram_read(struct zram *zram, struct bio *bio)
static void zram_write(struct zram *zram, struct bio *bio)
static inline int valid_io_request(struct zram *zram, struct bio *bio)
static int zram_make_request(struct request_queue *queue, struct bio *bio)
void zram_reset_device(struct zram *zram)
int zram_init_device(struct zram *zram)
void zram_slot_free_notify(struct block_device *bdev, unsigned long index)
static const struct block_device_operations zram_devops = ;
static int create_device(struct zram *zram, int device_id)
static void destroy_device(struct zram *zram)
static int __init zram_init(void)
static void __exit zram_exit(void)
module_param(num_devices, uint, 0);
MODULE_PARM_DESC(num_devices, "Number of zram devices");
module_init(zram_init);
module_exit(zram_exit);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Nitin Gupta <ngupta@vflare.org>");
MODULE_DESCRIPTION("Compressed RAM Block Device");
