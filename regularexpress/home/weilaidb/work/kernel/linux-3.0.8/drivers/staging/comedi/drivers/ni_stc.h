#define _COMEDI_NI_STC_H
#define _bit15		0x8000
#define _bit14		0x4000
#define _bit13		0x2000
#define _bit12		0x1000
#define _bit11		0x0800
#define _bit10		0x0400
#define _bit9		0x0200
#define _bit8		0x0100
#define _bit7		0x0080
#define _bit6		0x0040
#define _bit5		0x0020
#define _bit4		0x0010
#define _bit3		0x0008
#define _bit2		0x0004
#define _bit1		0x0002
#define _bit0		0x0001
#define NUM_PFI_OUTPUT_SELECT_REGS 6
#define Interrupt_A_Ack_Register	2
#define G0_Gate_Interrupt_Ack			_bit15
#define G0_TC_Interrupt_Ack			_bit14
#define AI_Error_Interrupt_Ack			_bit13
#define AI_STOP_Interrupt_Ack			_bit12
#define AI_START_Interrupt_Ack			_bit11
#define AI_START2_Interrupt_Ack			_bit10
#define AI_START1_Interrupt_Ack			_bit9
#define AI_SC_TC_Interrupt_Ack			_bit8
#define AI_SC_TC_Error_Confirm			_bit7
#define G0_TC_Error_Confirm			_bit6
#define G0_Gate_Error_Confirm			_bit5
#define AI_Status_1_Register		2
#define Interrupt_A_St				0x8000
#define AI_FIFO_Full_St				0x4000
#define AI_FIFO_Half_Full_St			0x2000
#define AI_FIFO_Empty_St			0x1000
#define AI_Overrun_St				0x0800
#define AI_Overflow_St				0x0400
#define AI_SC_TC_Error_St			0x0200
#define AI_START2_St				0x0100
#define AI_START1_St				0x0080
#define AI_SC_TC_St				0x0040
#define AI_START_St				0x0020
#define AI_STOP_St				0x0010
#define G0_TC_St				0x0008
#define G0_Gate_Interrupt_St			0x0004
#define AI_FIFO_Request_St			0x0002
#define Pass_Thru_0_Interrupt_St		0x0001
#define AI_Status_2_Register		5
#define Interrupt_B_Ack_Register	3
enum Interrupt_B_Ack_Bits ;
#define AO_Status_1_Register		3
#define Interrupt_B_St				_bit15
#define AO_FIFO_Full_St				_bit14
#define AO_FIFO_Half_Full_St			_bit13
#define AO_FIFO_Empty_St			_bit12
#define AO_BC_TC_Error_St			_bit11
#define AO_START_St				_bit10
#define AO_Overrun_St				_bit9
#define AO_START1_St				_bit8
#define AO_BC_TC_St				_bit7
#define AO_UC_TC_St				_bit6
#define AO_UPDATE_St				_bit5
#define AO_UI2_TC_St				_bit4
#define G1_TC_St				_bit3
#define G1_Gate_Interrupt_St			_bit2
#define AO_FIFO_Request_St			_bit1
#define Pass_Thru_1_Interrupt_St		_bit0
#define AI_Command_2_Register		4
#define AI_End_On_SC_TC				_bit15
#define AI_End_On_End_Of_Scan			_bit14
#define AI_START1_Disable			_bit11
#define AI_SC_Save_Trace			_bit10
#define AI_SI_Switch_Load_On_SC_TC		_bit9
#define AI_SI_Switch_Load_On_STOP		_bit8
#define AI_SI_Switch_Load_On_TC			_bit7
#define AI_SC_Switch_Load_On_TC			_bit4
#define AI_STOP_Pulse				_bit3
#define AI_START_Pulse				_bit2
#define AI_START2_Pulse				_bit1
#define AI_START1_Pulse				_bit0
#define AO_Command_2_Register		5
#define AO_End_On_BC_TC(x)			(((x) & 0x3) << 14)
#define AO_Start_Stop_Gate_Enable		_bit13
#define AO_UC_Save_Trace			_bit12
#define AO_BC_Gate_Enable			_bit11
#define AO_BC_Save_Trace			_bit10
#define AO_UI_Switch_Load_On_BC_TC		_bit9
#define AO_UI_Switch_Load_On_Stop		_bit8
#define AO_UI_Switch_Load_On_TC			_bit7
#define AO_UC_Switch_Load_On_BC_TC		_bit6
#define AO_UC_Switch_Load_On_TC			_bit5
#define AO_BC_Switch_Load_On_TC			_bit4
#define AO_Mute_B				_bit3
#define AO_Mute_A				_bit2
#define AO_UPDATE2_Pulse			_bit1
#define AO_START1_Pulse				_bit0
#define AO_Status_2_Register		6
#define DIO_Parallel_Input_Register	7
#define AI_Command_1_Register		8
#define AI_Analog_Trigger_Reset			_bit14
#define AI_Disarm				_bit13
#define AI_SI2_Arm				_bit12
#define AI_SI2_Load				_bit11
#define AI_SI_Arm				_bit10
#define AI_SI_Load				_bit9
#define AI_DIV_Arm				_bit8
#define AI_DIV_Load				_bit7
#define AI_SC_Arm				_bit6
#define AI_SC_Load				_bit5
#define AI_SCAN_IN_PROG_Pulse			_bit4
#define AI_EXTMUX_CLK_Pulse			_bit3
#define AI_LOCALMUX_CLK_Pulse			_bit2
#define AI_SC_TC_Pulse			 	_bit1
#define AI_CONVERT_Pulse			_bit0
#define AO_Command_1_Register		9
#define AO_Analog_Trigger_Reset			_bit15
#define AO_START_Pulse				_bit14
#define AO_Disarm				_bit13
#define AO_UI2_Arm_Disarm			_bit12
#define AO_UI2_Load				_bit11
#define AO_UI_Arm				_bit10
#define AO_UI_Load				_bit9
#define AO_UC_Arm				_bit8
#define AO_UC_Load				_bit7
#define AO_BC_Arm				_bit6
#define AO_BC_Load				_bit5
#define AO_DAC1_Update_Mode			_bit4
#define AO_LDAC1_Source_Select			_bit3
#define AO_DAC0_Update_Mode			_bit2
#define AO_LDAC0_Source_Select			_bit1
#define AO_UPDATE_Pulse				_bit0
#define DIO_Output_Register		10
#define DIO_Parallel_Data_Out(a)                ((a)&0xff)
#define DIO_Parallel_Data_Mask                  0xff
#define DIO_SDOUT                               _bit0
#define DIO_SDIN                                _bit4
#define DIO_Serial_Data_Out(a)                  (((a)&0xff)<<8)
#define DIO_Serial_Data_Mask                    0xff00
#define DIO_Control_Register		11
#define DIO_Software_Serial_Control             _bit11
#define DIO_HW_Serial_Timebase                  _bit10
#define DIO_HW_Serial_Enable                    _bit9
#define DIO_HW_Serial_Start                     _bit8
#define DIO_Pins_Dir(a)                         ((a)&0xff)
#define DIO_Pins_Dir_Mask                       0xff
#define AI_Mode_1_Register		12
#define AI_CONVERT_Source_Select(a)		(((a) & 0x1f) << 11)
#define AI_SI_Source_select(a)			(((a) & 0x1f) << 6)
#define AI_CONVERT_Source_Polarity		_bit5
#define AI_SI_Source_Polarity		_bit4
#define AI_Start_Stop				_bit3
#define AI_Mode_1_Reserved			_bit2
#define AI_Continuous				_bit1
#define AI_Trigger_Once				_bit0
#define AI_Mode_2_Register		13
#define AI_SC_Gate_Enable			_bit15
#define AI_Start_Stop_Gate_Enable		_bit14
#define AI_Pre_Trigger				_bit13
#define AI_External_MUX_Present			_bit12
#define AI_SI2_Initial_Load_Source		_bit9
#define AI_SI2_Reload_Mode			_bit8
#define AI_SI_Initial_Load_Source		_bit7
#define AI_SI_Reload_Mode(a)			(((a) & 0x7)<<4)
#define AI_SI_Write_Switch			_bit3
#define AI_SC_Initial_Load_Source		_bit2
#define AI_SC_Reload_Mode			_bit1
#define AI_SC_Write_Switch			_bit0
#define AI_SI_Load_A_Registers		14
#define AI_SI_Load_B_Registers		16
#define AI_SC_Load_A_Registers		18
#define AI_SC_Load_B_Registers		20
#define AI_SI_Save_Registers		64
#define AI_SC_Save_Registers		66
#define AI_SI2_Load_A_Register		23
#define AI_SI2_Load_B_Register		25
#define Joint_Status_1_Register         27
#define DIO_Serial_IO_In_Progress_St            _bit12
#define DIO_Serial_Input_Register       28
#define Joint_Status_2_Register         29
enum Joint_Status_2_Bits ;
#define AO_Mode_1_Register		38
#define AO_UPDATE_Source_Select(x)		(((x)&0x1f)<<11)
#define AO_UI_Source_Select(x)			(((x)&0x1f)<<6)
#define AO_Multiple_Channels			_bit5
#define AO_UPDATE_Source_Polarity		_bit4
#define AO_UI_Source_Polarity			_bit3
#define AO_UC_Switch_Load_Every_TC		_bit2
#define AO_Continuous				_bit1
#define AO_Trigger_Once				_bit0
#define AO_Mode_2_Register		39
#define AO_FIFO_Mode_Mask (0x3 << 14)
enum AO_FIFO_Mode_Bits ;
#define AO_FIFO_Retransmit_Enable		_bit13
#define AO_START1_Disable			_bit12
#define AO_UC_Initial_Load_Source		_bit11
#define AO_UC_Write_Switch			_bit10
#define AO_UI2_Initial_Load_Source		_bit9
#define AO_UI2_Reload_Mode			_bit8
#define AO_UI_Initial_Load_Source		_bit7
#define AO_UI_Reload_Mode(x)			(((x) & 0x7) << 4)
#define AO_UI_Write_Switch			_bit3
#define AO_BC_Initial_Load_Source		_bit2
#define AO_BC_Reload_Mode			_bit1
#define AO_BC_Write_Switch			_bit0
#define AO_UI_Load_A_Register		40
#define AO_UI_Load_A_Register_High	40
#define AO_UI_Load_A_Register_Low	41
#define AO_UI_Load_B_Register		42
#define AO_UI_Save_Registers		16
#define AO_BC_Load_A_Register		44
#define AO_BC_Load_A_Register_High	44
#define AO_BC_Load_A_Register_Low	45
#define AO_BC_Load_B_Register		46
#define AO_BC_Load_B_Register_High	46
#define AO_BC_Load_B_Register_Low	47
#define AO_BC_Save_Registers		18
#define AO_UC_Load_A_Register		48
#define AO_UC_Load_A_Register_High	48
#define AO_UC_Load_A_Register_Low	49
#define AO_UC_Load_B_Register		50
#define AO_UC_Save_Registers		20
#define Clock_and_FOUT_Register		56
enum Clock_and_FOUT_bits ;
static inline unsigned FOUT_Divider(unsigned divider)
#define IO_Bidirection_Pin_Register	57
#define	RTSI_Trig_Direction_Register	58
enum RTSI_Trig_Direction_Bits ;
static inline unsigned RTSI_Output_Bit(unsigned channel, int is_mseries)
#define Interrupt_Control_Register	59
#define Interrupt_B_Enable			_bit15
#define Interrupt_B_Output_Select(x)		((x)<<12)
#define Interrupt_A_Enable			_bit11
#define Interrupt_A_Output_Select(x)		((x)<<8)
#define Pass_Thru_0_Interrupt_Polarity		_bit3
#define Pass_Thru_1_Interrupt_Polarity		_bit2
#define Interrupt_Output_On_3_Pins		_bit1
#define Interrupt_Output_Polarity		_bit0
#define AI_Output_Control_Register	60
#define AI_START_Output_Select			_bit10
#define AI_SCAN_IN_PROG_Output_Select(x)	(((x) & 0x3) << 8)
#define AI_EXTMUX_CLK_Output_Select(x)		(((x) & 0x3) << 6)
#define AI_LOCALMUX_CLK_Output_Select(x)	((x)<<4)
#define AI_SC_TC_Output_Select(x)		((x)<<2)
enum ai_convert_output_selection ;
static unsigned AI_CONVERT_Output_Select(enum ai_convert_output_selection
selection)
#define AI_START_STOP_Select_Register	62
#define AI_START_Polarity			_bit15
#define AI_STOP_Polarity			_bit14
#define AI_STOP_Sync				_bit13
#define AI_STOP_Edge				_bit12
#define AI_STOP_Select(a)			(((a) & 0x1f)<<7)
#define AI_START_Sync				_bit6
#define AI_START_Edge				_bit5
#define AI_START_Select(a)			((a) & 0x1f)
#define AI_Trigger_Select_Register	63
#define AI_START1_Polarity			_bit15
#define AI_START2_Polarity			_bit14
#define AI_START2_Sync				_bit13
#define AI_START2_Edge				_bit12
#define AI_START2_Select(a)			(((a) & 0x1f) << 7)
#define AI_START1_Sync				_bit6
#define AI_START1_Edge				_bit5
#define AI_START1_Select(a)			((a) & 0x1f)
#define AI_DIV_Load_A_Register	64
#define AO_Start_Select_Register	66
#define AO_UI2_Software_Gate			_bit15
#define AO_UI2_External_Gate_Polarity		_bit14
#define AO_START_Polarity			_bit13
#define AO_AOFREQ_Enable			_bit12
#define AO_UI2_External_Gate_Select(a)		(((a) & 0x1f) << 7)
#define AO_START_Sync				_bit6
#define AO_START_Edge				_bit5
#define AO_START_Select(a)			((a) & 0x1f)
#define AO_Trigger_Select_Register	67
#define AO_UI2_External_Gate_Enable		_bit15
#define AO_Delayed_START1			_bit14
#define AO_START1_Polarity			_bit13
#define AO_UI2_Source_Polarity			_bit12
#define AO_UI2_Source_Select(x)			(((x)&0x1f)<<7)
#define AO_START1_Sync				_bit6
#define AO_START1_Edge				_bit5
#define AO_START1_Select(x)			(((x)&0x1f)<<0)
#define AO_Mode_3_Register		70
#define AO_UI2_Switch_Load_Next_TC		_bit13
#define AO_UC_Switch_Load_Every_BC_TC		_bit12
#define AO_Trigger_Length			_bit11
#define AO_Stop_On_Overrun_Error		_bit5
#define AO_Stop_On_BC_TC_Trigger_Error		_bit4
#define AO_Stop_On_BC_TC_Error			_bit3
#define AO_Not_An_UPDATE			_bit2
#define AO_Software_Gate			_bit1
#define AO_Last_Gate_Disable		_bit0
#define Joint_Reset_Register		72
#define Software_Reset			_bit11
#define AO_Configuration_End			_bit9
#define AI_Configuration_End			_bit8
#define AO_Configuration_Start			_bit5
#define AI_Configuration_Start			_bit4
#define G1_Reset				_bit3
#define G0_Reset				_bit2
#define AO_Reset				_bit1
#define AI_Reset				_bit0
#define Interrupt_A_Enable_Register	73
#define Pass_Thru_0_Interrupt_Enable		_bit9
#define G0_Gate_Interrupt_Enable		_bit8
#define AI_FIFO_Interrupt_Enable		_bit7
#define G0_TC_Interrupt_Enable			_bit6
#define AI_Error_Interrupt_Enable		_bit5
#define AI_STOP_Interrupt_Enable		_bit4
#define AI_START_Interrupt_Enable		_bit3
#define AI_START2_Interrupt_Enable		_bit2
#define AI_START1_Interrupt_Enable		_bit1
#define AI_SC_TC_Interrupt_Enable		_bit0
#define Interrupt_B_Enable_Register	75
#define Pass_Thru_1_Interrupt_Enable		_bit11
#define G1_Gate_Interrupt_Enable		_bit10
#define G1_TC_Interrupt_Enable			_bit9
#define AO_FIFO_Interrupt_Enable		_bit8
#define AO_UI2_TC_Interrupt_Enable		_bit7
#define AO_UC_TC_Interrupt_Enable		_bit6
#define AO_Error_Interrupt_Enable		_bit5
#define AO_STOP_Interrupt_Enable		_bit4
#define AO_START_Interrupt_Enable		_bit3
#define AO_UPDATE_Interrupt_Enable		_bit2
#define AO_START1_Interrupt_Enable		_bit1
#define AO_BC_TC_Interrupt_Enable		_bit0
#define Second_IRQ_A_Enable_Register	74
enum Second_IRQ_A_Enable_Bits ;
#define Second_IRQ_B_Enable_Register	76
enum Second_IRQ_B_Enable_Bits ;
#define AI_Personal_Register		77
#define AI_SHIFTIN_Pulse_Width			_bit15
#define AI_EOC_Polarity				_bit14
#define AI_SOC_Polarity				_bit13
#define AI_SHIFTIN_Polarity			_bit12
#define AI_CONVERT_Pulse_Timebase		_bit11
#define AI_CONVERT_Pulse_Width			_bit10
#define AI_CONVERT_Original_Pulse		_bit9
#define AI_FIFO_Flags_Polarity			_bit8
#define AI_Overrun_Mode				_bit7
#define AI_EXTMUX_CLK_Pulse_Width		_bit6
#define AI_LOCALMUX_CLK_Pulse_Width		_bit5
#define AI_AIFREQ_Polarity			_bit4
#define AO_Personal_Register		78
enum AO_Personal_Bits ;
#define	RTSI_Trig_A_Output_Register	79
#define	RTSI_Trig_B_Output_Register	80
enum RTSI_Trig_B_Output_Bits ;
static inline unsigned RTSI_Trig_Output_Bits(unsigned rtsi_channel,
unsigned source)
;
static inline unsigned RTSI_Trig_Output_Mask(unsigned rtsi_channel)
;
static inline unsigned RTSI_Trig_Output_Source(unsigned rtsi_channel,
unsigned bits)
;
#define	RTSI_Board_Register		81
#define Write_Strobe_0_Register		82
#define Write_Strobe_1_Register		83
#define Write_Strobe_2_Register		84
#define Write_Strobe_3_Register		85
#define AO_Output_Control_Register	86
#define AO_External_Gate_Enable			_bit15
#define AO_External_Gate_Select(x)		(((x)&0x1f)<<10)
#define AO_Number_Of_Channels(x)		(((x)&0xf)<<6)
#define AO_UPDATE2_Output_Select(x)		(((x)&0x3)<<4)
#define AO_External_Gate_Polarity		_bit3
#define AO_UPDATE2_Output_Toggle		_bit2
enum ao_update_output_selection ;
static unsigned AO_UPDATE_Output_Select(enum ao_update_output_selection
selection)
#define AI_Mode_3_Register		87
#define AI_Trigger_Length			_bit15
#define AI_Delay_START				_bit14
#define AI_Software_Gate			_bit13
#define AI_SI_Special_Trigger_Delay		_bit12
#define AI_SI2_Source_Select			_bit11
#define AI_Delayed_START2			_bit10
#define AI_Delayed_START1			_bit9
#define AI_External_Gate_Mode			_bit8
#define AI_FIFO_Mode_HF_to_E			(3<<6)
#define AI_FIFO_Mode_F				(2<<6)
#define AI_FIFO_Mode_HF				(1<<6)
#define AI_FIFO_Mode_NE				(0<<6)
#define AI_External_Gate_Polarity		_bit5
#define AI_External_Gate_Select(a)		((a) & 0x1f)
#define G_Autoincrement_Register(a)	(68+(a))
#define G_Command_Register(a)		(6+(a))
#define G_HW_Save_Register(a)		(8+(a)*2)
#define G_HW_Save_Register_High(a)	(8+(a)*2)
#define G_HW_Save_Register_Low(a)	(9+(a)*2)
#define G_Input_Select_Register(a)	(36+(a))
#define G_Load_A_Register(a)		(28+(a)*4)
#define G_Load_A_Register_High(a)	(28+(a)*4)
#define G_Load_A_Register_Low(a)	(29+(a)*4)
#define G_Load_B_Register(a)		(30+(a)*4)
#define G_Load_B_Register_High(a)	(30+(a)*4)
#define G_Load_B_Register_Low(a)	(31+(a)*4)
#define G_Mode_Register(a)		(26+(a))
#define G_Save_Register(a)		(12+(a)*2)
#define G_Save_Register_High(a)		(12+(a)*2)
#define G_Save_Register_Low(a)		(13+(a)*2)
#define G_Status_Register		4
#define Analog_Trigger_Etc_Register	61
#define G_Disarm_Copy			_bit15
#define G_Save_Trace_Copy		_bit14
#define G_Arm_Copy			_bit13
#define G_Bank_Switch_Start		_bit10
#define G_Little_Big_Endian		_bit9
#define G_Synchronized_Gate		_bit8
#define G_Write_Switch			_bit7
#define G_Up_Down(a)			(((a)&0x03)<<5)
#define G_Disarm			_bit4
#define G_Analog_Trigger_Reset		_bit3
#define G_Save_Trace			_bit1
#define G_Arm				_bit0
#define G_Bank_Switch_Enable		_bit12
#define G_Bank_Switch_Mode		_bit11
#define G_Load				_bit2
#define G_Gate_Select(a)		(((a)&0x1f)<<7)
#define G_Source_Select(a)		(((a)&0x1f)<<2)
#define G_Write_Acknowledges_Irq	_bit1
#define G_Read_Acknowledges_Irq		_bit0
#define G_Source_Polarity		_bit15
#define G_Output_Polarity		_bit14
#define G_OR_Gate			_bit13
#define G_Gate_Select_Load_Source	_bit12
#define G_Loading_On_TC			_bit12
#define G_Output_Mode(a)		(((a)&0x03)<<8)
#define G_Trigger_Mode_For_Edge_Gate(a)	(((a)&0x03)<<3)
#define G_Gating_Mode(a)		(((a)&0x03)<<0)
#define G_Load_Source_Select		_bit7
#define G_Reload_Source_Switching	_bit15
#define G_Loading_On_Gate		_bit14
#define G_Gate_Polarity 		_bit13
#define G_Counting_Once(a)		(((a)&0x03)<<10)
#define G_Stop_Mode(a)			(((a)&0x03)<<5)
#define G_Gate_On_Both_Edges		_bit2
#define G1_Gate_Error_St		_bit15
#define G0_Gate_Error_St		_bit14
#define G1_TC_Error_St			_bit13
#define G0_TC_Error_St			_bit12
#define G1_No_Load_Between_Gates_St	_bit11
#define G0_No_Load_Between_Gates_St	_bit10
#define G1_Armed_St			_bit9
#define G0_Armed_St			_bit8
#define G1_Stale_Data_St		_bit7
#define G0_Stale_Data_St		_bit6
#define G1_Next_Load_Source_St		_bit5
#define G0_Next_Load_Source_St		_bit4
#define G1_Counting_St			_bit3
#define G0_Counting_St			_bit2
#define G1_Save_St			_bit1
#define G0_Save_St			_bit0
#define G_Autoincrement(a)              ((a)<<0)
#define Analog_Trigger_Mode(x) ((x) & 0x7)
#define Analog_Trigger_Enable _bit3
#define Analog_Trigger_Drive _bit4
#define GPFO_1_Output_Select		_bit7
#define GPFO_0_Output_Select(a)		((a)<<11)
#define GPFO_0_Output_Enable		_bit14
#define GPFO_1_Output_Enable		_bit15
#define Window_Address			0x00
#define Window_Data			0x02
#define Configuration_Memory_Clear	82
#define ADC_FIFO_Clear			83
#define DAC_FIFO_Clear			84
#define XXX_Status			0x01
enum XXX_Status_Bits ;
#define Serial_Command			0x0d
#define Misc_Command			0x0f
#define Port_A				0x19
#define Port_B				0x1b
#define Port_C				0x1d
#define Configuration			0x1f
#define Strobes				0x01
#define Channel_A_Mode			0x03
#define Channel_B_Mode			0x05
#define Channel_C_Mode			0x07
#define AI_AO_Select			0x09
enum AI_AO_Select_Bits ;
#define G0_G1_Select			0x0b
static inline unsigned ni_stc_dma_channel_select_bitfield(unsigned channel)
static inline unsigned GPCT_DMA_Select_Bits(unsigned gpct_index,
unsigned mite_channel)
static inline unsigned GPCT_DMA_Select_Mask(unsigned gpct_index)
#define Configuration_Memory_Low	0x10
enum Configuration_Memory_Low_Bits ;
#define Configuration_Memory_High	0x12
enum Configuration_Memory_High_Bits ;
static inline unsigned int AI_CONFIG_CHANNEL(unsigned int channel)
#define ADC_FIFO_Data_Register		0x1c
#define AO_Configuration		0x16
#define AO_Bipolar		_bit0
#define AO_Deglitch		_bit1
#define AO_Ext_Ref		_bit2
#define AO_Ground_Ref		_bit3
#define AO_Channel(x)		((x) << 8)
#define DAC_FIFO_Data			0x1e
#define DAC0_Direct_Data		0x18
#define DAC1_Direct_Data		0x1a
#define Magic_611x			0x19
#define Calibration_Channel_Select_611x	0x1a
#define ADC_FIFO_Data_611x		0x1c
#define AI_FIFO_Offset_Load_611x	0x05
#define DAC_FIFO_Data_611x		0x14
#define Cal_Gain_Select_611x		0x05
#define AO_Window_Address_611x		0x18
#define AO_Window_Data_611x		0x1e
#define Magic_6143			0x19
#define G0G1_DMA_Select_6143		0x0B
#define PipelineDelay_6143		0x1f
#define EOC_Set_6143			0x1D
#define AIDMA_Select_6143		0x09
#define AIFIFO_Data_6143		0x8C
#define AIFIFO_Flag_6143		0x84
#define AIFIFO_Control_6143		0x88
#define AIFIFO_Status_6143		0x88
#define AIFIFO_DMAThreshold_6143	0x90
#define AIFIFO_Words_Available_6143	0x94
#define Calibration_Channel_6143	0x42
#define Calibration_LowTime_6143	0x20
#define Calibration_HighTime_6143	0x22
#define Relay_Counter_Load_Val__6143	0x4C
#define Signature_6143			0x50
#define Release_Date_6143		0x54
#define Release_Oldest_Date_6143	0x58
#define Calibration_Channel_6143_RelayOn	0x8000
#define Calibration_Channel_6143_RelayOff	0x4000
#define Calibration_Channel_Gnd_Gnd	0x00
#define Calibration_Channel_2v5_Gnd	0x02
#define Calibration_Channel_Pwm_Gnd	0x05
#define Calibration_Channel_2v5_Pwm	0x0a
#define Calibration_Channel_Pwm_Pwm	0x0d
#define Calibration_Channel_Gnd_Pwm	0x0e
enum windowed_regs_67xx_61xx ;
static inline unsigned int DACx_Direct_Data_671x(int channel)
enum AO_Misc_611x_Bits ;
enum cs5529_configuration_bits ;
static inline unsigned int CS5529_CONFIG_DOUT(int output)
static inline unsigned int CS5529_CONFIG_AOUT(int output)
enum cs5529_command_bits ;
enum cs5529_status_bits ;
#define SerDacLd(x)			(0x08<<(x))
enum ;
enum caldac_enum ;
enum ni_reg_type ;
static const struct comedi_lrange range_ni_E_ao_ext;
enum m_series_register_offsets ;
static inline int M_Offset_AO_Waveform_Order(int channel)
;
static inline int M_Offset_AO_Config_Bank(int channel)
;
static inline int M_Offset_DAC_Direct_Data(int channel)
static inline int M_Offset_Gen_PWM(int channel)
static inline int M_Offset_Static_AI_Control(int i)
;
static inline int M_Offset_AO_Reference_Attenuation(int channel)
;
static inline unsigned M_Offset_PFI_Output_Select(unsigned n)
enum MSeries_AI_Config_FIFO_Data_Bits ;
static inline unsigned MSeries_AI_Config_Channel_Bits(unsigned channel)
static inline unsigned MSeries_AI_Config_Bank_Bits(enum ni_reg_type reg_type,
unsigned channel)
static inline unsigned MSeries_AI_Config_Gain_Bits(unsigned range)
enum MSeries_Clock_and_Fout2_Bits ;
static inline unsigned MSeries_PLL_In_Source_Select_RTSI_Bits(unsigned
RTSI_channel)
enum MSeries_PLL_Control_Bits ;
static inline unsigned MSeries_PLL_Divisor_Bits(unsigned divisor)
static inline unsigned MSeries_PLL_Multiplier_Bits(unsigned multiplier)
enum MSeries_PLL_Status ;
enum MSeries_AI_Config_FIFO_Bypass_Bits ;
static inline unsigned MSeries_AI_Bypass_Cal_Sel_Pos_Bits(int
calibration_source)
static inline unsigned MSeries_AI_Bypass_Cal_Sel_Neg_Bits(int
calibration_source)
static inline unsigned MSeries_AI_Bypass_Gain_Bits(int gain)
enum MSeries_AO_Config_Bank_Bits ;
enum MSeries_AO_Reference_Attenuation_Bits ;
static inline unsigned MSeries_Cal_PWM_High_Time_Bits(unsigned count)
static inline unsigned MSeries_Cal_PWM_Low_Time_Bits(unsigned count)
static inline unsigned MSeries_PFI_Output_Select_Mask(unsigned channel)
;
static inline unsigned MSeries_PFI_Output_Select_Bits(unsigned channel,
unsigned source)
;
static inline unsigned MSeries_PFI_Output_Select_Source(unsigned channel,
unsigned bits)
;
enum MSeries_Gi_DMA_Config_Bits ;
static inline unsigned MSeries_PFI_Filter_Select_Mask(unsigned channel)
static inline unsigned MSeries_PFI_Filter_Select_Bits(unsigned channel,
unsigned filter)
enum CDIO_DMA_Select_Bits ;
enum CDIO_Status_Bits ;
enum CDIO_Command_Bits ;
enum CDI_Mode_Bits ;
enum CDO_Mode_Bits ;
enum Interrupt_C_Enable_Bits ;
enum Interrupt_C_Status_Bits ;
#define M_SERIES_EEPROM_SIZE 1024
struct ni_board_struct ;
#define n_ni_boards  (sizeof(ni_boards)/sizeof(struct ni_board_struct))
#define boardtype (*(struct ni_board_struct *)dev->board_ptr)
#define MAX_N_AO_CHAN 8
#define NUM_GPCT 2
#define NI_PRIVATE_COMMON					\
uint16_t (*stc_readw)(struct comedi_device *dev, int register);	\
uint32_t (*stc_readl)(struct comedi_device *dev, int register);	\
void (*stc_writew)(struct comedi_device *dev, uint16_t value, int register);	\
void (*stc_writel)(struct comedi_device *dev, uint32_t value, int register);	\
\
unsigned short dio_output;				\
unsigned short dio_control;				\
int ao0p, ao1p;						\
int lastchan;						\
int last_do;						\
int rt_irq;						\
int irqmask;						\
int aimode;						\
int ai_continuous;					\
int blocksize;						\
int n_left;						\
unsigned int ai_calib_source;				\
unsigned int ai_calib_source_enabled;			\
spinlock_t window_lock; \
spinlock_t soft_reg_copy_lock; \
spinlock_t mite_channel_lock; \
\
int changain_state;					\
unsigned int changain_spec;				\
\
unsigned int caldac_maxdata_list[MAX_N_CALDACS];	\
unsigned short ao[MAX_N_AO_CHAN];					\
unsigned short caldacs[MAX_N_CALDACS];				\
\
unsigned short ai_cmd2;	\
\
unsigned short ao_conf[MAX_N_AO_CHAN];				\
unsigned short ao_mode1;				\
unsigned short ao_mode2;				\
unsigned short ao_mode3;				\
unsigned short ao_cmd1;					\
unsigned short ao_cmd2;					\
unsigned short ao_cmd3;					\
unsigned short ao_trigger_select;			\
\
struct ni_gpct_device *counter_dev;	\
unsigned short an_trig_etc_reg;				\
\
unsigned ai_offset[512];				\
\
unsigned long serial_interval_ns;                       \
unsigned char serial_hw_mode;                           \
unsigned short clock_and_fout;				\
unsigned short clock_and_fout2;				\
\
unsigned short int_a_enable_reg;			\
unsigned short int_b_enable_reg;			\
unsigned short io_bidirection_pin_reg;			\
unsigned short rtsi_trig_direction_reg;			\
unsigned short rtsi_trig_a_output_reg; \
unsigned short rtsi_trig_b_output_reg; \
unsigned short pfi_output_select_reg[NUM_PFI_OUTPUT_SELECT_REGS]; \
unsigned short ai_ao_select_reg; \
unsigned short g0_g1_select_reg; \
unsigned short cdio_dma_select_reg; \
\
unsigned clock_ns; \
unsigned clock_source; \
\
unsigned short atrig_mode;				\
unsigned short atrig_high;				\
unsigned short atrig_low;				\
\
unsigned short pwm_up_count;	\
unsigned short pwm_down_count;	\
\
short ai_fifo_buffer[0x2000];				\
uint8_t eeprom_buffer[M_SERIES_EEPROM_SIZE]; \
uint32_t serial_number; \
\
struct mite_struct *mite; \
struct mite_channel *ai_mite_chan; \
struct mite_channel *ao_mite_chan;\
struct mite_channel *cdo_mite_chan;\
struct mite_dma_descriptor_ring *ai_mite_ring; \
struct mite_dma_descriptor_ring *ao_mite_ring; \
struct mite_dma_descriptor_ring *cdo_mite_ring; \
struct mite_dma_descriptor_ring *gpct_mite_ring[NUM_GPCT];
