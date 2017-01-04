#if defined(CONFIG_SERIAL_MPSC_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define	MPSC_NUM_CTLRS		2
#define	MPSC_RXR_ENTRIES	32
#define	MPSC_RXRE_SIZE		dma_get_cache_alignment()
#define	MPSC_RXR_SIZE		(MPSC_RXR_ENTRIES * MPSC_RXRE_SIZE)
#define	MPSC_RXBE_SIZE		dma_get_cache_alignment()
#define	MPSC_RXB_SIZE		(MPSC_RXR_ENTRIES * MPSC_RXBE_SIZE)
#define	MPSC_TXR_ENTRIES	32
#define	MPSC_TXRE_SIZE		dma_get_cache_alignment()
#define	MPSC_TXR_SIZE		(MPSC_TXR_ENTRIES * MPSC_TXRE_SIZE)
#define	MPSC_TXBE_SIZE		dma_get_cache_alignment()
#define	MPSC_TXB_SIZE		(MPSC_TXR_ENTRIES * MPSC_TXBE_SIZE)
#define	MPSC_DMA_ALLOC_SIZE	(MPSC_RXR_SIZE + MPSC_RXB_SIZE + MPSC_TXR_SIZE \
+ MPSC_TXB_SIZE + dma_get_cache_alignment())
struct mpsc_rx_desc  __attribute((packed));
struct mpsc_tx_desc  __attribute((packed));
struct mpsc_shared_regs ;
struct mpsc_port_info ;
int mpsc_platform_register_driver(void);
void mpsc_platform_unregister_driver(void);
struct mpsc_port_info *mpsc_device_probe(int index);
struct mpsc_port_info *mpsc_device_remove(int index);
#define	MPSC_MMCRL			0x0000
#define	MPSC_MMCRH			0x0004
#define	MPSC_MPCR			0x0008
#define	MPSC_CHR_1			0x000c
#define	MPSC_CHR_2			0x0010
#define	MPSC_CHR_3			0x0014
#define	MPSC_CHR_4			0x0018
#define	MPSC_CHR_5			0x001c
#define	MPSC_CHR_6			0x0020
#define	MPSC_CHR_7			0x0024
#define	MPSC_CHR_8			0x0028
#define	MPSC_CHR_9			0x002c
#define	MPSC_CHR_10			0x0030
#define	MPSC_CHR_11			0x0034
#define	MPSC_MPCR_FRZ			(1 << 9)
#define	MPSC_MPCR_CL_5			0
#define	MPSC_MPCR_CL_6			1
#define	MPSC_MPCR_CL_7			2
#define	MPSC_MPCR_CL_8			3
#define	MPSC_MPCR_SBL_1			0
#define	MPSC_MPCR_SBL_2			1
#define	MPSC_CHR_2_TEV			(1<<1)
#define	MPSC_CHR_2_TA			(1<<7)
#define	MPSC_CHR_2_TTCS			(1<<9)
#define	MPSC_CHR_2_REV			(1<<17)
#define	MPSC_CHR_2_RA			(1<<23)
#define	MPSC_CHR_2_CRD			(1<<25)
#define	MPSC_CHR_2_EH			(1<<31)
#define	MPSC_CHR_2_PAR_ODD		0
#define	MPSC_CHR_2_PAR_SPACE		1
#define	MPSC_CHR_2_PAR_EVEN		2
#define	MPSC_CHR_2_PAR_MARK		3
#define	MPSC_MRR			0x0000
#define	MPSC_RCRR			0x0004
#define	MPSC_TCRR			0x0008
#define	SDMA_SDC			0x0000
#define	SDMA_SDCM			0x0008
#define	SDMA_RX_DESC			0x0800
#define	SDMA_RX_BUF_PTR			0x0808
#define	SDMA_SCRDP			0x0810
#define	SDMA_TX_DESC			0x0c00
#define	SDMA_SCTDP			0x0c10
#define	SDMA_SFTDP			0x0c14
#define	SDMA_DESC_CMDSTAT_PE		(1<<0)
#define	SDMA_DESC_CMDSTAT_CDL		(1<<1)
#define	SDMA_DESC_CMDSTAT_FR		(1<<3)
#define	SDMA_DESC_CMDSTAT_OR		(1<<6)
#define	SDMA_DESC_CMDSTAT_BR		(1<<9)
#define	SDMA_DESC_CMDSTAT_MI		(1<<10)
#define	SDMA_DESC_CMDSTAT_A		(1<<11)
#define	SDMA_DESC_CMDSTAT_AM		(1<<12)
#define	SDMA_DESC_CMDSTAT_CT		(1<<13)
#define	SDMA_DESC_CMDSTAT_C		(1<<14)
#define	SDMA_DESC_CMDSTAT_ES		(1<<15)
#define	SDMA_DESC_CMDSTAT_L		(1<<16)
#define	SDMA_DESC_CMDSTAT_F		(1<<17)
#define	SDMA_DESC_CMDSTAT_P		(1<<18)
#define	SDMA_DESC_CMDSTAT_EI		(1<<23)
#define	SDMA_DESC_CMDSTAT_O		(1<<31)
#define SDMA_DESC_DFLT			(SDMA_DESC_CMDSTAT_O \
| SDMA_DESC_CMDSTAT_EI)
#define	SDMA_SDC_RFT			(1<<0)
#define	SDMA_SDC_SFM			(1<<1)
#define	SDMA_SDC_BLMR			(1<<6)
#define	SDMA_SDC_BLMT			(1<<7)
#define	SDMA_SDC_POVR			(1<<8)
#define	SDMA_SDC_RIFB			(1<<9)
#define	SDMA_SDCM_ERD			(1<<7)
#define	SDMA_SDCM_AR			(1<<15)
#define	SDMA_SDCM_STD			(1<<16)
#define	SDMA_SDCM_TXD			(1<<23)
#define	SDMA_SDCM_AT			(1<<31)
#define	SDMA_0_CAUSE_RXBUF		(1<<0)
#define	SDMA_0_CAUSE_RXERR		(1<<1)
#define	SDMA_0_CAUSE_TXBUF		(1<<2)
#define	SDMA_0_CAUSE_TXEND		(1<<3)
#define	SDMA_1_CAUSE_RXBUF		(1<<8)
#define	SDMA_1_CAUSE_RXERR		(1<<9)
#define	SDMA_1_CAUSE_TXBUF		(1<<10)
#define	SDMA_1_CAUSE_TXEND		(1<<11)
#define	SDMA_CAUSE_RX_MASK	(SDMA_0_CAUSE_RXBUF | SDMA_0_CAUSE_RXERR \
| SDMA_1_CAUSE_RXBUF | SDMA_1_CAUSE_RXERR)
#define	SDMA_CAUSE_TX_MASK	(SDMA_0_CAUSE_TXBUF | SDMA_0_CAUSE_TXEND \
| SDMA_1_CAUSE_TXBUF | SDMA_1_CAUSE_TXEND)
#define	SDMA_INTR_CAUSE			0x0000
#define	SDMA_INTR_MASK			0x0080
#define	BRG_BCR				0x0000
#define	BRG_BTR				0x0004
#define MPSC_MAJOR			204
#define MPSC_MINOR_START		44
#define	MPSC_DRIVER_NAME		"MPSC"
#define	MPSC_DEV_NAME			"ttyMM"
#define	MPSC_VERSION			"1.00"
static struct mpsc_port_info mpsc_ports[MPSC_NUM_CTLRS];
static struct mpsc_shared_regs mpsc_shared_regs;
static struct uart_driver mpsc_reg;
static void mpsc_start_rx(struct mpsc_port_info *pi);
static void mpsc_free_ring_mem(struct mpsc_port_info *pi);
static void mpsc_release_port(struct uart_port *port);
static void mpsc_brg_init(struct mpsc_port_info *pi, u32 clk_src)
static void mpsc_brg_enable(struct mpsc_port_info *pi)
static void mpsc_brg_disable(struct mpsc_port_info *pi)
static void mpsc_set_baudrate(struct mpsc_port_info *pi, u32 baud)
static void mpsc_sdma_burstsize(struct mpsc_port_info *pi, u32 burst_size)
static void mpsc_sdma_init(struct mpsc_port_info *pi, u32 burst_size)
static u32 mpsc_sdma_intr_mask(struct mpsc_port_info *pi, u32 mask)
static void mpsc_sdma_intr_unmask(struct mpsc_port_info *pi, u32 mask)
static void mpsc_sdma_intr_ack(struct mpsc_port_info *pi)
static void mpsc_sdma_set_rx_ring(struct mpsc_port_info *pi,
struct mpsc_rx_desc *rxre_p)
static void mpsc_sdma_set_tx_ring(struct mpsc_port_info *pi,
struct mpsc_tx_desc *txre_p)
static void mpsc_sdma_cmd(struct mpsc_port_info *pi, u32 val)
static uint mpsc_sdma_tx_active(struct mpsc_port_info *pi)
static void mpsc_sdma_start_tx(struct mpsc_port_info *pi)
static void mpsc_sdma_stop(struct mpsc_port_info *pi)
static void mpsc_hw_init(struct mpsc_port_info *pi)
static void mpsc_enter_hunt(struct mpsc_port_info *pi)
static void mpsc_freeze(struct mpsc_port_info *pi)
static void mpsc_unfreeze(struct mpsc_port_info *pi)
static void mpsc_set_char_length(struct mpsc_port_info *pi, u32 len)
static void mpsc_set_stop_bit_length(struct mpsc_port_info *pi, u32 len)
static void mpsc_set_parity(struct mpsc_port_info *pi, u32 p)
static void mpsc_init_hw(struct mpsc_port_info *pi)
static int mpsc_alloc_ring_mem(struct mpsc_port_info *pi)
static void mpsc_free_ring_mem(struct mpsc_port_info *pi)
static void mpsc_init_rings(struct mpsc_port_info *pi)
static void mpsc_uninit_rings(struct mpsc_port_info *pi)
static int mpsc_make_ready(struct mpsc_port_info *pi)
static int serial_polled;
static int mpsc_rx_intr(struct mpsc_port_info *pi)
static void mpsc_setup_tx_desc(struct mpsc_port_info *pi, u32 count, u32 intr)
static void mpsc_copy_tx_data(struct mpsc_port_info *pi)
static int mpsc_tx_intr(struct mpsc_port_info *pi)
static irqreturn_t mpsc_sdma_intr(int irq, void *dev_id)
static uint mpsc_tx_empty(struct uart_port *port)
static void mpsc_set_mctrl(struct uart_port *port, uint mctrl)
static uint mpsc_get_mctrl(struct uart_port *port)
static void mpsc_stop_tx(struct uart_port *port)
static void mpsc_start_tx(struct uart_port *port)
static void mpsc_start_rx(struct mpsc_port_info *pi)
static void mpsc_stop_rx(struct uart_port *port)
static void mpsc_enable_ms(struct uart_port *port)
static void mpsc_break_ctl(struct uart_port *port, int ctl)
static int mpsc_startup(struct uart_port *port)
static void mpsc_shutdown(struct uart_port *port)
static void mpsc_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *mpsc_type(struct uart_port *port)
static int mpsc_request_port(struct uart_port *port)
static void mpsc_release_port(struct uart_port *port)
static void mpsc_config_port(struct uart_port *port, int flags)
static int mpsc_verify_port(struct uart_port *port, struct serial_struct *ser)
static char poll_buf[2048];
static int poll_ptr;
static int poll_cnt;
static void mpsc_put_poll_char(struct uart_port *port,
unsigned char c);
static int mpsc_get_poll_char(struct uart_port *port)
static void mpsc_put_poll_char(struct uart_port *port,
unsigned char c)
static struct uart_ops mpsc_pops = ;
static void mpsc_console_write(struct console *co, const char *s, uint count)
static int __init mpsc_console_setup(struct console *co, char *options)
static struct console mpsc_console = ;
static int __init mpsc_late_console_init(void)
late_initcall(mpsc_late_console_init);
#define MPSC_CONSOLE	&mpsc_console
#define MPSC_CONSOLE	NULL
static void mpsc_resource_err(char *s)
static int mpsc_shared_map_regs(struct platform_device *pd)
static void mpsc_shared_unmap_regs(void)
static int mpsc_shared_drv_probe(struct platform_device *dev)
static int mpsc_shared_drv_remove(struct platform_device *dev)
static struct platform_driver mpsc_shared_driver = ;
static struct uart_driver mpsc_reg = ;
static int mpsc_drv_map_regs(struct mpsc_port_info *pi,
struct platform_device *pd)
static void mpsc_drv_unmap_regs(struct mpsc_port_info *pi)
static void mpsc_drv_get_platform_data(struct mpsc_port_info *pi,
struct platform_device *pd, int num)
static int mpsc_drv_probe(struct platform_device *dev)
static int mpsc_drv_remove(struct platform_device *dev)
static struct platform_driver mpsc_driver = ;
static int __init mpsc_drv_init(void)
static void __exit mpsc_drv_exit(void)
module_init(mpsc_drv_init);
module_exit(mpsc_drv_exit);
MODULE_AUTHOR("Mark A. Greer <mgreer@mvista.com>");
MODULE_DESCRIPTION("Generic Marvell MPSC serial/UART driver");
MODULE_VERSION(MPSC_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(MPSC_MAJOR);
MODULE_ALIAS("platform:" MPSC_CTLR_NAME);
