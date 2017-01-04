static struct nand_ecclayout flctl_4secc_oob_16 = ;
static struct nand_ecclayout flctl_4secc_oob_64 = ;
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr flctl_4secc_smallpage = ;
static struct nand_bbt_descr flctl_4secc_largepage = ;
static void empty_fifo(struct sh_flctl *flctl)
static void start_translation(struct sh_flctl *flctl)
static void timeout_error(struct sh_flctl *flctl, const char *str)
static void wait_completion(struct sh_flctl *flctl)
static void set_addr(struct mtd_info *mtd, int column, int page_addr)
static void wait_rfifo_ready(struct sh_flctl *flctl)
static void wait_wfifo_ready(struct sh_flctl *flctl)
static int wait_recfifo_ready(struct sh_flctl *flctl, int sector_number)
static void wait_wecfifo_ready(struct sh_flctl *flctl)
static void read_datareg(struct sh_flctl *flctl, int offset)
static void read_fiforeg(struct sh_flctl *flctl, int rlen, int offset)
static int read_ecfiforeg(struct sh_flctl *flctl, uint8_t *buff, int sector)
static void write_fiforeg(struct sh_flctl *flctl, int rlen, int offset)
static void set_cmd_regs(struct mtd_info *mtd, uint32_t cmd, uint32_t flcmcdr_val)
static int flctl_read_page_hwecc(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static void flctl_write_page_hwecc(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static void execmd_read_page_sector(struct mtd_info *mtd, int page_addr)
static void execmd_read_oob(struct mtd_info *mtd, int page_addr)
static void execmd_write_page_sector(struct mtd_info *mtd)
static void execmd_write_oob(struct mtd_info *mtd)
static void flctl_cmdfunc(struct mtd_info *mtd, unsigned int command,
int column, int page_addr)
static void flctl_select_chip(struct mtd_info *mtd, int chipnr)
static void flctl_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static uint8_t flctl_read_byte(struct mtd_info *mtd)
static uint16_t flctl_read_word(struct mtd_info *mtd)
static void flctl_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static int flctl_verify_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void flctl_register_init(struct sh_flctl *flctl, unsigned long val)
static int flctl_chip_init_tail(struct mtd_info *mtd)
static int __devinit flctl_probe(struct platform_device *pdev)
static int __devexit flctl_remove(struct platform_device *pdev)
static struct platform_driver flctl_driver = ;
static int __init flctl_nand_init(void)
static void __exit flctl_nand_cleanup(void)
module_init(flctl_nand_init);
module_exit(flctl_nand_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yoshihiro Shimoda");
MODULE_DESCRIPTION("SuperH FLCTL driver");
MODULE_ALIAS("platform:sh_flctl");
