enum soc_type ;
#define ONENAND_ERASE_STATUS		0x00
#define ONENAND_MULTI_ERASE_SET		0x01
#define ONENAND_ERASE_START		0x03
#define ONENAND_UNLOCK_START		0x08
#define ONENAND_UNLOCK_END		0x09
#define ONENAND_LOCK_START		0x0A
#define ONENAND_LOCK_END		0x0B
#define ONENAND_LOCK_TIGHT_START	0x0C
#define ONENAND_LOCK_TIGHT_END		0x0D
#define ONENAND_UNLOCK_ALL		0x0E
#define ONENAND_OTP_ACCESS		0x12
#define ONENAND_SPARE_ACCESS_ONLY	0x13
#define ONENAND_MAIN_ACCESS_ONLY	0x14
#define ONENAND_ERASE_VERIFY		0x15
#define ONENAND_MAIN_SPARE_ACCESS	0x16
#define ONENAND_PIPELINE_READ		0x4000
#define MAP_00				(0x0)
#define MAP_01				(0x1)
#define MAP_10				(0x2)
#define MAP_11				(0x3)
#define S3C64XX_CMD_MAP_SHIFT		24
#define S5PC100_CMD_MAP_SHIFT		26
#define S3C6400_FBA_SHIFT		10
#define S3C6400_FPA_SHIFT		4
#define S3C6400_FSA_SHIFT		2
#define S3C6410_FBA_SHIFT		12
#define S3C6410_FPA_SHIFT		6
#define S3C6410_FSA_SHIFT		4
#define S5PC100_FBA_SHIFT		13
#define S5PC100_FPA_SHIFT		7
#define S5PC100_FSA_SHIFT		5
#define S5PC110_DMA_SRC_ADDR		0x400
#define S5PC110_DMA_SRC_CFG		0x404
#define S5PC110_DMA_DST_ADDR		0x408
#define S5PC110_DMA_DST_CFG		0x40C
#define S5PC110_DMA_TRANS_SIZE		0x414
#define S5PC110_DMA_TRANS_CMD		0x418
#define S5PC110_DMA_TRANS_STATUS	0x41C
#define S5PC110_DMA_TRANS_DIR		0x420
#define S5PC110_INTC_DMA_CLR		0x1004
#define S5PC110_INTC_ONENAND_CLR	0x1008
#define S5PC110_INTC_DMA_MASK		0x1024
#define S5PC110_INTC_ONENAND_MASK	0x1028
#define S5PC110_INTC_DMA_PEND		0x1044
#define S5PC110_INTC_ONENAND_PEND	0x1048
#define S5PC110_INTC_DMA_STATUS		0x1064
#define S5PC110_INTC_ONENAND_STATUS	0x1068
#define S5PC110_INTC_DMA_TD		(1 << 24)
#define S5PC110_INTC_DMA_TE		(1 << 16)
#define S5PC110_DMA_CFG_SINGLE		(0x0 << 16)
#define S5PC110_DMA_CFG_4BURST		(0x2 << 16)
#define S5PC110_DMA_CFG_8BURST		(0x3 << 16)
#define S5PC110_DMA_CFG_16BURST		(0x4 << 16)
#define S5PC110_DMA_CFG_INC		(0x0 << 8)
#define S5PC110_DMA_CFG_CNT		(0x1 << 8)
#define S5PC110_DMA_CFG_8BIT		(0x0 << 0)
#define S5PC110_DMA_CFG_16BIT		(0x1 << 0)
#define S5PC110_DMA_CFG_32BIT		(0x2 << 0)
#define S5PC110_DMA_SRC_CFG_READ	(S5PC110_DMA_CFG_16BURST | \
S5PC110_DMA_CFG_INC | \
S5PC110_DMA_CFG_16BIT)
#define S5PC110_DMA_DST_CFG_READ	(S5PC110_DMA_CFG_16BURST | \
S5PC110_DMA_CFG_INC | \
S5PC110_DMA_CFG_32BIT)
#define S5PC110_DMA_SRC_CFG_WRITE	(S5PC110_DMA_CFG_16BURST | \
S5PC110_DMA_CFG_INC | \
S5PC110_DMA_CFG_32BIT)
#define S5PC110_DMA_DST_CFG_WRITE	(S5PC110_DMA_CFG_16BURST | \
S5PC110_DMA_CFG_INC | \
S5PC110_DMA_CFG_16BIT)
#define S5PC110_DMA_TRANS_CMD_TDC	(0x1 << 18)
#define S5PC110_DMA_TRANS_CMD_TEC	(0x1 << 16)
#define S5PC110_DMA_TRANS_CMD_TR	(0x1 << 0)
#define S5PC110_DMA_TRANS_STATUS_TD	(0x1 << 18)
#define S5PC110_DMA_TRANS_STATUS_TB	(0x1 << 17)
#define S5PC110_DMA_TRANS_STATUS_TE	(0x1 << 16)
#define S5PC110_DMA_DIR_READ		0x0
#define S5PC110_DMA_DIR_WRITE		0x1
struct s3c_onenand ;
#define CMD_MAP_00(dev, addr)		(dev->cmd_map(MAP_00, ((addr) << 1)))
#define CMD_MAP_01(dev, mem_addr)	(dev->cmd_map(MAP_01, (mem_addr)))
#define CMD_MAP_10(dev, mem_addr)	(dev->cmd_map(MAP_10, (mem_addr)))
#define CMD_MAP_11(dev, addr)		(dev->cmd_map(MAP_11, ((addr) << 2)))
static struct s3c_onenand *onenand;
static const char *part_probes[] = ;
static inline int s3c_read_reg(int offset)
static inline void s3c_write_reg(int value, int offset)
static inline int s3c_read_cmd(unsigned int cmd)
static inline void s3c_write_cmd(int value, unsigned int cmd)
static void s3c_dump_reg(void)
static unsigned int s3c64xx_cmd_map(unsigned type, unsigned val)
static unsigned int s5pc1xx_cmd_map(unsigned type, unsigned val)
static unsigned int s3c6400_mem_addr(int fba, int fpa, int fsa)
static unsigned int s3c6410_mem_addr(int fba, int fpa, int fsa)
static unsigned int s5pc100_mem_addr(int fba, int fpa, int fsa)
static void s3c_onenand_reset(void)
static unsigned short s3c_onenand_readw(void __iomem *addr)
static void s3c_onenand_writew(unsigned short value, void __iomem *addr)
static int s3c_onenand_wait(struct mtd_info *mtd, int state)
static int s3c_onenand_command(struct mtd_info *mtd, int cmd, loff_t addr,
size_t len)
static unsigned char *s3c_get_bufferram(struct mtd_info *mtd, int area)
static int onenand_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset,
size_t count)
static int onenand_write_bufferram(struct mtd_info *mtd, int area,
const unsigned char *buffer, int offset,
size_t count)
static int (*s5pc110_dma_ops)(void *dst, void *src, size_t count, int direction);
static int s5pc110_dma_poll(void *dst, void *src, size_t count, int direction)
static irqreturn_t s5pc110_onenand_irq(int irq, void *data)
static int s5pc110_dma_irq(void *dst, void *src, size_t count, int direction)
static int s5pc110_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset, size_t count)
static int s5pc110_chip_probe(struct mtd_info *mtd)
static int s3c_onenand_bbt_wait(struct mtd_info *mtd, int state)
static void s3c_onenand_check_lock_status(struct mtd_info *mtd)
static void s3c_onenand_do_lock_cmd(struct mtd_info *mtd, loff_t ofs,
size_t len, int cmd)
static void s3c_unlock_all(struct mtd_info *mtd)
static void s3c_onenand_setup(struct mtd_info *mtd)
static int s3c_onenand_probe(struct platform_device *pdev)
static int __devexit s3c_onenand_remove(struct platform_device *pdev)
static int s3c_pm_ops_suspend(struct device *dev)
static  int s3c_pm_ops_resume(struct device *dev)
static const struct dev_pm_ops s3c_pm_ops = ;
static struct platform_device_id s3c_onenand_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3c_onenand_driver_ids);
static struct platform_driver s3c_onenand_driver = ;
static int __init s3c_onenand_init(void)
static void __exit s3c_onenand_exit(void)
module_init(s3c_onenand_init);
module_exit(s3c_onenand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kyungmin Park <kyungmin.park@samsung.com>");
MODULE_DESCRIPTION("Samsung OneNAND controller support");
