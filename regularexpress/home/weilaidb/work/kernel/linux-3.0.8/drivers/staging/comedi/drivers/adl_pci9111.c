#define PCI9111_DRIVER_NAME	"adl_pci9111"
#define PCI9111_HR_DEVICE_ID	0x9111
#define PCI9111_IO_RANGE	0x0100
#define PCI9111_FIFO_HALF_SIZE	512
#define PCI9111_AI_CHANNEL_NBR			16
#define PCI9111_AI_RESOLUTION			12
#define PCI9111_AI_RESOLUTION_MASK		0x0FFF
#define PCI9111_AI_RESOLUTION_2_CMP_BIT		0x0800
#define PCI9111_HR_AI_RESOLUTION		16
#define PCI9111_HR_AI_RESOLUTION_MASK		0xFFFF
#define PCI9111_HR_AI_RESOLUTION_2_CMP_BIT	0x8000
#define PCI9111_AI_ACQUISITION_PERIOD_MIN_NS	10000
#define PCI9111_AO_CHANNEL_NBR			1
#define	PCI9111_AO_RESOLUTION			12
#define PCI9111_AO_RESOLUTION_MASK		0x0FFF
#define PCI9111_DI_CHANNEL_NBR			16
#define	PCI9111_DO_CHANNEL_NBR			16
#define PCI9111_DO_MASK				0xFFFF
#define PCI9111_RANGE_SETTING_DELAY		10
#define PCI9111_AI_INSTANT_READ_UDELAY_US	2
#define PCI9111_AI_INSTANT_READ_TIMEOUT		100
#define PCI9111_8254_CLOCK_PERIOD_NS		500
#define PCI9111_8254_COUNTER_0			0x00
#define PCI9111_8254_COUNTER_1			0x40
#define PCI9111_8254_COUNTER_2			0x80
#define PCI9111_8254_COUNTER_LATCH		0x00
#define PCI9111_8254_READ_LOAD_LSB_ONLY		0x10
#define PCI9111_8254_READ_LOAD_MSB_ONLY		0x20
#define PCI9111_8254_READ_LOAD_LSB_MSB		0x30
#define PCI9111_8254_MODE_0			0x00
#define PCI9111_8254_MODE_1			0x02
#define PCI9111_8254_MODE_2			0x04
#define PCI9111_8254_MODE_3			0x06
#define PCI9111_8254_MODE_4			0x08
#define PCI9111_8254_MODE_5			0x0A
#define PCI9111_8254_BINARY_COUNTER		0x00
#define PCI9111_8254_BCD_COUNTER		0x01
#define PCI9111_REGISTER_AD_FIFO_VALUE			0x00
#define PCI9111_REGISTER_DA_OUTPUT			0x00
#define PCI9111_REGISTER_DIGITAL_IO			0x02
#define PCI9111_REGISTER_EXTENDED_IO_PORTS		0x04
#define PCI9111_REGISTER_AD_CHANNEL_CONTROL		0x06
#define PCI9111_REGISTER_AD_CHANNEL_READBACK		0x06
#define PCI9111_REGISTER_INPUT_SIGNAL_RANGE		0x08
#define PCI9111_REGISTER_RANGE_STATUS_READBACK		0x08
#define PCI9111_REGISTER_TRIGGER_MODE_CONTROL		0x0A
#define PCI9111_REGISTER_AD_MODE_INTERRUPT_READBACK	0x0A
#define PCI9111_REGISTER_SOFTWARE_TRIGGER		0x0E
#define PCI9111_REGISTER_INTERRUPT_CONTROL		0x0C
#define PCI9111_REGISTER_8254_COUNTER_0			0x40
#define PCI9111_REGISTER_8254_COUNTER_1			0x42
#define PCI9111_REGISTER_8254_COUNTER_2			0X44
#define PCI9111_REGISTER_8254_CONTROL			0x46
#define PCI9111_REGISTER_INTERRUPT_CLEAR		0x48
#define PCI9111_TRIGGER_MASK				0x0F
#define PCI9111_PTRG_OFF				(0 << 3)
#define PCI9111_PTRG_ON					(1 << 3)
#define PCI9111_EITS_EXTERNAL				(1 << 2)
#define PCI9111_EITS_INTERNAL				(0 << 2)
#define PCI9111_TPST_SOFTWARE_TRIGGER			(0 << 1)
#define PCI9111_TPST_TIMER_PACER			(1 << 1)
#define PCI9111_ASCAN_ON				(1 << 0)
#define PCI9111_ASCAN_OFF				(0 << 0)
#define PCI9111_ISC0_SET_IRQ_ON_ENDING_OF_AD_CONVERSION (0 << 0)
#define PCI9111_ISC0_SET_IRQ_ON_FIFO_HALF_FULL		(1 << 0)
#define PCI9111_ISC1_SET_IRQ_ON_TIMER_TICK		(0 << 1)
#define PCI9111_ISC1_SET_IRQ_ON_EXT_TRG			(1 << 1)
#define PCI9111_FFEN_SET_FIFO_ENABLE			(0 << 2)
#define PCI9111_FFEN_SET_FIFO_DISABLE			(1 << 2)
#define PCI9111_CHANNEL_MASK				0x0F
#define PCI9111_RANGE_MASK				0x07
#define PCI9111_FIFO_EMPTY_MASK				0x10
#define PCI9111_FIFO_HALF_FULL_MASK			0x20
#define PCI9111_FIFO_FULL_MASK				0x40
#define PCI9111_AD_BUSY_MASK				0x80
#define PCI9111_IO_BASE (dev->iobase)
#define pci9111_trigger_and_autoscan_get() \
(inb(PCI9111_IO_BASE+PCI9111_REGISTER_AD_MODE_INTERRUPT_READBACK)&0x0F)
#define pci9111_trigger_and_autoscan_set(flags) \
outb(flags, PCI9111_IO_BASE+PCI9111_REGISTER_TRIGGER_MODE_CONTROL)
#define pci9111_interrupt_and_fifo_get() \
((inb(PCI9111_IO_BASE+PCI9111_REGISTER_AD_MODE_INTERRUPT_READBACK) \
>> 4) & 0x03)
#define pci9111_interrupt_and_fifo_set(flags) \
outb(flags, PCI9111_IO_BASE+PCI9111_REGISTER_INTERRUPT_CONTROL)
#define pci9111_interrupt_clear() \
outb(0, PCI9111_IO_BASE+PCI9111_REGISTER_INTERRUPT_CLEAR)
#define pci9111_software_trigger() \
outb(0, PCI9111_IO_BASE+PCI9111_REGISTER_SOFTWARE_TRIGGER)
#define pci9111_fifo_reset() do  while (0)
#define pci9111_is_fifo_full() \
((inb(PCI9111_IO_BASE+PCI9111_REGISTER_RANGE_STATUS_READBACK)& \
PCI9111_FIFO_FULL_MASK) == 0)
#define pci9111_is_fifo_half_full() \
((inb(PCI9111_IO_BASE+PCI9111_REGISTER_RANGE_STATUS_READBACK)& \
PCI9111_FIFO_HALF_FULL_MASK) == 0)
#define pci9111_is_fifo_empty() \
((inb(PCI9111_IO_BASE+PCI9111_REGISTER_RANGE_STATUS_READBACK)& \
PCI9111_FIFO_EMPTY_MASK) == 0)
#define pci9111_ai_channel_set(channel) \
outb((channel)&PCI9111_CHANNEL_MASK, \
PCI9111_IO_BASE+PCI9111_REGISTER_AD_CHANNEL_CONTROL)
#define pci9111_ai_channel_get() \
(inb(PCI9111_IO_BASE+PCI9111_REGISTER_AD_CHANNEL_READBACK) \
&PCI9111_CHANNEL_MASK)
#define pci9111_ai_range_set(range) \
outb((range)&PCI9111_RANGE_MASK, \
PCI9111_IO_BASE+PCI9111_REGISTER_INPUT_SIGNAL_RANGE)
#define pci9111_ai_range_get() \
(inb(PCI9111_IO_BASE+PCI9111_REGISTER_RANGE_STATUS_READBACK) \
&PCI9111_RANGE_MASK)
#define pci9111_ai_get_data() \
(((inw(PCI9111_IO_BASE+PCI9111_REGISTER_AD_FIFO_VALUE)>>4) \
&PCI9111_AI_RESOLUTION_MASK) \
^ PCI9111_AI_RESOLUTION_2_CMP_BIT)
#define pci9111_hr_ai_get_data() \
((inw(PCI9111_IO_BASE+PCI9111_REGISTER_AD_FIFO_VALUE) \
&PCI9111_HR_AI_RESOLUTION_MASK) \
^ PCI9111_HR_AI_RESOLUTION_2_CMP_BIT)
#define pci9111_ao_set_data(data) \
outw(data&PCI9111_AO_RESOLUTION_MASK, \
PCI9111_IO_BASE+PCI9111_REGISTER_DA_OUTPUT)
#define pci9111_di_get_bits() \
inw(PCI9111_IO_BASE+PCI9111_REGISTER_DIGITAL_IO)
#define pci9111_do_set_bits(bits) \
outw(bits, PCI9111_IO_BASE+PCI9111_REGISTER_DIGITAL_IO)
#define pci9111_8254_control_set(flags) \
outb(flags, PCI9111_IO_BASE+PCI9111_REGISTER_8254_CONTROL)
#define pci9111_8254_counter_0_set(data) \
do  while (0)
#define pci9111_8254_counter_1_set(data) \
do  while (0)
#define pci9111_8254_counter_2_set(data) \
do  while (0)
static int pci9111_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci9111_detach(struct comedi_device *dev);
static void pci9111_ai_munge(struct comedi_device *dev,
struct comedi_subdevice *s, void *data,
unsigned int num_bytes,
unsigned int start_chan_index);
static const struct comedi_lrange pci9111_hr_ai_range = ;
static DEFINE_PCI_DEVICE_TABLE(pci9111_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci9111_pci_table);
struct pci9111_board ;
static const struct pci9111_board pci9111_boards[] = ;
#define pci9111_board_nbr \
(sizeof(pci9111_boards)/sizeof(struct pci9111_board))
static struct comedi_driver pci9111_driver = ;
static int __devinit pci9111_driver_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit pci9111_driver_pci_remove(struct pci_dev *dev)
static struct pci_driver pci9111_driver_pci_driver = ;
static int __init pci9111_driver_init_module(void)
static void __exit pci9111_driver_cleanup_module(void)
module_init(pci9111_driver_init_module);
module_exit(pci9111_driver_cleanup_module);
struct pci9111_private_data ;
#define dev_private	((struct pci9111_private_data *)dev->private)
#define PLX9050_REGISTER_INTERRUPT_CONTROL 0x4c
#define PLX9050_LINTI1_ENABLE		(1 << 0)
#define PLX9050_LINTI1_ACTIVE_HIGH	(1 << 1)
#define PLX9050_LINTI1_STATUS		(1 << 2)
#define PLX9050_LINTI2_ENABLE		(1 << 3)
#define PLX9050_LINTI2_ACTIVE_HIGH	(1 << 4)
#define PLX9050_LINTI2_STATUS		(1 << 5)
#define PLX9050_PCI_INTERRUPT_ENABLE	(1 << 6)
#define PLX9050_SOFTWARE_INTERRUPT	(1 << 7)
static void plx9050_interrupt_control(unsigned long io_base,
bool LINTi1_enable,
bool LINTi1_active_high,
bool LINTi2_enable,
bool LINTi2_active_high,
bool interrupt_enable)
static void pci9111_timer_set(struct comedi_device *dev)
enum pci9111_trigger_sources ;
static void pci9111_trigger_source_set(struct comedi_device *dev,
enum pci9111_trigger_sources source)
static void pci9111_pretrigger_set(struct comedi_device *dev, bool pretrigger)
static void pci9111_autoscan_set(struct comedi_device *dev, bool autoscan)
enum pci9111_ISC0_sources ;
enum pci9111_ISC1_sources ;
static void pci9111_interrupt_source_set(struct comedi_device *dev,
enum pci9111_ISC0_sources irq_0_source,
enum pci9111_ISC1_sources irq_1_source)
#undef AI_DO_CMD_DEBUG
static int pci9111_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
#define pci9111_check_trigger_src(src, flags)	do  while (false);
static int
pci9111_ai_do_cmd_test(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int pci9111_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *subdevice)
static void pci9111_ai_munge(struct comedi_device *dev,
struct comedi_subdevice *s, void *data,
unsigned int num_bytes,
unsigned int start_chan_index)
#undef INTERRUPT_DEBUG
static irqreturn_t pci9111_interrupt(int irq, void *p_device)
#undef AI_INSN_DEBUG
static int pci9111_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *subdevice,
struct comedi_insn *insn, unsigned int *data)
static int
pci9111_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int pci9111_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci9111_di_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *subdevice,
struct comedi_insn *insn, unsigned int *data)
static int pci9111_do_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *subdevice,
struct comedi_insn *insn, unsigned int *data)
static int pci9111_reset(struct comedi_device *dev)
static int pci9111_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci9111_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
