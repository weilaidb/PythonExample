#define APCI1500_BOARD_VENDOR_ID           0x10e8
#define APCI1500_ADDRESS_RANGE              4
#define  APCI1500_DIGITAL_OP                 	2
#define  APCI1500_DIGITAL_IP                    0
#define  APCI1500_AND               		    2
#define  APCI1500_OR                		    4
#define  APCI1500_OR_PRIORITY       		    6
#define  APCI1500_CLK_SELECT                    0
#define  COUNTER1                               0
#define  COUNTER2                               1
#define  COUNTER3                               2
#define  APCI1500_COUNTER                		0x20
#define  APCI1500_TIMER                  		0
#define  APCI1500_WATCHDOG          		    0
#define  APCI1500_SINGLE            		    0
#define  APCI1500_CONTINUOUS        		    0x80
#define  APCI1500_DISABLE                		0
#define  APCI1500_ENABLE                		1
#define  APCI1500_SOFTWARE_TRIGGER  		    0x4
#define  APCI1500_HARDWARE_TRIGGER  		    0x10
#define  APCI1500_SOFTWARE_GATE     		    0
#define  APCI1500_HARDWARE_GATE     		    0x8
#define  START                       		    0
#define  STOP                       		    1
#define  TRIGGER                       		    2
enum ;
enum ;
static int i_APCI1500_Initialisation(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int i_APCI1500_ConfigDigitalInputEvent(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int i_APCI1500_StartStopInputEvent(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int i_APCI1500_ReadMoreDigitalInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int i_APCI1500_ConfigDigitalOutputErrorInterrupt(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int i_APCI1500_WriteDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int i_APCI1500_ConfigCounterTimerWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int i_APCI1500_StartStopTriggerTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int i_APCI1500_ReadCounterTimerWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int i_APCI1500_ReadInterruptMask(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static void v_APCI1500_Interrupt(int irq, void *d);
static int i_APCI1500_ConfigureInterrupt(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int i_APCI1500_Reset(struct comedi_device *dev);
