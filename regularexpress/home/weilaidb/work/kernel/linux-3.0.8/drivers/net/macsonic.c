static char mac_sonic_string[] = "macsonic";
#define SONIC_READ(reg) (nubus_readw(dev->base_addr + (reg * 4) \
+ lp->reg_offset))
#define SONIC_WRITE(reg,val) (nubus_writew(val, dev->base_addr + (reg * 4) \
+ lp->reg_offset))
static unsigned int sonic_debug = SONIC_DEBUG;
static unsigned int sonic_debug = 1;
static int sonic_version_printed;
#define ONBOARD_SONIC_REGISTERS	0x50F0A000
#define ONBOARD_SONIC_PROM_BASE	0x50f08000
enum macsonic_type ;
#define DUODOCK_SONIC_REGISTERS 0xe10000
#define DUODOCK_SONIC_PROM_BASE 0xe12000
#define APPLE_SONIC_REGISTERS	0
#define APPLE_SONIC_PROM_BASE	0x40000
#define DAYNALINK_PROM_BASE 0x400000
#define DAYNA_SONIC_REGISTERS   0x180000
#define DAYNA_SONIC_MAC_ADDR	0xffe004
#define SONIC_READ_PROM(addr) nubus_readb(prom_addr+addr)
static inline void bit_reverse_addr(unsigned char addr[6])
static irqreturn_t macsonic_interrupt(int irq, void *dev_id)
static int macsonic_open(struct net_device* dev)
static int macsonic_close(struct net_device* dev)
static const struct net_device_ops macsonic_netdev_ops = ;
static int __devinit macsonic_init(struct net_device *dev)
#define INVALID_MAC(mac) (memcmp(mac, "\x08\x00\x07", 3) && \
memcmp(mac, "\x00\xA0\x40", 3) && \
memcmp(mac, "\x00\x80\x19", 3) && \
memcmp(mac, "\x00\x05\x02", 3))
static void __devinit mac_onboard_sonic_ethernet_addr(struct net_device *dev)
static int __devinit mac_onboard_sonic_probe(struct net_device *dev)
static int __devinit mac_nubus_sonic_ethernet_addr(struct net_device *dev,
unsigned long prom_addr,
int id)
static int __devinit macsonic_ident(struct nubus_dev *ndev)
static int __devinit mac_nubus_sonic_probe(struct net_device *dev)
static int __devinit mac_sonic_probe(struct platform_device *pdev)
MODULE_DESCRIPTION("Macintosh SONIC ethernet driver");
module_param(sonic_debug, int, 0);
MODULE_PARM_DESC(sonic_debug, "macsonic debug level (1-4)");
MODULE_ALIAS("platform:macsonic");
static int __devexit mac_sonic_device_remove (struct platform_device *pdev)
static struct platform_driver mac_sonic_driver = ;
static int __init mac_sonic_init_module(void)
static void __exit mac_sonic_cleanup_module(void)
module_init(mac_sonic_init_module);
module_exit(mac_sonic_cleanup_module);
