#undef LABPC_DEBUG
#define DRV_NAME "ni_labpc"
#define LABPC_SIZE           32
#define LABPC_TIMER_BASE            500
#define COMMAND1_REG	0x0
#define   ADC_GAIN_MASK	(0x7 << 4)
#define   ADC_CHAN_BITS(x)	((x) & 0x7)
#define   ADC_SCAN_EN_BIT	0x80
#define COMMAND2_REG	0x1
#define   PRETRIG_BIT	0x1
#define   HWTRIG_BIT	0x2
#define   SWTRIG_BIT	0x4
#define   CASCADE_BIT	0x8
#define   DAC_PACED_BIT(channel)	(0x40 << ((channel) & 0x1))
#define COMMAND3_REG	0x2
#define   DMA_EN_BIT	0x1
#define   DIO_INTR_EN_BIT	0x2
#define   DMATC_INTR_EN_BIT	0x4
#define   TIMER_INTR_EN_BIT	0x8
#define   ERR_INTR_EN_BIT	0x10
#define   ADC_FNE_INTR_EN_BIT	0x20
#define ADC_CONVERT_REG	0x3
#define DAC_LSB_REG(channel)	(0x4 + 2 * ((channel) & 0x1))
#define DAC_MSB_REG(channel)	(0x5 + 2 * ((channel) & 0x1))
#define ADC_CLEAR_REG	0x8
#define DMATC_CLEAR_REG	0xa
#define TIMER_CLEAR_REG	0xc
#define COMMAND6_REG	0xe
#define   ADC_COMMON_BIT	0x1
#define   ADC_UNIP_BIT	0x2
#define   DAC_UNIP_BIT(channel)	(0x4 << ((channel) & 0x1))
#define   ADC_FHF_INTR_EN_BIT	0x20
#define   A1_INTR_EN_BIT	0x40
#define   ADC_SCAN_UP_BIT 0x80
#define COMMAND4_REG	0xf
#define   INTERVAL_SCAN_EN_BIT	0x1
#define   EXT_SCAN_EN_BIT	0x2
#define   EXT_CONVERT_OUT_BIT	0x4
#define   ADC_DIFF_BIT	0x8
#define   EXT_CONVERT_DISABLE_BIT	0x10
#define COMMAND5_REG	0x1c
#define   EEPROM_WRITE_UNPROTECT_BIT	0x4
#define   DITHER_EN_BIT	0x8
#define   CALDAC_LOAD_BIT	0x10
#define   SCLOCK_BIT	0x20
#define   SDATA_BIT	0x40
#define   EEPROM_EN_BIT	0x80
#define INTERVAL_COUNT_REG	0x1e
#define INTERVAL_LOAD_REG	0x1f
#define   INTERVAL_LOAD_BITS	0x1
#define STATUS1_REG	0x0
#define   DATA_AVAIL_BIT	0x1
#define   OVERRUN_BIT	0x2
#define   OVERFLOW_BIT	0x4
#define   TIMER_BIT	0x8
#define   DMATC_BIT	0x10
#define   EXT_TRIG_BIT	0x40
#define STATUS2_REG	0x1d
#define   EEPROM_OUT_BIT	0x1
#define   A1_TC_BIT	0x2
#define   FNHF_BIT	0x4
#define ADC_FIFO_REG	0xa
#define DIO_BASE_REG	0x10
#define COUNTER_A_BASE_REG	0x14
#define COUNTER_A_CONTROL_REG	(COUNTER_A_BASE_REG + 0x3)
#define   INIT_A0_BITS	0x14
#define   INIT_A1_BITS	0x70
#define COUNTER_B_BASE_REG	0x18
static int labpc_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int labpc_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static irqreturn_t labpc_interrupt(int irq, void *d);
static int labpc_drain_fifo(struct comedi_device *dev);
static void labpc_drain_dma(struct comedi_device *dev);
static void handle_isa_dma(struct comedi_device *dev);
static void labpc_drain_dregs(struct comedi_device *dev);
static int labpc_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int labpc_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int labpc_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int labpc_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int labpc_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int labpc_calib_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int labpc_calib_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int labpc_eeprom_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int labpc_eeprom_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static unsigned int labpc_suggest_transfer_size(struct comedi_cmd cmd);
static void labpc_adc_timing(struct comedi_device *dev, struct comedi_cmd *cmd);
static int labpc_find_device(struct comedi_device *dev, int bus, int slot);
static int labpc_dio_mem_callback(int dir, int port, int data,
unsigned long arg);
static void labpc_serial_out(struct comedi_device *dev, unsigned int value,
unsigned int num_bits);
static unsigned int labpc_serial_in(struct comedi_device *dev);
static unsigned int labpc_eeprom_read(struct comedi_device *dev,
unsigned int address);
static unsigned int labpc_eeprom_read_status(struct comedi_device *dev);
static int labpc_eeprom_write(struct comedi_device *dev,
unsigned int address,
unsigned int value);
static void write_caldac(struct comedi_device *dev, unsigned int channel,
unsigned int value);
enum scan_mode ;
#define NUM_LABPC_PLUS_AI_RANGES 16
static const int labpc_plus_is_unipolar[NUM_LABPC_PLUS_AI_RANGES] = ;
static const int labpc_plus_ai_gain_bits[NUM_LABPC_PLUS_AI_RANGES] = ;
static const struct comedi_lrange range_labpc_plus_ai = ;
#define NUM_LABPC_1200_AI_RANGES 14
const int labpc_1200_is_unipolar[NUM_LABPC_1200_AI_RANGES] = ;
EXPORT_SYMBOL_GPL(labpc_1200_is_unipolar);
const int labpc_1200_ai_gain_bits[NUM_LABPC_1200_AI_RANGES] = ;
EXPORT_SYMBOL_GPL(labpc_1200_ai_gain_bits);
const struct comedi_lrange range_labpc_1200_ai = ;
EXPORT_SYMBOL_GPL(range_labpc_1200_ai);
#define AO_RANGE_IS_UNIPOLAR 0x1
static const struct comedi_lrange range_labpc_ao = ;
static inline unsigned int labpc_inb(unsigned long address)
static inline void labpc_outb(unsigned int byte, unsigned long address)
static inline unsigned int labpc_readb(unsigned long address)
static inline void labpc_writeb(unsigned int byte, unsigned long address)
static const struct labpc_board_struct labpc_boards[] = ;
#define thisboard ((struct labpc_board_struct *)dev->board_ptr)
static const int dma_buffer_size = 0xff00;
static const int sample_size = 2;
#define devpriv ((struct labpc_private *)dev->private)
static struct comedi_driver driver_labpc = ;
static DEFINE_PCI_DEVICE_TABLE(labpc_pci_table) = ;
MODULE_DEVICE_TABLE(pci, labpc_pci_table);
static inline int labpc_counter_load(struct comedi_device *dev,
unsigned long base_address,
unsigned int counter_number,
unsigned int count, unsigned int mode)
int labpc_common_attach(struct comedi_device *dev, unsigned long iobase,
unsigned int irq, unsigned int dma_chan)
EXPORT_SYMBOL_GPL(labpc_common_attach);
static int labpc_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int labpc_find_device(struct comedi_device *dev, int bus, int slot)
int labpc_common_detach(struct comedi_device *dev)
;
EXPORT_SYMBOL_GPL(labpc_common_detach);
static void labpc_clear_adc_fifo(const struct comedi_device *dev)
static int labpc_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static enum scan_mode labpc_ai_scan_mode(const struct comedi_cmd *cmd)
static int labpc_ai_chanlist_invalid(const struct comedi_device *dev,
const struct comedi_cmd *cmd)
static int labpc_use_continuous_mode(const struct comedi_cmd *cmd)
static unsigned int labpc_ai_convert_period(const struct comedi_cmd *cmd)
static void labpc_set_ai_convert_period(struct comedi_cmd *cmd, unsigned int ns)
static unsigned int labpc_ai_scan_period(const struct comedi_cmd *cmd)
static void labpc_set_ai_scan_period(struct comedi_cmd *cmd, unsigned int ns)
static int labpc_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int labpc_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static irqreturn_t labpc_interrupt(int irq, void *d)
static int labpc_drain_fifo(struct comedi_device *dev)
static void labpc_drain_dma(struct comedi_device *dev)
static void handle_isa_dma(struct comedi_device *dev)
static void labpc_drain_dregs(struct comedi_device *dev)
static int labpc_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int labpc_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int labpc_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int labpc_calib_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int labpc_calib_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int labpc_eeprom_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int labpc_eeprom_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static unsigned int labpc_suggest_transfer_size(struct comedi_cmd cmd)
static void labpc_adc_timing(struct comedi_device *dev, struct comedi_cmd *cmd)
static int labpc_dio_mem_callback(int dir, int port, int data,
unsigned long iobase)
static void labpc_serial_out(struct comedi_device *dev, unsigned int value,
unsigned int value_width)
static unsigned int labpc_serial_in(struct comedi_device *dev)
static unsigned int labpc_eeprom_read(struct comedi_device *dev,
unsigned int address)
static int labpc_eeprom_write(struct comedi_device *dev,
unsigned int address, unsigned int value)
static unsigned int labpc_eeprom_read_status(struct comedi_device *dev)
static void write_caldac(struct comedi_device *dev, unsigned int channel,
unsigned int value)
static int __devinit driver_labpc_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_labpc_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_labpc_pci_driver = ;
static int __init driver_labpc_init_module(void)
static void __exit driver_labpc_cleanup_module(void)
module_init(driver_labpc_init_module);
module_exit(driver_labpc_cleanup_module);
static int __init driver_labpc_init_module(void)
static void __exit driver_labpc_cleanup_module(void)
module_init(driver_labpc_init_module);
module_exit(driver_labpc_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
