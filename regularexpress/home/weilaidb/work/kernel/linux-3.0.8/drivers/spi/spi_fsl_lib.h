#define __SPI_FSL_LIB_H__
struct mpc8xxx_spi ;
struct spi_mpc8xxx_cs ;
static inline void mpc8xxx_spi_write_reg(__be32 __iomem *reg, u32 val)
static inline u32 mpc8xxx_spi_read_reg(__be32 __iomem *reg)
struct mpc8xxx_spi_probe_info ;
extern u32 mpc8xxx_spi_tx_buf_u8(struct mpc8xxx_spi *mpc8xxx_spi);
extern u32 mpc8xxx_spi_tx_buf_u16(struct mpc8xxx_spi *mpc8xxx_spi);
extern u32 mpc8xxx_spi_tx_buf_u32(struct mpc8xxx_spi *mpc8xxx_spi);
extern void mpc8xxx_spi_rx_buf_u8(u32 data, struct mpc8xxx_spi *mpc8xxx_spi);
extern void mpc8xxx_spi_rx_buf_u16(u32 data, struct mpc8xxx_spi *mpc8xxx_spi);
extern void mpc8xxx_spi_rx_buf_u32(u32 data, struct mpc8xxx_spi *mpc8xxx_spi);
extern struct mpc8xxx_spi_probe_info *to_of_pinfo(
struct fsl_spi_platform_data *pdata);
extern int mpc8xxx_spi_bufs(struct mpc8xxx_spi *mspi,
struct spi_transfer *t, unsigned int len);
extern int mpc8xxx_spi_transfer(struct spi_device *spi, struct spi_message *m);
extern void mpc8xxx_spi_cleanup(struct spi_device *spi);
extern const char *mpc8xxx_spi_strmode(unsigned int flags);
extern int mpc8xxx_spi_probe(struct device *dev, struct resource *mem,
unsigned int irq);
extern int mpc8xxx_spi_remove(struct device *dev);
extern int of_mpc8xxx_spi_probe(struct platform_device *ofdev);
