MODULE_AUTHOR("Laurent Canet <canetl@esiee.fr>, Thibaut Varene <varenet@parisc-linux.org>, Helge Deller <deller@gmx.de>");
MODULE_DESCRIPTION("HP GSC PS2 port driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(parisc, gscps2_device_tbl);
#define PFX "gscps2.c: "
#define ENABLE			1
#define DISABLE			0
#define GSC_DINO_OFFSET		0x0800
#define GSC_ID			0x00
#define GSC_RESET		0x00
#define GSC_RCVDATA		0x04
#define GSC_XMTDATA		0x04
#define GSC_CONTROL		0x08
#define GSC_STATUS		0x0C
#define GSC_CTRL_ENBL		0x01
#define GSC_CTRL_LPBXR		0x02
#define GSC_CTRL_DIAG		0x20
#define GSC_CTRL_DATDIR		0x40
#define GSC_CTRL_CLKDIR		0x80
#define GSC_STAT_RBNE		0x01
#define GSC_STAT_TBNE		0x02
#define GSC_STAT_TERR		0x04
#define GSC_STAT_PERR		0x08
#define GSC_STAT_CMPINTR	0x10
#define GSC_STAT_DATSHD		0x40
#define GSC_STAT_CLKSHD		0x80
#define GSC_ID_KEYBOARD		0
#define GSC_ID_MOUSE		1
static irqreturn_t gscps2_interrupt(int irq, void *dev);
#define BUFFER_SIZE 0x0f
struct gscps2port ;
#define gscps2_readb_input(x)		readb((x)+GSC_RCVDATA)
#define gscps2_readb_control(x)		readb((x)+GSC_CONTROL)
#define gscps2_readb_status(x)		readb((x)+GSC_STATUS)
#define gscps2_writeb_control(x, y)	writeb((x), (y)+GSC_CONTROL)
static int wait_TBE(char *addr)
static void gscps2_flush(struct gscps2port *ps2port)
static inline int gscps2_writeb_output(struct gscps2port *ps2port, u8 data)
static void gscps2_enable(struct gscps2port *ps2port, int enable)
static void gscps2_reset(struct gscps2port *ps2port)
static LIST_HEAD(ps2port_list);
static irqreturn_t gscps2_interrupt(int irq, void *dev)
static int gscps2_write(struct serio *port, unsigned char data)
static int gscps2_open(struct serio *port)
static void gscps2_close(struct serio *port)
static int __devinit gscps2_probe(struct parisc_device *dev)
static int __devexit gscps2_remove(struct parisc_device *dev)
static struct parisc_device_id gscps2_device_tbl[] = ;
static struct parisc_driver parisc_ps2_driver = ;
static int __init gscps2_init(void)
static void __exit gscps2_exit(void)
module_init(gscps2_init);
module_exit(gscps2_exit);
