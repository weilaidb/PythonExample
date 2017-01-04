#define APCI1710_30MHZ		30
#define APCI1710_33MHZ		33
#define APCI1710_40MHZ		40
#define APCI1710_GATE_INPUT	10
#define APCI1710_TOR_SIMPLE_MODE	2
#define APCI1710_TOR_DOUBLE_MODE	3
#define APCI1710_TOR_QUADRUPLE_MODE	4
#define APCI1710_SINGLE			0
#define APCI1710_CONTINUOUS		1
#define APCI1710_TOR_GETPROGRESSSTATUS	0
#define APCI1710_TOR_GETCOUNTERVALUE	1
#define APCI1710_TOR_READINTERRUPT	2
int i_APCI1710_InsnConfigInitTorCounter(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
int i_APCI1710_InsnWriteEnableDisableTorCounter(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
int i_APCI1710_InsnReadGetTorCounterInitialisation(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
int i_APCI1710_InsnBitsGetTorCounterProgressStatusAndValue(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
