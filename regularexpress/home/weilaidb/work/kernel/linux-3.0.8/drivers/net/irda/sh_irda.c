#define DRIVER_NAME "sh_irda"
#if defined(CONFIG_ARCH_SH7367) || defined(CONFIG_ARCH_SH7377)
#define __IRDARAM_LEN	0x13FF
#define __IRDARAM_LEN	0x1039
#define IRTMR		0x1F00
#define IRCFR		0x1F02
#define IRCTR		0x1F04
#define IRTFLR		0x1F20
#define IRTCTR		0x1F22
#define IRRFLR		0x1F40
#define IRRCTR		0x1F42
#define SIRISR		0x1F60
#define SIRIMR		0x1F62
#define SIRICR		0x1F64
#define SIRBCR		0x1F68
#define MFIRISR		0x1F70
#define MFIRIMR		0x1F72
#define MFIRICR		0x1F74
#define CRCCTR		0x1F80
#define CRCIR		0x1F86
#define CRCCR		0x1F8A
#define CRCOR		0x1F8E
#define FIFOCP		0x1FC0
#define FIFOFP		0x1FC2
#define FIFORSMSK	0x1FC4
#define FIFORSOR	0x1FC6
#define FIFOSEL		0x1FC8
#define FIFORS		0x1FCA
#define FIFORFL		0x1FCC
#define FIFORAMCP	0x1FCE
#define FIFORAMFP	0x1FD0
#define BIFCTL		0x1FD2
#define IRDARAM		0x0000
#define IRDARAM_LEN	__IRDARAM_LEN
#define TMD_MASK	(0x3 << 14)
#define TMD_SIR		(0x0 << 14)
#define TMD_MIR		(0x3 << 14)
#define TMD_FIR		(0x2 << 14)
#define FIFORIM		(1 << 8)
#define MIM		(1 << 4)
#define SIM		(1 << 0)
#define xIM_MASK	(FIFORIM | MIM | SIM)
#define RTO_SHIFT	8
#define RTO		(0x3 << RTO_SHIFT)
#define ARMOD		(1 << 15)
#define TE		(1 <<  0)
#define RFL_MASK	(0x1FFF)
#define RE		(1 <<  0)
#define FRE		(1 << 15)
#define TROV		(1 << 11)
#define xIR_9		(1 << 9)
#define TOT		xIR_9
#define ABTD		xIR_9
#define xIR_8		(1 << 8)
#define FER		xIR_8
#define CRCER		xIR_8
#define FTE		(1 << 7)
#define xIR_MASK	(FRE | TROV | xIR_9 | xIR_8 | FTE)
#define BRC_MASK	(0x3F)
#define CRC_RST		(1 << 15)
#define CRC_CT_MASK	0x0FFF
#define CRC_IN_MASK	0x0FFF
enum sh_irda_mode ;
struct sh_irda_self;
struct sh_irda_xir_func ;
struct sh_irda_self ;
static void sh_irda_write(struct sh_irda_self *self, u32 offset, u16 data)
static u16 sh_irda_read(struct sh_irda_self *self, u32 offset)
static void sh_irda_update_bits(struct sh_irda_self *self, u32 offset,
u16 mask, u16 data)
static void sh_irda_rcv_ctrl(struct sh_irda_self *self, int enable)
static int sh_irda_set_timeout(struct sh_irda_self *self, int interval)
static int sh_irda_set_baudrate(struct sh_irda_self *self, int baudrate)
static int xir_get_rcv_length(struct sh_irda_self *self)
static int xir_fre(struct sh_irda_self *self)
static int xir_trov(struct sh_irda_self *self)
static int xir_9(struct sh_irda_self *self)
static int xir_8(struct sh_irda_self *self)
static int xir_fte(struct sh_irda_self *self)
static struct sh_irda_xir_func xir_func = ;
static struct sh_irda_xir_func mfir_func = ;
static int sir_fre(struct sh_irda_self *self)
static int sir_trov(struct sh_irda_self *self)
static int sir_tot(struct sh_irda_self *self)
static int sir_fer(struct sh_irda_self *self)
static int sir_fte(struct sh_irda_self *self)
static struct sh_irda_xir_func sir_func = ;
static void sh_irda_set_mode(struct sh_irda_self *self, enum sh_irda_mode mode)
static void sh_irda_set_irq_mask(struct sh_irda_self *self)
static irqreturn_t sh_irda_irq(int irq, void *dev_id)
static void sh_irda_crc_reset(struct sh_irda_self *self)
static void sh_irda_crc_add(struct sh_irda_self *self, u16 data)
static u16 sh_irda_crc_cnt(struct sh_irda_self *self)
static u16 sh_irda_crc_out(struct sh_irda_self *self)
static int sh_irda_crc_init(struct sh_irda_self *self)
static void sh_irda_remove_iobuf(struct sh_irda_self *self)
static int sh_irda_init_iobuf(struct sh_irda_self *self, int rxsize, int txsize)
static int sh_irda_hard_xmit(struct sk_buff *skb, struct net_device *ndev)
static int sh_irda_ioctl(struct net_device *ndev, struct ifreq *ifreq, int cmd)
static struct net_device_stats *sh_irda_stats(struct net_device *ndev)
static int sh_irda_open(struct net_device *ndev)
static int sh_irda_stop(struct net_device *ndev)
static const struct net_device_ops sh_irda_ndo = ;
static int __devinit sh_irda_probe(struct platform_device *pdev)
static int __devexit sh_irda_remove(struct platform_device *pdev)
static struct platform_driver sh_irda_driver = ;
static int __init sh_irda_init(void)
static void __exit sh_irda_exit(void)
module_init(sh_irda_init);
module_exit(sh_irda_exit);
MODULE_AUTHOR("Kuninori Morimoto <morimoto.kuninori@renesas.com>");
MODULE_DESCRIPTION("SuperH IrDA driver");
MODULE_LICENSE("GPL");
