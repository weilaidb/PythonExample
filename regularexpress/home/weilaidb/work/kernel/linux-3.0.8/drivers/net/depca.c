static char version[] __initdata = "depca.c:v0.53 2001/1/12 davies@maniac.ultranet.com\n";
static int depca_debug = DEPCA_DEBUG;
static int depca_debug = 1;
#define DEPCA_NDA 0xffe0
#define TX_TIMEOUT (1*HZ)
#define PROBE_LENGTH    32
#define ETH_PROM_SIG    0xAA5500FFUL
#define NUM_RX_DESC     8
#define NUM_TX_DESC     8
#define RX_BUFF_SZ	1536
#define TX_BUFF_SZ	1536
#define DEPCA_EISA_IO_PORTS 0x0c00
#define DEPCA_RAM_BASE_ADDRESSES
#define DEPCA_TOTAL_SIZE 0x10
static struct  depca_io_ports[] = ;
#define DEPCA_SIGNATURE
static char* __initdata depca_signature[] = DEPCA_SIGNATURE;
enum depca_type ;
static char depca_string[] = "depca";
static int depca_device_remove (struct device *device);
static struct eisa_device_id depca_eisa_ids[] = ;
MODULE_DEVICE_TABLE(eisa, depca_eisa_ids);
static int depca_eisa_probe  (struct device *device);
static struct eisa_driver depca_eisa_driver = ;
#define DE210_ID 0x628d
#define DE212_ID 0x6def
static short depca_mca_adapter_ids[] = ;
static char *depca_mca_adapter_name[] = ;
static enum depca_type depca_mca_adapter_type[] = ;
static int depca_mca_probe (struct device *);
static struct mca_driver depca_mca_driver = ;
static int depca_isa_probe (struct platform_device *);
static int __devexit depca_isa_remove(struct platform_device *pdev)
static struct platform_driver depca_isa_driver = ;
#define DEPCA_STRLEN 16
#define DEPCA_ALIGN4      ((u_long)4 - 1)
#define DEPCA_ALIGN8      ((u_long)8 - 1)
#define DEPCA_ALIGN         DEPCA_ALIGN8
struct depca_rx_desc ;
struct depca_tx_desc ;
#define LA_MASK 0x0000ffff
struct depca_init ;
#define DEPCA_PKT_STAT_SZ 16
#define DEPCA_PKT_BIN_SZ  128
struct depca_private ;
#define TX_BUFFS_AVAIL ((lp->tx_old<=lp->tx_new)?\
lp->tx_old+lp->txRingMask-lp->tx_new:\
lp->tx_old               -lp->tx_new-1)
static int depca_open(struct net_device *dev);
static netdev_tx_t depca_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t depca_interrupt(int irq, void *dev_id);
static int depca_close(struct net_device *dev);
static int depca_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void depca_tx_timeout(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void depca_init_ring(struct net_device *dev);
static int depca_rx(struct net_device *dev);
static int depca_tx(struct net_device *dev);
static void LoadCSRs(struct net_device *dev);
static int InitRestartDepca(struct net_device *dev);
static int DepcaSignature(char *name, u_long paddr);
static int DevicePresent(u_long ioaddr);
static int get_hw_addr(struct net_device *dev);
static void SetMulticastFilter(struct net_device *dev);
static int load_packet(struct net_device *dev, struct sk_buff *skb);
static void depca_dbg_open(struct net_device *dev);
static u_char de1xx_irq[] __initdata = ;
static u_char de2xx_irq[] __initdata = ;
static u_char de422_irq[] __initdata = ;
static u_char *depca_irq;
static int irq;
static int io;
static char *adapter_name;
static int mem;
module_param (irq, int, 0);
module_param (io, int, 0);
module_param (adapter_name, charp, 0);
module_param (mem, int, 0);
MODULE_PARM_DESC(irq, "DEPCA IRQ number");
MODULE_PARM_DESC(io, "DEPCA I/O base address");
MODULE_PARM_DESC(adapter_name, "DEPCA adapter name");
MODULE_PARM_DESC(mem, "DEPCA shared memory address");
MODULE_LICENSE("GPL");
#define STOP_DEPCA \
outw(CSR0, DEPCA_ADDR);\
outw(STOP, DEPCA_DATA)
static const struct net_device_ops depca_netdev_ops = ;
static int __init depca_hw_init (struct net_device *dev, struct device *device)
static int depca_open(struct net_device *dev)
static void depca_init_ring(struct net_device *dev)
static void depca_tx_timeout(struct net_device *dev)
static netdev_tx_t depca_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t depca_interrupt(int irq, void *dev_id)
static int depca_rx(struct net_device *dev)
static int depca_tx(struct net_device *dev)
static int depca_close(struct net_device *dev)
static void LoadCSRs(struct net_device *dev)
static int InitRestartDepca(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void SetMulticastFilter(struct net_device *dev)
static int __init depca_common_init (u_long ioaddr, struct net_device **devp)
static int __init depca_mca_probe(struct device *device)
static void __init depca_platform_probe (void)
static enum depca_type __init depca_shmem_probe (ulong *mem_start)
static int __devinit depca_isa_probe (struct platform_device *device)
static int __init depca_eisa_probe (struct device *device)
static int __devexit depca_device_remove (struct device *device)
static int __init DepcaSignature(char *name, u_long base_addr)
static int __init DevicePresent(u_long ioaddr)
static int __init get_hw_addr(struct net_device *dev)
static int load_packet(struct net_device *dev, struct sk_buff *skb)
static void depca_dbg_open(struct net_device *dev)
static int depca_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int __init depca_module_init (void)
static void __exit depca_module_exit (void)
module_init (depca_module_init);
module_exit (depca_module_exit);
