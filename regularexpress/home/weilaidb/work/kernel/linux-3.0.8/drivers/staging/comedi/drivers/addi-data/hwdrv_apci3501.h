#define APCI3501_BOARD_VENDOR_ID                 0x15B8
#define APCI3501_ADDRESS_RANGE                   255
#define APCI3501_DIGITAL_IP                       0x50
#define APCI3501_DIGITAL_OP                       0x40
#define APCI3501_ANALOG_OUTPUT                    0x00
#define APCI3501_AO_VOLT_MODE                     0
#define APCI3501_AO_PROG                          4
#define APCI3501_AO_TRIG_SCS                      8
#define UNIPOLAR                                  0
#define BIPOLAR                                   1
#define MODE0                                     0
#define MODE1                                     1
static struct comedi_lrange range_apci3501_ao = ;
#define APCI3501_WATCHDOG                         0x20
#define APCI3501_TCW_SYNC_ENABLEDISABLE           0
#define APCI3501_TCW_RELOAD_VALUE                 4
#define APCI3501_TCW_TIMEBASE                     8
#define APCI3501_TCW_PROG                         12
#define APCI3501_TCW_TRIG_STATUS                  16
#define APCI3501_TCW_IRQ                          20
#define APCI3501_TCW_WARN_TIMEVAL                 24
#define APCI3501_TCW_WARN_TIMEBASE                28
#define ADDIDATA_TIMER                            0
#define ADDIDATA_WATCHDOG                         2
int i_APCI3501_ConfigAnalogOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_WriteAnalogOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_ReadDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_ConfigDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_WriteDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_ReadDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_ConfigTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI3501_StartStopWriteTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
int i_APCI3501_ReadTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
void v_APCI3501_Interrupt(int irq, void *d);
int i_APCI3501_Reset(struct comedi_device *dev);
