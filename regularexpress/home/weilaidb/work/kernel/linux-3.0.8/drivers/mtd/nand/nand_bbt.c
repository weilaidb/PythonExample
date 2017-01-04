static int check_pattern_no_oob(uint8_t *buf, struct nand_bbt_descr *td)
static int check_pattern(uint8_t *buf, int len, int paglen, struct nand_bbt_descr *td)
static int check_short_pattern(uint8_t *buf, struct nand_bbt_descr *td)
static u32 add_marker_len(struct nand_bbt_descr *td)
static int read_bbt(struct mtd_info *mtd, uint8_t *buf, int page, int num,
struct nand_bbt_descr *td, int offs)
static int read_abs_bbt(struct mtd_info *mtd, uint8_t *buf, struct nand_bbt_descr *td, int chip)
static int scan_read_raw_data(struct mtd_info *mtd, uint8_t *buf, loff_t offs,
struct nand_bbt_descr *td)
static int scan_read_raw_oob(struct mtd_info *mtd, uint8_t *buf, loff_t offs,
size_t len)
static int scan_read_raw(struct mtd_info *mtd, uint8_t *buf, loff_t offs,
size_t len, struct nand_bbt_descr *td)
static int scan_write_bbt(struct mtd_info *mtd, loff_t offs, size_t len,
uint8_t *buf, uint8_t *oob)
static u32 bbt_get_ver_offs(struct mtd_info *mtd, struct nand_bbt_descr *td)
static int read_abs_bbts(struct mtd_info *mtd, uint8_t *buf,
struct nand_bbt_descr *td, struct nand_bbt_descr *md)
static int scan_block_full(struct mtd_info *mtd, struct nand_bbt_descr *bd,
loff_t offs, uint8_t *buf, size_t readlen,
int scanlen, int len)
static int scan_block_fast(struct mtd_info *mtd, struct nand_bbt_descr *bd,
loff_t offs, uint8_t *buf, int len)
static int create_bbt(struct mtd_info *mtd, uint8_t *buf,
struct nand_bbt_descr *bd, int chip)
static int search_bbt(struct mtd_info *mtd, uint8_t *buf, struct nand_bbt_descr *td)
static int search_read_bbts(struct mtd_info *mtd, uint8_t * buf, struct nand_bbt_descr *td, struct nand_bbt_descr *md)
static int write_bbt(struct mtd_info *mtd, uint8_t *buf,
struct nand_bbt_descr *td, struct nand_bbt_descr *md,
int chipsel)
static inline int nand_memory_bbt(struct mtd_info *mtd, struct nand_bbt_descr *bd)
static int check_create(struct mtd_info *mtd, uint8_t *buf, struct nand_bbt_descr *bd)
static void mark_bbt_region(struct mtd_info *mtd, struct nand_bbt_descr *td)
static void verify_bbt_descr(struct mtd_info *mtd, struct nand_bbt_descr *bd)
int nand_scan_bbt(struct mtd_info *mtd, struct nand_bbt_descr *bd)
int nand_update_bbt(struct mtd_info *mtd, loff_t offs)
static uint8_t scan_ff_pattern[] = ;
static uint8_t scan_agand_pattern[] = ;
static struct nand_bbt_descr agand_flashbased = ;
static uint8_t bbt_pattern[] = ;
static uint8_t mirror_pattern[] = ;
static struct nand_bbt_descr bbt_main_descr = ;
static struct nand_bbt_descr bbt_mirror_descr = ;
static struct nand_bbt_descr bbt_main_no_bbt_descr = ;
static struct nand_bbt_descr bbt_mirror_no_bbt_descr = ;
#define BBT_SCAN_OPTIONS (NAND_BBT_SCANLASTPAGE | NAND_BBT_SCAN2NDPAGE | \
NAND_BBT_SCANBYTE1AND6)
static int nand_create_default_bbt_descr(struct nand_chip *this)
int nand_default_bbt(struct mtd_info *mtd)
int nand_isbad_bbt(struct mtd_info *mtd, loff_t offs, int allowbbt)
EXPORT_SYMBOL(nand_scan_bbt);
EXPORT_SYMBOL(nand_default_bbt);
