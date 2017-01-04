static struct mtd_info *au1550_mtd = NULL;
static void __iomem *p_nand;
static int nand_width = 1;
static void (*au1550_write_byte)(struct mtd_info *, u_char);
static const struct mtd_partition partition_info[] = ;
static u_char au_read_byte(struct mtd_info *mtd)
static void au_write_byte(struct mtd_info *mtd, u_char byte)
static u_char au_read_byte16(struct mtd_info *mtd)
static void au_write_byte16(struct mtd_info *mtd, u_char byte)
static u16 au_read_word(struct mtd_info *mtd)
static void au_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void au_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static int au_verify_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void au_write_buf16(struct mtd_info *mtd, const u_char *buf, int len)
static void au_read_buf16(struct mtd_info *mtd, u_char *buf, int len)
static int au_verify_buf16(struct mtd_info *mtd, const u_char *buf, int len)
#define NAND_CTL_SETNCE		1
#define NAND_CTL_CLRNCE		2
#define NAND_CTL_SETCLE		3
#define NAND_CTL_CLRCLE		4
#define NAND_CTL_SETALE		5
#define NAND_CTL_CLRALE		6
static void au1550_hwcontrol(struct mtd_info *mtd, int cmd)
int au1550_device_ready(struct mtd_info *mtd)
static void au1550_select_chip(struct mtd_info *mtd, int chip)
static void au1550_command(struct mtd_info *mtd, unsigned command, int column, int page_addr)
static int __init au1xxx_nand_init(void)
module_init(au1xxx_nand_init);
static void __exit au1550_cleanup(void)
module_exit(au1550_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Embedded Edge, LLC");
MODULE_DESCRIPTION("Board-specific glue layer for NAND flash on Pb1550 board");
