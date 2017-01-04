#define REG_FMICSR   	0x00
#define REG_SMCSR    	0xa0
#define REG_SMISR    	0xac
#define REG_SMCMD    	0xb0
#define REG_SMADDR   	0xb4
#define REG_SMDATA   	0xb8
#define RESET_FMI	0x01
#define NAND_EN		0x08
#define READYBUSY	(0x01 << 18)
#define SWRST		0x01
#define PSIZE		(0x01 << 3)
#define DMARWEN		(0x03 << 1)
#define BUSWID		(0x01 << 4)
#define ECC4EN		(0x01 << 5)
#define WP		(0x01 << 24)
#define NANDCS		(0x01 << 25)
#define ENDADDR		(0x01 << 31)
#define read_data_reg(dev)		\
__raw_readl((dev)->reg + REG_SMDATA)
#define write_data_reg(dev, val)	\
__raw_writel((val), (dev)->reg + REG_SMDATA)
#define write_cmd_reg(dev, val)		\
__raw_writel((val), (dev)->reg + REG_SMCMD)
#define write_addr_reg(dev, val)	\
__raw_writel((val), (dev)->reg + REG_SMADDR)
struct nuc900_nand ;
static const struct mtd_partition partitions[] = ;
static unsigned char nuc900_nand_read_byte(struct mtd_info *mtd)
static void nuc900_nand_read_buf(struct mtd_info *mtd,
unsigned char *buf, int len)
static void nuc900_nand_write_buf(struct mtd_info *mtd,
const unsigned char *buf, int len)
static int nuc900_verify_buf(struct mtd_info *mtd,
const unsigned char *buf, int len)
static int nuc900_check_rb(struct nuc900_nand *nand)
static int nuc900_nand_devready(struct mtd_info *mtd)
static void nuc900_nand_command_lp(struct mtd_info *mtd, unsigned int command,
int column, int page_addr)
static void nuc900_nand_enable(struct nuc900_nand *nand)
static int __devinit nuc900_nand_probe(struct platform_device *pdev)
static int __devexit nuc900_nand_remove(struct platform_device *pdev)
static struct platform_driver nuc900_nand_driver = ;
static int __init nuc900_nand_init(void)
static void __exit nuc900_nand_exit(void)
module_init(nuc900_nand_init);
module_exit(nuc900_nand_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("w90p910/NUC9xx nand driver!");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-fmi");
