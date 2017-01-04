#define MDPRINTK(format, args...)
#define NI_TIMEOUT 1000
static const unsigned old_RTSI_clock_channel = 7;
static const short ni_gainlkup[][16] = ;
static const struct comedi_lrange range_ni_E_ai = ;
static const struct comedi_lrange range_ni_E_ai_limited = ;
static const struct comedi_lrange range_ni_E_ai_limited14 = ;
static const struct comedi_lrange range_ni_E_ai_bipolar4 = ;
static const struct comedi_lrange range_ni_E_ai_611x = ;
static const struct comedi_lrange range_ni_M_ai_622x = ;
static const struct comedi_lrange range_ni_M_ai_628x = ;
static const struct comedi_lrange range_ni_S_ai_6143 = ;
static const struct comedi_lrange range_ni_E_ao_ext = ;
static const struct comedi_lrange *const ni_range_lkup[] = ;
static int ni_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_cdio_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int ni_cdio_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int ni_cdio_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void handle_cdio_interrupt(struct comedi_device *dev);
static int ni_cdo_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum);
static int ni_serial_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_serial_hw_readwrite8(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned char data_out,
unsigned char *data_in);
static int ni_serial_sw_readwrite8(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned char data_out,
unsigned char *data_in);
static int ni_calib_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_calib_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_eeprom_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_m_series_eeprom_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int ni_pfi_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_pfi_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static unsigned ni_old_get_pfi_routing(struct comedi_device *dev,
unsigned chan);
static void ni_rtsi_init(struct comedi_device *dev);
static int ni_rtsi_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_rtsi_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static void caldac_setup(struct comedi_device *dev, struct comedi_subdevice *s);
static int ni_read_eeprom(struct comedi_device *dev, int addr);
static void ni_mio_print_status_a(int status);
#define ni_mio_print_status_a(a)
static void ni_mio_print_status_b(int status);
#define ni_mio_print_status_b(a)
static int ni_ai_reset(struct comedi_device *dev, struct comedi_subdevice *s);
static void ni_handle_fifo_half_full(struct comedi_device *dev);
static int ni_ao_fifo_half_empty(struct comedi_device *dev,
struct comedi_subdevice *s);
static void ni_handle_fifo_dregs(struct comedi_device *dev);
static int ni_ai_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum);
static void ni_load_channelgain_list(struct comedi_device *dev,
unsigned int n_chan, unsigned int *list);
static void shutdown_ai_command(struct comedi_device *dev);
static int ni_ao_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum);
static int ni_ao_reset(struct comedi_device *dev, struct comedi_subdevice *s);
static int ni_8255_callback(int dir, int port, int data, unsigned long arg);
static int ni_gpct_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_gpct_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_gpct_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_gpct_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int ni_gpct_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int ni_gpct_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void handle_gpct_interrupt(struct comedi_device *dev,
unsigned short counter_index);
static int init_cs5529(struct comedi_device *dev);
static int cs5529_do_conversion(struct comedi_device *dev,
unsigned short *data);
static int cs5529_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static unsigned int cs5529_config_read(struct comedi_device *dev,
unsigned int reg_select_bits);
static void cs5529_config_write(struct comedi_device *dev, unsigned int value,
unsigned int reg_select_bits);
static int ni_m_series_pwm_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_6143_pwm_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int ni_set_master_clock(struct comedi_device *dev, unsigned source,
unsigned period_ns);
static void ack_a_interrupt(struct comedi_device *dev, unsigned short a_status);
static void ack_b_interrupt(struct comedi_device *dev, unsigned short b_status);
enum aimodes ;
enum ni_common_subdevices ;
static inline unsigned NI_GPCT_SUBDEV(unsigned counter_index)
enum timebase_nanoseconds ;
#define SERIAL_DISABLED		0
#define SERIAL_600NS		600
#define SERIAL_1_2US		1200
#define SERIAL_10US			10000
static const int num_adc_stages_611x = 3;
static void handle_a_interrupt(struct comedi_device *dev, unsigned short status,
unsigned ai_mite_status);
static void handle_b_interrupt(struct comedi_device *dev, unsigned short status,
unsigned ao_mite_status);
static void get_last_sample_611x(struct comedi_device *dev);
static void get_last_sample_6143(struct comedi_device *dev);
static inline void ni_set_bitfield(struct comedi_device *dev, int reg,
unsigned bit_mask, unsigned bit_values)
static int ni_ai_drain_dma(struct comedi_device *dev);
static inline void ni_set_ai_dma_channel(struct comedi_device *dev, int channel)
static inline void ni_set_ao_dma_channel(struct comedi_device *dev, int channel)
static inline void ni_set_gpct_dma_channel(struct comedi_device *dev,
unsigned gpct_index,
int mite_channel)
static inline void ni_set_cdo_dma_channel(struct comedi_device *dev,
int mite_channel)
static int ni_request_ai_mite_channel(struct comedi_device *dev)
static int ni_request_ao_mite_channel(struct comedi_device *dev)
static int ni_request_gpct_mite_channel(struct comedi_device *dev,
unsigned gpct_index,
enum comedi_io_direction direction)
static int ni_request_cdo_mite_channel(struct comedi_device *dev)
static void ni_release_ai_mite_channel(struct comedi_device *dev)
static void ni_release_ao_mite_channel(struct comedi_device *dev)
void ni_release_gpct_mite_channel(struct comedi_device *dev,
unsigned gpct_index)
static void ni_release_cdo_mite_channel(struct comedi_device *dev)
static void ni_e_series_enable_second_irq(struct comedi_device *dev,
unsigned gpct_index, short enable)
static void ni_clear_ai_fifo(struct comedi_device *dev)
static void win_out2(struct comedi_device *dev, uint32_t data, int reg)
static uint32_t win_in2(struct comedi_device *dev, int reg)
#define ao_win_out(data, addr) ni_ao_win_outw(dev, data, addr)
static inline void ni_ao_win_outw(struct comedi_device *dev, uint16_t data,
int addr)
static inline void ni_ao_win_outl(struct comedi_device *dev, uint32_t data,
int addr)
static inline unsigned short ni_ao_win_inw(struct comedi_device *dev, int addr)
static inline void ni_set_bits(struct comedi_device *dev, int reg,
unsigned bits, unsigned value)
static irqreturn_t ni_E_interrupt(int irq, void *d)
static void ni_sync_ai_dma(struct comedi_device *dev)
static void mite_handle_b_linkc(struct mite_struct *mite,
struct comedi_device *dev)
static int ni_ao_wait_for_dma_load(struct comedi_device *dev)
static void ni_handle_eos(struct comedi_device *dev, struct comedi_subdevice *s)
static void shutdown_ai_command(struct comedi_device *dev)
static void ni_event(struct comedi_device *dev, struct comedi_subdevice *s)
static void handle_gpct_interrupt(struct comedi_device *dev,
unsigned short counter_index)
static void ack_a_interrupt(struct comedi_device *dev, unsigned short a_status)
static void handle_a_interrupt(struct comedi_device *dev, unsigned short status,
unsigned ai_mite_status)
static void ack_b_interrupt(struct comedi_device *dev, unsigned short b_status)
static void handle_b_interrupt(struct comedi_device *dev,
unsigned short b_status, unsigned ao_mite_status)
static const char *const status_a_strings[] = ;
static void ni_mio_print_status_a(int status)
static const char *const status_b_strings[] = ;
static void ni_mio_print_status_b(int status)
static void ni_ao_fifo_load(struct comedi_device *dev,
struct comedi_subdevice *s, int n)
static int ni_ao_fifo_half_empty(struct comedi_device *dev,
struct comedi_subdevice *s)
static int ni_ao_prep_fifo(struct comedi_device *dev,
struct comedi_subdevice *s)
static void ni_ai_fifo_read(struct comedi_device *dev,
struct comedi_subdevice *s, int n)
static void ni_handle_fifo_half_full(struct comedi_device *dev)
static int ni_ai_drain_dma(struct comedi_device *dev)
static void ni_handle_fifo_dregs(struct comedi_device *dev)
static void get_last_sample_611x(struct comedi_device *dev)
static void get_last_sample_6143(struct comedi_device *dev)
static void ni_ai_munge(struct comedi_device *dev, struct comedi_subdevice *s,
void *data, unsigned int num_bytes,
unsigned int chan_index)
static int ni_ai_setup_MITE_dma(struct comedi_device *dev)
static int ni_ao_setup_MITE_dma(struct comedi_device *dev)
static int ni_ai_reset(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_ai_poll(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
void ni_prime_channelgain_list(struct comedi_device *dev)
static void ni_m_series_load_channelgain_list(struct comedi_device *dev,
unsigned int n_chan,
unsigned int *list)
static void ni_load_channelgain_list(struct comedi_device *dev,
unsigned int n_chan, unsigned int *list)
static int ni_ns_to_timer(const struct comedi_device *dev, unsigned nanosec,
int round_mode)
static unsigned ni_timer_to_ns(const struct comedi_device *dev, int timer)
static unsigned ni_min_ai_scan_period_ns(struct comedi_device *dev,
unsigned num_channels)
static int ni_ai_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int ni_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_ai_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum)
static int ni_ai_config_analog_trig(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int ni_ai_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_ai_config_analog_trig(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static void ni_ao_munge(struct comedi_device *dev, struct comedi_subdevice *s,
void *data, unsigned int num_bytes,
unsigned int chan_index)
static int ni_m_series_ao_config_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int chanspec[],
unsigned int n_chans, int timed)
static int ni_old_ao_config_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int chanspec[],
unsigned int n_chans)
static int ni_ao_config_chanlist(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int chanspec[], unsigned int n_chans,
int timed)
static int ni_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int ni_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_ao_insn_write_671x(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_ao_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_ao_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum)
static int ni_ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_ao_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int ni_ao_reset(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_m_series_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int ni_m_series_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int ni_cdio_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int ni_cdio_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_cdo_inttrig(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned int trignum)
static int ni_cdio_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static void handle_cdio_interrupt(struct comedi_device *dev)
static int ni_serial_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_serial_hw_readwrite8(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned char data_out,
unsigned char *data_in)
static int ni_serial_sw_readwrite8(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned char data_out,
unsigned char *data_in)
static void mio_common_detach(struct comedi_device *dev)
static void init_ao_67xx(struct comedi_device *dev, struct comedi_subdevice *s)
static unsigned ni_gpct_to_stc_register(enum ni_gpct_register reg)
static void ni_gpct_write_register(struct ni_gpct *counter, unsigned bits,
enum ni_gpct_register reg)
static unsigned ni_gpct_read_register(struct ni_gpct *counter,
enum ni_gpct_register reg)
static int ni_freq_out_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_freq_out_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_set_freq_out_clock(struct comedi_device *dev,
unsigned int clock_source)
static void ni_get_freq_out_clock(struct comedi_device *dev,
unsigned int *clock_source,
unsigned int *clock_period_ns)
static int ni_freq_out_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_alloc_private(struct comedi_device *dev)
;
static int ni_E_init(struct comedi_device *dev, struct comedi_devconfig *it)
{
struct comedi_subdevice *s;
unsigned j;
enum ni_gpct_variant counter_variant;
if (boardtype.n_aochan > MAX_N_AO_CHAN)
if (alloc_subdevices(dev, NI_NUM_SUBDEVICES) < 0)
return -ENOMEM;
s = dev->subdevices + NI_AI_SUBDEV;
dev->read_subdev = s;
if (boardtype.n_adchan)  else
s = dev->subdevices + NI_AO_SUBDEV;
if (boardtype.n_aochan)
static int ni_8255_callback(int dir, int port, int data, unsigned long arg)
static int ni_eeprom_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_read_eeprom(struct comedi_device *dev, int addr)
static int ni_m_series_eeprom_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int ni_get_pwm_config(struct comedi_device *dev, unsigned int *data)
static int ni_m_series_pwm_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_6143_pwm_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void ni_write_caldac(struct comedi_device *dev, int addr, int val);
static int ni_calib_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_calib_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pack_mb88341(int addr, int val, int *bitstring);
static int pack_dac8800(int addr, int val, int *bitstring);
static int pack_dac8043(int addr, int val, int *bitstring);
static int pack_ad8522(int addr, int val, int *bitstring);
static int pack_ad8804(int addr, int val, int *bitstring);
static int pack_ad8842(int addr, int val, int *bitstring);
struct caldac_struct ;
static struct caldac_struct caldacs[] = ;
static void caldac_setup(struct comedi_device *dev, struct comedi_subdevice *s)
static void ni_write_caldac(struct comedi_device *dev, int addr, int val)
static int pack_mb88341(int addr, int val, int *bitstring)
static int pack_dac8800(int addr, int val, int *bitstring)
static int pack_dac8043(int addr, int val, int *bitstring)
static int pack_ad8522(int addr, int val, int *bitstring)
static int pack_ad8804(int addr, int val, int *bitstring)
static int pack_ad8842(int addr, int val, int *bitstring)
static int ni_gpct_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_gpct_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_gpct_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_gpct_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_gpct_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int ni_gpct_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int ni_m_series_set_pfi_routing(struct comedi_device *dev, unsigned chan,
unsigned source)
static int ni_old_set_pfi_routing(struct comedi_device *dev, unsigned chan,
unsigned source)
static int ni_set_pfi_routing(struct comedi_device *dev, unsigned chan,
unsigned source)
static unsigned ni_m_series_get_pfi_routing(struct comedi_device *dev,
unsigned chan)
static unsigned ni_old_get_pfi_routing(struct comedi_device *dev, unsigned chan)
static unsigned ni_get_pfi_routing(struct comedi_device *dev, unsigned chan)
static int ni_config_filter(struct comedi_device *dev, unsigned pfi_channel,
enum ni_pfi_filter_select filter)
static int ni_pfi_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_pfi_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void ni_rtsi_init(struct comedi_device *dev)
static int ni_rtsi_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int ni_mseries_get_pll_parameters(unsigned reference_period_ns,
unsigned *freq_divider,
unsigned *freq_multiplier,
unsigned *actual_period_ns)
static inline unsigned num_configurable_rtsi_channels(struct comedi_device *dev)
static int ni_mseries_set_pll_master_clock(struct comedi_device *dev,
unsigned source, unsigned period_ns)
static int ni_set_master_clock(struct comedi_device *dev, unsigned source,
unsigned period_ns)
static int ni_valid_rtsi_output_source(struct comedi_device *dev, unsigned chan,
unsigned source)
static int ni_set_rtsi_routing(struct comedi_device *dev, unsigned chan,
unsigned source)
static unsigned ni_get_rtsi_routing(struct comedi_device *dev, unsigned chan)
static int ni_rtsi_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int cs5529_wait_for_idle(struct comedi_device *dev)
static void cs5529_command(struct comedi_device *dev, unsigned short value)
static void cs5529_config_write(struct comedi_device *dev, unsigned int value,
unsigned int reg_select_bits)
static unsigned int cs5529_config_read(struct comedi_device *dev,
unsigned int reg_select_bits)
static int cs5529_do_conversion(struct comedi_device *dev, unsigned short *data)
static int cs5529_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int init_cs5529(struct comedi_device *dev)
