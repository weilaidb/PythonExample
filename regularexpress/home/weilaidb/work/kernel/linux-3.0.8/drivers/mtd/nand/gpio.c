struct gpiomtd ;
#define gpio_nand_getpriv(x) container_of(x, struct gpiomtd, mtd_info)
static void gpio_nand_dosync(struct gpiomtd *gpiomtd)
static inline void gpio_nand_dosync(struct gpiomtd *gpiomtd)
static void gpio_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static void gpio_nand_writebuf(struct mtd_info *mtd, const u_char *buf, int len)
static void gpio_nand_readbuf(struct mtd_info *mtd, u_char *buf, int len)
static int gpio_nand_verifybuf(struct mtd_info *mtd, const u_char *buf, int len)
static void gpio_nand_writebuf16(struct mtd_info *mtd, const u_char *buf,
int len)
static void gpio_nand_readbuf16(struct mtd_info *mtd, u_char *buf, int len)
static int gpio_nand_verifybuf16(struct mtd_info *mtd, const u_char *buf,
int len)
static int gpio_nand_devready(struct mtd_info *mtd)
static int __devexit gpio_nand_remove(struct platform_device *dev)
static void __iomem *request_and_remap(struct resource *res, size_t size,
const char *name, int *err)
static int __devinit gpio_nand_probe(struct platform_device *dev)
static struct platform_driver gpio_nand_driver = ;
static int __init gpio_nand_init(void)
static void __exit gpio_nand_exit(void)
module_init(gpio_nand_init);
module_exit(gpio_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("GPIO NAND Driver");
