#define WINDOW_START 0xdc000
#define WINDOW_SHIFT 14
#define WINDOW_LENGTH (1 << WINDOW_SHIFT)
#define WINDOW_MASK (WINDOW_LENGTH-1)
#define PAGE_IO 0x258
#define PAGE_IO_SIZE 2
#define DEVICE_ENABLE 0x8000
#define MAX_SIZE_KiB             16384
#define BOOT_PARTITION_SIZE_KiB  768
#define DATA_PARTITION_SIZE_KiB  1280
#define APP_PARTITION_SIZE_KiB   6144
static volatile int page_in_window = -1;
static void __iomem *iomapadr;
static DEFINE_SPINLOCK(sbc_gxx_spin);
static struct mtd_partition partition_info[]=;
#define NUM_PARTITIONS 3
static inline void sbc_gxx_page(struct map_info *map, unsigned long ofs)
static map_word sbc_gxx_read8(struct map_info *map, unsigned long ofs)
static void sbc_gxx_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void sbc_gxx_write8(struct map_info *map, map_word d, unsigned long adr)
static void sbc_gxx_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
static struct map_info sbc_gxx_map = ;
static struct mtd_info *all_mtd;
static void cleanup_sbc_gxx(void)
static int __init init_sbc_gxx(void)
module_init(init_sbc_gxx);
module_exit(cleanup_sbc_gxx);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arcom Control Systems Ltd.");
MODULE_DESCRIPTION("MTD map driver for SBC-GXm and SBC-GX1 series boards");
