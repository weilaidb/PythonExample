int i_APCI3501_ReadDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_ConfigDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_WriteDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_ReadDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_ConfigAnalogOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_WriteAnalogOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_ConfigTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_StartStopWriteTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_ReadTimerCounterWatchdog(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3501_Reset(struct comedi_device *dev)
void v_APCI3501_Interrupt(int irq, void *d)
