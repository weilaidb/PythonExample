#define _COMEDI_NI_TIO_INTERNAL_H
static inline enum ni_gpct_register NITIO_Gi_Autoincrement_Reg(unsigned
counter_index)
static inline enum ni_gpct_register NITIO_Gi_Command_Reg(unsigned counter_index)
static inline enum ni_gpct_register NITIO_Gi_Counting_Mode_Reg(unsigned
counter_index)
static inline enum ni_gpct_register NITIO_Gi_Input_Select_Reg(unsigned
counter_index)
static inline enum ni_gpct_register NITIO_Gxx_Joint_Reset_Reg(unsigned
counter_index)
static inline enum ni_gpct_register NITIO_Gxx_Joint_Status1_Reg(unsigned
counter_index)
static inline enum ni_gpct_register NITIO_Gxx_Joint_Status2_Reg(unsigned
counter_index)
static inline enum ni_gpct_register NITIO_Gxx_Status_Reg(unsigned counter_index)
static inline enum ni_gpct_register NITIO_Gi_LoadA_Reg(unsigned counter_index)
static inline enum ni_gpct_register NITIO_Gi_LoadB_Reg(unsigned counter_index)
static inline enum ni_gpct_register NITIO_Gi_Mode_Reg(unsigned counter_index)
static inline enum ni_gpct_register NITIO_Gi_SW_Save_Reg(int counter_index)
static inline enum ni_gpct_register NITIO_Gi_Second_Gate_Reg(int counter_index)
static inline enum ni_gpct_register NITIO_Gi_DMA_Config_Reg(int counter_index)
static inline enum ni_gpct_register NITIO_Gi_DMA_Status_Reg(int counter_index)
static inline enum ni_gpct_register NITIO_Gi_ABZ_Reg(int counter_index)
static inline enum ni_gpct_register NITIO_Gi_Interrupt_Acknowledge_Reg(int
counter_index)
static inline enum ni_gpct_register NITIO_Gi_Status_Reg(int counter_index)
static inline enum ni_gpct_register NITIO_Gi_Interrupt_Enable_Reg(int
counter_index)
enum Gi_Auto_Increment_Reg_Bits ;
#define Gi_Up_Down_Shift 5
enum Gi_Command_Reg_Bits ;
#define Gi_Index_Phase_Bitshift 5
#define Gi_HW_Arm_Select_Shift 8
enum Gi_Counting_Mode_Reg_Bits ;
#define Gi_Source_Select_Shift 2
#define Gi_Gate_Select_Shift 7
enum Gi_Input_Select_Bits ;
enum Gi_Mode_Bits ;
#define Gi_Second_Gate_Select_Shift 7
enum Gi_Second_Gate_Bits ;
static inline unsigned Gi_Second_Gate_Select_Bits(unsigned second_gate_select)
enum Gxx_Status_Bits ;
static inline enum Gxx_Status_Bits Gi_Counting_Bit(unsigned counter_index)
static inline enum Gxx_Status_Bits Gi_Armed_Bit(unsigned counter_index)
static inline enum Gxx_Status_Bits Gi_Next_Load_Source_Bit(unsigned
counter_index)
static inline enum Gxx_Status_Bits Gi_Stale_Data_Bit(unsigned counter_index)
static inline enum Gxx_Status_Bits Gi_TC_Error_Bit(unsigned counter_index)
static inline enum Gxx_Status_Bits Gi_Gate_Error_Bit(unsigned counter_index)
static inline unsigned Gi_Reset_Bit(unsigned counter_index)
enum Gxx_Joint_Status2_Bits ;
static inline enum Gxx_Joint_Status2_Bits Gi_Permanent_Stale_Bit(unsigned
counter_index)
enum Gi_DMA_Config_Reg_Bits ;
enum Gi_DMA_Status_Reg_Bits ;
enum G02_Interrupt_Acknowledge_Bits ;
enum G13_Interrupt_Acknowledge_Bits ;
static inline unsigned Gi_Gate_Error_Confirm_Bit(unsigned counter_index)
static inline unsigned Gi_TC_Error_Confirm_Bit(unsigned counter_index)
enum Gxx_Interrupt_Acknowledge_Bits ;
enum Gi_Status_Bits ;
enum G02_Interrupt_Enable_Bits ;
enum G13_Interrupt_Enable_Bits ;
static inline unsigned Gi_Gate_Interrupt_Enable_Bit(unsigned counter_index)
static inline void write_register(struct ni_gpct *counter, unsigned bits,
enum ni_gpct_register reg)
static inline unsigned read_register(struct ni_gpct *counter,
enum ni_gpct_register reg)
static inline int ni_tio_counting_mode_registers_present(const struct
ni_gpct_device
*counter_dev)
static inline void ni_tio_set_bits_transient(struct ni_gpct *counter,
enum ni_gpct_register
register_index, unsigned bit_mask,
unsigned bit_values,
unsigned transient_bit_values)
static inline void ni_tio_set_bits(struct ni_gpct *counter,
enum ni_gpct_register register_index,
unsigned bit_mask, unsigned bit_values)
static inline unsigned ni_tio_get_soft_copy(const struct ni_gpct *counter,
enum ni_gpct_register
register_index)
int ni_tio_arm(struct ni_gpct *counter, int arm, unsigned start_trigger);
int ni_tio_set_gate_src(struct ni_gpct *counter, unsigned gate_index,
unsigned int gate_source);
