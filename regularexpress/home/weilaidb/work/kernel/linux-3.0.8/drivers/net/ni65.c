#undef XMT_VIA_SKB
#undef RCV_VIA_SKB
#define RCV_PARANOIA_CHECK
#define MID_PERFORMANCE
#if   defined( LOW_PERFORMANCE )
static int isa0=7,isa1=7,csr80=0x0c10;
#elif defined( MID_PERFORMANCE )
static int isa0=5,isa1=5,csr80=0x2810;
static int isa0=4,isa1=4,csr80=0x0017;
#define NI65_ID0    0x00
#define NI65_ID1    0x55
#define NI65_EB_ID0 0x52
#define NI65_EB_ID1 0x44
#define NE2100_ID0  0x57
#define NE2100_ID1  0x57
#define PORT p->cmdr_addr
#if 1
#define RMDNUM 16
#define RMDNUMMASK 0x80000000
#define RMDNUM 8
#define RMDNUMMASK 0x60000000
#define R_BUF_SIZE 1544
#define T_BUF_SIZE 1544
#define L_DATAREG 0x00
#define L_ADDRREG 0x02
#define L_RESET   0x04
#define L_CONFIG  0x05
#define L_BUSIF   0x06
#define CSR0  0x00
#define CSR1  0x01
#define CSR2  0x02
#define CSR3  0x03
#define INIT_RING_BEFORE_START	0x1
#define FULL_RESET_ON_ERROR	0x2
#define writereg(val,reg)
#define readreg(reg) (outw(reg,PORT+L_ADDRREG),inw(PORT+L_DATAREG))
#define writedatareg(val)
static unsigned char ni_vendor[] = ;
static struct card  cards[] = ;
#define NUM_CARDS 3
struct priv
;
static int  ni65_probe1(struct net_device *dev,int);
static irqreturn_t ni65_interrupt(int irq, void * dev_id);
static void ni65_recv_intr(struct net_device *dev,int);
static void ni65_xmit_intr(struct net_device *dev,int);
static int  ni65_open(struct net_device *dev);
static int  ni65_lance_reinit(struct net_device *dev);
static void ni65_init_lance(struct priv *p,unsigned char*,int,int);
static netdev_tx_t ni65_send_packet(struct sk_buff *skb,
struct net_device *dev);
static void  ni65_timeout(struct net_device *dev);
static int  ni65_close(struct net_device *dev);
static int  ni65_alloc_buffer(struct net_device *dev);
static void ni65_free_buffer(struct priv *p);
static void set_multicast_list(struct net_device *dev);
static int irqtab[] __initdata = ;
static int dmatab[] __initdata = ;
static int debuglevel = 1;
static void ni65_set_performance(struct priv *p)
static int ni65_open(struct net_device *dev)
static int ni65_close(struct net_device *dev)
static void cleanup_card(struct net_device *dev)
static int irq;
static int io;
static int dma;
struct net_device * __init ni65_probe(int unit)
static const struct net_device_ops ni65_netdev_ops = ;
static int __init ni65_probe1(struct net_device *dev,int ioaddr)
static void ni65_init_lance(struct priv *p,unsigned char *daddr,int filter,int mode)
static void *ni65_alloc_mem(struct net_device *dev,char *what,int size,int type)
static int ni65_alloc_buffer(struct net_device *dev)
static void ni65_free_buffer(struct priv *p)
static void ni65_stop_start(struct net_device *dev,struct priv *p)
static int ni65_lance_reinit(struct net_device *dev)
static irqreturn_t ni65_interrupt(int irq, void * dev_id)
static void ni65_xmit_intr(struct net_device *dev,int csr0)
static void ni65_recv_intr(struct net_device *dev,int csr0)
static void ni65_timeout(struct net_device *dev)
static netdev_tx_t ni65_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static struct net_device *dev_ni65;
module_param(irq, int, 0);
module_param(io, int, 0);
module_param(dma, int, 0);
MODULE_PARM_DESC(irq, "ni6510 IRQ number (ignored for some cards)");
MODULE_PARM_DESC(io, "ni6510 I/O base address");
MODULE_PARM_DESC(dma, "ni6510 ISA DMA channel (ignored for some cards)");
int __init init_module(void)
void __exit cleanup_module(void)
MODULE_LICENSE("GPL");
