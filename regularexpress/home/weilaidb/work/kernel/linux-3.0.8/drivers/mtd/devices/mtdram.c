static unsigned long total_size = CONFIG_MTDRAM_TOTAL_SIZE;
static unsigned long erase_size = CONFIG_MTDRAM_ERASE_SIZE;
#define MTDRAM_TOTAL_SIZE (total_size * 1024)
#define MTDRAM_ERASE_SIZE (erase_size * 1024)
module_param(total_size, ulong, 0);
MODULE_PARM_DESC(total_size, "Total device size in KiB");
module_param(erase_size, ulong, 0);
MODULE_PARM_DESC(erase_size, "Device erase block size in KiB");
static struct mtd_info *mtd_info;
static int ram_erase(struct mtd_info *mtd, struct erase_info *instr)
static int ram_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static void ram_unpoint(struct mtd_info *mtd, loff_t from, size_t len)
static unsigned long ram_get_unmapped_area(struct mtd_info *mtd,
unsigned long len,
unsigned long offset,
unsigned long flags)
static int ram_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int ram_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static void __exit cleanup_mtdram(void)
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
unsigned long size, char *name)
static int __init init_mtdram(void)
module_init(init_mtdram);
module_exit(cleanup_mtdram);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexander Larsson <alexl@redhat.com>");
MODULE_DESCRIPTION("Simulated MTD driver for testing");
