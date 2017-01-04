#define __LINUX_OF_SPI_H
#if defined(CONFIG_OF_SPI) || defined(CONFIG_OF_SPI_MODULE)
extern void of_register_spi_devices(struct spi_master *master);
static inline void of_register_spi_devices(struct spi_master *master)
