#define RSECCNT	0x00
#define RMINCNT	0x01
#define RHRCNT	0x02
#define RWKCNT	0x03
#define RDAYCNT	0x04
#define RMONCNT	0x05
#define RYRCNT	0x06
#define R100CNT	0x07
#define RMINAR	0x08
#define RHRAR	0x09
#define RWKAR	0x0a
#define RTIMCNT	0x0c
#define REXT	0x0d
#define RFLAG	0x0e
#define RCR	0x0f
static int write_reg(struct device *dev, int address, unsigned char data)
static int read_regs(struct device *dev, unsigned char *regs, int no_regs)
static int r9701_get_datetime(struct device *dev, struct rtc_time *dt)
static int r9701_set_datetime(struct device *dev, struct rtc_time *dt)
static const struct rtc_class_ops r9701_rtc_ops = ;
static int __devinit r9701_probe(struct spi_device *spi)
static int __devexit r9701_remove(struct spi_device *spi)
static struct spi_driver r9701_driver = ;
static __init int r9701_init(void)
module_init(r9701_init);
static __exit void r9701_exit(void)
module_exit(r9701_exit);
MODULE_DESCRIPTION("r9701 spi RTC driver");
MODULE_AUTHOR("Magnus Damm <damm@opensource.se>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:rtc-r9701");
