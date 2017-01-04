#define PCI_VENDOR_ID_CB	0x1307
#define EEPROM_SIZE	128
#define MAX_AO_CHANNELS 8
#define DIGITALIO_BADRINDEX	2
#define DIGITALIO_SIZE 8
#define DAC_BADRINDEX	3
#define PORT1A 0
#define PORT1B 1
#define PORT1C 2
#define CONTROL1 3
#define PORT2A 4
#define PORT2B 5
#define PORT2C 6
#define CONTROL2 7
#define DACONTROL	0
#define	SU	0000001
#define NOSU	0000000
#define	ENABLEDAC	0000002
#define	DISABLEDAC	0000000
#define RANGE2V5	0000000
#define RANGE5V	0000200
#define RANGE10V	0000300
#define UNIP	0000400
#define BIP	0000000
#define DACALIBRATION1	4
#define	SERIAL_IN_BIT	0x1
#define	CAL_CHANNEL_MASK	(0x7 << 1)
#define	CAL_CHANNEL_BITS(channel)	(((channel) << 1) & CAL_CHANNEL_MASK)
#define	CAL_COUNTER_MASK	0x1f
#define	CAL_COUNTER_OVERFLOW_BIT	0x20
#define	AO_BELOW_REF_BIT	0x40
#define	SERIAL_OUT_BIT	0x80
#define DACALIBRATION2	6
#define	SELECT_EEPROM_BIT	0x1
#define	DESELECT_REF_DAC_BIT	0x2
#define	DESELECT_CALDAC_BIT(n)	(0x4 << (n))
#define	DUMMY_BIT	0x40
#define DADATA	8
static const struct comedi_lrange cb_pcidda_ranges = ;
struct cb_pcidda_board ;
static const struct cb_pcidda_board cb_pcidda_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(cb_pcidda_pci_table) = ;
MODULE_DEVICE_TABLE(pci, cb_pcidda_pci_table);
#define thisboard ((const struct cb_pcidda_board *)dev->board_ptr)
struct cb_pcidda_private ;
#define devpriv ((struct cb_pcidda_private *)dev->private)
static int cb_pcidda_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int cb_pcidda_detach(struct comedi_device *dev);
static int cb_pcidda_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static unsigned int cb_pcidda_serial_in(struct comedi_device *dev);
static void cb_pcidda_serial_out(struct comedi_device *dev, unsigned int value,
unsigned int num_bits);
static unsigned int cb_pcidda_read_eeprom(struct comedi_device *dev,
unsigned int address);
static void cb_pcidda_calibrate(struct comedi_device *dev, unsigned int channel,
unsigned int range);
static struct comedi_driver driver_cb_pcidda = ;
static int cb_pcidda_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int cb_pcidda_detach(struct comedi_device *dev)
static int cb_pcidda_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static unsigned int cb_pcidda_serial_in(struct comedi_device *dev)
static void cb_pcidda_serial_out(struct comedi_device *dev, unsigned int value,
unsigned int num_bits)
static unsigned int cb_pcidda_read_eeprom(struct comedi_device *dev,
unsigned int address)
static void cb_pcidda_write_caldac(struct comedi_device *dev,
unsigned int caldac, unsigned int channel,
unsigned int value)
static unsigned int caldac_number(unsigned int channel)
static unsigned int fine_gain_channel(unsigned int ao_channel)
static unsigned int coarse_gain_channel(unsigned int ao_channel)
static unsigned int coarse_offset_channel(unsigned int ao_channel)
static unsigned int fine_offset_channel(unsigned int ao_channel)
static unsigned int offset_eeprom_address(unsigned int ao_channel,
unsigned int range)
static unsigned int gain_eeprom_address(unsigned int ao_channel,
unsigned int range)
static unsigned int eeprom_coarse_byte(unsigned int word)
static unsigned int eeprom_fine_byte(unsigned int word)
static void cb_pcidda_calibrate(struct comedi_device *dev, unsigned int channel,
unsigned int range)
static int __devinit driver_cb_pcidda_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_cb_pcidda_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_cb_pcidda_pci_driver = ;
static int __init driver_cb_pcidda_init_module(void)
static void __exit driver_cb_pcidda_cleanup_module(void)
module_init(driver_cb_pcidda_init_module);
module_exit(driver_cb_pcidda_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
