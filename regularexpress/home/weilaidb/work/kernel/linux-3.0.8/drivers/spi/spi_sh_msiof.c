struct sh_msiof_spi_priv ;
#define TMDR1	0x00
#define TMDR2	0x04
#define TMDR3	0x08
#define RMDR1	0x10
#define RMDR2	0x14
#define RMDR3	0x18
#define TSCR	0x20
#define RSCR	0x22
#define CTR	0x28
#define FCTR	0x30
#define STR	0x40
#define IER	0x44
#define TDR1	0x48
#define TDR2	0x4c
#define TFDR	0x50
#define RDR1	0x58
#define RDR2	0x5c
#define RFDR	0x60
#define CTR_TSCKE (1 << 15)
#define CTR_TFSE  (1 << 14)
#define CTR_TXE   (1 << 9)
#define CTR_RXE   (1 << 8)
#define STR_TEOF  (1 << 23)
#define STR_REOF  (1 << 7)
static u32 sh_msiof_read(struct sh_msiof_spi_priv *p, int reg_offs)
static void sh_msiof_write(struct sh_msiof_spi_priv *p, int reg_offs,
u32 value)
static int sh_msiof_modify_ctr_wait(struct sh_msiof_spi_priv *p,
u32 clr, u32 set)
static irqreturn_t sh_msiof_spi_irq(int irq, void *data)
static struct  const sh_msiof_spi_clk_table[] = ;
static void sh_msiof_spi_set_clk_regs(struct sh_msiof_spi_priv *p,
unsigned long parent_rate,
unsigned long spi_hz)
static void sh_msiof_spi_set_pin_regs(struct sh_msiof_spi_priv *p,
u32 cpol, u32 cpha,
u32 tx_hi_z, u32 lsb_first)
static void sh_msiof_spi_set_mode_regs(struct sh_msiof_spi_priv *p,
const void *tx_buf, void *rx_buf,
u32 bits, u32 words)
static void sh_msiof_reset_str(struct sh_msiof_spi_priv *p)
static void sh_msiof_spi_write_fifo_8(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_write_fifo_16(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_write_fifo_16u(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_write_fifo_32(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_write_fifo_32u(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_write_fifo_s32(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_write_fifo_s32u(struct sh_msiof_spi_priv *p,
const void *tx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_8(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_16(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_16u(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_32(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_32u(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_s32(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static void sh_msiof_spi_read_fifo_s32u(struct sh_msiof_spi_priv *p,
void *rx_buf, int words, int fs)
static int sh_msiof_spi_bits(struct spi_device *spi, struct spi_transfer *t)
static unsigned long sh_msiof_spi_hz(struct spi_device *spi,
struct spi_transfer *t)
static int sh_msiof_spi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static void sh_msiof_spi_chipselect(struct spi_device *spi, int is_on)
static int sh_msiof_spi_txrx_once(struct sh_msiof_spi_priv *p,
void (*tx_fifo)(struct sh_msiof_spi_priv *,
const void *, int, int),
void (*rx_fifo)(struct sh_msiof_spi_priv *,
void *, int, int),
const void *tx_buf, void *rx_buf,
int words, int bits)
static int sh_msiof_spi_txrx(struct spi_device *spi, struct spi_transfer *t)
static u32 sh_msiof_spi_txrx_word(struct spi_device *spi, unsigned nsecs,
u32 word, u8 bits)
static int sh_msiof_spi_probe(struct platform_device *pdev)
static int sh_msiof_spi_remove(struct platform_device *pdev)
static int sh_msiof_spi_runtime_nop(struct device *dev)
static struct dev_pm_ops sh_msiof_spi_dev_pm_ops = ;
static struct platform_driver sh_msiof_spi_drv = ;
static int __init sh_msiof_spi_init(void)
module_init(sh_msiof_spi_init);
static void __exit sh_msiof_spi_exit(void)
module_exit(sh_msiof_spi_exit);
MODULE_DESCRIPTION("SuperH MSIOF SPI Master Interface Driver");
MODULE_AUTHOR("Magnus Damm");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:spi_sh_msiof");
