static int check_short_pattern(uint8_t *buf, int len, int paglen, struct nand_bbt_descr *td)
static int create_bbt(struct mtd_info *mtd, uint8_t *buf, struct nand_bbt_descr *bd, int chip)
static inline int onenand_memory_bbt (struct mtd_info *mtd, struct nand_bbt_descr *bd)
static int onenand_isbad_bbt(struct mtd_info *mtd, loff_t offs, int allowbbt)
int onenand_scan_bbt(struct mtd_info *mtd, struct nand_bbt_descr *bd)
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr largepage_memorybased = ;
int onenand_default_bbt(struct mtd_info *mtd)
EXPORT_SYMBOL(onenand_scan_bbt);
EXPORT_SYMBOL(onenand_default_bbt);
