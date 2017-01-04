static int i_APCI3XXX_TestConversionStarted(struct comedi_device *dev)
static int i_APCI3XXX_AnalogInputConfigOperatingMode(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnConfigAnalogInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnReadAnalogInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static void v_APCI3XXX_Interrupt(int irq, void *d)
static int i_APCI3XXX_InsnWriteAnalogOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnConfigInitTTLIO(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnBitsTTLIO(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnReadTTLIO(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnWriteTTLIO(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnReadDigitalInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnBitsDigitalInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnBitsDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnWriteDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_InsnReadDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
static int i_APCI3XXX_Reset(struct comedi_device *dev)
