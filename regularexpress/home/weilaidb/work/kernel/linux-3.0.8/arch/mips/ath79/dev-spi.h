#define _ATH79_DEV_SPI_H
void ath79_register_spi(struct ath79_spi_platform_data *pdata,
struct spi_board_info const *info,
unsigned n);
