static char *revision = "$Revision: 1.1.2.3 $";
#undef AVM_B1DMA_DEBUG
MODULE_DESCRIPTION("CAPI4Linux: DMA support for active AVM cards");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static int suppress_pollack = 0;
module_param(suppress_pollack, bool, 0);
static void b1dma_dispatch_tx(avmcard *card);
#define	AMCC_RXPTR	0x24
#define	AMCC_RXLEN	0x28
#define	AMCC_TXPTR	0x2c
#define	AMCC_TXLEN	0x30
#define	AMCC_INTCSR	0x38
#	define EN_READ_TC_INT		0x00008000L
#	define EN_WRITE_TC_INT		0x00004000L
#	define EN_TX_TC_INT		EN_READ_TC_INT
#	define EN_RX_TC_INT		EN_WRITE_TC_INT
#	define AVM_FLAG			0x30000000L
#	define ANY_S5933_INT		0x00800000L
#	define READ_TC_INT		0x00080000L
#	define WRITE_TC_INT		0x00040000L
#	define	TX_TC_INT		READ_TC_INT
#	define	RX_TC_INT		WRITE_TC_INT
#	define MASTER_ABORT_INT		0x00100000L
#	define TARGET_ABORT_INT		0x00200000L
#	define BUS_MASTER_INT		0x00200000L
#	define ALL_INT			0x000C0000L
#define	AMCC_MCSR	0x3c
#	define A2P_HI_PRIORITY		0x00000100L
#	define EN_A2P_TRANSFERS		0x00000400L
#	define P2A_HI_PRIORITY		0x00001000L
#	define EN_P2A_TRANSFERS		0x00004000L
#	define RESET_A2P_FLAGS		0x04000000L
#	define RESET_P2A_FLAGS		0x02000000L
static inline void b1dma_writel(avmcard *card, u32 value, int off)
static inline u32 b1dma_readl(avmcard *card, int off)
static inline int b1dma_tx_empty(unsigned int port)
static inline int b1dma_rx_full(unsigned int port)
static int b1dma_tolink(avmcard *card, void *buf, unsigned int len)
static int b1dma_fromlink(avmcard *card, void *buf, unsigned int len)
static int WriteReg(avmcard *card, u32 reg, u8 val)
static u8 ReadReg(avmcard *card, u32 reg)
static inline void _put_byte(void **pp, u8 val)
static inline void _put_word(void **pp, u32 val)
static inline void _put_slice(void **pp, unsigned char *dp, unsigned int len)
static inline u8 _get_byte(void **pp)
static inline u32 _get_word(void **pp)
static inline u32 _get_slice(void **pp, unsigned char *dp)
void b1dma_reset(avmcard *card)
static int b1dma_detect(avmcard *card)
int t1pci_detect(avmcard *card)
int b1pciv4_detect(avmcard *card)
static void b1dma_queue_tx(avmcard *card, struct sk_buff *skb)
static void b1dma_dispatch_tx(avmcard *card)
static void queue_pollack(avmcard *card)
static void b1dma_handle_rx(avmcard *card)
static void b1dma_handle_interrupt(avmcard *card)
irqreturn_t b1dma_interrupt(int interrupt, void *devptr)
static int b1dma_loaded(avmcard *card)
static void b1dma_send_init(avmcard *card)
int b1dma_load_firmware(struct capi_ctr *ctrl, capiloaddata *data)
void b1dma_reset_ctr(struct capi_ctr *ctrl)
void b1dma_register_appl(struct capi_ctr *ctrl,
u16 appl,
capi_register_params *rp)
void b1dma_release_appl(struct capi_ctr *ctrl, u16 appl)
u16 b1dma_send_message(struct capi_ctr *ctrl, struct sk_buff *skb)
static int b1dmactl_proc_show(struct seq_file *m, void *v)
static int b1dmactl_proc_open(struct inode *inode, struct file *file)
const struct file_operations b1dmactl_proc_fops = ;
EXPORT_SYMBOL(b1dmactl_proc_fops);
EXPORT_SYMBOL(b1dma_reset);
EXPORT_SYMBOL(t1pci_detect);
EXPORT_SYMBOL(b1pciv4_detect);
EXPORT_SYMBOL(b1dma_interrupt);
EXPORT_SYMBOL(b1dma_load_firmware);
EXPORT_SYMBOL(b1dma_reset_ctr);
EXPORT_SYMBOL(b1dma_register_appl);
EXPORT_SYMBOL(b1dma_release_appl);
EXPORT_SYMBOL(b1dma_send_message);
static int __init b1dma_init(void)
static void __exit b1dma_exit(void)
module_init(b1dma_init);
module_exit(b1dma_exit);
