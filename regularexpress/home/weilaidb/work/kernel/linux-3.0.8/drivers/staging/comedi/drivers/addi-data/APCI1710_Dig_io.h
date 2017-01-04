#define APCI1710_ON			1
#define APCI1710_OFF			0
#define APCI1710_INPUT			0
#define APCI1710_OUTPUT			1
#define APCI1710_DIGIO_MEMORYONOFF	0x10
#define APCI1710_DIGIO_INIT		0x11
int i_APCI1710_InsnConfigDigitalIO(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnReadDigitalIOChlValue(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnWriteDigitalIOChlOnOff(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnBitsDigitalIOPortOnOff(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
