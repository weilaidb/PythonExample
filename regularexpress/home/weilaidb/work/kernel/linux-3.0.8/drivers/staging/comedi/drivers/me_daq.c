#define ME_DRIVER_NAME		"me_daq"
#define PCI_VENDOR_ID_MEILHAUS	0x1402
#define ME2000_DEVICE_ID	0x2000
#define ME2600_DEVICE_ID	0x2600
#define PLX_INTCSR		0x4C
#define XILINX_DOWNLOAD_RESET	0x42
#define ME_CONTROL_1			0x0000
#define   INTERRUPT_ENABLE		(1<<15)
#define   COUNTER_B_IRQ			(1<<12)
#define   COUNTER_A_IRQ			(1<<11)
#define   CHANLIST_READY_IRQ		(1<<10)
#define   EXT_IRQ			(1<<9)
#define   ADFIFO_HALFFULL_IRQ		(1<<8)
#define   SCAN_COUNT_ENABLE		(1<<5)
#define   SIMULTANEOUS_ENABLE		(1<<4)
#define   TRIGGER_FALLING_EDGE		(1<<3)
#define   CONTINUOUS_MODE		(1<<2)
#define   DISABLE_ADC			(0<<0)
#define   SOFTWARE_TRIGGERED_ADC	(1<<0)
#define   SCAN_TRIGGERED_ADC		(2<<0)
#define   EXT_TRIGGERED_ADC		(3<<0)
#define ME_ADC_START			0x0000
#define ME_CONTROL_2			0x0002
#define   ENABLE_ADFIFO			(1<<10)
#define   ENABLE_CHANLIST		(1<<9)
#define   ENABLE_PORT_B			(1<<7)
#define   ENABLE_PORT_A			(1<<6)
#define   ENABLE_COUNTER_B		(1<<4)
#define   ENABLE_COUNTER_A		(1<<3)
#define   ENABLE_DAC			(1<<1)
#define   BUFFERED_DAC			(1<<0)
#define ME_DAC_UPDATE			0x0002
#define ME_STATUS			0x0004
#define   COUNTER_B_IRQ_PENDING		(1<<12)
#define   COUNTER_A_IRQ_PENDING		(1<<11)
#define   CHANLIST_READY_IRQ_PENDING	(1<<10)
#define   EXT_IRQ_PENDING		(1<<9)
#define   ADFIFO_HALFFULL_IRQ_PENDING	(1<<8)
#define   ADFIFO_FULL			(1<<4)
#define   ADFIFO_HALFFULL		(1<<3)
#define   ADFIFO_EMPTY			(1<<2)
#define   CHANLIST_FULL			(1<<1)
#define   FST_ACTIVE			(1<<0)
#define ME_RESET_INTERRUPT		0x0004
#define ME_DIO_PORT_A			0x0006
#define ME_DIO_PORT_B			0x0008
#define ME_TIMER_DATA_0			0x000A
#define ME_TIMER_DATA_1			0x000C
#define ME_TIMER_DATA_2			0x000E
#define ME_CHANNEL_LIST			0x0010
#define   ADC_UNIPOLAR			(1<<6)
#define   ADC_GAIN_0			(0<<4)
#define   ADC_GAIN_1			(1<<4)
#define   ADC_GAIN_2			(2<<4)
#define   ADC_GAIN_3			(3<<4)
#define ME_READ_AD_FIFO			0x0010
#define ME_DAC_CONTROL			0x0012
#define   DAC_UNIPOLAR_D		(0<<4)
#define   DAC_BIPOLAR_D			(1<<4)
#define   DAC_UNIPOLAR_C		(0<<5)
#define   DAC_BIPOLAR_C			(1<<5)
#define   DAC_UNIPOLAR_B		(0<<6)
#define   DAC_BIPOLAR_B			(1<<6)
#define   DAC_UNIPOLAR_A		(0<<7)
#define   DAC_BIPOLAR_A			(1<<7)
#define   DAC_GAIN_0_D			(0<<8)
#define   DAC_GAIN_1_D			(1<<8)
#define   DAC_GAIN_0_C			(0<<9)
#define   DAC_GAIN_1_C			(1<<9)
#define   DAC_GAIN_0_B			(0<<10)
#define   DAC_GAIN_1_B			(1<<10)
#define   DAC_GAIN_0_A			(0<<11)
#define   DAC_GAIN_1_A			(1<<11)
#define ME_DAC_CONTROL_UPDATE		0x0012
#define ME_DAC_DATA_A			0x0014
#define ME_DAC_DATA_B			0x0016
#define ME_DAC_DATA_C			0x0018
#define ME_DAC_DATA_D			0x001A
#define ME_COUNTER_ENDDATA_A		0x001C
#define ME_COUNTER_ENDDATA_B		0x001E
#define ME_COUNTER_STARTDATA_A		0x0020
#define ME_COUNTER_VALUE_A		0x0020
#define ME_COUNTER_STARTDATA_B		0x0022
#define ME_COUNTER_VALUE_B		0x0022
static int me_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int me_detach(struct comedi_device *dev);
static const struct comedi_lrange me2000_ai_range = ;
static const struct comedi_lrange me2600_ai_range = ;
static const struct comedi_lrange me2600_ao_range = ;
static DEFINE_PCI_DEVICE_TABLE(me_pci_table) = ;
MODULE_DEVICE_TABLE(pci, me_pci_table);
struct me_board ;
static const struct me_board me_boards[] = ;
#define me_board_nbr (sizeof(me_boards)/sizeof(struct me_board))
static struct comedi_driver me_driver = ;
static int __devinit me_driver_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit me_driver_pci_remove(struct pci_dev *dev)
static struct pci_driver me_driver_pci_driver = ;
static int __init me_driver_init_module(void)
static void __exit me_driver_cleanup_module(void)
module_init(me_driver_init_module);
module_exit(me_driver_cleanup_module);
struct me_private_data ;
#define dev_private ((struct me_private_data *)dev->private)
static inline void sleep(unsigned sec)
static int me_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *subdevice,
struct comedi_insn *insn, unsigned int *data)
static int me_ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int me_ai_do_cmd_test(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int me_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *subdevice)
static int me_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int me_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int me2600_xilinx_download(struct comedi_device *dev,
unsigned char *me2600_firmware,
unsigned int length)
static int me_reset(struct comedi_device *dev)
static int me_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int me_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
