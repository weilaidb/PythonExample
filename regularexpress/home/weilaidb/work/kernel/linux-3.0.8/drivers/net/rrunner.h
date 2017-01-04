#define _RRUNNER_H_
#if ((BITS_PER_LONG != 32) && (BITS_PER_LONG != 64))
#error "BITS_PER_LONG not defined or not valid"
struct rr_regs ;
#define RR_INT		0x01
#define RR_CLEAR_INT	0x02
#define NO_SWAP		0x04000004
#define NO_SWAP1	0x00000004
#define PCI_RESET_NIC	0x08
#define HALT_NIC	0x10
#define SSTEP_NIC	0x20
#define MEM_READ_MULTI	0x40
#define NIC_HALTED	0x100
#define HALT_INST	0x200
#define PARITY_ERR	0x400
#define INVALID_INST_B	0x800
#define RR_REV_2	0x20000000
#define RR_REV_MASK	0xf0000000
#define INTA_STATE		0x01
#define CLEAR_INTA		0x02
#define FAST_EEPROM_ACCESS	0x08
#define ENABLE_EXTRA_SRAM	0x100
#define ENABLE_EXTRA_DESC	0x200
#define ENABLE_PARITY		0x400
#define FORCE_DMA_PARITY_ERROR	0x800
#define ENABLE_EEPROM_WRITE	0x1000
#define ENABLE_DATA_CACHE	0x2000
#define SRAM_LO_PARITY_ERR	0x4000
#define SRAM_HI_PARITY_ERR	0x8000
#define FORCE_PCI_RESET		0x01
#define PROVIDE_LENGTH		0x02
#define MASK_DMA_READ_MAX	0x1C
#define RBURST_DISABLE		0x00
#define RBURST_4		0x04
#define RBURST_16		0x08
#define RBURST_32		0x0C
#define RBURST_64		0x10
#define RBURST_128		0x14
#define RBURST_256		0x18
#define RBURST_1024		0x1C
#define MASK_DMA_WRITE_MAX	0xE0
#define WBURST_DISABLE		0x00
#define WBURST_4		0x20
#define WBURST_16		0x40
#define WBURST_32		0x60
#define WBURST_64		0x80
#define WBURST_128		0xa0
#define WBURST_256		0xc0
#define WBURST_1024		0xe0
#define MASK_MIN_DMA		0xFF00
#define FIFO_RETRY_ENABLE	0x10000
#define DMA_WRITE_DONE		0x10000
#define DMA_READ_DONE		0x20000
#define DMA_WRITE_ERR		0x40000
#define DMA_READ_ERR		0x80000
#define ENABLE_NEW_CON		0x01
#define RESET_RECV		0x02
#define RECV_ALL		0x00
#define RECV_1K			0x20
#define RECV_2K			0x40
#define RECV_4K			0x60
#define RECV_8K			0x80
#define RECV_16K		0xa0
#define RECV_32K		0xc0
#define RECV_64K		0xe0
#define ENA_XMIT		0x01
#define PERM_CON		0x02
#define RESET_DMA		0x01
#define NO_SWAP_DMA		0x02
#define DMA_ACTIVE		0x04
#define THRESH_MASK		0x1F
#define DMA_ERROR_MASK		0xff000000
#define TRACE_ON_WHAT_BIT	0x00020000
#define ONEM_BUF_WHAT_BIT	0x00040000
#define CHAR_API_WHAT_BIT	0x00080000
#define CMD_EVT_WHAT_BIT	0x00200000
#define LONG_TX_WHAT_BIT	0x00400000
#define LONG_RX_WHAT_BIT	0x00800000
#define WHAT_BIT_MASK		0xFFFD0000
#define EVENT_OVFL		0x80000000
#define FATAL_ERR		0x40000000
#define LOOP_BACK		0x01
#define MODE_PH			0x02
#define MODE_FP			0x00
#define PTR64BIT		0x04
#define PTR32BIT		0x00
#define PTR_WD_SWAP		0x08
#define PTR_WD_NOSWAP		0x00
#define POST_WARN_EVENT		0x10
#define ERR_TERM		0x20
#define DIRECT_CONN		0x40
#define NO_NIC_WATCHDOG		0x80
#define SWAP_DATA		0x100
#define SWAP_CONTROL		0x200
#define NIC_HALT_ON_ERR		0x400
#define NIC_NO_RESTART		0x800
#define HALF_DUP_TX		0x1000
#define HALF_DUP_RX		0x2000
#define ERR_UNKNOWN_MBOX	0x1001
#define ERR_UNKNOWN_CMD		0x1002
#define ERR_MAX_RING		0x1003
#define ERR_RING_CLOSED		0x1004
#define ERR_RING_OPEN		0x1005
#define ERR_EVENT_RING_FULL	0x01
#define ERR_DW_PEND_CMND_FULL	0x02
#define ERR_DR_PEND_CMND_FULL	0x03
#define ERR_DW_PEND_DATA_FULL	0x04
#define ERR_DR_PEND_DATA_FULL	0x05
#define ERR_ILLEGAL_JUMP	0x06
#define ERR_UNIMPLEMENTED	0x07
#define ERR_TX_INFO_FULL	0x08
#define ERR_RX_INFO_FULL	0x09
#define ERR_ILLEGAL_MODE	0x0A
#define ERR_MAIN_TIMEOUT	0x0B
#define ERR_EVENT_BITS		0x0C
#define ERR_UNPEND_FULL		0x0D
#define ERR_TIMER_QUEUE_FULL	0x0E
#define ERR_TIMER_QUEUE_EMPTY	0x0F
#define ERR_TIMER_NO_FREE	0x10
#define ERR_INTR_START		0x11
#define ERR_BAD_STARTUP		0x12
#define ERR_NO_PKT_END		0x13
#define ERR_HALTED_ON_ERR	0x14
#define ERR_WRITE_DMA		0x0101
#define ERR_READ_DMA		0x0102
#define ERR_EXT_SERIAL		0x0103
#define ERR_TX_INT_PARITY	0x0104
#define EVT_RING_ENTRIES	64
#define EVT_RING_SIZE		(EVT_RING_ENTRIES * sizeof(struct event))
struct event ;
#define E_NIC_UP	0x01
#define E_WATCHDOG	0x02
#define E_STAT_UPD	0x04
#define E_INVAL_CMD	0x05
#define E_SET_CMD_CONS	0x06
#define E_LINK_ON	0x07
#define E_LINK_OFF	0x08
#define E_INTERN_ERR	0x09
#define E_HOST_ERR	0x0A
#define E_STATS_UPDATE	0x0B
#define E_REJECTING	0x0C
#define E_CON_REJ	0x13
#define E_CON_TMOUT	0x14
#define E_CON_NC_TMOUT	0x15
#define E_DISC_ERR	0x16
#define E_INT_PRTY	0x17
#define E_TX_IDLE	0x18
#define E_TX_LINK_DROP	0x19
#define E_TX_INV_RNG	0x1A
#define E_TX_INV_BUF	0x1B
#define E_TX_INV_DSC	0x1C
#define E_VAL_RNG	0x20
#define E_RX_RNG_ENER	0x21
#define E_INV_RNG	0x22
#define E_RX_RNG_SPC	0x23
#define E_RX_RNG_OUT	0x24
#define E_PKT_DISCARD	0x25
#define E_INFO_EVT	0x27
#define E_RX_PAR_ERR	0x2B
#define E_RX_LLRC_ERR	0x2C
#define E_IP_CKSM_ERR	0x2D
#define E_DTA_CKSM_ERR	0x2E
#define E_SHT_BST	0x2F
#define E_LST_LNK_ERR	0x30
#define E_FLG_SYN_ERR	0x31
#define E_FRM_ERR	0x32
#define E_RX_IDLE	0x33
#define E_PKT_LN_ERR	0x34
#define E_STATE_ERR	0x35
#define E_UNEXP_DATA	0x3C
#define E_RX_INV_BUF	0x36
#define E_RX_INV_DSC	0x37
#define E_RNG_BLK	0x38
#define E_RX_TO		0x39
#define E_BFR_SPC	0x3A
#define E_INV_ULP	0x3B
#define E_NOT_IMPLEMENTED 0x40
#define CMD_RING_ENTRIES	16
struct cmd ;
#define C_START_FW	0x01
#define C_UPD_STAT	0x02
#define C_WATCHDOG	0x05
#define C_DEL_RNG	0x09
#define C_NEW_RNG	0x0A
#define C_CONN		0x0D
#define  PACKET_BAD		0x01
#define  INTERRUPT		0x02
#define  TX_IP_CKSUM		0x04
#define  PACKET_END		0x08
#define  PACKET_START		0x10
#define  SAME_IFIELD		0x80
typedef struct  rraddr;
static inline void set_rraddr(rraddr *ra, dma_addr_t addr)
static inline void set_rxaddr(struct rr_regs __iomem *regs, volatile dma_addr_t addr)
static inline void set_infoaddr(struct rr_regs __iomem *regs, volatile dma_addr_t addr)
#define TX_RING_ENTRIES	32
#define TX_RING_ENTRIES	16
#define TX_TOTAL_SIZE	(TX_RING_ENTRIES * sizeof(struct tx_desc))
struct tx_desc;
#define RX_RING_ENTRIES	32
#define RX_RING_ENTRIES 16
#define RX_TOTAL_SIZE	(RX_RING_ENTRIES * sizeof(struct rx_desc))
struct rx_desc;
#define SIOCRRPFW	SIOCDEVPRIVATE
#define SIOCRRGFW	SIOCDEVPRIVATE+1
#define SIOCRRID	SIOCDEVPRIVATE+2
struct seg_hdr ;
#define EEPROM_BASE 0x80000000
#define EEPROM_WORDS 8192
#define EEPROM_BYTES (EEPROM_WORDS * sizeof(u32))
struct eeprom_boot ;
struct eeprom_manf ;
struct eeprom_phase_info ;
struct eeprom_rncd_info ;
struct phase1_hdr;
struct eeprom ;
struct rr_stats ;
struct ring_ctrl ;
struct rr_info ;
struct rr_private
;
static int rr_init(struct net_device *dev);
static int rr_init1(struct net_device *dev);
static irqreturn_t rr_interrupt(int irq, void *dev_id);
static int rr_open(struct net_device *dev);
static netdev_tx_t rr_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int rr_close(struct net_device *dev);
static int rr_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static unsigned int rr_read_eeprom(struct rr_private *rrpriv,
unsigned long offset,
unsigned char *buf,
unsigned long length);
static u32 rr_read_eeprom_word(struct rr_private *rrpriv, size_t offset);
static int rr_load_firmware(struct net_device *dev);
static inline void rr_raz_tx(struct rr_private *, struct net_device *);
static inline void rr_raz_rx(struct rr_private *, struct net_device *);
