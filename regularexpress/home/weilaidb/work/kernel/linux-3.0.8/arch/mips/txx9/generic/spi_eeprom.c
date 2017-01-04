#define AT250X0_PAGE_SIZE	8
int __init spi_eeprom_register(int busid, int chipid, int size)
static struct read_param  *read_param;
static int __init early_seeprom_probe(struct spi_device *spi)
static struct spi_driver early_seeprom_driver __initdata = ;
int __init spi_eeprom_read(int busid, int chipid, int address,
unsigned char *buf, int len)
