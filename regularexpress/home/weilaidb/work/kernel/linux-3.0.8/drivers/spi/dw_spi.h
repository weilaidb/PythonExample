#define DW_SPI_HEADER_H
#define SPI_DFS_OFFSET			0
#define SPI_FRF_OFFSET			4
#define SPI_FRF_SPI			0x0
#define SPI_FRF_SSP			0x1
#define SPI_FRF_MICROWIRE		0x2
#define SPI_FRF_RESV			0x3
#define SPI_MODE_OFFSET			6
#define SPI_SCPH_OFFSET			6
#define SPI_SCOL_OFFSET			7
#define SPI_TMOD_OFFSET			8
#define SPI_TMOD_MASK			(0x3 << SPI_TMOD_OFFSET)
#define	SPI_TMOD_TR			0x0
#define SPI_TMOD_TO			0x1
#define SPI_TMOD_RO			0x2
#define SPI_TMOD_EPROMREAD		0x3
#define SPI_SLVOE_OFFSET		10
#define SPI_SRL_OFFSET			11
#define SPI_CFS_OFFSET			12
#define SR_MASK				0x7f
#define SR_BUSY				(1 << 0)
#define SR_TF_NOT_FULL			(1 << 1)
#define SR_TF_EMPT			(1 << 2)
#define SR_RF_NOT_EMPT			(1 << 3)
#define SR_RF_FULL			(1 << 4)
#define SR_TX_ERR			(1 << 5)
#define SR_DCOL				(1 << 6)
#define SPI_INT_TXEI			(1 << 0)
#define SPI_INT_TXOI			(1 << 1)
#define SPI_INT_RXUI			(1 << 2)
#define SPI_INT_RXOI			(1 << 3)
#define SPI_INT_RXFI			(1 << 4)
#define SPI_INT_MSTI			(1 << 5)
#define SPI_INT_THRESHOLD		32
enum dw_ssi_type ;
struct dw_spi_reg  __packed;
struct dw_spi;
struct dw_spi_dma_ops ;
struct dw_spi ;
#define dw_readl(dw, name) \
__raw_readl(&(((struct dw_spi_reg *)dw->regs)->name))
#define dw_writel(dw, name, val) \
__raw_writel((val), &(((struct dw_spi_reg *)dw->regs)->name))
#define dw_readw(dw, name) \
__raw_readw(&(((struct dw_spi_reg *)dw->regs)->name))
#define dw_writew(dw, name, val) \
__raw_writew((val), &(((struct dw_spi_reg *)dw->regs)->name))
static inline void spi_enable_chip(struct dw_spi *dws, int enable)
static inline void spi_set_clk(struct dw_spi *dws, u16 div)
static inline void spi_chip_sel(struct dw_spi *dws, u16 cs)
static inline void spi_mask_intr(struct dw_spi *dws, u32 mask)
static inline void spi_umask_intr(struct dw_spi *dws, u32 mask)
struct dw_spi_chip ;
extern int dw_spi_add_host(struct dw_spi *dws);
extern void dw_spi_remove_host(struct dw_spi *dws);
extern int dw_spi_suspend_host(struct dw_spi *dws);
extern int dw_spi_resume_host(struct dw_spi *dws);
extern void dw_spi_xfer_done(struct dw_spi *dws);
extern int dw_spi_mid_init(struct dw_spi *dws);
