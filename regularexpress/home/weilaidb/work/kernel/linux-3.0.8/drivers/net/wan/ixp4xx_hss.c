#define DEBUG_DESC		0
#define DEBUG_RX		0
#define DEBUG_TX		0
#define DEBUG_PKT_BYTES		0
#define DEBUG_CLOSE		0
#define DRV_NAME		"ixp4xx_hss"
#define PKT_EXTRA_FLAGS		0
#define PKT_NUM_PIPES		1
#define PKT_PIPE_FIFO_SIZEW	4
#define RX_DESCS		16
#define TX_DESCS		16
#define POOL_ALLOC_SIZE		(sizeof(struct desc) * (RX_DESCS + TX_DESCS))
#define RX_SIZE			(HDLC_MAX_MRU + 4)
#define MAX_CLOSE_WAIT		1000
#define HSS_COUNT		2
#define FRAME_SIZE		256
#define FRAME_OFFSET		0
#define MAX_CHANNELS		(FRAME_SIZE / 8)
#define NAPI_WEIGHT		16
#define HSS0_CHL_RXTRIG_QUEUE	12
#define HSS0_PKT_RX_QUEUE	13
#define HSS0_PKT_TX0_QUEUE	14
#define HSS0_PKT_TX1_QUEUE	15
#define HSS0_PKT_TX2_QUEUE	16
#define HSS0_PKT_TX3_QUEUE	17
#define HSS0_PKT_RXFREE0_QUEUE	18
#define HSS0_PKT_RXFREE1_QUEUE	19
#define HSS0_PKT_RXFREE2_QUEUE	20
#define HSS0_PKT_RXFREE3_QUEUE	21
#define HSS0_PKT_TXDONE_QUEUE	22
#define HSS1_CHL_RXTRIG_QUEUE	10
#define HSS1_PKT_RX_QUEUE	0
#define HSS1_PKT_TX0_QUEUE	5
#define HSS1_PKT_TX1_QUEUE	6
#define HSS1_PKT_TX2_QUEUE	7
#define HSS1_PKT_TX3_QUEUE	8
#define HSS1_PKT_RXFREE0_QUEUE	1
#define HSS1_PKT_RXFREE1_QUEUE	2
#define HSS1_PKT_RXFREE2_QUEUE	3
#define HSS1_PKT_RXFREE3_QUEUE	4
#define HSS1_PKT_TXDONE_QUEUE	9
#define NPE_PKT_MODE_HDLC		0
#define NPE_PKT_MODE_RAW		1
#define NPE_PKT_MODE_56KMODE		2
#define NPE_PKT_MODE_56KENDIAN_MSB	4
#define PKT_HDLC_IDLE_ONES		0x1
#define PKT_HDLC_CRC_32			0x2
#define PKT_HDLC_MSB_ENDIAN		0x4
#define PCR_FRM_SYNC_ACTIVE_HIGH	0x40000000
#define PCR_FRM_SYNC_FALLINGEDGE	0x80000000
#define PCR_FRM_SYNC_RISINGEDGE		0xC0000000
#define PCR_FRM_SYNC_OUTPUT_FALLING	0x20000000
#define PCR_FRM_SYNC_OUTPUT_RISING	0x30000000
#define PCR_FCLK_EDGE_RISING		0x08000000
#define PCR_DCLK_EDGE_RISING		0x04000000
#define PCR_SYNC_CLK_DIR_OUTPUT		0x02000000
#define PCR_FRM_PULSE_DISABLED		0x01000000
#define PCR_HALF_CLK_RATE		0x00200000
#define PCR_DATA_POLARITY_INVERT	0x00100000
#define PCR_MSB_ENDIAN			0x00080000
#define PCR_TX_PINS_OPEN_DRAIN		0x00040000
#define PCR_SOF_NO_FBIT			0x00020000
#define PCR_TX_DATA_ENABLE		0x00010000
#define PCR_TX_V56K_HIGH		0x00002000
#define PCR_TX_V56K_HIGH_IMP		0x00004000
#define PCR_TX_UNASS_HIGH		0x00000800
#define PCR_TX_UNASS_HIGH_IMP		0x00001000
#define PCR_TX_FB_HIGH_IMP		0x00000400
#define PCR_TX_56KE_BIT_0_UNUSED	0x00000200
#define PCR_TX_56KS_56K_DATA		0x00000100
#define CCR_NPE_HFIFO_2_HDLC		0x04000000
#define CCR_NPE_HFIFO_3_OR_4HDLC	0x08000000
#define CCR_LOOPBACK			0x02000000
#define CCR_SECOND_HSS			0x01000000
#define CLK42X_SPEED_EXP	((0x3FF << 22) | (  2 << 12) |   15)
#define CLK42X_SPEED_512KHZ	((  130 << 22) | (  2 << 12) |   15)
#define CLK42X_SPEED_1536KHZ	((   43 << 22) | ( 18 << 12) |   47)
#define CLK42X_SPEED_1544KHZ	((   43 << 22) | ( 33 << 12) |  192)
#define CLK42X_SPEED_2048KHZ	((   32 << 22) | ( 34 << 12) |   63)
#define CLK42X_SPEED_4096KHZ	((   16 << 22) | ( 34 << 12) |  127)
#define CLK42X_SPEED_8192KHZ	((    8 << 22) | ( 34 << 12) |  255)
#define CLK46X_SPEED_512KHZ	((  130 << 22) | ( 24 << 12) |  127)
#define CLK46X_SPEED_1536KHZ	((   43 << 22) | (152 << 12) |  383)
#define CLK46X_SPEED_1544KHZ	((   43 << 22) | ( 66 << 12) |  385)
#define CLK46X_SPEED_2048KHZ	((   32 << 22) | (280 << 12) |  511)
#define CLK46X_SPEED_4096KHZ	((   16 << 22) | (280 << 12) | 1023)
#define CLK46X_SPEED_8192KHZ	((    8 << 22) | (280 << 12) | 2047)
#define TDMMAP_UNASSIGNED	0
#define TDMMAP_HDLC		1
#define TDMMAP_VOICE56K		2
#define TDMMAP_VOICE64K		3
#define HSS_CONFIG_TX_PCR	0x00
#define HSS_CONFIG_RX_PCR	0x04
#define HSS_CONFIG_CORE_CR	0x08
#define HSS_CONFIG_CLOCK_CR	0x0C
#define HSS_CONFIG_TX_FCR	0x10
#define HSS_CONFIG_RX_FCR	0x14
#define HSS_CONFIG_TX_LUT	0x18
#define HSS_CONFIG_RX_LUT	0x38
#define PORT_CONFIG_WRITE		0x40
#define PORT_CONFIG_LOAD		0x41
#define PORT_ERROR_READ			0x42
#define PKT_PIPE_FLOW_ENABLE		0x50
#define PKT_PIPE_FLOW_DISABLE		0x51
#define PKT_NUM_PIPES_WRITE		0x52
#define PKT_PIPE_FIFO_SIZEW_WRITE	0x53
#define PKT_PIPE_HDLC_CFG_WRITE		0x54
#define PKT_PIPE_IDLE_PATTERN_WRITE	0x55
#define PKT_PIPE_RX_SIZE_WRITE		0x56
#define PKT_PIPE_MODE_WRITE		0x57
#define ERR_SHUTDOWN		1
#define ERR_HDLC_ALIGN		2
#define ERR_HDLC_FCS		3
#define ERR_RXFREE_Q_EMPTY	4
#define ERR_HDLC_TOO_LONG	5
#define ERR_HDLC_ABORT		6
#define ERR_DISCONNECTING	7
typedef struct sk_buff buffer_t;
#define free_buffer dev_kfree_skb
#define free_buffer_irq dev_kfree_skb_irq
typedef void buffer_t;
#define free_buffer kfree
#define free_buffer_irq kfree
struct port ;
struct msg ;
struct desc ;
#define rx_desc_phys(port, n)	((port)->desc_tab_phys +		\
(n) * sizeof(struct desc))
#define rx_desc_ptr(port, n)	(&(port)->desc_tab[n])
#define tx_desc_phys(port, n)	((port)->desc_tab_phys +		\
((n) + RX_DESCS) * sizeof(struct desc))
#define tx_desc_ptr(port, n)	(&(port)->desc_tab[(n) + RX_DESCS])
static int ports_open;
static struct dma_pool *dma_pool;
static spinlock_t npe_lock;
static const struct queue_ids[2] = ;
static inline struct port* dev_to_port(struct net_device *dev)
static inline void memcpy_swab32(u32 *dest, u32 *src, int cnt)
static void hss_npe_send(struct port *port, struct msg *msg, const char* what)
static void hss_config_set_lut(struct port *port)
static void hss_config(struct port *port)
static void hss_set_hdlc_cfg(struct port *port)
static u32 hss_get_status(struct port *port)
static void hss_start_hdlc(struct port *port)
static void hss_stop_hdlc(struct port *port)
static int hss_load_firmware(struct port *port)
static inline void debug_pkt(struct net_device *dev, const char *func,
u8 *data, int len)
static inline void debug_desc(u32 phys, struct desc *desc)
static inline int queue_get_desc(unsigned int queue, struct port *port,
int is_tx)
static inline void queue_put_desc(unsigned int queue, u32 phys,
struct desc *desc)
static inline void dma_unmap_tx(struct port *port, struct desc *desc)
static void hss_hdlc_set_carrier(void *pdev, int carrier)
static void hss_hdlc_rx_irq(void *pdev)
static int hss_hdlc_poll(struct napi_struct *napi, int budget)
static void hss_hdlc_txdone_irq(void *pdev)
static int hss_hdlc_xmit(struct sk_buff *skb, struct net_device *dev)
static int request_hdlc_queues(struct port *port)
static void release_hdlc_queues(struct port *port)
static int init_hdlc_queues(struct port *port)
static void destroy_hdlc_queues(struct port *port)
static int hss_hdlc_open(struct net_device *dev)
static int hss_hdlc_close(struct net_device *dev)
static int hss_hdlc_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static u32 check_clock(u32 rate, u32 a, u32 b, u32 c,
u32 *best, u32 *best_diff, u32 *reg)
static void find_best_clock(u32 rate, u32 *best, u32 *reg)
static int hss_hdlc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static const struct net_device_ops hss_hdlc_ops = ;
static int __devinit hss_init_one(struct platform_device *pdev)
static int __devexit hss_remove_one(struct platform_device *pdev)
static struct platform_driver ixp4xx_hss_driver = ;
static int __init hss_init_module(void)
static void __exit hss_cleanup_module(void)
MODULE_AUTHOR("Krzysztof Halasa");
MODULE_DESCRIPTION("Intel IXP4xx HSS driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:ixp4xx_hss");
module_init(hss_init_module);
module_exit(hss_cleanup_module);
