#define APCI3200_BOARD_VENDOR_ID                 0x15B8
int MODULE_NO;
struct  Config_Parameters_Module1, Config_Parameters_Module2,
Config_Parameters_Module3, Config_Parameters_Module4;
static const struct comedi_lrange range_apci3200_ai = ;
static const struct comedi_lrange range_apci3300_ai = ;
#define APCI3200_AI_OFFSET_GAIN                  0
#define APCI3200_AI_SC_TEST                      4
#define APCI3200_AI_IRQ                          8
#define APCI3200_AI_AUTOCAL                      12
#define APCI3200_RELOAD_CONV_TIME_VAL            32
#define APCI3200_CONV_TIME_TIME_BASE             36
#define APCI3200_RELOAD_DELAY_TIME_VAL           40
#define APCI3200_DELAY_TIME_TIME_BASE            44
#define APCI3200_AI_MODULE1                      0
#define APCI3200_AI_MODULE2                      64
#define APCI3200_AI_MODULE3                      128
#define APCI3200_AI_MODULE4                      192
#define TRUE                                     1
#define FALSE                                    0
#define APCI3200_AI_EOSIRQ                       16
#define APCI3200_AI_EOS                          20
#define APCI3200_AI_CHAN_ID                      24
#define APCI3200_AI_CHAN_VAL                     28
#define ANALOG_INPUT                             0
#define TEMPERATURE                              1
#define RESISTANCE                               2
#define ENABLE_EXT_TRIG                          1
#define ENABLE_EXT_GATE                          2
#define ENABLE_EXT_TRIG_GATE                     3
#define APCI3200_MAXVOLT                         2.5
#define ADDIDATA_GREATER_THAN_TEST               0
#define ADDIDATA_LESS_THAN_TEST                  1
#define ADDIDATA_UNIPOLAR                        1
#define ADDIDATA_BIPOLAR                         2
#define MAX_MODULE				4
struct str_ADDIDATA_RTDStruct ;
struct str_Module ;
struct str_BoardInfos ;
int i_APCI3200_ConfigAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3200_ReadAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3200_InsnWriteReleaseAnalogInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3200_InsnBits_AnalogInput_Test(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3200_StopCyclicAcquisition(struct comedi_device *dev, struct comedi_subdevice *s);
int i_APCI3200_InterruptHandleEos(struct comedi_device *dev);
int i_APCI3200_CommandTestAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
int i_APCI3200_CommandAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s);
int i_APCI3200_ReadDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
void v_APCI3200_Interrupt(int irq, void *d);
int i_APCI3200_InterruptHandleEos(struct comedi_device *dev);
int i_APCI3200_Reset(struct comedi_device *dev);
int i_APCI3200_ReadCJCCalOffset(struct comedi_device *dev, unsigned int *data);
int i_APCI3200_ReadCJCValue(struct comedi_device *dev, unsigned int *data);
int i_APCI3200_ReadCalibrationGainValue(struct comedi_device *dev, unsigned int *data);
int i_APCI3200_ReadCalibrationOffsetValue(struct comedi_device *dev, unsigned int *data);
int i_APCI3200_Read1AnalogInputChannel(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
int i_APCI3200_ReadCJCCalGain(struct comedi_device *dev, unsigned int *data);
