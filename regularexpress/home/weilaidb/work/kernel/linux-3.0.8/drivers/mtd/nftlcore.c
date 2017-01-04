#define PRERELEASE
#define MAX_LOOPS 10000
static void nftl_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void nftl_remove_dev(struct mtd_blktrans_dev *dev)
int nftl_read_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf)
int nftl_write_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf)
static int nftl_write(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf, uint8_t *oob)
static u16 NFTL_findfreeblock(struct NFTLrecord *nftl, int desperate )
static u16 NFTL_foldchain (struct NFTLrecord *nftl, unsigned thisVUC, unsigned pendingblock )
static u16 NFTL_makefreeblock( struct NFTLrecord *nftl , unsigned pendingblock)
static inline u16 NFTL_findwriteunit(struct NFTLrecord *nftl, unsigned block)
static int nftl_writeblock(struct mtd_blktrans_dev *mbd, unsigned long block,
char *buffer)
static int nftl_readblock(struct mtd_blktrans_dev *mbd, unsigned long block,
char *buffer)
static int nftl_getgeo(struct mtd_blktrans_dev *dev,  struct hd_geometry *geo)
static struct mtd_blktrans_ops nftl_tr = ;
static int __init init_nftl(void)
static void __exit cleanup_nftl(void)
module_init(init_nftl);
module_exit(cleanup_nftl);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>, Fabrice Bellard <fabrice.bellard@netgem.com> et al.");
MODULE_DESCRIPTION("Support code for NAND Flash Translation Layer, used on M-Systems DiskOnChip 2000 and Millennium");
MODULE_ALIAS_BLOCKDEV_MAJOR(NFTL_MAJOR);
