#define DEBUG
#undef DEBUG
#define CAFE_NAND_CTRL1		0x00
#define CAFE_NAND_CTRL2		0x04
#define CAFE_NAND_CTRL3		0x08
#define CAFE_NAND_STATUS	0x0c
#define CAFE_NAND_IRQ		0x10
#define CAFE_NAND_IRQ_MASK	0x14
#define CAFE_NAND_DATA_LEN	0x18
#define CAFE_NAND_ADDR1		0x1c
#define CAFE_NAND_ADDR2		0x20
#define CAFE_NAND_TIMING1	0x24
#define CAFE_NAND_TIMING2	0x28
#define CAFE_NAND_TIMING3	0x2c
#define CAFE_NAND_NONMEM	0x30
#define CAFE_NAND_ECC_RESULT	0x3C
#define CAFE_NAND_DMA_CTRL	0x40
#define CAFE_NAND_DMA_ADDR0	0x44
#define CAFE_NAND_DMA_ADDR1	0x48
#define CAFE_NAND_ECC_SYN01	0x50
#define CAFE_NAND_ECC_SYN23	0x54
#define CAFE_NAND_ECC_SYN45	0x58
#define CAFE_NAND_ECC_SYN67	0x5c
#define CAFE_NAND_READ_DATA	0x1000
#define CAFE_NAND_WRITE_DATA	0x2000
#define CAFE_GLOBAL_CTRL	0x3004
#define CAFE_GLOBAL_IRQ		0x3008
#define CAFE_GLOBAL_IRQ_MASK	0x300c
#define CAFE_NAND_RESET		0x3034
#define CTRL1_CHIPSELECT	(1<<19)
struct cafe_priv ;
static int usedma = 1;
module_param(usedma, int, 0644);
static int skipbbt = 0;
module_param(skipbbt, int, 0644);
static int debug = 0;
module_param(debug, int, 0644);
static int regdebug = 0;
module_param(regdebug, int, 0644);
static int checkecc = 1;
module_param(checkecc, int, 0644);
static unsigned int numtimings;
static int timing[3];
module_param_array(timing, int, &numtimings, 0644);
static const char *part_probes[] = ;
#define cafe_dev_dbg(dev, args...) do  while(0)
#define cafe_readl(cafe, addr)			readl((cafe)->mmio + CAFE_##addr)
#define cafe_writel(cafe, datum, addr)		writel(datum, (cafe)->mmio + CAFE_##addr)
static int cafe_device_ready(struct mtd_info *mtd)
static void cafe_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static void cafe_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static uint8_t cafe_read_byte(struct mtd_info *mtd)
static void cafe_nand_cmdfunc(struct mtd_info *mtd, unsigned command,
int column, int page_addr)
static void cafe_select_chip(struct mtd_info *mtd, int chipnr)
static irqreturn_t cafe_nand_interrupt(int irq, void *id)
static void cafe_nand_bug(struct mtd_info *mtd)
static int cafe_nand_write_oob(struct mtd_info *mtd,
struct nand_chip *chip, int page)
static int cafe_nand_read_oob(struct mtd_info *mtd, struct nand_chip *chip,
int page, int sndcmd)
static int cafe_nand_read_page(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static struct nand_ecclayout cafe_oobinfo_2048 = ;
static uint8_t cafe_bbt_pattern_2048[] = ;
static uint8_t cafe_mirror_pattern_2048[] = ;
static uint8_t cafe_bbt_pattern_512[] = ;
static uint8_t cafe_mirror_pattern_512[] = ;
static struct nand_bbt_descr cafe_bbt_main_descr_2048 = ;
static struct nand_bbt_descr cafe_bbt_mirror_descr_2048 = ;
static struct nand_ecclayout cafe_oobinfo_512 = ;
static struct nand_bbt_descr cafe_bbt_main_descr_512 = ;
static struct nand_bbt_descr cafe_bbt_mirror_descr_512 = ;
static void cafe_nand_write_page_lowlevel(struct mtd_info *mtd,
struct nand_chip *chip, const uint8_t *buf)
static int cafe_nand_write_page(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf, int page, int cached, int raw)
static int cafe_nand_block_bad(struct mtd_info *mtd, loff_t ofs, int getchip)
static unsigned short __devinit gf64_mul(u8 a, u8 b)
static u16 __devinit gf4096_mul(u16 a, u16 b)
static int __devinit cafe_mul(int x)
static int __devinit cafe_nand_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit cafe_nand_remove(struct pci_dev *pdev)
static const struct pci_device_id cafe_nand_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cafe_nand_tbl);
static int cafe_nand_resume(struct pci_dev *pdev)
static struct pci_driver cafe_nand_pci_driver = ;
static int __init cafe_nand_init(void)
static void __exit cafe_nand_exit(void)
module_init(cafe_nand_init);
module_exit(cafe_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("NAND flash driver for OLPC CAFÉ chip");
