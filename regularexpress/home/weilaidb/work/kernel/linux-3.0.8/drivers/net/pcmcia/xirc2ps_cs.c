#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MANFID_COMPAQ 	   0x0138
#define MANFID_COMPAQ2	   0x0183
#define TX_TIMEOUT	((400*HZ)/1000)
#define XIRCREG_CR  0
enum xirc_cr ;
#define XIRCREG_ESR 0
enum xirc_esr ;
#define XIRCREG_PR  1
#define XIRCREG_EDP 4
#define XIRCREG_ISR 6
enum xirc_isr ;
#define XIRCREG1_IMR0 12
#define XIRCREG1_IMR1 13
#define XIRCREG0_TSO  8
#define XIRCREG0_TRS  10
#define XIRCREG0_DO   12
#define XIRCREG0_RSR  12
enum xirc_rsr ;
#define XIRCREG0_PTR 13
#define XIRCREG0_RBC 14
#define XIRCREG1_ECR 14
enum xirc_ecr ;
#define XIRCREG2_RBS 8
#define XIRCREG2_LED 10
#define XIRCREG2_MSR 12
#define XIRCREG4_GPR0 8
#define XIRCREG4_GPR1 9
#define XIRCREG2_GPR2 13
#define XIRCREG4_BOV 10
#define XIRCREG4_LMA 12
#define XIRCREG4_LMD 14
#define XIRCREG40_CMD0 8
enum xirc_cmd ;
#define XIRCREG5_RHSA0	10
#define XIRCREG40_RXST0 9
#define XIRCREG40_TXST0 11
#define XIRCREG40_TXST1 12
#define XIRCREG40_RMASK0 13
#define XIRCREG40_TMASK0 14
#define XIRCREG40_TMASK1 15
#define XIRCREG42_SWC0	8
#define XIRCREG42_SWC1	9
#define XIRCREG42_BOC	10
#define XIRCREG44_TDR0	8
#define XIRCREG44_TDR1	9
#define XIRCREG44_RXBC_LO 10
#define XIRCREG44_RXBC_HI 11
#define XIRCREG45_REV	 15
#define XIRCREG50_IA	8
static const char *if_names[] = ;
#define XIR_UNKNOWN  0
#define XIR_CE	     1
#define XIR_CE2      2
#define XIR_CE3      3
#define XIR_CEM      4
#define XIR_CEM2     5
#define XIR_CEM3     6
#define XIR_CEM33    7
#define XIR_CEM56M   8
#define XIR_CEM56    9
#define XIR_CM28    10
#define XIR_CM33    11
#define XIR_CM56    12
#define XIR_CG	    13
#define XIR_CBE     14
MODULE_DESCRIPTION("Xircom PCMCIA ethernet driver");
MODULE_LICENSE("Dual MPL/GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(if_port,	0);
INT_MODULE_PARM(full_duplex,	0);
INT_MODULE_PARM(do_sound, 	1);
INT_MODULE_PARM(lockup_hack,	0);
static unsigned maxrx_bytes = 22000;
static void mii_idle(unsigned int ioaddr);
static void mii_putbit(unsigned int ioaddr, unsigned data);
static int  mii_getbit(unsigned int ioaddr);
static void mii_wbits(unsigned int ioaddr, unsigned data, int len);
static unsigned mii_rd(unsigned int ioaddr, u_char phyaddr, u_char phyreg);
static void mii_wr(unsigned int ioaddr, u_char phyaddr, u_char phyreg,
unsigned data, int len);
static int has_ce2_string(struct pcmcia_device * link);
static int xirc2ps_config(struct pcmcia_device * link);
static void xirc2ps_release(struct pcmcia_device * link);
static void xirc2ps_detach(struct pcmcia_device *p_dev);
static irqreturn_t xirc2ps_interrupt(int irq, void *dev_id);
typedef struct local_info_t  local_info_t;
static netdev_tx_t do_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static void xirc_tx_timeout(struct net_device *dev);
static void xirc2ps_tx_timeout_task(struct work_struct *work);
static void set_addresses(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static int set_card_type(struct pcmcia_device *link);
static int do_config(struct net_device *dev, struct ifmap *map);
static int do_open(struct net_device *dev);
static int do_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static const struct ethtool_ops netdev_ethtool_ops;
static void hardreset(struct net_device *dev);
static void do_reset(struct net_device *dev, int full);
static int init_mii(struct net_device *dev);
static void do_powerdown(struct net_device *dev);
static int do_stop(struct net_device *dev);
#define SelectPage(pgnr)   outb((pgnr), ioaddr + XIRCREG_PR)
#define GetByte(reg)	   ((unsigned)inb(ioaddr + (reg)))
#define GetWord(reg)	   ((unsigned)inw(ioaddr + (reg)))
#define PutByte(reg,value) outb((value), ioaddr+(reg))
#define PutWord(reg,value) outw((value), ioaddr+(reg))
static void
mii_idle(unsigned int ioaddr)
static void
mii_putbit(unsigned int ioaddr, unsigned data)
static int
mii_getbit(unsigned int ioaddr)
static void
mii_wbits(unsigned int ioaddr, unsigned data, int len)
static unsigned
mii_rd(unsigned int ioaddr,	u_char phyaddr, u_char phyreg)
static void
mii_wr(unsigned int ioaddr, u_char phyaddr, u_char phyreg, unsigned data,
int len)
static const struct net_device_ops netdev_ops = ;
static int
xirc2ps_probe(struct pcmcia_device *link)
static void
xirc2ps_detach(struct pcmcia_device *link)
static int
set_card_type(struct pcmcia_device *link)
static int
has_ce2_string(struct pcmcia_device * p_dev)
static int
xirc2ps_config_modem(struct pcmcia_device *p_dev, void *priv_data)
static int
xirc2ps_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int pcmcia_get_mac_ce(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv)
;
static int
xirc2ps_config(struct pcmcia_device * link)
static void
xirc2ps_release(struct pcmcia_device *link)
static int xirc2ps_suspend(struct pcmcia_device *link)
static int xirc2ps_resume(struct pcmcia_device *link)
static irqreturn_t
xirc2ps_interrupt(int irq, void *dev_id)
static void
xirc2ps_tx_timeout_task(struct work_struct *work)
static void
xirc_tx_timeout(struct net_device *dev)
static netdev_tx_t
do_start_xmit(struct sk_buff *skb, struct net_device *dev)
struct set_address_info ;
static void set_address(struct set_address_info *sa_info, char *addr)
static void set_addresses(struct net_device *dev)
static void
set_multicast_list(struct net_device *dev)
static int
do_config(struct net_device *dev, struct ifmap *map)
static int
do_open(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int
do_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void
hardreset(struct net_device *dev)
static void
do_reset(struct net_device *dev, int full)
static int
init_mii(struct net_device *dev)
static void
do_powerdown(struct net_device *dev)
static int
do_stop(struct net_device *dev)
static const struct pcmcia_device_id xirc2ps_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, xirc2ps_ids);
static struct pcmcia_driver xirc2ps_cs_driver = ;
static int __init
init_xirc2ps_cs(void)
static void __exit
exit_xirc2ps_cs(void)
module_init(init_xirc2ps_cs);
module_exit(exit_xirc2ps_cs);
static int __init setup_xirc2ps_cs(char *str)
__setup("xirc2ps_cs=", setup_xirc2ps_cs);
