static const char version[] = "madgemc.c: v0.91 23/01/2000 by Adam Fritzler\n";
#define MADGEMC_IO_EXTENT 32
#define MADGEMC_SIF_OFFSET 0x08
struct card_info ;
static int madgemc_open(struct net_device *dev);
static int madgemc_close(struct net_device *dev);
static int madgemc_chipset_init(struct net_device *dev);
static void madgemc_read_rom(struct net_device *dev, struct card_info *card);
static unsigned short madgemc_setnselout_pins(struct net_device *dev);
static void madgemc_setcabletype(struct net_device *dev, int type);
static int madgemc_mcaproc(char *buf, int slot, void *d);
static void madgemc_setregpage(struct net_device *dev, int page);
static void madgemc_setsifsel(struct net_device *dev, int val);
static void madgemc_setint(struct net_device *dev, int val);
static irqreturn_t madgemc_interrupt(int irq, void *dev_id);
#define SIFREADB(reg) (inb(dev->base_addr + ((reg<0x8)?reg:reg-0x8)))
#define SIFWRITEB(val, reg) (outb(val, dev->base_addr + ((reg<0x8)?reg:reg-0x8)))
#define SIFREADW(reg) (inw(dev->base_addr + ((reg<0x8)?reg:reg-0x8)))
#define SIFWRITEW(val, reg) (outw(val, dev->base_addr + ((reg<0x8)?reg:reg-0x8)))
static unsigned short madgemc_sifreadb(struct net_device *dev, unsigned short reg)
static void madgemc_sifwriteb(struct net_device *dev, unsigned short val, unsigned short reg)
static unsigned short madgemc_sifreadw(struct net_device *dev, unsigned short reg)
static void madgemc_sifwritew(struct net_device *dev, unsigned short val, unsigned short reg)
static struct net_device_ops madgemc_netdev_ops __read_mostly;
static int __devinit madgemc_probe(struct device *device)
static irqreturn_t madgemc_interrupt(int irq, void *dev_id)
static unsigned short madgemc_setnselout_pins(struct net_device *dev)
static void madgemc_setregpage(struct net_device *dev, int page)
static void madgemc_setsifsel(struct net_device *dev, int val)
static void madgemc_setint(struct net_device *dev, int val)
static void madgemc_setcabletype(struct net_device *dev, int type)
static int madgemc_chipset_init(struct net_device *dev)
static void madgemc_chipset_close(struct net_device *dev)
static void madgemc_read_rom(struct net_device *dev, struct card_info *card)
static int madgemc_open(struct net_device *dev)
static int madgemc_close(struct net_device *dev)
static int madgemc_mcaproc(char *buf, int slot, void *d)
static int __devexit madgemc_remove(struct device *device)
static short madgemc_adapter_ids[] __initdata = ;
static struct mca_driver madgemc_driver = ;
static int __init madgemc_init (void)
static void __exit madgemc_exit (void)
module_init(madgemc_init);
module_exit(madgemc_exit);
MODULE_LICENSE("GPL");
