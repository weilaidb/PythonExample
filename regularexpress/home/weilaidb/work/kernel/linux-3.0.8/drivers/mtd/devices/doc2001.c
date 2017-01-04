#undef USE_MEMCPY
static int doc_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf);
static int doc_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf);
static int doc_read_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops);
static int doc_write_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops);
static int doc_erase (struct mtd_info *mtd, struct erase_info *instr);
static struct mtd_info *docmillist = NULL;
static void DoC_Delay(void __iomem * docptr, unsigned short cycles)
static int _DoC_WaitReady(void __iomem * docptr)
static inline int DoC_WaitReady(void __iomem * docptr)
static void DoC_Command(void __iomem * docptr, unsigned char command,
unsigned char xtraflags)
static inline void DoC_Address(void __iomem * docptr, int numbytes, unsigned long ofs,
unsigned char xtraflags1, unsigned char xtraflags2)
static int DoC_SelectChip(void __iomem * docptr, int chip)
static int DoC_SelectFloor(void __iomem * docptr, int floor)
static int DoC_IdentChip(struct DiskOnChip *doc, int floor, int chip)
static void DoC_ScanChips(struct DiskOnChip *this)
static int DoCMil_is_alias(struct DiskOnChip *doc1, struct DiskOnChip *doc2)
void DoCMil_init(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(DoCMil_init);
static int doc_read (struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int doc_write (struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int doc_read_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops)
static int doc_write_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops)
int doc_erase (struct mtd_info *mtd, struct erase_info *instr)
static void __exit cleanup_doc2001(void)
module_exit(cleanup_doc2001);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org> et al.");
MODULE_DESCRIPTION("Alternative driver for DiskOnChip Millennium");
