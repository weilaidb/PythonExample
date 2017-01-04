static int block_size = 0;
module_param(block_size, int, 0);
MODULE_PARM_DESC(block_size, "Block size to use by RFD, defaults to erase unit size");
#define PREFIX "rfd_ftl: "
#define RFD_FTL_MAJOR		256
#define PART_BITS		4
#define RFD_MAGIC		0x9193
#define HEADER_MAP_OFFSET	3
#define SECTOR_DELETED		0x0000
#define SECTOR_ZERO		0xfffe
#define SECTOR_FREE		0xffff
#define SECTOR_SIZE		512
#define SECTORS_PER_TRACK	63
struct block ;
struct partition ;
static int rfd_ftl_writesect(struct mtd_blktrans_dev *dev, u_long sector, char *buf);
static int build_block_map(struct partition *part, int block_no)
static int scan_header(struct partition *part)
static int rfd_ftl_readsect(struct mtd_blktrans_dev *dev, u_long sector, char *buf)
static void erase_callback(struct erase_info *erase)
static int erase_block(struct partition *part, int block)
static int move_block_contents(struct partition *part, int block_no, u_long *old_sector)
static int reclaim_block(struct partition *part, u_long *old_sector)
static int find_free_block(struct partition *part)
static int find_writable_block(struct partition *part, u_long *old_sector)
static int mark_sector_deleted(struct partition *part, u_long old_addr)
static int find_free_sector(const struct partition *part, const struct block *block)
static int do_writesect(struct mtd_blktrans_dev *dev, u_long sector, char *buf, ulong *old_addr)
static int rfd_ftl_writesect(struct mtd_blktrans_dev *dev, u_long sector, char *buf)
static int rfd_ftl_getgeo(struct mtd_blktrans_dev *dev, struct hd_geometry *geo)
static void rfd_ftl_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void rfd_ftl_remove_dev(struct mtd_blktrans_dev *dev)
static struct mtd_blktrans_ops rfd_ftl_tr = ;
static int __init init_rfd_ftl(void)
static void __exit cleanup_rfd_ftl(void)
module_init(init_rfd_ftl);
module_exit(cleanup_rfd_ftl);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sean Young <sean@mess.org>");
MODULE_DESCRIPTION("Support code for RFD Flash Translation Layer, "
"used by General Software's Embedded BIOS");
