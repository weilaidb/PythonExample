static int ade7854_spi_write_reg_8(struct device *dev,
u16 reg_address,
u8 value)
static int ade7854_spi_write_reg_16(struct device *dev,
u16 reg_address,
u16 value)
static int ade7854_spi_write_reg_24(struct device *dev,
u16 reg_address,
u32 value)
static int ade7854_spi_write_reg_32(struct device *dev,
u16 reg_address,
u32 value)
static int ade7854_spi_read_reg_8(struct device *dev,
u16 reg_address,
u8 *val)
static int ade7854_spi_read_reg_16(struct device *dev,
u16 reg_address,
u16 *val)
static int ade7854_spi_read_reg_24(struct device *dev,
u16 reg_address,
u32 *val)
static int ade7854_spi_read_reg_32(struct device *dev,
u16 reg_address,
u32 *val)
static int __devinit ade7854_spi_probe(struct spi_device *spi)
static int ade7854_spi_remove(struct spi_device *spi)
static const struct spi_device_id ade7854_id[] = ;
static struct spi_driver ade7854_driver = ;
static __init int ade7854_init(void)
module_init(ade7854_init);
static __exit void ade7854_exit(void)
module_exit(ade7854_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7854/58/68/78 SPI Driver");
MODULE_LICENSE("GPL v2");
