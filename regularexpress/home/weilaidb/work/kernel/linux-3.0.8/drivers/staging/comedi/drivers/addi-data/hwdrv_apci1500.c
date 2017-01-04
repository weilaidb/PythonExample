static int i_TimerCounter1Init = 0;
static int i_TimerCounter2Init = 0;
static int i_WatchdogCounter3Init = 0;
static int i_Event1Status = 0, i_Event2Status = 0;
static int i_TimerCounterWatchdogInterrupt = 0;
static int i_Logic = 0, i_CounterLogic = 0;
static int i_InterruptMask = 0;
static int i_InputChannel = 0;
static int i_TimerCounter1Enabled = 0, i_TimerCounter2Enabled = 0,
i_WatchdogCounter3Enabled = 0;
static int i_APCI1500_ConfigDigitalInputEvent(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
{
int i_PatternPolarity = 0, i_PatternTransition = 0, i_PatternMask = 0;
int i_MaxChannel = 0, i_Count = 0, i_EventMask = 0;
int i_PatternTransitionCount = 0, i_RegValue;
int i;
outb(APCI1500_RW_MASTER_INTERRUPT_CONTROL,
devpriv->iobase + APCI1500_Z8536_CONTROL_REGISTER);
outb(0x00, devpriv->iobase + APCI1500_Z8536_CONTROL_REGISTER);
if (data[0] == 1)
else
switch (data[1])
i_Logic = data[1];
for (i_Count = i_MaxChannel, i = 0; i_Count > 0; i_Count--, i++)
if (data[0] == 1)
static int i_APCI1500_StartStopInputEvent(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_Initialisation(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_ReadMoreDigitalInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_ConfigDigitalOutputErrorInterrupt(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_WriteDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_ConfigCounterTimerWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_StartStopTriggerTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_ReadCounterTimerWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_ReadInterruptMask(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI1500_ConfigureInterrupt(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static void v_APCI1500_Interrupt(int irq, void *d)
static int i_APCI1500_Reset(struct comedi_device *dev)
