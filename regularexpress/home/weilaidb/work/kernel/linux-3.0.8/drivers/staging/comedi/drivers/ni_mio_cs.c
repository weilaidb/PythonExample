#undef DEBUG
#define ATMIO 1
#undef PCIMIO
#define NI_SIZE 0x20
#define MAX_N_CALDACS 32
static const struct ni_board_struct ni_boards[] = ;
#define interrupt_pin(a)	0
#define IRQ_POLARITY 1
#define NI_E_IRQ_FLAGS		IRQF_SHARED
struct ni_private ;
#define devpriv ((struct ni_private *)dev->private)
#define ni_writel(a, b)		(outl((a), (b)+dev->iobase))
#define ni_readl(a)		(inl((a)+dev->iobase))
#define ni_writew(a, b)		(outw((a), (b)+dev->iobase))
#define ni_readw(a)		(inw((a)+dev->iobase))
#define ni_writeb(a, b)		(outb((a), (b)+dev->iobase))
#define ni_readb(a)		(inb((a)+dev->iobase))
static void mio_cs_win_out(struct comedi_device *dev, uint16_t data, int addr)
static uint16_t mio_cs_win_in(struct comedi_device *dev, int addr)
static int mio_cs_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int mio_cs_detach(struct comedi_device *dev);
static struct comedi_driver driver_ni_mio_cs = ;
static int ni_getboardtype(struct comedi_device *dev,
struct pcmcia_device *link);
static int mio_cs_detach(struct comedi_device *dev)
static void mio_cs_config(struct pcmcia_device *link);
static void cs_release(struct pcmcia_device *link);
static void cs_detach(struct pcmcia_device *);
static struct pcmcia_device *cur_dev = NULL;
static int cs_attach(struct pcmcia_device *link)
static void cs_release(struct pcmcia_device *link)
static void cs_detach(struct pcmcia_device *link)
static int mio_cs_suspend(struct pcmcia_device *link)
static int mio_cs_resume(struct pcmcia_device *link)
static int mio_pcmcia_config_loop(struct pcmcia_device *p_dev, void *priv_data)
static void mio_cs_config(struct pcmcia_device *link)
static int mio_cs_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int ni_getboardtype(struct comedi_device *dev,
struct pcmcia_device *link)
static const struct pcmcia_device_id ni_mio_cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ni_mio_cs_ids);
MODULE_AUTHOR("David A. Schleef <ds@schleef.org>");
MODULE_DESCRIPTION("Comedi driver for National Instruments DAQCard E series");
MODULE_LICENSE("GPL");
struct pcmcia_driver ni_mio_cs_driver = ;
int init_module(void)
void cleanup_module(void)
