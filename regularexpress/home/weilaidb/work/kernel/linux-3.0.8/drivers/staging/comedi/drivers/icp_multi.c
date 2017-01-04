#define DEVICE_ID	0x8000
#define ICP_MULTI_EXTDEBUG
#define TYPE_ICP_MULTI	0
#define IORANGE_ICP_MULTI 	32
#define ICP_MULTI_ADC_CSR	0
#define ICP_MULTI_AI		2
#define ICP_MULTI_DAC_CSR	4
#define ICP_MULTI_AO		6
#define ICP_MULTI_DI		8
#define ICP_MULTI_DO		0x0A
#define ICP_MULTI_INT_EN	0x0C
#define ICP_MULTI_INT_STAT	0x0E
#define ICP_MULTI_CNTR0		0x10
#define ICP_MULTI_CNTR1		0x12
#define ICP_MULTI_CNTR2		0x14
#define ICP_MULTI_CNTR3		0x16
#define ICP_MULTI_SIZE		0x20
#define	ADC_ST		0x0001
#define	ADC_BSY		0x0001
#define ADC_BI		0x0010
#define ADC_RA		0x0020
#define	ADC_DI		0x0040
#define	DAC_ST		0x0001
#define DAC_BSY		0x0001
#define	DAC_BI		0x0010
#define	DAC_RA		0x0020
#define	ADC_READY	0x0001
#define	DAC_READY	0x0002
#define	DOUT_ERROR	0x0004
#define	DIN_STATUS	0x0008
#define	CIE0		0x0010
#define	CIE1		0x0020
#define	CIE2		0x0040
#define	CIE3		0x0080
#define	Status_IRQ	0x00ff
static const struct comedi_lrange range_analog = ;
static const char range_codes_analog[] = ;
static int icp_multi_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int icp_multi_detach(struct comedi_device *dev);
static unsigned short pci_list_builded;
struct boardtype ;
static const struct boardtype boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct boardtype))
static struct comedi_driver driver_icp_multi = ;
static int __init driver_icp_multi_init_module(void)
static void __exit driver_icp_multi_cleanup_module(void)
module_init(driver_icp_multi_init_module);
module_exit(driver_icp_multi_cleanup_module);
struct icp_multi_private ;
#define devpriv ((struct icp_multi_private *)dev->private)
#define this_board ((const struct boardtype *)dev->board_ptr)
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan);
static int icp_multi_reset(struct comedi_device *dev);
static int icp_multi_insn_read_ai(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int icp_multi_insn_write_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int icp_multi_insn_read_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int icp_multi_insn_bits_di(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int icp_multi_insn_bits_do(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int icp_multi_insn_read_ctr(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int icp_multi_insn_write_ctr(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static irqreturn_t interrupt_service_icp_multi(int irq, void *d)
if (n_chan < 1)
for (i = 0; i < n_chan; i++)
return 1;
}
static void setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *chanlist, unsigned int n_chan)
static int icp_multi_reset(struct comedi_device *dev)
static int icp_multi_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int icp_multi_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
