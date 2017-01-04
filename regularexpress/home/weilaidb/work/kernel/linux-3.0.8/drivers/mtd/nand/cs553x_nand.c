#define NR_CS553X_CONTROLLERS	4
#define MSR_DIVIL_GLD_CAP	0x51400000
#define CAP_CS5535		0x2df000ULL
#define CAP_CS5536		0x5df500ULL
#define MSR_NANDF_DATA		0x5140001b
#define MSR_NANDF_CTL		0x5140001c
#define MSR_NANDF_RSVD		0x5140001d
#define MSR_DIVIL_LBAR_FLSH0	0x51400010
#define MSR_DIVIL_LBAR_FLSH1	0x51400011
#define MSR_DIVIL_LBAR_FLSH2	0x51400012
#define MSR_DIVIL_LBAR_FLSH3	0x51400013
#define FLSH_LBAR_EN		(1ULL<<32)
#define FLSH_NOR_NAND		(1ULL<<33)
#define FLSH_MEM_IO		(1ULL<<34)
#define MSR_DIVIL_BALL_OPTS	0x51400015
#define PIN_OPT_IDE		(1<<0)
#define MM_NAND_DATA		0x00
#define MM_NAND_CTL		0x800
#define MM_NAND_IO		0x801
#define MM_NAND_STS		0x810
#define MM_NAND_ECC_LSB		0x811
#define MM_NAND_ECC_MSB		0x812
#define MM_NAND_ECC_COL		0x813
#define MM_NAND_LAC		0x814
#define MM_NAND_ECC_CTL		0x815
#define IO_NAND_DATA		0x00
#define IO_NAND_CTL		0x04
#define IO_NAND_IO		0x05
#define IO_NAND_STS		0x06
#define IO_NAND_ECC_CTL		0x08
#define IO_NAND_ECC_LSB		0x09
#define IO_NAND_ECC_MSB		0x0a
#define IO_NAND_ECC_COL		0x0b
#define IO_NAND_LAC		0x0c
#define CS_NAND_CTL_DIST_EN	(1<<4)
#define CS_NAND_CTL_RDY_INT_MASK	(1<<3)
#define CS_NAND_CTL_ALE		(1<<2)
#define CS_NAND_CTL_CLE		(1<<1)
#define CS_NAND_CTL_CE		(1<<0)
#define CS_NAND_STS_FLASH_RDY	(1<<3)
#define CS_NAND_CTLR_BUSY	(1<<2)
#define CS_NAND_CMD_COMP	(1<<1)
#define CS_NAND_DIST_ST		(1<<0)
#define CS_NAND_ECC_PARITY	(1<<2)
#define CS_NAND_ECC_CLRECC	(1<<1)
#define CS_NAND_ECC_ENECC	(1<<0)
static void cs553x_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static void cs553x_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static unsigned char cs553x_read_byte(struct mtd_info *mtd)
static void cs553x_write_byte(struct mtd_info *mtd, u_char byte)
static void cs553x_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int cs553x_device_ready(struct mtd_info *mtd)
static void cs_enable_hwecc(struct mtd_info *mtd, int mode)
static int cs_calculate_ecc(struct mtd_info *mtd, const u_char *dat, u_char *ecc_code)
static struct mtd_info *cs553x_mtd[4];
static int __init cs553x_init_one(int cs, int mmio, unsigned long adr)
static int is_geode(void)
static const char *part_probes[] = ;
static int __init cs553x_init(void)
module_init(cs553x_init);
static void __exit cs553x_cleanup(void)
module_exit(cs553x_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("NAND controller driver for AMD CS5535/CS5536 companion chip");
