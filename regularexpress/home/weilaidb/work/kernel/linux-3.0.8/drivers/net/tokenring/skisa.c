static const char version[] = "skisa.c: v1.03 09/12/2002 by Jochen Friedrich\n";
#define SK_ISA_IO_EXTENT 32
static unsigned int portlist[] __initdata = ;
static const unsigned short irqlist[] = ;
static int dmalist[] __initdata = ;
static char isa_cardname[] = "SK NET TR 4/16 ISA\0";
static u64 dma_mask = ISA_MAX_ADDRESS;
static int sk_isa_open(struct net_device *dev);
static void sk_isa_read_eeprom(struct net_device *dev);
static unsigned short sk_isa_setnselout_pins(struct net_device *dev);
static unsigned short sk_isa_sifreadb(struct net_device *dev, unsigned short reg)
static unsigned short sk_isa_sifreadw(struct net_device *dev, unsigned short reg)
static void sk_isa_sifwriteb(struct net_device *dev, unsigned short val, unsigned short reg)
static void sk_isa_sifwritew(struct net_device *dev, unsigned short val, unsigned short reg)
static int __init sk_isa_probe1(struct net_device *dev, int ioaddr)
static struct net_device_ops sk_isa_netdev_ops __read_mostly;
static int __init setup_card(struct net_device *dev, struct device *pdev)
static void sk_isa_read_eeprom(struct net_device *dev)
static unsigned short sk_isa_setnselout_pins(struct net_device *dev)
static int sk_isa_open(struct net_device *dev)
#define ISATR_MAX_ADAPTERS 3
static int io[ISATR_MAX_ADAPTERS];
static int irq[ISATR_MAX_ADAPTERS];
static int dma[ISATR_MAX_ADAPTERS];
MODULE_LICENSE("GPL");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(dma, int, NULL, 0);
static struct platform_device *sk_isa_dev[ISATR_MAX_ADAPTERS];
static struct platform_driver sk_isa_driver = ;
static int __init sk_isa_init(void)
static void __exit sk_isa_cleanup(void)
module_init(sk_isa_init);
module_exit(sk_isa_cleanup);
