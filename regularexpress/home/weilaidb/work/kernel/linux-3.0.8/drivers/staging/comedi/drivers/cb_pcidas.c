#undef CB_PCIDAS_DEBUG
#define PCI_VENDOR_ID_CB	0x1307
#define TIMER_BASE 100
#define AI_BUFFER_SIZE 1024
#define AO_BUFFER_SIZE 1024
#define NUM_CHANNELS_8800 8
#define NUM_CHANNELS_7376 1
#define NUM_CHANNELS_8402 2
#define NUM_CHANNELS_DAC08 1
#define S5933_BADRINDEX 0
#define CONT_STAT_BADRINDEX 1
#define ADC_FIFO_BADRINDEX 2
#define PACER_BADRINDEX 3
#define AO_BADRINDEX 4
#define CONT_STAT_SIZE 10
#define ADC_FIFO_SIZE 4
#define PACER_SIZE 12
#define AO_SIZE 4
#define INT_ADCFIFO	0
#define   INT_EOS 0x1
#define   INT_FHF 0x2
#define   INT_FNE 0x3
#define   INT_MASK 0x3
#define   INTE 0x4
#define   DAHFIE 0x8
#define   EOAIE	0x10
#define   DAHFI	0x20
#define   EOAI 0x40
#define   INT 0x80
#define   EOBI 0x200
#define   ADHFI 0x400
#define   ADNEI 0x800
#define   ADNE 0x1000
#define   DAEMIE	0x1000
#define   LADFUL 0x2000
#define   DAEMI 0x4000
#define ADCMUX_CONT	2
#define   BEGIN_SCAN(x)	((x) & 0xf)
#define   END_SCAN(x)	(((x) & 0xf) << 4)
#define   GAIN_BITS(x)	(((x) & 0x3) << 8)
#define   UNIP	0x800
#define   SE	0x400
#define   PACER_MASK	0x3000
#define   PACER_INT 0x1000
#define   PACER_EXT_FALL	0x2000
#define   PACER_EXT_RISE	0x3000
#define   EOC	0x4000
#define TRIG_CONTSTAT 4
#define   SW_TRIGGER 0x1
#define   EXT_TRIGGER 0x2
#define   ANALOG_TRIGGER 0x3
#define   TRIGGER_MASK	0x3
#define   TGPOL	0x04
#define   TGSEL	0x08
#define   TGEN	0x10
#define   BURSTE 0x20
#define   XTRCL	0x80
#define CALIBRATION_REG	6
#define   SELECT_8800_BIT	0x100
#define   SELECT_TRIMPOT_BIT	0x200
#define   SELECT_DAC08_BIT	0x400
#define   CAL_SRC_BITS(x)	(((x) & 0x7) << 11)
#define   CAL_EN_BIT	0x4000
#define   SERIAL_DATA_IN_BIT	0x8000
#define DAC_CSR	0x8
enum dac_csr_bits ;
static inline unsigned int DAC_RANGE(unsigned int channel, unsigned int range)
static inline unsigned int DAC_RANGE_MASK(unsigned int channel)
;
enum dac_csr_bits_1602 ;
static inline unsigned int DAC_CHAN_EN(unsigned int channel)
;
#define ADCDATA	0
#define ADCFIFOCLR	2
#define ADC8254 0
#define DIO_8255 4
#define DAC8254 8
static inline unsigned int DAC_DATA_REG(unsigned int channel)
#define DACDATA	0
#define DACFIFOCLR	2
#define IS_UNIPOLAR 0x4
static const struct comedi_lrange cb_pcidas_ranges = ;
static const struct comedi_lrange cb_pcidas_alt_ranges = ;
static const struct comedi_lrange cb_pcidas_ao_ranges = ;
enum trimpot_model ;
struct cb_pcidas_board ;
static const struct cb_pcidas_board cb_pcidas_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(cb_pcidas_pci_table) = ;
MODULE_DEVICE_TABLE(pci, cb_pcidas_pci_table);
#define thisboard ((const struct cb_pcidas_board *)dev->board_ptr)
struct cb_pcidas_private ;
#define devpriv ((struct cb_pcidas_private *)dev->private)
static int cb_pcidas_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int cb_pcidas_detach(struct comedi_device *dev);
static struct comedi_driver driver_cb_pcidas = ;
static int cb_pcidas_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ai_config_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int cb_pcidas_ao_nofifo_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int cb_pcidas_ao_fifo_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int cb_pcidas_ao_readback_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int cb_pcidas_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int cb_pcidas_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int cb_pcidas_ao_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int cb_pcidas_ao_inttrig(struct comedi_device *dev,
struct comedi_subdevice *subdev,
unsigned int trig_num);
static int cb_pcidas_ao_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static irqreturn_t cb_pcidas_interrupt(int irq, void *d);
static void handle_ao_interrupt(struct comedi_device *dev, unsigned int status);
static int cb_pcidas_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int cb_pcidas_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void cb_pcidas_load_counters(struct comedi_device *dev, unsigned int *ns,
int round_flags);
static int eeprom_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int caldac_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int caldac_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int trimpot_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int cb_pcidas_trimpot_write(struct comedi_device *dev,
unsigned int channel, unsigned int value);
static int trimpot_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dac08_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int dac08_write(struct comedi_device *dev, unsigned int value);
static int dac08_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int caldac_8800_write(struct comedi_device *dev, unsigned int address,
uint8_t value);
static int trimpot_7376_write(struct comedi_device *dev, uint8_t value);
static int trimpot_8402_write(struct comedi_device *dev, unsigned int channel,
uint8_t value);
static int nvram_read(struct comedi_device *dev, unsigned int address,
uint8_t *data);
static inline unsigned int cal_enable_bits(struct comedi_device *dev)
static int cb_pcidas_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int cb_pcidas_detach(struct comedi_device *dev)
static int cb_pcidas_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ai_config_calibration_source(struct comedi_device *dev,
unsigned int *data)
static int ai_config_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int cb_pcidas_ao_nofifo_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int cb_pcidas_ao_fifo_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int cb_pcidas_ao_readback_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int eeprom_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int caldac_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int caldac_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dac08_write(struct comedi_device *dev, unsigned int value)
static int dac08_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dac08_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int cb_pcidas_trimpot_write(struct comedi_device *dev,
unsigned int channel, unsigned int value)
static int trimpot_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int trimpot_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int cb_pcidas_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int cb_pcidas_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int cb_pcidas_ao_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int cb_pcidas_ao_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int cb_pcidas_ao_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trig_num)
static irqreturn_t cb_pcidas_interrupt(int irq, void *d)
static void handle_ao_interrupt(struct comedi_device *dev, unsigned int status)
static int cb_pcidas_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int cb_pcidas_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void cb_pcidas_load_counters(struct comedi_device *dev, unsigned int *ns,
int rounding_flags)
static void write_calibration_bitstream(struct comedi_device *dev,
unsigned int register_bits,
unsigned int bitstream,
unsigned int bitstream_length)
static int caldac_8800_write(struct comedi_device *dev, unsigned int address,
uint8_t value)
static int trimpot_7376_write(struct comedi_device *dev, uint8_t value)
static int trimpot_8402_write(struct comedi_device *dev, unsigned int channel,
uint8_t value)
static int wait_for_nvram_ready(unsigned long s5933_base_addr)
static int nvram_read(struct comedi_device *dev, unsigned int address,
uint8_t *data)
static int __devinit driver_cb_pcidas_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_cb_pcidas_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_cb_pcidas_pci_driver = ;
static int __init driver_cb_pcidas_init_module(void)
static void __exit driver_cb_pcidas_cleanup_module(void)
module_init(driver_cb_pcidas_init_module);
module_exit(driver_cb_pcidas_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
