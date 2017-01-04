#undef PCIDAS64_DEBUG
#define DEBUG_PRINT(format, args...)  printk(format , ## args)
#define DEBUG_PRINT(format, args...)
#define TIMER_BASE 25
#define PRESCALED_TIMER_BASE	10000
#define DMA_BUFFER_SIZE 0x1000
#define PCI_VENDOR_ID_COMPUTERBOARDS	0x1307
static const int max_counter_value = 0xffffff;
enum base_address_regions ;
enum write_only_registers ;
static inline unsigned int dac_convert_reg(unsigned int channel)
static inline unsigned int dac_lsb_4020_reg(unsigned int channel)
static inline unsigned int dac_msb_4020_reg(unsigned int channel)
enum read_only_registers ;
enum read_write_registers ;
enum dio_counter_registers ;
enum intr_enable_contents ;
enum hw_config_contents ;
#define DAC_FIFO_SIZE 0x2000
enum daq_atrig_low_4020_contents ;
static inline uint16_t analog_trig_low_threshold_bits(uint16_t threshold)
enum adc_control0_contents ;
enum adc_control1_contents ;
static inline uint16_t adc_lo_chan_4020_bits(unsigned int channel)
;
static inline uint16_t adc_hi_chan_4020_bits(unsigned int channel)
;
static inline uint16_t adc_mode_bits(unsigned int mode)
;
enum calibration_contents ;
static inline uint16_t adc_src_bits(unsigned int source)
;
static inline uint16_t adc_convert_chan_4020_bits(unsigned int channel)
;
enum adc_queue_load_contents ;
static inline uint16_t adc_chan_bits(unsigned int channel)
;
enum dac_control0_contents ;
enum dac_control1_contents ;
enum hw_status_contents ;
static inline uint16_t pipe_full_bits(uint16_t hw_status_bits)
;
static inline unsigned int dma_chain_flag_bits(uint16_t prepost_bits)
static inline unsigned int adc_upper_read_ptr_code(uint16_t prepost_bits)
static inline unsigned int adc_upper_write_ptr_code(uint16_t prepost_bits)
enum i2c_addresses ;
enum range_cal_i2c_contents ;
static inline uint8_t adc_src_4020_bits(unsigned int source)
;
static inline uint8_t attenuate_bit(unsigned int channel)
;
static const struct comedi_lrange ai_ranges_64xx = ;
static const struct comedi_lrange ai_ranges_60xx = ;
static const struct comedi_lrange ai_ranges_6030 = ;
static const struct comedi_lrange ai_ranges_6052 = ;
static const struct comedi_lrange ai_ranges_4020 = ;
static const struct comedi_lrange ao_ranges_64xx = ;
static const int ao_range_code_64xx[] = ;
static const struct comedi_lrange ao_ranges_60xx = ;
static const int ao_range_code_60xx[] = ;
static const struct comedi_lrange ao_ranges_6030 = ;
static const int ao_range_code_6030[] = ;
static const struct comedi_lrange ao_ranges_4020 = ;
static const int ao_range_code_4020[] = ;
enum register_layout ;
struct hw_fifo_info ;
struct pcidas64_board ;
static const struct hw_fifo_info ai_fifo_4020 = ;
static const struct hw_fifo_info ai_fifo_64xx = ;
static const struct hw_fifo_info ai_fifo_60xx = ;
#define MAX_AI_DMA_RING_COUNT (0x80000 / DMA_BUFFER_SIZE)
#define MIN_AI_DMA_RING_COUNT (0x10000 / DMA_BUFFER_SIZE)
#define AO_DMA_RING_COUNT (0x10000 / DMA_BUFFER_SIZE)
static inline unsigned int ai_dma_ring_count(struct pcidas64_board *board)
static const int bytes_in_sample = 2;
static const struct pcidas64_board pcidas64_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pcidas64_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pcidas64_pci_table);
static inline struct pcidas64_board *board(const struct comedi_device *dev)
static inline unsigned short se_diff_bit_6xxx(struct comedi_device *dev,
int use_differential)
;
struct ext_clock_info ;
struct pcidas64_private ;
static inline struct pcidas64_private *priv(struct comedi_device *dev)
static int attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int detach(struct comedi_device *dev);
static struct comedi_driver driver_cb_pcidas = ;
static int ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ai_config_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ao_readback_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int ai_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int ao_inttrig(struct comedi_device *dev,
struct comedi_subdevice *subdev, unsigned int trig_num);
static int ao_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static irqreturn_t handle_interrupt(int irq, void *d);
static int ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static int ao_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static int dio_callback(int dir, int port, int data, unsigned long arg);
static int dio_callback_4020(int dir, int port, int data, unsigned long arg);
static int di_rbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int do_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dio_60xx_config_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int dio_60xx_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int calib_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int calib_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ad8402_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static void ad8402_write(struct comedi_device *dev, unsigned int channel,
unsigned int value);
static int ad8402_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int eeprom_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static void check_adc_timing(struct comedi_device *dev, struct comedi_cmd *cmd);
static unsigned int get_divisor(unsigned int ns, unsigned int flags);
static void i2c_write(struct comedi_device *dev, unsigned int address,
const uint8_t * data, unsigned int length);
static void caldac_write(struct comedi_device *dev, unsigned int channel,
unsigned int value);
static int caldac_8800_write(struct comedi_device *dev, unsigned int address,
uint8_t value);
static int caldac_i2c_write(struct comedi_device *dev,
unsigned int caldac_channel, unsigned int value);
static void abort_dma(struct comedi_device *dev, unsigned int channel);
static void disable_plx_interrupts(struct comedi_device *dev);
static int set_ai_fifo_size(struct comedi_device *dev,
unsigned int num_samples);
static unsigned int ai_fifo_size(struct comedi_device *dev);
static int set_ai_fifo_segment_length(struct comedi_device *dev,
unsigned int num_entries);
static void disable_ai_pacing(struct comedi_device *dev);
static void disable_ai_interrupts(struct comedi_device *dev);
static void enable_ai_interrupts(struct comedi_device *dev,
const struct comedi_cmd *cmd);
static unsigned int get_ao_divisor(unsigned int ns, unsigned int flags);
static void load_ao_dma(struct comedi_device *dev,
const struct comedi_cmd *cmd);
static int __devinit driver_cb_pcidas_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_cb_pcidas_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_cb_pcidas_pci_driver = ;
static int __init driver_cb_pcidas_init_module(void)
static void __exit driver_cb_pcidas_cleanup_module(void)
module_init(driver_cb_pcidas_init_module);
module_exit(driver_cb_pcidas_cleanup_module);
static unsigned int ai_range_bits_6xxx(const struct comedi_device *dev,
unsigned int range_index)
static unsigned int hw_revision(const struct comedi_device *dev,
uint16_t hw_status_bits)
static void set_dac_range_bits(struct comedi_device *dev,
volatile uint16_t * bits, unsigned int channel,
unsigned int range)
;
static inline int ao_cmd_is_supported(const struct pcidas64_board *board)
static void init_plx9080(struct comedi_device *dev)
static int setup_subdevices(struct comedi_device *dev)
static void disable_plx_interrupts(struct comedi_device *dev)
static void init_stc_registers(struct comedi_device *dev)
;
static int alloc_and_init_dma_members(struct comedi_device *dev)
static inline void warn_external_queue(struct comedi_device *dev)
static int attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int detach(struct comedi_device *dev)
static int ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ai_config_calibration_source(struct comedi_device *dev,
unsigned int *data)
static int ai_config_block_size(struct comedi_device *dev, unsigned int *data)
static int ai_config_master_clock_4020(struct comedi_device *dev,
unsigned int *data)
static int ai_config_master_clock(struct comedi_device *dev, unsigned int *data)
static int ai_config_insn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ai_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int use_hw_sample_counter(struct comedi_cmd *cmd)
static void setup_sample_counters(struct comedi_device *dev,
struct comedi_cmd *cmd)
static inline unsigned int dma_transfer_size(struct comedi_device *dev)
static void disable_ai_pacing(struct comedi_device *dev)
static void disable_ai_interrupts(struct comedi_device *dev)
static void enable_ai_interrupts(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static uint32_t ai_convert_counter_6xxx(const struct comedi_device *dev,
const struct comedi_cmd *cmd)
static uint32_t ai_scan_counter_6xxx(struct comedi_device *dev,
struct comedi_cmd *cmd)
static uint32_t ai_convert_counter_4020(struct comedi_device *dev,
struct comedi_cmd *cmd)
static void select_master_clock_4020(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static void select_master_clock(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static inline void dma_start_sync(struct comedi_device *dev,
unsigned int channel)
static void set_ai_pacing(struct comedi_device *dev, struct comedi_cmd *cmd)
static int use_internal_queue_6xxx(const struct comedi_cmd *cmd)
static int setup_channel_queue(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static inline void load_first_dma_descriptor(struct comedi_device *dev,
unsigned int dma_channel,
unsigned int descriptor_bits)
static int ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static void pio_drain_ai_fifo_16(struct comedi_device *dev)
static void pio_drain_ai_fifo_32(struct comedi_device *dev)
static void pio_drain_ai_fifo(struct comedi_device *dev)
static void drain_dma_buffers(struct comedi_device *dev, unsigned int channel)
static void handle_ai_interrupt(struct comedi_device *dev,
unsigned short status,
unsigned int plx_status)
static inline unsigned int prev_ao_dma_index(struct comedi_device *dev)
static int last_ao_dma_load_completed(struct comedi_device *dev)
static int ao_stopped_by_error(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static inline int ao_dma_needs_restart(struct comedi_device *dev,
unsigned short dma_status)
static void restart_ao_dma(struct comedi_device *dev)
static void handle_ao_interrupt(struct comedi_device *dev,
unsigned short status, unsigned int plx_status)
static irqreturn_t handle_interrupt(int irq, void *d)
static void abort_dma(struct comedi_device *dev, unsigned int channel)
static int ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ao_readback_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void set_dac_control0_reg(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static void set_dac_control1_reg(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static void set_dac_select_reg(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static void set_dac_interval_regs(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static unsigned int load_ao_dma_buffer(struct comedi_device *dev,
const struct comedi_cmd *cmd)
static void load_ao_dma(struct comedi_device *dev, const struct comedi_cmd *cmd)
static int prep_ao_dma(struct comedi_device *dev, const struct comedi_cmd *cmd)
static inline int external_ai_queue_in_use(struct comedi_device *dev)
static int ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int ao_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trig_num)
static int ao_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int ao_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int dio_callback(int dir, int port, int data, unsigned long arg)
static int dio_callback_4020(int dir, int port, int data, unsigned long arg)
static int di_rbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int do_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dio_60xx_config_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int dio_60xx_wbits(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void caldac_write(struct comedi_device *dev, unsigned int channel,
unsigned int value)
static int calib_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int calib_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static void ad8402_write(struct comedi_device *dev, unsigned int channel,
unsigned int value)
static int ad8402_write_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ad8402_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static uint16_t read_eeprom(struct comedi_device *dev, uint8_t address)
static int eeprom_read_insn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void check_adc_timing(struct comedi_device *dev, struct comedi_cmd *cmd)
static unsigned int get_divisor(unsigned int ns, unsigned int flags)
static unsigned int get_ao_divisor(unsigned int ns, unsigned int flags)
static int set_ai_fifo_size(struct comedi_device *dev, unsigned int num_samples)
static unsigned int ai_fifo_size(struct comedi_device *dev)
static int set_ai_fifo_segment_length(struct comedi_device *dev,
unsigned int num_entries)
static int caldac_8800_write(struct comedi_device *dev, unsigned int address,
uint8_t value)
static int caldac_i2c_write(struct comedi_device *dev,
unsigned int caldac_channel, unsigned int value)
static const int i2c_high_udelay = 1000;
static const int i2c_low_udelay = 10;
static void i2c_set_sda(struct comedi_device *dev, int state)
static void i2c_set_scl(struct comedi_device *dev, int state)
static void i2c_write_byte(struct comedi_device *dev, uint8_t byte)
static int i2c_read_ack(struct comedi_device *dev)
static void i2c_start(struct comedi_device *dev)
static void i2c_stop(struct comedi_device *dev)
static void i2c_write(struct comedi_device *dev, unsigned int address,
const uint8_t * data, unsigned int length)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
