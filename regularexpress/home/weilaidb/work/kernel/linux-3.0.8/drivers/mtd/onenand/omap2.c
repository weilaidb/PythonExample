#define DRIVER_NAME "omap2-onenand"
#define ONENAND_IO_SIZE		SZ_128K
#define ONENAND_BUFRAM_SIZE	(1024 * 5)
struct omap2_onenand ;
static const char *part_probes[] = ;
static void omap2_onenand_dma_cb(int lch, u16 ch_status, void *data)
static irqreturn_t omap2_onenand_interrupt(int irq, void *dev_id)
static inline unsigned short read_reg(struct omap2_onenand *c, int reg)
static inline void write_reg(struct omap2_onenand *c, unsigned short value,
int reg)
static void wait_err(char *msg, int state, unsigned int ctrl, unsigned int intr)
static void wait_warn(char *msg, int state, unsigned int ctrl,
unsigned int intr)
static int omap2_onenand_wait(struct mtd_info *mtd, int state)
static inline int omap2_onenand_bufferram_offset(struct mtd_info *mtd, int area)
#if defined(CONFIG_ARCH_OMAP3) || defined(MULTI_OMAP2)
static int omap3_onenand_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset,
size_t count)
static int omap3_onenand_write_bufferram(struct mtd_info *mtd, int area,
const unsigned char *buffer,
int offset, size_t count)
int omap3_onenand_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset,
size_t count);
int omap3_onenand_write_bufferram(struct mtd_info *mtd, int area,
const unsigned char *buffer,
int offset, size_t count);
#if defined(CONFIG_ARCH_OMAP2) || defined(MULTI_OMAP2)
static int omap2_onenand_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset,
size_t count)
static int omap2_onenand_write_bufferram(struct mtd_info *mtd, int area,
const unsigned char *buffer,
int offset, size_t count)
int omap2_onenand_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset,
size_t count);
int omap2_onenand_write_bufferram(struct mtd_info *mtd, int area,
const unsigned char *buffer,
int offset, size_t count);
static struct platform_driver omap2_onenand_driver;
static int __adjust_timing(struct device *dev, void *data)
int omap2_onenand_rephase(void)
static void omap2_onenand_shutdown(struct platform_device *pdev)
static int omap2_onenand_enable(struct mtd_info *mtd)
static int omap2_onenand_disable(struct mtd_info *mtd)
static int __devinit omap2_onenand_probe(struct platform_device *pdev)
static int __devexit omap2_onenand_remove(struct platform_device *pdev)
static struct platform_driver omap2_onenand_driver = ;
static int __init omap2_onenand_init(void)
static void __exit omap2_onenand_exit(void)
module_init(omap2_onenand_init);
module_exit(omap2_onenand_exit);
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarkko Lavinen <jarkko.lavinen@nokia.com>");
MODULE_DESCRIPTION("Glue layer for OneNAND flash on OMAP2 / OMAP3");
