#undef DEBUG
#define ATMIO 1
#undef PCIMIO
#define NI_SIZE 0x20
#define MAX_N_CALDACS 32
static const struct ni_board_struct ni_boards[] = ;
static const int ni_irqpin[] =
;
#define interrupt_pin(a)	(ni_irqpin[(a)])
#define IRQ_POLARITY 0
#define NI_E_IRQ_FLAGS		0
struct ni_private ;
#define devpriv ((struct ni_private *)dev->private)
#define ni_writel(a, b)		(outl((a), (b)+dev->iobase))
#define ni_readl(a)		(inl((a)+dev->iobase))
#define ni_writew(a, b)		(outw((a), (b)+dev->iobase))
#define ni_readw(a)		(inw((a)+dev->iobase))
#define ni_writeb(a, b)		(outb((a), (b)+dev->iobase))
#define ni_readb(a)		(inb((a)+dev->iobase))
static void ni_atmio_win_out(struct comedi_device *dev, uint16_t data, int addr)
static uint16_t ni_atmio_win_in(struct comedi_device *dev, int addr)
static struct pnp_device_id device_ids[] = ;
MODULE_DEVICE_TABLE(pnp, device_ids);
static int ni_atmio_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int ni_atmio_detach(struct comedi_device *dev);
static struct comedi_driver driver_atmio = ;
static int __init driver_atmio_init_module(void)
static void __exit driver_atmio_cleanup_module(void)
module_init(driver_atmio_init_module);
module_exit(driver_atmio_cleanup_module);
static int ni_getboardtype(struct comedi_device *dev);
static int ni_atmio_detach(struct comedi_device *dev)
static int ni_isapnp_find_board(struct pnp_dev **dev)
static int ni_atmio_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int ni_getboardtype(struct comedi_device *dev)
