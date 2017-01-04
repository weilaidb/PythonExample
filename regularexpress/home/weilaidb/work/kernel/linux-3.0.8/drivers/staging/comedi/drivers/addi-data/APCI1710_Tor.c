int i_APCI1710_InsnConfigInitTorCounter(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnWriteEnableDisableTorCounter(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
{
int i_ReturnValue = 0;
unsigned int dw_Status;
unsigned int dw_DummyRead;
unsigned int dw_ConfigReg;
unsigned char b_ModulNbr, b_Action;
unsigned char b_TorCounter;
unsigned char b_InputMode;
unsigned char b_ExternGate;
unsigned char b_CycleMode;
unsigned char b_InterruptEnable;
b_ModulNbr = (unsigned char) CR_AREF(insn->chanspec);
b_Action = (unsigned char) data[0];
b_TorCounter = (unsigned char) data[1];
b_InputMode = (unsigned char) data[2];
b_ExternGate = (unsigned char) data[3];
b_CycleMode = (unsigned char) data[4];
b_InterruptEnable = (unsigned char) data[5];
i_ReturnValue = insn->n;
devpriv->tsk_Current = current;
if (b_ModulNbr < 4)
int i_APCI1710_InsnReadGetTorCounterInitialisation(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnBitsGetTorCounterProgressStatusAndValue(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
