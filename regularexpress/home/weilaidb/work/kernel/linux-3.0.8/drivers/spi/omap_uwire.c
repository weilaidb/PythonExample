#define UWIRE_BASE_PHYS		0xFFFB3000
#define UWIRE_IO_SIZE 0x20
#define UWIRE_TDR     0x00
#define UWIRE_RDR     0x00
#define UWIRE_CSR     0x01
#define UWIRE_SR1     0x02
#define UWIRE_SR2     0x03
#define UWIRE_SR3     0x04
#define UWIRE_SR4     0x05
#define UWIRE_SR5     0x06
#define	RDRB	(1 << 15)
#define	CSRB	(1 << 14)
#define	START	(1 << 13)
#define	CS_CMD	(1 << 12)
#define UWIRE_READ_FALLING_EDGE		0x0001
#define UWIRE_READ_RISING_EDGE		0x0000
#define UWIRE_WRITE_FALLING_EDGE	0x0000
#define UWIRE_WRITE_RISING_EDGE		0x0002
#define UWIRE_CS_ACTIVE_LOW		0x0000
#define UWIRE_CS_ACTIVE_HIGH		0x0004
#define UWIRE_FREQ_DIV_2		0x0000
#define UWIRE_FREQ_DIV_4		0x0008
#define UWIRE_FREQ_DIV_8		0x0010
#define UWIRE_CHK_READY			0x0020
#define UWIRE_CLK_INVERTED		0x0040
struct uwire_spi ;
struct uwire_state ;
static unsigned int uwire_idx_shift;
static void __iomem *uwire_base;
static inline void uwire_write_reg(int idx, u16 val)
static inline u16 uwire_read_reg(int idx)
static inline void omap_uwire_configure_mode(u8 cs, unsigned long flags)
static int wait_uwire_csr_flag(u16 mask, u16 val, int might_not_catch)
static void uwire_set_clk1_div(int div1_idx)
static void uwire_chipselect(struct spi_device *spi, int value)
static int uwire_txrx(struct spi_device *spi, struct spi_transfer *t)
static int uwire_setup_transfer(struct spi_device *spi, struct spi_transfer *t)
static int uwire_setup(struct spi_device *spi)
static void uwire_cleanup(struct spi_device *spi)
static void uwire_off(struct uwire_spi *uwire)
static int __init uwire_probe(struct platform_device *pdev)
static int __exit uwire_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:omap_uwire");
static struct platform_driver uwire_driver = ;
static int __init omap_uwire_init(void)
static void __exit omap_uwire_exit(void)
subsys_initcall(omap_uwire_init);
module_exit(omap_uwire_exit);
MODULE_LICENSE("GPL");
