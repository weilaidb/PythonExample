#define FSL_UPM_WAIT_RUN_PATTERN  0x1
#define FSL_UPM_WAIT_WRITE_BYTE   0x2
#define FSL_UPM_WAIT_WRITE_BUFFER 0x4
struct fsl_upm_nand ;
static inline struct fsl_upm_nand *to_fsl_upm_nand(struct mtd_info *mtdinfo)
static int fun_chip_ready(struct mtd_info *mtd)
static void fun_wait_rnb(struct fsl_upm_nand *fun)
static void fun_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static void fun_select_chip(struct mtd_info *mtd, int mchip_nr)
static uint8_t fun_read_byte(struct mtd_info *mtd)
static void fun_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static void fun_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static int __devinit fun_chip_init(struct fsl_upm_nand *fun,
const struct device_node *upm_np,
const struct resource *io_res)
static int __devinit fun_probe(struct platform_device *ofdev)
static int __devexit fun_remove(struct platform_device *ofdev)
static const struct of_device_id of_fun_match[] = ;
MODULE_DEVICE_TABLE(of, of_fun_match);
static struct platform_driver of_fun_driver = ;
static int __init fun_module_init(void)
module_init(fun_module_init);
static void __exit fun_module_exit(void)
module_exit(fun_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anton Vorontsov <avorontsov@ru.mvista.com>");
MODULE_DESCRIPTION("Driver for NAND chips working through Freescale "
"LocalBus User-Programmable Machine");
