static char version[] __devinitdata =
"abyss.c: v1.02 23/11/2000 by Adam Fritzler\n";
#define ABYSS_IO_EXTENT 64
static DEFINE_PCI_DEVICE_TABLE(abyss_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, abyss_pci_tbl);
MODULE_LICENSE("GPL");
static int abyss_open(struct net_device *dev);
static int abyss_close(struct net_device *dev);
static void abyss_enable(struct net_device *dev);
static int abyss_chipset_init(struct net_device *dev);
static void abyss_read_eeprom(struct net_device *dev);
static unsigned short abyss_setnselout_pins(struct net_device *dev);
static void at24_writedatabyte(unsigned long regaddr, unsigned char byte);
static int at24_sendfullcmd(unsigned long regaddr, unsigned char cmd, unsigned char addr);
static int at24_sendcmd(unsigned long regaddr, unsigned char cmd);
static unsigned char at24_readdatabit(unsigned long regaddr);
static unsigned char at24_readdatabyte(unsigned long regaddr);
static int at24_waitforack(unsigned long regaddr);
static int at24_waitfornack(unsigned long regaddr);
static void at24_setlines(unsigned long regaddr, unsigned char clock, unsigned char data);
static void at24_start(unsigned long regaddr);
static unsigned char at24_readb(unsigned long regaddr, unsigned char addr);
static unsigned short abyss_sifreadb(struct net_device *dev, unsigned short reg)
static unsigned short abyss_sifreadw(struct net_device *dev, unsigned short reg)
static void abyss_sifwriteb(struct net_device *dev, unsigned short val, unsigned short reg)
static void abyss_sifwritew(struct net_device *dev, unsigned short val, unsigned short reg)
static struct net_device_ops abyss_netdev_ops;
static int __devinit abyss_attach(struct pci_dev *pdev, const struct pci_device_id *ent)
static unsigned short abyss_setnselout_pins(struct net_device *dev)
static void at24_writedatabyte(unsigned long regaddr, unsigned char byte)
static int at24_sendfullcmd(unsigned long regaddr, unsigned char cmd, unsigned char addr)
static int at24_sendcmd(unsigned long regaddr, unsigned char cmd)
static unsigned char at24_readdatabit(unsigned long regaddr)
static unsigned char at24_readdatabyte(unsigned long regaddr)
static int at24_waitforack(unsigned long regaddr)
static int at24_waitfornack(unsigned long regaddr)
static void at24_setlines(unsigned long regaddr, unsigned char clock, unsigned char data)
static void at24_start(unsigned long regaddr)
static unsigned char at24_readb(unsigned long regaddr, unsigned char addr)
static void abyss_enable(struct net_device *dev)
static int abyss_chipset_init(struct net_device *dev)
static inline void abyss_chipset_close(struct net_device *dev)
static void abyss_read_eeprom(struct net_device *dev)
static int abyss_open(struct net_device *dev)
static int abyss_close(struct net_device *dev)
static void __devexit abyss_detach (struct pci_dev *pdev)
static struct pci_driver abyss_driver = ;
static int __init abyss_init (void)
static void __exit abyss_rmmod (void)
module_init(abyss_init);
module_exit(abyss_rmmod);
