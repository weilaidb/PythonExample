#define CONTROL_TEST		BIT(7)
#define CONTROL_CCE		BIT(6)
#define CONTROL_DISABLE_AR	BIT(5)
#define CONTROL_ENABLE_AR	(0 << 5)
#define CONTROL_EIE		BIT(3)
#define CONTROL_SIE		BIT(2)
#define CONTROL_IE		BIT(1)
#define CONTROL_INIT		BIT(0)
#define TEST_RX			BIT(7)
#define TEST_TX1		BIT(6)
#define TEST_TX2		BIT(5)
#define TEST_LBACK		BIT(4)
#define TEST_SILENT		BIT(3)
#define TEST_BASIC		BIT(2)
#define STATUS_BOFF		BIT(7)
#define STATUS_EWARN		BIT(6)
#define STATUS_EPASS		BIT(5)
#define STATUS_RXOK		BIT(4)
#define STATUS_TXOK		BIT(3)
#define ERR_CNT_TEC_MASK	0xff
#define ERR_CNT_TEC_SHIFT	0
#define ERR_CNT_REC_SHIFT	8
#define ERR_CNT_REC_MASK	(0x7f << ERR_CNT_REC_SHIFT)
#define ERR_CNT_RP_SHIFT	15
#define ERR_CNT_RP_MASK		(0x1 << ERR_CNT_RP_SHIFT)
#define BTR_BRP_MASK		0x3f
#define BTR_BRP_SHIFT		0
#define BTR_SJW_SHIFT		6
#define BTR_SJW_MASK		(0x3 << BTR_SJW_SHIFT)
#define BTR_TSEG1_SHIFT		8
#define BTR_TSEG1_MASK		(0xf << BTR_TSEG1_SHIFT)
#define BTR_TSEG2_SHIFT		12
#define BTR_TSEG2_MASK		(0x7 << BTR_TSEG2_SHIFT)
#define BRP_EXT_BRPE_MASK	0x0f
#define BRP_EXT_BRPE_SHIFT	0
#define IF_COMR_BUSY		BIT(15)
#define IF_COMM_WR		BIT(7)
#define IF_COMM_MASK		BIT(6)
#define IF_COMM_ARB		BIT(5)
#define IF_COMM_CONTROL		BIT(4)
#define IF_COMM_CLR_INT_PND	BIT(3)
#define IF_COMM_TXRQST		BIT(2)
#define IF_COMM_DATAA		BIT(1)
#define IF_COMM_DATAB		BIT(0)
#define IF_COMM_ALL		(IF_COMM_MASK | IF_COMM_ARB | \
IF_COMM_CONTROL | IF_COMM_TXRQST | \
IF_COMM_DATAA | IF_COMM_DATAB)
#define IF_ARB_MSGVAL		BIT(15)
#define IF_ARB_MSGXTD		BIT(14)
#define IF_ARB_TRANSMIT		BIT(13)
#define IF_MCONT_NEWDAT		BIT(15)
#define IF_MCONT_MSGLST		BIT(14)
#define IF_MCONT_CLR_MSGLST	(0 << 14)
#define IF_MCONT_INTPND		BIT(13)
#define IF_MCONT_UMASK		BIT(12)
#define IF_MCONT_TXIE		BIT(11)
#define IF_MCONT_RXIE		BIT(10)
#define IF_MCONT_RMTEN		BIT(9)
#define IF_MCONT_TXRQST		BIT(8)
#define IF_MCONT_EOB		BIT(7)
#define IF_MCONT_DLC_MASK	0xf
#define IFX_WRITE_LOW_16BIT(x)	((x) & 0xFFFF)
#define IFX_WRITE_HIGH_16BIT(x)	(((x) & 0xFFFF0000) >> 16)
#define C_CAN_NO_OF_OBJECTS	32
#define C_CAN_MSG_OBJ_RX_NUM	16
#define C_CAN_MSG_OBJ_TX_NUM	16
#define C_CAN_MSG_OBJ_RX_FIRST	1
#define C_CAN_MSG_OBJ_RX_LAST	(C_CAN_MSG_OBJ_RX_FIRST + \
C_CAN_MSG_OBJ_RX_NUM - 1)
#define C_CAN_MSG_OBJ_TX_FIRST	(C_CAN_MSG_OBJ_RX_LAST + 1)
#define C_CAN_MSG_OBJ_TX_LAST	(C_CAN_MSG_OBJ_TX_FIRST + \
C_CAN_MSG_OBJ_TX_NUM - 1)
#define C_CAN_MSG_OBJ_RX_SPLIT	9
#define C_CAN_MSG_RX_LOW_LAST	(C_CAN_MSG_OBJ_RX_SPLIT - 1)
#define C_CAN_NEXT_MSG_OBJ_MASK	(C_CAN_MSG_OBJ_TX_NUM - 1)
#define RECEIVE_OBJECT_BITS	0x0000ffff
#define STATUS_INTERRUPT	0x8000
#define ENABLE_ALL_INTERRUPTS	1
#define DISABLE_ALL_INTERRUPTS	0
#define MIN_TIMEOUT_VALUE	6
#define C_CAN_NAPI_WEIGHT	C_CAN_MSG_OBJ_RX_NUM
enum c_can_lec_type ;
enum c_can_bus_error_types ;
static struct can_bittiming_const c_can_bittiming_const = ;
static inline int get_tx_next_msg_obj(const struct c_can_priv *priv)
static inline int get_tx_echo_msg_obj(const struct c_can_priv *priv)
static u32 c_can_read_reg32(struct c_can_priv *priv, void *reg)
static void c_can_enable_all_interrupts(struct c_can_priv *priv,
int enable)
static inline int c_can_msg_obj_is_busy(struct c_can_priv *priv, int iface)
static inline void c_can_object_get(struct net_device *dev,
int iface, int objno, int mask)
static inline void c_can_object_put(struct net_device *dev,
int iface, int objno, int mask)
static void c_can_write_msg_object(struct net_device *dev,
int iface, struct can_frame *frame, int objno)
static inline void c_can_mark_rx_msg_obj(struct net_device *dev,
int iface, int ctrl_mask,
int obj)
static inline void c_can_activate_all_lower_rx_msg_obj(struct net_device *dev,
int iface,
int ctrl_mask)
static inline void c_can_activate_rx_msg_obj(struct net_device *dev,
int iface, int ctrl_mask,
int obj)
static void c_can_handle_lost_msg_obj(struct net_device *dev,
int iface, int objno)
static int c_can_read_msg_object(struct net_device *dev, int iface, int ctrl)
static void c_can_setup_receive_object(struct net_device *dev, int iface,
int objno, unsigned int mask,
unsigned int id, unsigned int mcont)
static void c_can_inval_msg_object(struct net_device *dev, int iface, int objno)
static inline int c_can_is_next_tx_obj_busy(struct c_can_priv *priv, int objno)
static netdev_tx_t c_can_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int c_can_set_bittiming(struct net_device *dev)
static void c_can_configure_msg_objects(struct net_device *dev)
static void c_can_chip_config(struct net_device *dev)
static void c_can_start(struct net_device *dev)
static void c_can_stop(struct net_device *dev)
static int c_can_set_mode(struct net_device *dev, enum can_mode mode)
static int c_can_get_berr_counter(const struct net_device *dev,
struct can_berr_counter *bec)
static void c_can_do_tx(struct net_device *dev)
static int c_can_do_rx_poll(struct net_device *dev, int quota)
static inline int c_can_has_and_handle_berr(struct c_can_priv *priv)
static int c_can_handle_state_change(struct net_device *dev,
enum c_can_bus_error_types error_type)
static int c_can_handle_bus_err(struct net_device *dev,
enum c_can_lec_type lec_type)
static int c_can_poll(struct napi_struct *napi, int quota)
static irqreturn_t c_can_isr(int irq, void *dev_id)
static int c_can_open(struct net_device *dev)
static int c_can_close(struct net_device *dev)
struct net_device *alloc_c_can_dev(void)
EXPORT_SYMBOL_GPL(alloc_c_can_dev);
void free_c_can_dev(struct net_device *dev)
EXPORT_SYMBOL_GPL(free_c_can_dev);
static const struct net_device_ops c_can_netdev_ops = ;
int register_c_can_dev(struct net_device *dev)
EXPORT_SYMBOL_GPL(register_c_can_dev);
void unregister_c_can_dev(struct net_device *dev)
EXPORT_SYMBOL_GPL(unregister_c_can_dev);
MODULE_AUTHOR("Bhupesh Sharma <bhupesh.sharma@st.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("CAN bus driver for Bosch C_CAN controller");
