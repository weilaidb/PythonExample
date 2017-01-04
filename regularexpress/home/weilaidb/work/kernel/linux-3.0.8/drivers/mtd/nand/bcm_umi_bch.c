static int bcm_umi_bch_read_page_hwecc(struct mtd_info *mtd,
struct nand_chip *chip, uint8_t *buf, int page);
static void bcm_umi_bch_write_page_hwecc(struct mtd_info *mtd,
struct nand_chip *chip, const uint8_t *buf);
static struct nand_ecclayout nand_hw_eccoob_512 = ;
static struct nand_ecclayout nand_hw_eccoob_2048 = ;
static struct nand_ecclayout nand_hw_eccoob_4096 = ;
static int bcm_umi_bch_read_page_hwecc(struct mtd_info *mtd,
struct nand_chip *chip, uint8_t * buf,
int page)
static void bcm_umi_bch_write_page_hwecc(struct mtd_info *mtd,
struct nand_chip *chip, const uint8_t *buf)
