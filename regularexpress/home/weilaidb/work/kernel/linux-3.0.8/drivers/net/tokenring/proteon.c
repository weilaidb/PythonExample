static const char version[] = "proteon.c: v1.00 02/01/2003 by Jochen Friedrich\n";
#define PROTEON_IO_EXTENT 32
static unsigned int portlist[] __initdata = ;
static unsigned short irqlist[] = ;
static int dmalist[] __initdata = ;
static char cardname[] = "Proteon 1392\0";
static u64 dma_mask = ISA_MAX_ADDRESS;
static int proteon_open(struct net_device *dev);
static void proteon_read_eeprom(struct net_device *dev);
static unsigned short proteon_setnselout_pins(struct net_device *dev);
static unsigned short proteon_sifreadb(struct net_device *dev, unsigned short reg)
static unsigned short proteon_sifreadw(struct net_device *dev, unsigned short reg)
static void proteon_sifwriteb(struct net_device *dev, unsigned short val, unsigned short reg)
static void proteon_sifwritew(struct net_device *dev, unsigned short val, unsigned short reg)
static int __init proteon_probe1(struct net_device *dev, int ioaddr)
static struct net_device_ops proteon_netdev_ops __read_mostly;
static int __init setup_card(struct net_device *dev, struct device *pdev)
static void proteon_read_eeprom(struct net_device *dev)
static unsigned short proteon_setnselout_pins(struct net_device *dev)
static int proteon_open(struct net_device *dev)
#define ISATR_MAX_ADAPTERS 3
static int io[ISATR_MAX_ADAPTERS];
static int irq[ISATR_MAX_ADAPTERS];
static int dma[ISATR_MAX_ADAPTERS];
MODULE_LICENSE("GPL");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(dma, int, NULL, 0);
static struct platform_device *proteon_dev[ISATR_MAX_ADAPTERS];
static struct platform_driver proteon_driver = ;
static int __init proteon_init(void)
static void __exit proteon_cleanup(void)
module_init(proteon_init);
module_exit(proteon_cleanup);
