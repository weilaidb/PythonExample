#define PS2_CTRL		(0)
#define PS2_STATUS		(1)
#define PS2_DATA		(2)
#define PS2_CTRL_CLK		(1<<0)
#define PS2_CTRL_DAT		(1<<1)
#define PS2_CTRL_TXIRQ		(1<<2)
#define PS2_CTRL_ENABLE		(1<<3)
#define PS2_CTRL_RXIRQ		(1<<4)
#define PS2_STAT_CLK		(1<<0)
#define PS2_STAT_DAT		(1<<1)
#define PS2_STAT_PARITY		(1<<2)
#define PS2_STAT_RXFULL		(1<<5)
#define PS2_STAT_TXBUSY		(1<<6)
#define PS2_STAT_TXEMPTY	(1<<7)
struct pcips2_data ;
static int pcips2_write(struct serio *io, unsigned char val)
static irqreturn_t pcips2_interrupt(int irq, void *devid)
static void pcips2_flush_input(struct pcips2_data *ps2if)
static int pcips2_open(struct serio *io)
static void pcips2_close(struct serio *io)
static int __devinit pcips2_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit pcips2_remove(struct pci_dev *dev)
static const struct pci_device_id pcips2_ids[] = ;
static struct pci_driver pcips2_driver = ;
static int __init pcips2_init(void)
static void __exit pcips2_exit(void)
module_init(pcips2_init);
module_exit(pcips2_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("PCI PS/2 keyboard/mouse driver");
MODULE_DEVICE_TABLE(pci, pcips2_ids);
