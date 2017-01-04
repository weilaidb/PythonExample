#define APCI1710_TTL_INIT		0
#define APCI1710_TTL_INITDIRECTION	1
#define APCI1710_TTL_READCHANNEL	0
#define APCI1710_TTL_READPORT		1
int i_APCI1710_InsnConfigInitTTLIO(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnBitsReadTTLIO(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnReadTTLIOAllPortValue(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnWriteSetTTLIOChlOnOff(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
