#define PCIDMA
#define PCIMIO 1
#undef ATMIO
#define MAX_N_CALDACS (16+16+2)
#define DRV_NAME "ni_pcimio"
static DEFINE_PCI_DEVICE_TABLE(ni_pci_table) = ;
MODULE_DEVICE_TABLE(pci, ni_pci_table);
static const struct comedi_lrange range_ni_M_628x_ao = ;
static const struct comedi_lrange range_ni_M_625x_ao = ;
static const struct comedi_lrange range_ni_M_622x_ao = ;
static const struct ni_board_struct ni_boards[] = ;
#define n_pcimio_boards ARRAY_SIZE(ni_boards)
static int pcimio_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcimio_detach(struct comedi_device *dev);
static struct comedi_driver driver_pcimio = ;
static int __devinit driver_pcimio_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pcimio_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pcimio_pci_driver = ;
static int __init driver_pcimio_init_module(void)
static void __exit driver_pcimio_cleanup_module(void)
module_init(driver_pcimio_init_module);
module_exit(driver_pcimio_cleanup_module);
struct ni_private ;
#define devpriv ((struct ni_private *)dev->private)
#define ni_writel(a, b)	(writel((a), devpriv->mite->daq_io_addr + (b)))
#define ni_readl(a)	(readl(devpriv->mite->daq_io_addr + (a)))
#define ni_writew(a, b)	(writew((a), devpriv->mite->daq_io_addr + (b)))
#define ni_readw(a)	(readw(devpriv->mite->daq_io_addr + (a)))
#define ni_writeb(a, b)	(writeb((a), devpriv->mite->daq_io_addr + (b)))
#define ni_readb(a)	(readb(devpriv->mite->daq_io_addr + (a)))
static void e_series_win_out(struct comedi_device *dev, uint16_t data, int reg)
static uint16_t e_series_win_in(struct comedi_device *dev, int reg)
static void m_series_stc_writew(struct comedi_device *dev, uint16_t data,
int reg)
static uint16_t m_series_stc_readw(struct comedi_device *dev, int reg)
static void m_series_stc_writel(struct comedi_device *dev, uint32_t data,
int reg)
static uint32_t m_series_stc_readl(struct comedi_device *dev, int reg)
#define interrupt_pin(a)	0
#define IRQ_POLARITY 1
#define NI_E_IRQ_FLAGS		IRQF_SHARED
static int pcimio_find_device(struct comedi_device *dev, int bus, int slot);
static int pcimio_ai_change(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned long new_size);
static int pcimio_ao_change(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned long new_size);
static int pcimio_gpct0_change(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned long new_size);
static int pcimio_gpct1_change(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned long new_size);
static int pcimio_dio_change(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned long new_size);
static void m_series_init_eeprom_buffer(struct comedi_device *dev)
static void init_6143(struct comedi_device *dev)
static int pcimio_detach(struct comedi_device *dev)
static int pcimio_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcimio_find_device(struct comedi_device *dev, int bus, int slot)
static int pcimio_ai_change(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned long new_size)
static int pcimio_ao_change(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned long new_size)
static int pcimio_gpct0_change(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned long new_size)
static int pcimio_gpct1_change(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned long new_size)
static int pcimio_dio_change(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned long new_size)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
