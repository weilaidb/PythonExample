#define MRST_SPI_TIMEOUT		0x200000
#define MRST_REGBASE_SPI0		0xff128000
#define MRST_REGBASE_SPI1		0xff128400
#define MRST_CLK_SPI0_REG		0xff11d86c
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
struct dw_spi_reg  __packed;
#define dw_readl(dw, name)		__raw_readl(&(dw)->name)
#define dw_writel(dw, name, val)	__raw_writel((val), &(dw)->name)
static unsigned long mrst_spi_paddr = MRST_REGBASE_SPI0;
static u32 *pclk_spi0;
static struct dw_spi_reg *pspi;
static struct kmsg_dumper dw_dumper;
static int dumper_registered;
static void dw_kmsg_dump(struct kmsg_dumper *dumper,
enum kmsg_dump_reason reason,
const char *s1, unsigned long l1,
const char *s2, unsigned long l2)
static void max3110_write_config(void)
static void max3110_write_data(char c)
void mrst_early_console_init(void)
static void early_mrst_spi_putc(char c)
static void early_mrst_spi_write(struct console *con, const char *str, unsigned n)
struct console early_mrst_console = ;
#define HSU_PORT2_PADDR		0xffa28180
static void __iomem *phsu;
void hsu_early_console_init(void)
#define BOTH_EMPTY (UART_LSR_TEMT | UART_LSR_THRE)
static void early_hsu_putc(char ch)
static void early_hsu_write(struct console *con, const char *str, unsigned n)
struct console early_hsu_console = ;
