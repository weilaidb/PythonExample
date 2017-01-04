#define CAIF_SPI_H_
#define SPI_CMD_WR			0x00
#define SPI_CMD_RD			0x01
#define SPI_CMD_EOT			0x02
#define SPI_CMD_IND			0x04
#define SPI_DMA_BUF_LEN			8192
#define WL_SZ				2
#define SPI_CMD_SZ			4
#define SPI_IND_SZ			4
#define SPI_XFER			0
#define SPI_SS_ON			1
#define SPI_SS_OFF			2
#define SPI_TERMINATE			3
#define MIN_TRANSITION_TIME_USEC	50
#define SPI_MASTER_CLK_MHZ		13
#define SPI_XFER_TIME_USEC(bytes, clk) (((bytes) * 8) / clk)
#define CAIF_MAX_SPI_FRAME 4092
#define CAIF_MAX_SPI_PKTS 9
#define CFSPI_DBG_PREFILL		0
struct cfspi_xfer ;
struct cfspi_ifc ;
struct cfspi_dev ;
enum cfspi_state ;
struct cfspi ;
extern int spi_frm_align;
extern int spi_up_head_align;
extern int spi_up_tail_align;
extern int spi_down_head_align;
extern int spi_down_tail_align;
extern struct platform_driver cfspi_spi_driver;
void cfspi_dbg_state(struct cfspi *cfspi, int state);
int cfspi_xmitfrm(struct cfspi *cfspi, u8 *buf, size_t len);
int cfspi_xmitlen(struct cfspi *cfspi);
int cfspi_rxfrm(struct cfspi *cfspi, u8 *buf, size_t len);
int cfspi_spi_remove(struct platform_device *pdev);
int cfspi_spi_probe(struct platform_device *pdev);
int cfspi_xmitfrm(struct cfspi *cfspi, u8 *buf, size_t len);
int cfspi_xmitlen(struct cfspi *cfspi);
int cfspi_rxfrm(struct cfspi *cfspi, u8 *buf, size_t len);
void cfspi_xfer(struct work_struct *work);
