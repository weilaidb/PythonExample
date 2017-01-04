#define __S3C64XX_PLAT_SPI_H
struct s3c64xx_spi_csinfo ;
struct s3c64xx_spi_info ;
extern void s3c64xx_spi_set_info(int cntrlr, int src_clk_nr, int num_cs);
extern void s5pc100_spi_set_info(int cntrlr, int src_clk_nr, int num_cs);
extern void s5pv210_spi_set_info(int cntrlr, int src_clk_nr, int num_cs);
extern void s5p64x0_spi_set_info(int cntrlr, int src_clk_nr, int num_cs);
