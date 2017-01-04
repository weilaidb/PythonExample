#define FPGA_NAND_CMD_MASK		(0x7 << 28)
#define FPGA_NAND_CMD_COMMAND		(0x0 << 28)
#define FPGA_NAND_CMD_ADDR		(0x1 << 28)
#define FPGA_NAND_CMD_READ		(0x2 << 28)
#define FPGA_NAND_CMD_WRITE		(0x3 << 28)
#define FPGA_NAND_BUSY			(0x1 << 15)
#define FPGA_NAND_ENABLE		(0x1 << 31)
#define FPGA_NAND_DATA_SHIFT		16
struct socrates_nand_host ;
static void socrates_nand_write_buf(struct mtd_info *mtd,
const uint8_t *buf, int len)
static void socrates_nand_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static uint8_t socrates_nand_read_byte(struct mtd_info *mtd)
static uint16_t socrates_nand_read_word(struct mtd_info *mtd)
static int socrates_nand_verify_buf(struct mtd_info *mtd, const u8 *buf,
int len)
static void socrates_nand_cmd_ctrl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int socrates_nand_device_ready(struct mtd_info *mtd)
static const char *part_probes[] = ;
static int __devinit socrates_nand_probe(struct platform_device *ofdev)
static int __devexit socrates_nand_remove(struct platform_device *ofdev)
static const struct of_device_id socrates_nand_match[] =
;
MODULE_DEVICE_TABLE(of, socrates_nand_match);
static struct platform_driver socrates_nand_driver = ;
static int __init socrates_nand_init(void)
static void __exit socrates_nand_exit(void)
module_init(socrates_nand_init);
module_exit(socrates_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ilya Yanok");
MODULE_DESCRIPTION("NAND driver for Socrates board");
