#define JZ_REG_NAND_CTRL	0x50
#define JZ_REG_NAND_ECC_CTRL	0x100
#define JZ_REG_NAND_DATA	0x104
#define JZ_REG_NAND_PAR0	0x108
#define JZ_REG_NAND_PAR1	0x10C
#define JZ_REG_NAND_PAR2	0x110
#define JZ_REG_NAND_IRQ_STAT	0x114
#define JZ_REG_NAND_IRQ_CTRL	0x118
#define JZ_REG_NAND_ERR(x)	(0x11C + ((x) << 2))
#define JZ_NAND_ECC_CTRL_PAR_READY	BIT(4)
#define JZ_NAND_ECC_CTRL_ENCODING	BIT(3)
#define JZ_NAND_ECC_CTRL_RS		BIT(2)
#define JZ_NAND_ECC_CTRL_RESET		BIT(1)
#define JZ_NAND_ECC_CTRL_ENABLE		BIT(0)
#define JZ_NAND_STATUS_ERR_COUNT	(BIT(31) | BIT(30) | BIT(29))
#define JZ_NAND_STATUS_PAD_FINISH	BIT(4)
#define JZ_NAND_STATUS_DEC_FINISH	BIT(3)
#define JZ_NAND_STATUS_ENC_FINISH	BIT(2)
#define JZ_NAND_STATUS_UNCOR_ERROR	BIT(1)
#define JZ_NAND_STATUS_ERROR		BIT(0)
#define JZ_NAND_CTRL_ENABLE_CHIP(x) BIT((x) << 1)
#define JZ_NAND_CTRL_ASSERT_CHIP(x) BIT(((x) << 1) + 1)
#define JZ_NAND_MEM_ADDR_OFFSET 0x10000
#define JZ_NAND_MEM_CMD_OFFSET 0x08000
struct jz_nand ;
static inline struct jz_nand *mtd_to_jz_nand(struct mtd_info *mtd)
static void jz_nand_cmd_ctrl(struct mtd_info *mtd, int dat, unsigned int ctrl)
static int jz_nand_dev_ready(struct mtd_info *mtd)
static void jz_nand_hwctl(struct mtd_info *mtd, int mode)
static int jz_nand_calculate_ecc_rs(struct mtd_info *mtd, const uint8_t *dat,
uint8_t *ecc_code)
static void jz_nand_correct_data(uint8_t *dat, int index, int mask)
static int jz_nand_correct_ecc_rs(struct mtd_info *mtd, uint8_t *dat,
uint8_t *read_ecc, uint8_t *calc_ecc)
static const char *part_probes[] = ;
static int jz_nand_ioremap_resource(struct platform_device *pdev,
const char *name, struct resource **res, void __iomem **base)
static int __devinit jz_nand_probe(struct platform_device *pdev)
static int __devexit jz_nand_remove(struct platform_device *pdev)
static struct platform_driver jz_nand_driver = ;
static int __init jz_nand_init(void)
module_init(jz_nand_init);
static void __exit jz_nand_exit(void)
module_exit(jz_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("NAND controller driver for JZ4740 SoC");
MODULE_ALIAS("platform:jz4740-nand");
