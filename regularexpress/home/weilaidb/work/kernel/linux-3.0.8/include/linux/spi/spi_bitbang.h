#define	__SPI_BITBANG_H
struct spi_bitbang ;
extern int spi_bitbang_setup(struct spi_device *spi);
extern void spi_bitbang_cleanup(struct spi_device *spi);
extern int spi_bitbang_transfer(struct spi_device *spi, struct spi_message *m);
extern int spi_bitbang_setup_transfer(struct spi_device *spi,
struct spi_transfer *t);
extern int spi_bitbang_start(struct spi_bitbang *spi);
extern int spi_bitbang_stop(struct spi_bitbang *spi);
