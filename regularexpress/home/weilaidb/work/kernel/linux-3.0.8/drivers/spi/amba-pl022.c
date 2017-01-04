#define SSP_WRITE_BITS(reg, val, mask, sb) \
((reg) = (((reg) & ~(mask)) | (((val)<<(sb)) & (mask))))
#define GEN_MASK_BITS(val, mask, sb) \
(((val)<<(sb)) & (mask))
#define DRIVE_TX		0
#define DO_NOT_DRIVE_TX		1
#define DO_NOT_QUEUE_DMA	0
#define QUEUE_DMA		1
#define RX_TRANSFER		1
#define TX_TRANSFER		2
#define SSP_CR0(r)	(r + 0x000)
#define SSP_CR1(r)	(r + 0x004)
#define SSP_DR(r)	(r + 0x008)
#define SSP_SR(r)	(r + 0x00C)
#define SSP_CPSR(r)	(r + 0x010)
#define SSP_IMSC(r)	(r + 0x014)
#define SSP_RIS(r)	(r + 0x018)
#define SSP_MIS(r)	(r + 0x01C)
#define SSP_ICR(r)	(r + 0x020)
#define SSP_DMACR(r)	(r + 0x024)
#define SSP_ITCR(r)	(r + 0x080)
#define SSP_ITIP(r)	(r + 0x084)
#define SSP_ITOP(r)	(r + 0x088)
#define SSP_TDR(r)	(r + 0x08C)
#define SSP_PID0(r)	(r + 0xFE0)
#define SSP_PID1(r)	(r + 0xFE4)
#define SSP_PID2(r)	(r + 0xFE8)
#define SSP_PID3(r)	(r + 0xFEC)
#define SSP_CID0(r)	(r + 0xFF0)
#define SSP_CID1(r)	(r + 0xFF4)
#define SSP_CID2(r)	(r + 0xFF8)
#define SSP_CID3(r)	(r + 0xFFC)
#define SSP_CR0_MASK_DSS	(0x0FUL << 0)
#define SSP_CR0_MASK_FRF	(0x3UL << 4)
#define SSP_CR0_MASK_SPO	(0x1UL << 6)
#define SSP_CR0_MASK_SPH	(0x1UL << 7)
#define SSP_CR0_MASK_SCR	(0xFFUL << 8)
#define SSP_CR0_MASK_DSS_ST	(0x1FUL << 0)
#define SSP_CR0_MASK_HALFDUP_ST	(0x1UL << 5)
#define SSP_CR0_MASK_CSS_ST	(0x1FUL << 16)
#define SSP_CR0_MASK_FRF_ST	(0x3UL << 21)
#define SSP_CR1_MASK_LBM	(0x1UL << 0)
#define SSP_CR1_MASK_SSE	(0x1UL << 1)
#define SSP_CR1_MASK_MS		(0x1UL << 2)
#define SSP_CR1_MASK_SOD	(0x1UL << 3)
#define SSP_CR1_MASK_RENDN_ST	(0x1UL << 4)
#define SSP_CR1_MASK_TENDN_ST	(0x1UL << 5)
#define SSP_CR1_MASK_MWAIT_ST	(0x1UL << 6)
#define SSP_CR1_MASK_RXIFLSEL_ST (0x7UL << 7)
#define SSP_CR1_MASK_TXIFLSEL_ST (0x7UL << 10)
#define SSP_CR1_MASK_FBCLKDEL_ST (0x7UL << 13)
#define SSP_SR_MASK_TFE		(0x1UL << 0)
#define SSP_SR_MASK_TNF		(0x1UL << 1)
#define SSP_SR_MASK_RNE		(0x1UL << 2)
#define SSP_SR_MASK_RFF		(0x1UL << 3)
#define SSP_SR_MASK_BSY		(0x1UL << 4)
#define SSP_CPSR_MASK_CPSDVSR	(0xFFUL << 0)
#define SSP_IMSC_MASK_RORIM (0x1UL << 0)
#define SSP_IMSC_MASK_RTIM  (0x1UL << 1)
#define SSP_IMSC_MASK_RXIM  (0x1UL << 2)
#define SSP_IMSC_MASK_TXIM  (0x1UL << 3)
#define SSP_RIS_MASK_RORRIS		(0x1UL << 0)
#define SSP_RIS_MASK_RTRIS		(0x1UL << 1)
#define SSP_RIS_MASK_RXRIS		(0x1UL << 2)
#define SSP_RIS_MASK_TXRIS		(0x1UL << 3)
#define SSP_MIS_MASK_RORMIS		(0x1UL << 0)
#define SSP_MIS_MASK_RTMIS		(0x1UL << 1)
#define SSP_MIS_MASK_RXMIS		(0x1UL << 2)
#define SSP_MIS_MASK_TXMIS		(0x1UL << 3)
#define SSP_ICR_MASK_RORIC		(0x1UL << 0)
#define SSP_ICR_MASK_RTIC		(0x1UL << 1)
#define SSP_DMACR_MASK_RXDMAE		(0x1UL << 0)
#define SSP_DMACR_MASK_TXDMAE		(0x1UL << 1)
#define SSP_ITCR_MASK_ITEN		(0x1UL << 0)
#define SSP_ITCR_MASK_TESTFIFO		(0x1UL << 1)
#define ITIP_MASK_SSPRXD		 (0x1UL << 0)
#define ITIP_MASK_SSPFSSIN		 (0x1UL << 1)
#define ITIP_MASK_SSPCLKIN		 (0x1UL << 2)
#define ITIP_MASK_RXDMAC		 (0x1UL << 3)
#define ITIP_MASK_TXDMAC		 (0x1UL << 4)
#define ITIP_MASK_SSPTXDIN		 (0x1UL << 5)
#define ITOP_MASK_SSPTXD		 (0x1UL << 0)
#define ITOP_MASK_SSPFSSOUT		 (0x1UL << 1)
#define ITOP_MASK_SSPCLKOUT		 (0x1UL << 2)
#define ITOP_MASK_SSPOEn		 (0x1UL << 3)
#define ITOP_MASK_SSPCTLOEn		 (0x1UL << 4)
#define ITOP_MASK_RORINTR		 (0x1UL << 5)
#define ITOP_MASK_RTINTR		 (0x1UL << 6)
#define ITOP_MASK_RXINTR		 (0x1UL << 7)
#define ITOP_MASK_TXINTR		 (0x1UL << 8)
#define ITOP_MASK_INTR			 (0x1UL << 9)
#define ITOP_MASK_RXDMABREQ		 (0x1UL << 10)
#define ITOP_MASK_RXDMASREQ		 (0x1UL << 11)
#define ITOP_MASK_TXDMABREQ		 (0x1UL << 12)
#define ITOP_MASK_TXDMASREQ		 (0x1UL << 13)
#define TDR_MASK_TESTDATA		(0xFFFFFFFF)
#define STATE_START			((void *) 0)
#define STATE_RUNNING			((void *) 1)
#define STATE_DONE			((void *) 2)
#define STATE_ERROR			((void *) -1)
#define SSP_DISABLED			(0)
#define SSP_ENABLED			(1)
#define SSP_DMA_DISABLED		(0)
#define SSP_DMA_ENABLED			(1)
#define SSP_DEFAULT_CLKRATE 0x2
#define SSP_DEFAULT_PRESCALE 0x40
#define CPSDVR_MIN 0x02
#define CPSDVR_MAX 0xFE
#define SCR_MIN 0x00
#define SCR_MAX 0xFF
#define DEFAULT_SSP_REG_IMSC  0x0UL
#define DISABLE_ALL_INTERRUPTS DEFAULT_SSP_REG_IMSC
#define ENABLE_ALL_INTERRUPTS (~DEFAULT_SSP_REG_IMSC)
#define CLEAR_ALL_INTERRUPTS  0x3
#define SPI_POLLING_TIMEOUT 1000
enum ssp_reading ;
enum ssp_writing ;
struct vendor_data ;
struct pl022 ;
struct chip_data ;
static void null_cs_control(u32 command)
static void giveback(struct pl022 *pl022)
static int flush(struct pl022 *pl022)
static void restore_state(struct pl022 *pl022)
#define DEFAULT_SSP_REG_CR0 ( \
GEN_MASK_BITS(SSP_DATA_BITS_12, SSP_CR0_MASK_DSS, 0)	| \
GEN_MASK_BITS(SSP_INTERFACE_MOTOROLA_SPI, SSP_CR0_MASK_FRF, 4) | \
GEN_MASK_BITS(SSP_CLK_POL_IDLE_LOW, SSP_CR0_MASK_SPO, 6) | \
GEN_MASK_BITS(SSP_CLK_SECOND_EDGE, SSP_CR0_MASK_SPH, 7) | \
GEN_MASK_BITS(SSP_DEFAULT_CLKRATE, SSP_CR0_MASK_SCR, 8) \
)
#define DEFAULT_SSP_REG_CR0_ST ( \
GEN_MASK_BITS(SSP_DATA_BITS_12, SSP_CR0_MASK_DSS_ST, 0)	| \
GEN_MASK_BITS(SSP_MICROWIRE_CHANNEL_FULL_DUPLEX, SSP_CR0_MASK_HALFDUP_ST, 5) | \
GEN_MASK_BITS(SSP_CLK_POL_IDLE_LOW, SSP_CR0_MASK_SPO, 6) | \
GEN_MASK_BITS(SSP_CLK_SECOND_EDGE, SSP_CR0_MASK_SPH, 7) | \
GEN_MASK_BITS(SSP_DEFAULT_CLKRATE, SSP_CR0_MASK_SCR, 8) | \
GEN_MASK_BITS(SSP_BITS_8, SSP_CR0_MASK_CSS_ST, 16)	| \
GEN_MASK_BITS(SSP_INTERFACE_MOTOROLA_SPI, SSP_CR0_MASK_FRF_ST, 21) \
)
#define DEFAULT_SSP_REG_CR0_ST_PL023 ( \
GEN_MASK_BITS(SSP_DATA_BITS_12, SSP_CR0_MASK_DSS_ST, 0)	| \
GEN_MASK_BITS(SSP_CLK_POL_IDLE_LOW, SSP_CR0_MASK_SPO, 6) | \
GEN_MASK_BITS(SSP_CLK_SECOND_EDGE, SSP_CR0_MASK_SPH, 7) | \
GEN_MASK_BITS(SSP_DEFAULT_CLKRATE, SSP_CR0_MASK_SCR, 8) \
)
#define DEFAULT_SSP_REG_CR1 ( \
GEN_MASK_BITS(LOOPBACK_DISABLED, SSP_CR1_MASK_LBM, 0) | \
GEN_MASK_BITS(SSP_DISABLED, SSP_CR1_MASK_SSE, 1) | \
GEN_MASK_BITS(SSP_MASTER, SSP_CR1_MASK_MS, 2) | \
GEN_MASK_BITS(DO_NOT_DRIVE_TX, SSP_CR1_MASK_SOD, 3) \
)
#define DEFAULT_SSP_REG_CR1_ST ( \
DEFAULT_SSP_REG_CR1 | \
GEN_MASK_BITS(SSP_RX_MSB, SSP_CR1_MASK_RENDN_ST, 4) | \
GEN_MASK_BITS(SSP_TX_MSB, SSP_CR1_MASK_TENDN_ST, 5) | \
GEN_MASK_BITS(SSP_MWIRE_WAIT_ZERO, SSP_CR1_MASK_MWAIT_ST, 6) |\
GEN_MASK_BITS(SSP_RX_1_OR_MORE_ELEM, SSP_CR1_MASK_RXIFLSEL_ST, 7) | \
GEN_MASK_BITS(SSP_TX_1_OR_MORE_EMPTY_LOC, SSP_CR1_MASK_TXIFLSEL_ST, 10) \
)
#define DEFAULT_SSP_REG_CR1_ST_PL023 ( \
GEN_MASK_BITS(SSP_DISABLED, SSP_CR1_MASK_SSE, 1) | \
GEN_MASK_BITS(SSP_MASTER, SSP_CR1_MASK_MS, 2) | \
GEN_MASK_BITS(DO_NOT_DRIVE_TX, SSP_CR1_MASK_SOD, 3) | \
GEN_MASK_BITS(SSP_RX_MSB, SSP_CR1_MASK_RENDN_ST, 4) | \
GEN_MASK_BITS(SSP_TX_MSB, SSP_CR1_MASK_TENDN_ST, 5) | \
GEN_MASK_BITS(SSP_RX_1_OR_MORE_ELEM, SSP_CR1_MASK_RXIFLSEL_ST, 7) | \
GEN_MASK_BITS(SSP_TX_1_OR_MORE_EMPTY_LOC, SSP_CR1_MASK_TXIFLSEL_ST, 10) | \
GEN_MASK_BITS(SSP_FEEDBACK_CLK_DELAY_NONE, SSP_CR1_MASK_FBCLKDEL_ST, 13) \
)
#define DEFAULT_SSP_REG_CPSR ( \
GEN_MASK_BITS(SSP_DEFAULT_PRESCALE, SSP_CPSR_MASK_CPSDVSR, 0) \
)
#define DEFAULT_SSP_REG_DMACR (\
GEN_MASK_BITS(SSP_DMA_DISABLED, SSP_DMACR_MASK_RXDMAE, 0) | \
GEN_MASK_BITS(SSP_DMA_DISABLED, SSP_DMACR_MASK_TXDMAE, 1) \
)
static void load_ssp_default_config(struct pl022 *pl022)
static void readwriter(struct pl022 *pl022)
static void *next_transfer(struct pl022 *pl022)
static void unmap_free_dma_scatter(struct pl022 *pl022)
static void dma_callback(void *data)
static void setup_dma_scatter(struct pl022 *pl022,
void *buffer,
unsigned int length,
struct sg_table *sgtab)
static int configure_dma(struct pl022 *pl022)
static int __init pl022_dma_probe(struct pl022 *pl022)
static void terminate_dma(struct pl022 *pl022)
static void pl022_dma_remove(struct pl022 *pl022)
static inline int configure_dma(struct pl022 *pl022)
static inline int pl022_dma_probe(struct pl022 *pl022)
static inline void pl022_dma_remove(struct pl022 *pl022)
static irqreturn_t pl022_interrupt_handler(int irq, void *dev_id)
static int set_up_next_transfer(struct pl022 *pl022,
struct spi_transfer *transfer)
static void pump_transfers(unsigned long data)
static void do_interrupt_dma_transfer(struct pl022 *pl022)
static void do_polling_transfer(struct pl022 *pl022)
static void pump_messages(struct work_struct *work)
static int __init init_queue(struct pl022 *pl022)
static int start_queue(struct pl022 *pl022)
static int stop_queue(struct pl022 *pl022)
static int destroy_queue(struct pl022 *pl022)
static int verify_controller_parameters(struct pl022 *pl022,
struct pl022_config_chip const *chip_info)
static int pl022_transfer(struct spi_device *spi, struct spi_message *msg)
static int calculate_effective_freq(struct pl022 *pl022,
int freq,
struct ssp_clock_params *clk_freq)
static const struct pl022_config_chip pl022_default_chip_info = ;
static int pl022_setup(struct spi_device *spi)
static void pl022_cleanup(struct spi_device *spi)
static int __devinit
pl022_probe(struct amba_device *adev, const struct amba_id *id)
static int __devexit
pl022_remove(struct amba_device *adev)
static int pl022_suspend(struct amba_device *adev, pm_message_t state)
static int pl022_resume(struct amba_device *adev)
#define pl022_suspend NULL
#define pl022_resume NULL
static struct vendor_data vendor_arm = ;
static struct vendor_data vendor_st = ;
static struct vendor_data vendor_st_pl023 = ;
static struct vendor_data vendor_db5500_pl023 = ;
static struct amba_id pl022_ids[] = ;
static struct amba_driver pl022_driver = ;
static int __init pl022_init(void)
subsys_initcall(pl022_init);
static void __exit pl022_exit(void)
module_exit(pl022_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("PL022 SSP Controller Driver");
MODULE_LICENSE("GPL");
