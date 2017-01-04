static uint64_t ni_tio_clock_period_ps(const struct ni_gpct *counter,
unsigned generic_clock_source);
static unsigned ni_tio_generic_clock_src_select(const struct ni_gpct *counter);
MODULE_AUTHOR("Comedi <comedi@comedi.org>");
MODULE_DESCRIPTION("Comedi support for NI general-purpose counters");
MODULE_LICENSE("GPL");
static inline enum Gi_Counting_Mode_Reg_Bits Gi_Alternate_Sync_Bit(enum
ni_gpct_variant
variant)
static inline enum Gi_Counting_Mode_Reg_Bits Gi_Prescale_X2_Bit(enum
ni_gpct_variant
variant)
static inline enum Gi_Counting_Mode_Reg_Bits Gi_Prescale_X8_Bit(enum
ni_gpct_variant
variant)
static inline enum Gi_Counting_Mode_Reg_Bits Gi_HW_Arm_Select_Mask(enum
ni_gpct_variant
variant)
enum ni_660x_clock_source ;
static const unsigned ni_660x_max_rtsi_channel = 6;
static inline unsigned NI_660x_RTSI_Clock(unsigned n)
static const unsigned ni_660x_max_source_pin = 7;
static inline unsigned NI_660x_Source_Pin_Clock(unsigned n)
enum ni_m_series_clock_source ;
static const unsigned ni_m_series_max_pfi_channel = 15;
static inline unsigned NI_M_Series_PFI_Clock(unsigned n)
static const unsigned ni_m_series_max_rtsi_channel = 7;
static inline unsigned NI_M_Series_RTSI_Clock(unsigned n)
enum ni_660x_gate_select ;
static const unsigned ni_660x_max_gate_pin = 7;
static inline unsigned NI_660x_Gate_Pin_Gate_Select(unsigned n)
static inline unsigned NI_660x_RTSI_Gate_Select(unsigned n)
enum ni_m_series_gate_select ;
static inline unsigned NI_M_Series_RTSI_Gate_Select(unsigned n)
static inline unsigned NI_M_Series_PFI_Gate_Select(unsigned n)
static inline unsigned Gi_Source_Select_Bits(unsigned source)
static inline unsigned Gi_Gate_Select_Bits(unsigned gate_select)
enum ni_660x_second_gate_select ;
static const unsigned ni_660x_max_up_down_pin = 7;
static inline unsigned NI_660x_Up_Down_Pin_Second_Gate_Select(unsigned n)
static inline unsigned NI_660x_RTSI_Second_Gate_Select(unsigned n)
static const unsigned int counter_status_mask =
COMEDI_COUNTER_ARMED | COMEDI_COUNTER_COUNTING;
static int __init ni_tio_init_module(void)
module_init(ni_tio_init_module);
static void __exit ni_tio_cleanup_module(void)
module_exit(ni_tio_cleanup_module);
struct ni_gpct_device *ni_gpct_device_construct(struct comedi_device *dev,
void (*write_register) (struct
ni_gpct
*
counter,
unsigned
bits,
enum
ni_gpct_register
reg),
unsigned (*read_register)
(struct ni_gpct *counter,
enum ni_gpct_register reg),
enum ni_gpct_variant variant,
unsigned num_counters)
EXPORT_SYMBOL_GPL(ni_gpct_device_construct);
void ni_gpct_device_destroy(struct ni_gpct_device *counter_dev)
EXPORT_SYMBOL_GPL(ni_gpct_device_destroy);
static int ni_tio_second_gate_registers_present(const struct ni_gpct_device
*counter_dev)
static void ni_tio_reset_count_and_disarm(struct ni_gpct *counter)
void ni_tio_init_counter(struct ni_gpct *counter)
EXPORT_SYMBOL_GPL(ni_tio_init_counter);
static unsigned int ni_tio_counter_status(struct ni_gpct *counter)
static void ni_tio_set_sync_mode(struct ni_gpct *counter, int force_alt_sync)
static int ni_tio_set_counter_mode(struct ni_gpct *counter, unsigned mode)
int ni_tio_arm(struct ni_gpct *counter, int arm, unsigned start_trigger)
EXPORT_SYMBOL_GPL(ni_tio_arm);
static unsigned ni_660x_source_select_bits(unsigned int clock_source)
static unsigned ni_m_series_source_select_bits(unsigned int clock_source)
;
static void ni_tio_set_source_subselect(struct ni_gpct *counter,
unsigned int clock_source)
static int ni_tio_set_clock_src(struct ni_gpct *counter,
unsigned int clock_source,
unsigned int period_ns)
static unsigned ni_tio_clock_src_modifiers(const struct ni_gpct *counter)
static unsigned ni_m_series_clock_src_select(const struct ni_gpct *counter)
static unsigned ni_660x_clock_src_select(const struct ni_gpct *counter)
static unsigned ni_tio_generic_clock_src_select(const struct ni_gpct *counter)
static uint64_t ni_tio_clock_period_ps(const struct ni_gpct *counter,
unsigned generic_clock_source)
static void ni_tio_get_clock_src(struct ni_gpct *counter,
unsigned int *clock_source,
unsigned int *period_ns)
static void ni_tio_set_first_gate_modifiers(struct ni_gpct *counter,
unsigned int gate_source)
static int ni_660x_set_first_gate(struct ni_gpct *counter,
unsigned int gate_source)
static int ni_m_series_set_first_gate(struct ni_gpct *counter,
unsigned int gate_source)
static int ni_660x_set_second_gate(struct ni_gpct *counter,
unsigned int gate_source)
static int ni_m_series_set_second_gate(struct ni_gpct *counter,
unsigned int gate_source)
int ni_tio_set_gate_src(struct ni_gpct *counter, unsigned gate_index,
unsigned int gate_source)
EXPORT_SYMBOL_GPL(ni_tio_set_gate_src);
static int ni_tio_set_other_src(struct ni_gpct *counter, unsigned index,
unsigned int source)
static unsigned ni_660x_first_gate_to_generic_gate_source(unsigned
ni_660x_gate_select)
;
static unsigned ni_m_series_first_gate_to_generic_gate_source(unsigned
ni_m_series_gate_select)
;
static unsigned ni_660x_second_gate_to_generic_gate_source(unsigned
ni_660x_gate_select)
;
static unsigned ni_m_series_second_gate_to_generic_gate_source(unsigned
ni_m_series_gate_select)
;
static int ni_tio_get_gate_src(struct ni_gpct *counter, unsigned gate_index,
unsigned int *gate_source)
int ni_tio_insn_config(struct ni_gpct *counter,
struct comedi_insn *insn, unsigned int *data)
EXPORT_SYMBOL_GPL(ni_tio_insn_config);
int ni_tio_rinsn(struct ni_gpct *counter, struct comedi_insn *insn,
unsigned int *data)
EXPORT_SYMBOL_GPL(ni_tio_rinsn);
static unsigned ni_tio_next_load_register(struct ni_gpct *counter)
int ni_tio_winsn(struct ni_gpct *counter, struct comedi_insn *insn,
unsigned int *data)
EXPORT_SYMBOL_GPL(ni_tio_winsn);
