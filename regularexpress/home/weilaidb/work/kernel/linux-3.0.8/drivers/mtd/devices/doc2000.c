#define DOC_SUPPORT_2000
#define DOC_SUPPORT_2000TSOP
#define DOC_SUPPORT_MILLENNIUM
#define DoC_is_2000(doc) (doc->ChipID == DOC_ChipID_Doc2k)
#define DoC_is_2000(doc) (0)
#if defined(DOC_SUPPORT_2000TSOP) || defined(DOC_SUPPORT_MILLENNIUM)
#define DoC_is_Millennium(doc) (doc->ChipID == DOC_ChipID_DocMil)
#define DoC_is_Millennium(doc) (0)
static int doc_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf);
static int doc_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf);
static int doc_read_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops);
static int doc_write_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops);
static int doc_write_oob_nolock(struct mtd_info *mtd, loff_t ofs, size_t len,
size_t *retlen, const u_char *buf);
static int doc_erase (struct mtd_info *mtd, struct erase_info *instr);
static struct mtd_info *doc2klist = NULL;
static void DoC_Delay(struct DiskOnChip *doc, unsigned short cycles)
static int _DoC_WaitReady(struct DiskOnChip *doc)
static inline int DoC_WaitReady(struct DiskOnChip *doc)
static int DoC_Command(struct DiskOnChip *doc, unsigned char command,
unsigned char xtraflags)
static int DoC_Address(struct DiskOnChip *doc, int numbytes, unsigned long ofs,
unsigned char xtraflags1, unsigned char xtraflags2)
static void DoC_ReadBuf(struct DiskOnChip *doc, u_char * buf, int len)
static void DoC_WriteBuf(struct DiskOnChip *doc, const u_char * buf, int len)
static inline int DoC_SelectChip(struct DiskOnChip *doc, int chip)
static inline int DoC_SelectFloor(struct DiskOnChip *doc, int floor)
static int DoC_IdentChip(struct DiskOnChip *doc, int floor, int chip)
static void DoC_ScanChips(struct DiskOnChip *this, int maxchips)
static int DoC2k_is_alias(struct DiskOnChip *doc1, struct DiskOnChip *doc2)
void DoC2k_init(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(DoC2k_init);
static int doc_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t * retlen, u_char * buf)
static int doc_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t * retlen, const u_char * buf)
static int doc_read_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops)
static int doc_write_oob_nolock(struct mtd_info *mtd, loff_t ofs, size_t len,
size_t * retlen, const u_char * buf)
static int doc_write_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops)
static int doc_erase(struct mtd_info *mtd, struct erase_info *instr)
static void __exit cleanup_doc2000(void)
module_exit(cleanup_doc2000);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org> et al.");
MODULE_DESCRIPTION("MTD driver for DiskOnChip 2000 and Millennium");
