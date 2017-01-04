MODULE_AUTHOR("Philip Blundell, Matthew Wilcox, Helge Deller");
MODULE_DESCRIPTION("HIL keyboard driver (basic functionality)");
MODULE_LICENSE("GPL v2");
#if defined(CONFIG_PARISC)
static unsigned long hil_base;
static unsigned int hil_irq;
#define HILBASE		hil_base
#define HIL_DATA		0x800
#define HIL_CMD		0x801
#define HIL_IRQ		hil_irq
#define hil_readb(p)		gsc_readb(p)
#define hil_writeb(v,p)	gsc_writeb((v),(p))
#elif defined(CONFIG_HP300)
#define HILBASE		0xf0428000UL
#define HIL_DATA		0x1
#define HIL_CMD		0x3
#define HIL_IRQ		2
#define hil_readb(p)		readb(p)
#define hil_writeb(v,p)	writeb((v),(p))
#error "HIL is not supported on this platform"
#define hil_busy()              (hil_readb(HILBASE + HIL_CMD) & HIL_BUSY)
#define hil_data_available()    (hil_readb(HILBASE + HIL_CMD) & HIL_DATA_RDY)
#define hil_status()            (hil_readb(HILBASE + HIL_CMD))
#define hil_command(x)          do  while (0)
#define hil_read_data()         (hil_readb(HILBASE + HIL_DATA))
#define hil_write_data(x)       do  while (0)
#define	HIL_BUSY		0x02
#define	HIL_DATA_RDY		0x01
#define	HIL_SETARD		0xA0
#define	HIL_SETARR		0xA2
#define	HIL_SETTONE		0xA3
#define	HIL_CNMT		0xB2
#define	HIL_INTON		0x5C
#define	HIL_INTOFF		0x5D
#define	HIL_READKBDSADR		0xF9
#define	HIL_WRITEKBDSADR	0xE9
static unsigned int hphilkeyb_keycode[HIL_KEYCODES_SET1_TBLSIZE] __read_mostly =
;
static struct  hil_dev;
static void poll_finished(void)
static inline void handle_status(unsigned char s, unsigned char c)
static inline void handle_data(unsigned char s, unsigned char c)
static irqreturn_t hil_interrupt(int irq, void *handle)
static void hil_do(unsigned char cmd, unsigned char *data, unsigned int len)
static int __devinit hil_keyb_init(void)
static void __devexit hil_keyb_exit(void)
#if defined(CONFIG_PARISC)
static int __devinit hil_probe_chip(struct parisc_device *dev)
static int __devexit hil_remove_chip(struct parisc_device *dev)
static struct parisc_device_id hil_tbl[] = ;
static struct parisc_driver hil_driver = ;
static int __init hil_init(void)
static void __exit hil_exit(void)
static int __init hil_init(void)
static void __exit hil_exit(void)
module_init(hil_init);
module_exit(hil_exit);
