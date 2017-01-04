#define DRIVER_NAME "sh_sir"
#define RX_PHASE	(1 << 0)
#define TX_PHASE	(1 << 1)
#define TX_COMP_PHASE	(1 << 2)
#define NONE_PHASE	(1 << 31)
#define IRIF_RINTCLR	0x0016
#define IRIF_TINTCLR	0x0018
#define IRIF_SIR0	0x0020
#define IRIF_SIR1	0x0022
#define IRIF_SIR2	0x0024
#define IRIF_SIR3	0x0026
#define IRIF_SIR_FRM	0x0028
#define IRIF_SIR_EOF	0x002A
#define IRIF_SIR_FLG	0x002C
#define IRIF_UART_STS2	0x002E
#define IRIF_UART0	0x0030
#define IRIF_UART1	0x0032
#define IRIF_UART2	0x0034
#define IRIF_UART3	0x0036
#define IRIF_UART4	0x0038
#define IRIF_UART5	0x003A
#define IRIF_UART6	0x003C
#define IRIF_UART7	0x003E
#define IRIF_CRC0	0x0040
#define IRIF_CRC1	0x0042
#define IRIF_CRC2	0x0044
#define IRIF_CRC3	0x0046
#define IRIF_CRC4	0x0048
#define IRTPW		(1 << 1)
#define IRERRC		(1 << 0)
#define IRERR		(1 << 0)
#define EOFD		(1 << 9)
#define FRER		(1 << 8)
#define FRP		(1 << 0)
#define IRSME		(1 << 6)
#define IROVE		(1 << 5)
#define IRFRE		(1 << 4)
#define IRPRE		(1 << 3)
#define TBEC		(1 << 2)
#define RIE		(1 << 1)
#define TIE		(1 << 0)
#define URSME		(1 << 6)
#define UROVE		(1 << 5)
#define URFRE		(1 << 4)
#define URPRE		(1 << 3)
#define RBF		(1 << 2)
#define TSBE		(1 << 1)
#define TBE		(1 << 0)
#define TBCOMP		(TSBE | TBE)
#define RSEIM		(1 << 6)
#define RBFIM		(1 << 2)
#define TSBEIM		(1 << 1)
#define TBEIM		(1 << 0)
#define RX_MASK		(RSEIM  | RBFIM)
#define CRC_RST		(1 << 15)
#define CRC_CT_MASK	0x0FFF
struct sh_sir_self ;
static void sh_sir_write(struct sh_sir_self *self, u32 offset, u16 data)
static u16 sh_sir_read(struct sh_sir_self *self, u32 offset)
static void sh_sir_update_bits(struct sh_sir_self *self, u32 offset,
u16 mask, u16 data)
static void sh_sir_crc_reset(struct sh_sir_self *self)
static void sh_sir_crc_add(struct sh_sir_self *self, u8 data)
static u16 sh_sir_crc_cnt(struct sh_sir_self *self)
static u16 sh_sir_crc_out(struct sh_sir_self *self)
static int sh_sir_crc_init(struct sh_sir_self *self)
#define SCLK_BASE 1843200
static u32 sh_sir_find_sclk(struct clk *irda_clk)
#define ERR_ROUNDING(a) ((a + 5000) / 10000)
static int sh_sir_set_baudrate(struct sh_sir_self *self, u32 baudrate)
static int __sh_sir_init_iobuf(iobuff_t *io, int size)
static void sh_sir_remove_iobuf(struct sh_sir_self *self)
static int sh_sir_init_iobuf(struct sh_sir_self *self, int rxsize, int txsize)
static void sh_sir_clear_all_err(struct sh_sir_self *self)
static void sh_sir_set_phase(struct sh_sir_self *self, int phase)
static int sh_sir_is_which_phase(struct sh_sir_self *self)
static void sh_sir_tx(struct sh_sir_self *self, int phase)
static int sh_sir_read_data(struct sh_sir_self *self)
static void sh_sir_rx(struct sh_sir_self *self)
static irqreturn_t sh_sir_irq(int irq, void *dev_id)
static int sh_sir_hard_xmit(struct sk_buff *skb, struct net_device *ndev)
static int sh_sir_ioctl(struct net_device *ndev, struct ifreq *ifreq, int cmd)
static struct net_device_stats *sh_sir_stats(struct net_device *ndev)
static int sh_sir_open(struct net_device *ndev)
static int sh_sir_stop(struct net_device *ndev)
static const struct net_device_ops sh_sir_ndo = ;
static int __devinit sh_sir_probe(struct platform_device *pdev)
static int __devexit sh_sir_remove(struct platform_device *pdev)
static struct platform_driver sh_sir_driver = ;
static int __init sh_sir_init(void)
static void __exit sh_sir_exit(void)
module_init(sh_sir_init);
module_exit(sh_sir_exit);
MODULE_AUTHOR("Kuninori Morimoto <morimoto.kuninori@renesas.com>");
MODULE_DESCRIPTION("SuperH IrDA driver");
MODULE_LICENSE("GPL");
