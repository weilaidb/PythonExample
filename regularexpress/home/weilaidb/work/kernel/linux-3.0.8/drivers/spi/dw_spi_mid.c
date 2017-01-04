struct mid_dma ;
static bool mid_spi_dma_chan_filter(struct dma_chan *chan, void *param)
static int mid_spi_dma_init(struct dw_spi *dws)
static void mid_spi_dma_exit(struct dw_spi *dws)
static void dw_spi_dma_done(void *arg)
static int mid_spi_dma_transfer(struct dw_spi *dws, int cs_change)
static struct dw_spi_dma_ops mid_dma_ops = ;
#define MRST_SPI_CLK_BASE	100000000
#define MRST_CLK_SPI0_REG	0xff11d86c
#define CLK_SPI_BDIV_OFFSET	0
#define CLK_SPI_BDIV_MASK	0x00000007
#define CLK_SPI_CDIV_OFFSET	9
#define CLK_SPI_CDIV_MASK	0x00000e00
#define CLK_SPI_DISABLE_OFFSET	8
int dw_spi_mid_init(struct dw_spi *dws)
