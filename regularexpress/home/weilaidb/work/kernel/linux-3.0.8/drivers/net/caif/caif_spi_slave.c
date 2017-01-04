#define SPI_DATA_POS 0
static inline int forward_to_spi_cmd(struct cfspi *cfspi)
#define SPI_DATA_POS SPI_CMD_SZ
static inline int forward_to_spi_cmd(struct cfspi *cfspi)
int spi_frm_align = 2;
int spi_up_head_align   = 1 << 1;
int spi_up_tail_align   = 1 << 0;
int spi_down_head_align = 1 << 2;
int spi_down_tail_align = 1 << 1;
static inline void debugfs_store_prev(struct cfspi *cfspi)
static inline void debugfs_store_prev(struct cfspi *cfspi)
void cfspi_xfer(struct work_struct *work)
struct platform_driver cfspi_spi_driver = ;
