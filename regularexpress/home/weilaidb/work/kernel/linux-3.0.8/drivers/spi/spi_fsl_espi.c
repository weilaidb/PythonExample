struct fsl_espi_reg ;
struct fsl_espi_transfer ;
#define SPMODE_ENABLE		(1 << 31)
#define SPMODE_LOOP		(1 << 30)
#define SPMODE_TXTHR(x)		((x) << 8)
#define SPMODE_RXTHR(x)		((x) << 0)
#define CSMODE_CI_INACTIVEHIGH	(1 << 31)
#define CSMODE_CP_BEGIN_EDGECLK	(1 << 30)
#define CSMODE_REV		(1 << 29)
#define CSMODE_DIV16		(1 << 28)
#define CSMODE_PM(x)		((x) << 24)
#define CSMODE_POL_1		(1 << 20)
#define CSMODE_LEN(x)		((x) << 16)
#define CSMODE_BEF(x)		((x) << 12)
#define CSMODE_AFT(x)		((x) << 8)
#define CSMODE_CG(x)		((x) << 3)
#define SPMODE_INIT_VAL (SPMODE_TXTHR(4) | SPMODE_RXTHR(3))
#define CSMODE_INIT_VAL (CSMODE_POL_1 | CSMODE_BEF(0) \
| CSMODE_AFT(0) | CSMODE_CG(1))
#define	SPIE_NE		0x00000200
#define	SPIE_NF		0x00000100
#define	SPIM_NE		0x00000200
#define	SPIM_NF		0x00000100
#define SPIE_RXCNT(reg)     ((reg >> 24) & 0x3F)
#define SPIE_TXCNT(reg)     ((reg >> 16) & 0x3F)
#define SPCOM_CS(x)		((x) << 30)
#define SPCOM_TRANLEN(x)	((x) << 0)
#define	SPCOM_TRANLEN_MAX	0xFFFF
static void fsl_espi_change_mode(struct spi_device *spi)
static u32 fsl_espi_tx_buf_lsb(struct mpc8xxx_spi *mpc8xxx_spi)
static int fsl_espi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static int fsl_espi_cpu_bufs(struct mpc8xxx_spi *mspi, struct spi_transfer *t,
unsigned int len)
static int fsl_espi_bufs(struct spi_device *spi, struct spi_transfer *t)
static inline void fsl_espi_addr2cmd(unsigned int addr, u8 *cmd)
static inline unsigned int fsl_espi_cmd2addr(u8 *cmd)
static void fsl_espi_do_trans(struct spi_message *m,
struct fsl_espi_transfer *tr)
static void fsl_espi_cmd_trans(struct spi_message *m,
struct fsl_espi_transfer *trans, u8 *rx_buff)
static void fsl_espi_rw_trans(struct spi_message *m,
struct fsl_espi_transfer *trans, u8 *rx_buff)
static void fsl_espi_do_one_msg(struct spi_message *m)
static int fsl_espi_setup(struct spi_device *spi)
void fsl_espi_cpu_irq(struct mpc8xxx_spi *mspi, u32 events)
static irqreturn_t fsl_espi_irq(s32 irq, void *context_data)
static void fsl_espi_remove(struct mpc8xxx_spi *mspi)
static struct spi_master * __devinit fsl_espi_probe(struct device *dev,
struct resource *mem, unsigned int irq)
static int of_fsl_espi_get_chipselects(struct device *dev)
static int __devinit of_fsl_espi_probe(struct platform_device *ofdev)
static int __devexit of_fsl_espi_remove(struct platform_device *dev)
static const struct of_device_id of_fsl_espi_match[] = ;
MODULE_DEVICE_TABLE(of, of_fsl_espi_match);
static struct platform_driver fsl_espi_driver = ;
static int __init fsl_espi_init(void)
module_init(fsl_espi_init);
static void __exit fsl_espi_exit(void)
module_exit(fsl_espi_exit);
MODULE_AUTHOR("Mingkai Hu");
MODULE_DESCRIPTION("Enhanced Freescale SPI Driver");
MODULE_LICENSE("GPL");
