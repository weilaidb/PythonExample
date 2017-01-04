#define NUM_TX_BUF      2
#define NUM_RX_BUF      6
#define BUF_SIZE        1576
#define HW_PI
#define HW_PI2
#define HW_TWIN
#define HW_S5
#define HARDWARE
#define TMR_0_HZ        25600
#define TYPE_PI         0
#define TYPE_PI2        1
#define TYPE_TWIN       2
#define TYPE_S5         3
#define NUM_TYPES       4
#define MAX_NUM_DEVS    32
#define Z8530           0
#define Z85C30          1
#define Z85230          2
#define CHIPNAMES
#define SCCB_CMD        0x00
#define SCCB_DATA       0x01
#define SCCA_CMD        0x02
#define SCCA_DATA       0x03
#define TMR_CNT0        0x00
#define TMR_CNT1        0x01
#define TMR_CNT2        0x02
#define TMR_CTRL        0x03
#define PI_DREQ_MASK    0x04
#define TWIN_INT_REG    0x08
#define TWIN_CLR_TMR1   0x09
#define TWIN_CLR_TMR2   0x0a
#define TWIN_SPARE_1    0x0b
#define TWIN_DMA_CFG    0x08
#define TWIN_SERIAL_CFG 0x09
#define TWIN_DMA_CLR_FF 0x0a
#define TWIN_SPARE_2    0x0b
#define TWIN_SCC_MSK       0x01
#define TWIN_TMR1_MSK      0x02
#define TWIN_TMR2_MSK      0x04
#define TWIN_INT_MSK       0x07
#define TWIN_DTRA_ON       0x01
#define TWIN_DTRB_ON       0x02
#define TWIN_EXTCLKA       0x04
#define TWIN_EXTCLKB       0x08
#define TWIN_LOOPA_ON      0x10
#define TWIN_LOOPB_ON      0x20
#define TWIN_EI            0x80
#define TWIN_DMA_HDX_T1    0x08
#define TWIN_DMA_HDX_R1    0x0a
#define TWIN_DMA_HDX_T3    0x14
#define TWIN_DMA_HDX_R3    0x16
#define TWIN_DMA_FDX_T3R1  0x1b
#define TWIN_DMA_FDX_T1R3  0x1d
#define IDLE      0
#define TX_HEAD   1
#define TX_DATA   2
#define TX_PAUSE  3
#define TX_TAIL   4
#define RTS_OFF   5
#define WAIT      6
#define DCD_ON    7
#define RX_ON     8
#define DCD_OFF   9
#define SIOCGSCCPARAM SIOCDEVPRIVATE
#define SIOCSSCCPARAM (SIOCDEVPRIVATE+1)
struct scc_param ;
struct scc_hardware ;
struct scc_priv ;
struct scc_info ;
static int setup_adapter(int card_base, int type, int n) __init;
static void write_scc(struct scc_priv *priv, int reg, int val);
static void write_scc_data(struct scc_priv *priv, int val, int fast);
static int read_scc(struct scc_priv *priv, int reg);
static int read_scc_data(struct scc_priv *priv);
static int scc_open(struct net_device *dev);
static int scc_close(struct net_device *dev);
static int scc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static int scc_send_packet(struct sk_buff *skb, struct net_device *dev);
static int scc_set_mac_address(struct net_device *dev, void *sa);
static inline void tx_on(struct scc_priv *priv);
static inline void rx_on(struct scc_priv *priv);
static inline void rx_off(struct scc_priv *priv);
static void start_timer(struct scc_priv *priv, int t, int r15);
static inline unsigned char random(void);
static inline void z8530_isr(struct scc_info *info);
static irqreturn_t scc_isr(int irq, void *dev_id);
static void rx_isr(struct scc_priv *priv);
static void special_condition(struct scc_priv *priv, int rc);
static void rx_bh(struct work_struct *);
static void tx_isr(struct scc_priv *priv);
static void es_isr(struct scc_priv *priv);
static void tm_isr(struct scc_priv *priv);
static int io[MAX_NUM_DEVS] __initdata = ;
static struct scc_hardware hw[NUM_TYPES] = HARDWARE;
static struct scc_info *first;
static unsigned long rand;
MODULE_AUTHOR("Klaus Kudielka");
MODULE_DESCRIPTION("Driver for high-speed SCC boards");
module_param_array(io, int, NULL, 0);
MODULE_LICENSE("GPL");
static void __exit dmascc_exit(void)
static int __init dmascc_init(void)
module_init(dmascc_init);
module_exit(dmascc_exit);
static void __init dev_setup(struct net_device *dev)
static const struct net_device_ops scc_netdev_ops = ;
static int __init setup_adapter(int card_base, int type, int n)
static void write_scc(struct scc_priv *priv, int reg, int val)
static void write_scc_data(struct scc_priv *priv, int val, int fast)
static int read_scc(struct scc_priv *priv, int reg)
static int read_scc_data(struct scc_priv *priv)
static int scc_open(struct net_device *dev)
static int scc_close(struct net_device *dev)
static int scc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int scc_send_packet(struct sk_buff *skb, struct net_device *dev)
static int scc_set_mac_address(struct net_device *dev, void *sa)
static inline void tx_on(struct scc_priv *priv)
static inline void rx_on(struct scc_priv *priv)
static inline void rx_off(struct scc_priv *priv)
static void start_timer(struct scc_priv *priv, int t, int r15)
static inline unsigned char random(void)
static inline void z8530_isr(struct scc_info *info)
static irqreturn_t scc_isr(int irq, void *dev_id)
static void rx_isr(struct scc_priv *priv)
static void special_condition(struct scc_priv *priv, int rc)
static void rx_bh(struct work_struct *ugli_api)
static void tx_isr(struct scc_priv *priv)
static void es_isr(struct scc_priv *priv)
static void tm_isr(struct scc_priv *priv)
