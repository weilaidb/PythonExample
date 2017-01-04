#define DRV_NAME	"ewrk3"
#define DRV_VERSION	"0.48"
static char version[] __initdata =
DRV_NAME ":v" DRV_VERSION " 2002/10/18 davies@maniac.ultranet.com\n";
static int ewrk3_debug = EWRK3_DEBUG;
static int ewrk3_debug = 1;
#define EWRK3_NDA 0xffe0
#define PROBE_LENGTH    32
#define ETH_PROM_SIG    0xAA5500FFUL
#define EWRK3_SIGNATURE
#define EWRK3_STRLEN 8
#define EWRK3_RAM_BASE_ADDRESSES
#define EWRK3_IO_BASE 0x100
#define EWRK3_IOP_INC 0x20
#define EWRK3_TOTAL_SIZE 0x20
#define MAX_NUM_EWRK3S 21
#define EWRK3_EISA_IO_PORTS 0x0c00
#define MAX_EISA_SLOTS 16
#define EISA_SLOT_INC 0x1000
#define QUEUE_PKT_TIMEOUT (1*HZ)
#define IO_ONLY         0x00
#define SHMEM_2K        0x800
#define SHMEM_32K       0x8000
#define SHMEM_64K       0x10000
#define ENABLE_IRQs
#define DISABLE_IRQs
#define START_EWRK3
#define STOP_EWRK3
#define EWRK3_PKT_STAT_SZ 16
#define EWRK3_PKT_BIN_SZ  128
struct ewrk3_stats ;
struct ewrk3_private ;
#define FORCE_2K_MODE
static int ewrk3_open(struct net_device *dev);
static netdev_tx_t ewrk3_queue_pkt(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t ewrk3_interrupt(int irq, void *dev_id);
static int ewrk3_close(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static int ewrk3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static const struct ethtool_ops ethtool_ops_203;
static const struct ethtool_ops ethtool_ops;
static int ewrk3_hw_init(struct net_device *dev, u_long iobase);
static void ewrk3_init(struct net_device *dev);
static int ewrk3_rx(struct net_device *dev);
static int ewrk3_tx(struct net_device *dev);
static void ewrk3_timeout(struct net_device *dev);
static void EthwrkSignature(char *name, char *eeprom_image);
static int DevicePresent(u_long iobase);
static void SetMulticastFilter(struct net_device *dev);
static int EISA_signature(char *name, s32 eisa_id);
static int Read_EEPROM(u_long iobase, u_char eaddr);
static int Write_EEPROM(short data, u_long iobase, u_char eaddr);
static u_char get_hw_addr(struct net_device *dev, u_char * eeprom_image, char chipType);
static int ewrk3_probe1(struct net_device *dev, u_long iobase, int irq);
static int isa_probe(struct net_device *dev, u_long iobase);
static int eisa_probe(struct net_device *dev, u_long iobase);
static u_char irq[MAX_NUM_EWRK3S+1] = ;
static char name[EWRK3_STRLEN + 1];
static int num_ewrks3s;
#define INIT_EWRK3
struct net_device * __init ewrk3_probe(int unit)
static int __init ewrk3_probe1(struct net_device *dev, u_long iobase, int irq)
static const struct net_device_ops ewrk3_netdev_ops = ;
static int __init
ewrk3_hw_init(struct net_device *dev, u_long iobase)
static int ewrk3_open(struct net_device *dev)
static void ewrk3_init(struct net_device *dev)
static void ewrk3_timeout(struct net_device *dev)
static netdev_tx_t ewrk3_queue_pkt(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t ewrk3_interrupt(int irq, void *dev_id)
static int ewrk3_rx(struct net_device *dev)
static int ewrk3_tx(struct net_device *dev)
static int ewrk3_close(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void SetMulticastFilter(struct net_device *dev)
static int __init isa_probe(struct net_device *dev, u_long ioaddr)
static int __init eisa_probe(struct net_device *dev, u_long ioaddr)
static int Read_EEPROM(u_long iobase, u_char eaddr)
static int Write_EEPROM(short data, u_long iobase, u_char eaddr)
static void __init EthwrkSignature(char *name, char *eeprom_image)
static int __init DevicePresent(u_long iobase)
static u_char __init get_hw_addr(struct net_device *dev, u_char * eeprom_image, char chipType)
static int __init EISA_signature(char *name, s32 eisa_id)
static void ewrk3_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int ewrk3_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int ewrk3_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static u32 ewrk3_get_link(struct net_device *dev)
static int ewrk3_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static const struct ethtool_ops ethtool_ops_203 = ;
static const struct ethtool_ops ethtool_ops = ;
static int ewrk3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static struct net_device *ewrk3_devs[MAX_NUM_EWRK3S];
static int ndevs;
static int io[MAX_NUM_EWRK3S+1] = ;
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(io, "EtherWORKS 3 I/O base address(es)");
MODULE_PARM_DESC(irq, "EtherWORKS 3 IRQ number(s)");
static __exit void ewrk3_exit_module(void)
static __init int ewrk3_init_module(void)
module_exit(ewrk3_exit_module);
module_init(ewrk3_init_module);
MODULE_LICENSE("GPL");
