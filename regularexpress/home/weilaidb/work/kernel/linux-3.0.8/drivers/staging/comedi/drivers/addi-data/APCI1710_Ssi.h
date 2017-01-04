#define APCI1710_30MHZ		30
#define APCI1710_33MHZ		33
#define APCI1710_40MHZ		40
#define APCI1710_BINARY_MODE	0x1
#define APCI1710_GRAY_MODE	0x0
#define APCI1710_SSI_READ1VALUE		1
#define APCI1710_SSI_READALLVALUE	2
#define APCI1710_SSI_SET_CHANNELON	0
#define APCI1710_SSI_SET_CHANNELOFF	1
#define APCI1710_SSI_READ_1CHANNEL	2
#define APCI1710_SSI_READ_ALLCHANNEL	3
int i_APCI1710_InsnConfigInitSSI(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnReadSSIValue(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnBitsSSIDigitalIO(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
