#define APCI1710_SINGLE			0
#define APCI1710_CONTINUOUS		1
#define APCI1710_PULSEENCODER_READ	0
#define APCI1710_PULSEENCODER_WRITE	1
int i_APCI1710_InsnConfigInitPulseEncoder(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnWriteEnableDisablePulseEncoder(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
int i_APCI1710_InsnReadInterruptPulseEncoder(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
int i_APCI1710_InsnBitsReadWritePulseEncoder(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
