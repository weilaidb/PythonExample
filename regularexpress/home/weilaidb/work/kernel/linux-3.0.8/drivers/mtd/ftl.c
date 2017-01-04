static int shuffle_freq = 50;
module_param(shuffle_freq, int, 0);
#define FTL_MAJOR	44
#define MAX_DEV		4
#define MAX_REGION	4
#define PART_BITS	4
#define MAX_ERASE	8
#define SECTOR_SIZE	512
typedef struct partition_t  partition_t;
#define FTL_FORMATTED	0x01
#define XFER_UNKNOWN	0x00
#define XFER_ERASING	0x01
#define XFER_ERASED	0x02
#define XFER_PREPARED	0x03
#define XFER_FAILED	0x04
static void ftl_erase_callback(struct erase_info *done);
static int scan_header(partition_t *part)
static int build_maps(partition_t *part)
static int erase_xfer(partition_t *part,
uint16_t xfernum)
static void ftl_erase_callback(struct erase_info *erase)
static int prepare_xfer(partition_t *part, int i)
static int copy_erase_unit(partition_t *part, uint16_t srcunit,
uint16_t xferunit)
static int reclaim_block(partition_t *part)
static void dump_lists(partition_t *part)
static uint32_t find_free(partition_t *part)
static int ftl_read(partition_t *part, caddr_t buffer,
u_long sector, u_long nblocks)
static int set_bam_entry(partition_t *part, uint32_t log_addr,
uint32_t virt_addr)
static int ftl_write(partition_t *part, caddr_t buffer,
u_long sector, u_long nblocks)
static int ftl_getgeo(struct mtd_blktrans_dev *dev, struct hd_geometry *geo)
static int ftl_readsect(struct mtd_blktrans_dev *dev,
unsigned long block, char *buf)
static int ftl_writesect(struct mtd_blktrans_dev *dev,
unsigned long block, char *buf)
static int ftl_discardsect(struct mtd_blktrans_dev *dev,
unsigned long sector, unsigned nr_sects)
static void ftl_freepart(partition_t *part)
static void ftl_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void ftl_remove_dev(struct mtd_blktrans_dev *dev)
static struct mtd_blktrans_ops ftl_tr = ;
static int __init init_ftl(void)
static void __exit cleanup_ftl(void)
module_init(init_ftl);
module_exit(cleanup_ftl);
MODULE_LICENSE("Dual MPL/GPL");
MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("Support code for Flash Translation Layer, used on PCMCIA devices");
