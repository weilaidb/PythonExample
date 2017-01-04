#undef CBPCIMDAS_DEBUG
#define PCI_VENDOR_ID_COMPUTERBOARDS	0x1307
#define BADR0_SIZE 2
#define BADR1_SIZE 4
#define BADR2_SIZE 6
#define BADR3_SIZE 16
#define BADR4_SIZE 4
#define ADC_TRIG 0
#define DAC0_OFFSET 2
#define DAC1_OFFSET 4
#define MUX_LIMITS 0
#define MAIN_CONN_DIO 1
#define ADC_STAT 2
#define ADC_CONV_STAT 3
#define ADC_INT 4
#define ADC_PACER 5
#define BURST_MODE 6
#define PROG_GAIN 7
#define CLK8254_1_DATA 8
#define CLK8254_2_DATA 9
#define CLK8254_3_DATA 10
#define CLK8254_CONTROL 11
#define USER_COUNTER 12
#define RESID_COUNT_H 13
#define RESID_COUNT_L 14
struct cb_pcimdas_board ;
static const struct cb_pcimdas_board cb_pcimdas_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(cb_pcimdas_pci_table) = ;
MODULE_DEVICE_TABLE(pci, cb_pcimdas_pci_table);
#define N_BOARDS 1
#define thisboard ((const struct cb_pcimdas_board *)dev->board_ptr)
struct cb_pcimdas_private ;
#define devpriv ((struct cb_pcimdas_private *)dev->private)
static int cb_pcimdas_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int cb_pcimdas_detach(struct comedi_device *dev);
static struct comedi_driver driver_cb_pcimdas = ;
static int cb_pcimdas_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int cb_pcimdas_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int cb_pcimdas_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int cb_pcimdas_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int cb_pcimdas_detach(struct comedi_device *dev)
static int cb_pcimdas_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
{
int n, i;
unsigned int d;
unsigned int busy;
int chan = CR_CHAN(insn->chanspec);
unsigned short chanlims;
int maxchans;
if ((inb(devpriv->BADR3 + 2) & 0x20) == 0)
maxchans = thisboard->ai_diff_chans;
else
maxchans = thisboard->ai_se_chans;
if (chan > (maxchans - 1))
return -ETIMEDOUT;
d = inb(devpriv->BADR3 + 5);
if ((d & 0x03) > 0)
outb(0x01, devpriv->BADR3 + 6);
outb(0x00, devpriv->BADR3 + 7);
chanlims = chan | (chan << 4);
outb(chanlims, devpriv->BADR3 + 0);
for (n = 0; n < insn->n; n++)
static int cb_pcimdas_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int cb_pcimdas_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __devinit driver_cb_pcimdas_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_cb_pcimdas_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_cb_pcimdas_pci_driver = ;
static int __init driver_cb_pcimdas_init_module(void)
static void __exit driver_cb_pcimdas_cleanup_module(void)
module_init(driver_cb_pcimdas_init_module);
module_exit(driver_cb_pcimdas_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
