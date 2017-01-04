static unsigned int ui_InterruptStatus;
int i_APCI1032_ConfigDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1032_Read1DigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1032_ReadMoreDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void v_APCI1032_Interrupt(int irq, void *d)
int i_APCI1032_Reset(struct comedi_device *dev)
