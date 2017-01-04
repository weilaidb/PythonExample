#define MAX_LOOPS 10000
static void inftl_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void inftl_remove_dev(struct mtd_blktrans_dev *dev)
int inftl_read_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf)
int inftl_write_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf)
static int inftl_write(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf, uint8_t *oob)
static u16 INFTL_findfreeblock(struct INFTLrecord *inftl, int desperate)
static u16 INFTL_foldchain(struct INFTLrecord *inftl, unsigned thisVUC, unsigned pendingblock)
static u16 INFTL_makefreeblock(struct INFTLrecord *inftl, unsigned pendingblock)
static int nrbits(unsigned int val, int bitcount)
static inline u16 INFTL_findwriteunit(struct INFTLrecord *inftl, unsigned block)
static void INFTL_trydeletechain(struct INFTLrecord *inftl, unsigned thisVUC)
static int INFTL_deleteblock(struct INFTLrecord *inftl, unsigned block)
static int inftl_writeblock(struct mtd_blktrans_dev *mbd, unsigned long block,
char *buffer)
static int inftl_readblock(struct mtd_blktrans_dev *mbd, unsigned long block,
char *buffer)
static int inftl_getgeo(struct mtd_blktrans_dev *dev, struct hd_geometry *geo)
static struct mtd_blktrans_ops inftl_tr = ;
static int __init init_inftl(void)
static void __exit cleanup_inftl(void)
module_init(init_inftl);
module_exit(cleanup_inftl);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Ungerer <gerg@snapgear.com>, David Woodhouse <dwmw2@infradead.org>, Fabrice Bellard <fabrice.bellard@netgem.com> et al.");
MODULE_DESCRIPTION("Support code for Inverse Flash Translation Layer, used on M-Systems DiskOnChip 2000, Millennium and Millennium Plus");
