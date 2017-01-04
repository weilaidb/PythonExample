#define INSTRUCTION_WRITE	0x02
#define INSTRUCTION_READ	0x03
#define INSTRUCTION_BIT_MODIFY	0x05
#define INSTRUCTION_LOAD_TXB(n)	(0x40 + 2 * (n))
#define INSTRUCTION_READ_RXB(n)	(((n) == 0) ? 0x90 : 0x94)
#define INSTRUCTION_RESET	0xC0
#define CANSTAT	      0x0e
#define CANCTRL	      0x0f
#  define CANCTRL_REQOP_MASK	    0xe0
#  define CANCTRL_REQOP_CONF	    0x80
#  define CANCTRL_REQOP_LISTEN_ONLY 0x60
#  define CANCTRL_REQOP_LOOPBACK    0x40
#  define CANCTRL_REQOP_SLEEP	    0x20
#  define CANCTRL_REQOP_NORMAL	    0x00
#  define CANCTRL_OSM		    0x08
#  define CANCTRL_ABAT		    0x10
#define TEC	      0x1c
#define REC	      0x1d
#define CNF1	      0x2a
#  define CNF1_SJW_SHIFT   6
#define CNF2	      0x29
#  define CNF2_BTLMODE	   0x80
#  define CNF2_SAM         0x40
#  define CNF2_PS1_SHIFT   3
#define CNF3	      0x28
#  define CNF3_SOF	   0x08
#  define CNF3_WAKFIL	   0x04
#  define CNF3_PHSEG2_MASK 0x07
#define CANINTE	      0x2b
#  define CANINTE_MERRE 0x80
#  define CANINTE_WAKIE 0x40
#  define CANINTE_ERRIE 0x20
#  define CANINTE_TX2IE 0x10
#  define CANINTE_TX1IE 0x08
#  define CANINTE_TX0IE 0x04
#  define CANINTE_RX1IE 0x02
#  define CANINTE_RX0IE 0x01
#define CANINTF	      0x2c
#  define CANINTF_MERRF 0x80
#  define CANINTF_WAKIF 0x40
#  define CANINTF_ERRIF 0x20
#  define CANINTF_TX2IF 0x10
#  define CANINTF_TX1IF 0x08
#  define CANINTF_TX0IF 0x04
#  define CANINTF_RX1IF 0x02
#  define CANINTF_RX0IF 0x01
#  define CANINTF_RX (CANINTF_RX0IF | CANINTF_RX1IF)
#  define CANINTF_TX (CANINTF_TX2IF | CANINTF_TX1IF | CANINTF_TX0IF)
#  define CANINTF_ERR (CANINTF_ERRIF)
#define EFLG	      0x2d
#  define EFLG_EWARN	0x01
#  define EFLG_RXWAR	0x02
#  define EFLG_TXWAR	0x04
#  define EFLG_RXEP	0x08
#  define EFLG_TXEP	0x10
#  define EFLG_TXBO	0x20
#  define EFLG_RX0OVR	0x40
#  define EFLG_RX1OVR	0x80
#define TXBCTRL(n)  (((n) * 0x10) + 0x30 + TXBCTRL_OFF)
#  define TXBCTRL_ABTF	0x40
#  define TXBCTRL_MLOA	0x20
#  define TXBCTRL_TXERR 0x10
#  define TXBCTRL_TXREQ 0x08
#define TXBSIDH(n)  (((n) * 0x10) + 0x30 + TXBSIDH_OFF)
#  define SIDH_SHIFT    3
#define TXBSIDL(n)  (((n) * 0x10) + 0x30 + TXBSIDL_OFF)
#  define SIDL_SID_MASK    7
#  define SIDL_SID_SHIFT   5
#  define SIDL_EXIDE_SHIFT 3
#  define SIDL_EID_SHIFT   16
#  define SIDL_EID_MASK    3
#define TXBEID8(n)  (((n) * 0x10) + 0x30 + TXBEID8_OFF)
#define TXBEID0(n)  (((n) * 0x10) + 0x30 + TXBEID0_OFF)
#define TXBDLC(n)   (((n) * 0x10) + 0x30 + TXBDLC_OFF)
#  define DLC_RTR_SHIFT    6
#define TXBCTRL_OFF 0
#define TXBSIDH_OFF 1
#define TXBSIDL_OFF 2
#define TXBEID8_OFF 3
#define TXBEID0_OFF 4
#define TXBDLC_OFF  5
#define TXBDAT_OFF  6
#define RXBCTRL(n)  (((n) * 0x10) + 0x60 + RXBCTRL_OFF)
#  define RXBCTRL_BUKT	0x04
#  define RXBCTRL_RXM0	0x20
#  define RXBCTRL_RXM1	0x40
#define RXBSIDH(n)  (((n) * 0x10) + 0x60 + RXBSIDH_OFF)
#  define RXBSIDH_SHIFT 3
#define RXBSIDL(n)  (((n) * 0x10) + 0x60 + RXBSIDL_OFF)
#  define RXBSIDL_IDE   0x08
#  define RXBSIDL_SRR   0x10
#  define RXBSIDL_EID   3
#  define RXBSIDL_SHIFT 5
#define RXBEID8(n)  (((n) * 0x10) + 0x60 + RXBEID8_OFF)
#define RXBEID0(n)  (((n) * 0x10) + 0x60 + RXBEID0_OFF)
#define RXBDLC(n)   (((n) * 0x10) + 0x60 + RXBDLC_OFF)
#  define RXBDLC_LEN_MASK  0x0f
#  define RXBDLC_RTR       0x40
#define RXBCTRL_OFF 0
#define RXBSIDH_OFF 1
#define RXBSIDL_OFF 2
#define RXBEID8_OFF 3
#define RXBEID0_OFF 4
#define RXBDLC_OFF  5
#define RXBDAT_OFF  6
#define RXFSIDH(n) ((n) * 4)
#define RXFSIDL(n) ((n) * 4 + 1)
#define RXFEID8(n) ((n) * 4 + 2)
#define RXFEID0(n) ((n) * 4 + 3)
#define RXMSIDH(n) ((n) * 4 + 0x20)
#define RXMSIDL(n) ((n) * 4 + 0x21)
#define RXMEID8(n) ((n) * 4 + 0x22)
#define RXMEID0(n) ((n) * 4 + 0x23)
#define GET_BYTE(val, byte)			\
(((val) >> ((byte) * 8)) & 0xff)
#define SET_BYTE(val, byte)			\
(((val) & 0xff) << ((byte) * 8))
#define CAN_FRAME_MAX_DATA_LEN	8
#define SPI_TRANSFER_BUF_LEN	(6 + CAN_FRAME_MAX_DATA_LEN)
#define CAN_FRAME_MAX_BITS	128
#define TX_ECHO_SKB_MAX	1
#define DEVICE_NAME "mcp251x"
static int mcp251x_enable_dma;
module_param(mcp251x_enable_dma, int, S_IRUGO);
MODULE_PARM_DESC(mcp251x_enable_dma, "Enable SPI DMA. Default: 0 (Off)");
static struct can_bittiming_const mcp251x_bittiming_const = ;
enum mcp251x_model ;
struct mcp251x_priv ;
#define MCP251X_IS(_model) \
static inline int mcp251x_is_##_model(struct spi_device *spi) \
MCP251X_IS(2510);
MCP251X_IS(2515);
static void mcp251x_clean(struct net_device *net)
static int mcp251x_spi_trans(struct spi_device *spi, int len)
static u8 mcp251x_read_reg(struct spi_device *spi, uint8_t reg)
static void mcp251x_read_2regs(struct spi_device *spi, uint8_t reg,
uint8_t *v1, uint8_t *v2)
static void mcp251x_write_reg(struct spi_device *spi, u8 reg, uint8_t val)
static void mcp251x_write_bits(struct spi_device *spi, u8 reg,
u8 mask, uint8_t val)
static void mcp251x_hw_tx_frame(struct spi_device *spi, u8 *buf,
int len, int tx_buf_idx)
static void mcp251x_hw_tx(struct spi_device *spi, struct can_frame *frame,
int tx_buf_idx)
static void mcp251x_hw_rx_frame(struct spi_device *spi, u8 *buf,
int buf_idx)
static void mcp251x_hw_rx(struct spi_device *spi, int buf_idx)
static void mcp251x_hw_sleep(struct spi_device *spi)
static netdev_tx_t mcp251x_hard_start_xmit(struct sk_buff *skb,
struct net_device *net)
static int mcp251x_do_set_mode(struct net_device *net, enum can_mode mode)
static int mcp251x_set_normal_mode(struct spi_device *spi)
static int mcp251x_do_set_bittiming(struct net_device *net)
static int mcp251x_setup(struct net_device *net, struct mcp251x_priv *priv,
struct spi_device *spi)
static int mcp251x_hw_reset(struct spi_device *spi)
static int mcp251x_hw_probe(struct spi_device *spi)
static void mcp251x_open_clean(struct net_device *net)
static int mcp251x_stop(struct net_device *net)
static void mcp251x_error_skb(struct net_device *net, int can_id, int data1)
static void mcp251x_tx_work_handler(struct work_struct *ws)
static void mcp251x_restart_work_handler(struct work_struct *ws)
static irqreturn_t mcp251x_can_ist(int irq, void *dev_id)
static int mcp251x_open(struct net_device *net)
static const struct net_device_ops mcp251x_netdev_ops = ;
static int __devinit mcp251x_can_probe(struct spi_device *spi)
static int __devexit mcp251x_can_remove(struct spi_device *spi)
static int mcp251x_can_suspend(struct spi_device *spi, pm_message_t state)
static int mcp251x_can_resume(struct spi_device *spi)
#define mcp251x_can_suspend NULL
#define mcp251x_can_resume NULL
static const struct spi_device_id mcp251x_id_table[] = ;
MODULE_DEVICE_TABLE(spi, mcp251x_id_table);
static struct spi_driver mcp251x_can_driver = ;
static int __init mcp251x_can_init(void)
static void __exit mcp251x_can_exit(void)
module_init(mcp251x_can_init);
module_exit(mcp251x_can_exit);
MODULE_AUTHOR("Chris Elston <celston@katalix.com>, "
"Christian Pellegrin <chripell@evolware.org>");
MODULE_DESCRIPTION("Microchip 251x CAN driver");
MODULE_LICENSE("GPL v2");
