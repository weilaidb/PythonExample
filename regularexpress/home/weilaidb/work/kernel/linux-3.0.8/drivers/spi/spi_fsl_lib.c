#define MPC8XXX_SPI_RX_BUF(type) 					  \
void mpc8xxx_spi_rx_buf_##type(u32 data, struct mpc8xxx_spi *mpc8xxx_spi) \
#define MPC8XXX_SPI_TX_BUF(type)				\
u32 mpc8xxx_spi_tx_buf_##type(struct mpc8xxx_spi *mpc8xxx_spi)	\
MPC8XXX_SPI_RX_BUF(u8)
MPC8XXX_SPI_RX_BUF(u16)
MPC8XXX_SPI_RX_BUF(u32)
MPC8XXX_SPI_TX_BUF(u8)
MPC8XXX_SPI_TX_BUF(u16)
MPC8XXX_SPI_TX_BUF(u32)
struct mpc8xxx_spi_probe_info *to_of_pinfo(struct fsl_spi_platform_data *pdata)
void mpc8xxx_spi_work(struct work_struct *work)
int mpc8xxx_spi_transfer(struct spi_device *spi,
struct spi_message *m)
void mpc8xxx_spi_cleanup(struct spi_device *spi)
const char *mpc8xxx_spi_strmode(unsigned int flags)
int mpc8xxx_spi_probe(struct device *dev, struct resource *mem,
unsigned int irq)
int __devexit mpc8xxx_spi_remove(struct device *dev)
int __devinit of_mpc8xxx_spi_probe(struct platform_device *ofdev)
