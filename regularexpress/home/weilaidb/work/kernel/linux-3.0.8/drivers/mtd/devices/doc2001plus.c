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
static struct mtd_info *docmilpluslist = NULL;
static void DoC_Delay(void __iomem * docptr, int cycles)
#define	CDSN_CTRL_FR_B_MASK	(CDSN_CTRL_FR_B0 | CDSN_CTRL_FR_B1)
static int _DoC_WaitReady(void __iomem * docptr)
static inline int DoC_WaitReady(void __iomem * docptr)
static inline void DoC_CheckASIC(void __iomem * docptr)
static void DoC_Command(void __iomem * docptr, unsigned char command,
unsigned char xtraflags)
static inline void DoC_Address(struct DiskOnChip *doc, int numbytes,
unsigned long ofs, unsigned char xtraflags1,
unsigned char xtraflags2)
static int DoC_SelectChip(void __iomem * docptr, int chip)
static int DoC_SelectFloor(void __iomem * docptr, int floor)
static unsigned int DoC_GetDataOffset(struct mtd_info *mtd, loff_t *from)
static unsigned int DoC_GetECCOffset(struct mtd_info *mtd, loff_t *from)
static unsigned int DoC_GetFlagsOffset(struct mtd_info *mtd, loff_t *from)
static unsigned int DoC_GetHdrOffset(struct mtd_info *mtd, loff_t *from)
static inline void MemReadDOC(void __iomem * docptr, unsigned char *buf, int len)
static inline void MemWriteDOC(void __iomem * docptr, unsigned char *buf, int len)
static int DoC_IdentChip(struct DiskOnChip *doc, int floor, int chip)
static void DoC_ScanChips(struct DiskOnChip *this)
static int DoCMilPlus_is_alias(struct DiskOnChip *doc1, struct DiskOnChip *doc2)
void DoCMilPlus_init(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(DoCMilPlus_init);
static int doc_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int doc_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int doc_read_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops)
static int doc_write_oob(struct mtd_info *mtd, loff_t ofs,
struct mtd_oob_ops *ops)
int doc_erase(struct mtd_info *mtd, struct erase_info *instr)
static void __exit cleanup_doc2001plus(void)
module_exit(cleanup_doc2001plus);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Ungerer <gerg@snapgear.com> et al.");
MODULE_DESCRIPTION("Driver for DiskOnChip Millennium Plus");
