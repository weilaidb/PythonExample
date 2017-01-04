struct ssfdcr_record ;
#define SSFDCR_MAJOR		257
#define SSFDCR_PARTN_BITS	3
#define SECTOR_SIZE		512
#define SECTOR_SHIFT		9
#define OOB_SIZE		16
#define MAX_LOGIC_BLK_PER_ZONE	1000
#define MAX_PHYS_BLK_PER_ZONE	1024
#define KiB(x)	( (x) * 1024L )
#define MiB(x)	( KiB(x) * 1024L )
typedef struct  chs_entry_t;
static const chs_entry_t chs_table[] = ;
static int get_chs(unsigned long size, unsigned short *cyl, unsigned char *head,
unsigned char *sec)
static const uint8_t cis_numbers[] = ;
static int get_valid_cis_sector(struct mtd_info *mtd)
static int read_physical_sector(struct mtd_info *mtd, uint8_t *sect_buf,
int sect_no)
static int read_raw_oob(struct mtd_info *mtd, loff_t offs, uint8_t *buf)
static int get_parity(int number, int size)
static int get_logical_address(uint8_t *oob_buf)
static int build_logical_block_map(struct ssfdcr_record *ssfdc)
static void ssfdcr_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void ssfdcr_remove_dev(struct mtd_blktrans_dev *dev)
static int ssfdcr_readsect(struct mtd_blktrans_dev *dev,
unsigned long logic_sect_no, char *buf)
static int ssfdcr_getgeo(struct mtd_blktrans_dev *dev,  struct hd_geometry *geo)
static struct mtd_blktrans_ops ssfdcr_tr = ;
static int __init init_ssfdcr(void)
static void __exit cleanup_ssfdcr(void)
module_init(init_ssfdcr);
module_exit(cleanup_ssfdcr);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Claudio Lanconelli <lanconelli.claudio@eptar.com>");
MODULE_DESCRIPTION("Flash Translation Layer for read-only SSFDC SmartMedia card");
