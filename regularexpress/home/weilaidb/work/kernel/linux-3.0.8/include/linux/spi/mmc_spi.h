#define __LINUX_SPI_MMC_SPI_H
struct mmc_host;
struct mmc_spi_platform_data ;
extern struct mmc_spi_platform_data *mmc_spi_get_pdata(struct spi_device *spi);
extern void mmc_spi_put_pdata(struct spi_device *spi);
static inline struct mmc_spi_platform_data *
mmc_spi_get_pdata(struct spi_device *spi)
static inline void mmc_spi_put_pdata(struct spi_device *spi)
