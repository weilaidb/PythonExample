#define DEVICE_NAME		"ps3vram"
#define XDR_BUF_SIZE (2 * 1024 * 1024)
#define XDR_IOIF 0x0c000000
#define FIFO_BASE XDR_IOIF
#define FIFO_SIZE (64 * 1024)
#define DMA_PAGE_SIZE (4 * 1024)
#define CACHE_PAGE_SIZE (256 * 1024)
#define CACHE_PAGE_COUNT ((XDR_BUF_SIZE - FIFO_SIZE) / CACHE_PAGE_SIZE)
#define CACHE_OFFSET CACHE_PAGE_SIZE
#define FIFO_OFFSET 0
#define CTRL_PUT 0x10
#define CTRL_GET 0x11
#define CTRL_TOP 0x15
#define UPLOAD_SUBCH	1
#define DOWNLOAD_SUBCH	2
#define NV_MEMORY_TO_MEMORY_FORMAT_OFFSET_IN	0x0000030c
#define NV_MEMORY_TO_MEMORY_FORMAT_NOTIFY	0x00000104
#define CACHE_PAGE_PRESENT 1
#define CACHE_PAGE_DIRTY   2
struct ps3vram_tag ;
struct ps3vram_cache ;
struct ps3vram_priv ;
static int ps3vram_major;
static const struct block_device_operations ps3vram_fops = ;
#define DMA_NOTIFIER_HANDLE_BASE 0x66604200
#define DMA_NOTIFIER_OFFSET_BASE 0x1000
#define DMA_NOTIFIER_SIZE        0x40
#define NOTIFIER 7
static char *size = "256M";
module_param(size, charp, 0);
MODULE_PARM_DESC(size, "memory size");
static u32 *ps3vram_get_notifier(void *reports, int notifier)
static void ps3vram_notifier_reset(struct ps3_system_bus_device *dev)
static int ps3vram_notifier_wait(struct ps3_system_bus_device *dev,
unsigned int timeout_ms)
static void ps3vram_init_ring(struct ps3_system_bus_device *dev)
static int ps3vram_wait_ring(struct ps3_system_bus_device *dev,
unsigned int timeout_ms)
static void ps3vram_out_ring(struct ps3vram_priv *priv, u32 data)
static void ps3vram_begin_ring(struct ps3vram_priv *priv, u32 chan, u32 tag,
u32 size)
static void ps3vram_rewind_ring(struct ps3_system_bus_device *dev)
static void ps3vram_fire_ring(struct ps3_system_bus_device *dev)
static void ps3vram_bind(struct ps3_system_bus_device *dev)
static int ps3vram_upload(struct ps3_system_bus_device *dev,
unsigned int src_offset, unsigned int dst_offset,
int len, int count)
static int ps3vram_download(struct ps3_system_bus_device *dev,
unsigned int src_offset, unsigned int dst_offset,
int len, int count)
static void ps3vram_cache_evict(struct ps3_system_bus_device *dev, int entry)
static void ps3vram_cache_load(struct ps3_system_bus_device *dev, int entry,
unsigned int address)
static void ps3vram_cache_flush(struct ps3_system_bus_device *dev)
static unsigned int ps3vram_cache_match(struct ps3_system_bus_device *dev,
loff_t address)
static int ps3vram_cache_init(struct ps3_system_bus_device *dev)
static void ps3vram_cache_cleanup(struct ps3_system_bus_device *dev)
static int ps3vram_read(struct ps3_system_bus_device *dev, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int ps3vram_write(struct ps3_system_bus_device *dev, loff_t to,
size_t len, size_t *retlen, const u_char *buf)
static int ps3vram_proc_show(struct seq_file *m, void *v)
static int ps3vram_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ps3vram_proc_fops = ;
static void __devinit ps3vram_proc_init(struct ps3_system_bus_device *dev)
static struct bio *ps3vram_do_bio(struct ps3_system_bus_device *dev,
struct bio *bio)
static int ps3vram_make_request(struct request_queue *q, struct bio *bio)
static int __devinit ps3vram_probe(struct ps3_system_bus_device *dev)
static int ps3vram_remove(struct ps3_system_bus_device *dev)
static struct ps3_system_bus_driver ps3vram = ;
static int __init ps3vram_init(void)
static void __exit ps3vram_exit(void)
module_init(ps3vram_init);
module_exit(ps3vram_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PS3 Video RAM Storage Driver");
MODULE_AUTHOR("Sony Corporation");
MODULE_ALIAS(PS3_MODULE_ALIAS_GPU_RAMDISK);
