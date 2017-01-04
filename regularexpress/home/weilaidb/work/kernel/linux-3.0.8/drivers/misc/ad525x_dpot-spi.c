static const struct ad_dpot_id ad_dpot_spi_devlist[] = ;
static int write8(void *client, u8 val)
static int write16(void *client, u8 reg, u8 val)
static int write24(void *client, u8 reg, u16 val)
static int read8(void *client)
static int read16(void *client, u8 reg)
static int read24(void *client, u8 reg)
static const struct ad_dpot_bus_ops bops = ;
static const struct ad_dpot_id *dpot_match_id(const struct ad_dpot_id *id,
char *name)
static int __devinit ad_dpot_spi_probe(struct spi_device *spi)
static int __devexit ad_dpot_spi_remove(struct spi_device *spi)
static struct spi_driver ad_dpot_spi_driver = ;
static int __init ad_dpot_spi_init(void)
module_init(ad_dpot_spi_init);
static void __exit ad_dpot_spi_exit(void)
module_exit(ad_dpot_spi_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("digital potentiometer SPI bus driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:ad_dpot");
