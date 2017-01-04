#define ATMEL_TSADCC_CR		0x00
#define   ATMEL_TSADCC_SWRST	(1 << 0)
#define	  ATMEL_TSADCC_START	(1 << 1)
#define ATMEL_TSADCC_MR		0x04
#define	  ATMEL_TSADCC_TSAMOD	(3    <<  0)
#define	    ATMEL_TSADCC_TSAMOD_ADC_ONLY_MODE	(0x0)
#define	    ATMEL_TSADCC_TSAMOD_TS_ONLY_MODE	(0x1)
#define	  ATMEL_TSADCC_LOWRES	(1    <<  4)
#define	  ATMEL_TSADCC_SLEEP	(1    <<  5)
#define	  ATMEL_TSADCC_PENDET	(1    <<  6)
#define	  ATMEL_TSADCC_PRES	(1    <<  7)
#define	  ATMEL_TSADCC_PRESCAL	(0x3f <<  8)
#define	  ATMEL_TSADCC_EPRESCAL	(0xff <<  8)
#define	  ATMEL_TSADCC_STARTUP	(0x7f << 16)
#define	  ATMEL_TSADCC_SHTIM	(0xf  << 24)
#define	  ATMEL_TSADCC_PENDBC	(0xf  << 28)
#define ATMEL_TSADCC_TRGR	0x08
#define	  ATMEL_TSADCC_TRGMOD	(7      <<  0)
#define	    ATMEL_TSADCC_TRGMOD_NONE		(0 << 0)
#define     ATMEL_TSADCC_TRGMOD_EXT_RISING	(1 << 0)
#define     ATMEL_TSADCC_TRGMOD_EXT_FALLING	(2 << 0)
#define     ATMEL_TSADCC_TRGMOD_EXT_ANY		(3 << 0)
#define     ATMEL_TSADCC_TRGMOD_PENDET		(4 << 0)
#define     ATMEL_TSADCC_TRGMOD_PERIOD		(5 << 0)
#define     ATMEL_TSADCC_TRGMOD_CONTINUOUS	(6 << 0)
#define   ATMEL_TSADCC_TRGPER	(0xffff << 16)
#define ATMEL_TSADCC_TSR	0x0C
#define	  ATMEL_TSADCC_TSFREQ	(0xf <<  0)
#define	  ATMEL_TSADCC_TSSHTIM	(0xf << 24)
#define ATMEL_TSADCC_CHER	0x10
#define ATMEL_TSADCC_CHDR	0x14
#define ATMEL_TSADCC_CHSR	0x18
#define	  ATMEL_TSADCC_CH(n)	(1 << (n))
#define ATMEL_TSADCC_SR		0x1C
#define	  ATMEL_TSADCC_EOC(n)	(1 << ((n)+0))
#define	  ATMEL_TSADCC_OVRE(n)	(1 << ((n)+8))
#define	  ATMEL_TSADCC_DRDY	(1 << 16)
#define	  ATMEL_TSADCC_GOVRE	(1 << 17)
#define	  ATMEL_TSADCC_ENDRX	(1 << 18)
#define	  ATMEL_TSADCC_RXBUFF	(1 << 19)
#define	  ATMEL_TSADCC_PENCNT	(1 << 20)
#define	  ATMEL_TSADCC_NOCNT	(1 << 21)
#define ATMEL_TSADCC_LCDR	0x20
#define	  ATMEL_TSADCC_DATA	(0x3ff << 0)
#define ATMEL_TSADCC_IER	0x24
#define ATMEL_TSADCC_IDR	0x28
#define ATMEL_TSADCC_IMR	0x2C
#define ATMEL_TSADCC_CDR0	0x30
#define ATMEL_TSADCC_CDR1	0x34
#define ATMEL_TSADCC_CDR2	0x38
#define ATMEL_TSADCC_CDR3	0x3C
#define ATMEL_TSADCC_CDR4	0x40
#define ATMEL_TSADCC_CDR5	0x44
#define ATMEL_TSADCC_XPOS	0x50
#define ATMEL_TSADCC_Z1DAT	0x54
#define ATMEL_TSADCC_Z2DAT	0x58
#define PRESCALER_VAL(x)	((x) >> 8)
#define ADC_DEFAULT_CLOCK	100000
struct atmel_tsadcc ;
static void __iomem		*tsc_base;
#define atmel_tsadcc_read(reg)		__raw_readl(tsc_base + (reg))
#define atmel_tsadcc_write(reg, val)	__raw_writel((val), tsc_base + (reg))
static irqreturn_t atmel_tsadcc_interrupt(int irq, void *dev)
static int __devinit atmel_tsadcc_probe(struct platform_device *pdev)
static int __devexit atmel_tsadcc_remove(struct platform_device *pdev)
static struct platform_driver atmel_tsadcc_driver = ;
static int __init atmel_tsadcc_init(void)
static void __exit atmel_tsadcc_exit(void)
module_init(atmel_tsadcc_init);
module_exit(atmel_tsadcc_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Atmel TouchScreen Driver");
MODULE_AUTHOR("Dan Liang <dan.liang@atmel.com>");
