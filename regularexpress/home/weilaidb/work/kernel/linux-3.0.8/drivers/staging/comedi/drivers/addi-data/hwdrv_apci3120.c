static unsigned int ui_Temp;
int i_APCI3120_InsnConfigAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_InsnReadAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_StopCyclicAcquisition(struct comedi_device *dev, struct comedi_subdevice *s)
int i_APCI3120_CommandTestAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
int i_APCI3120_CommandAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s)
int i_APCI3120_CyclicAnalogInput(int mode, struct comedi_device *dev,
struct comedi_subdevice *s)
int i_APCI3120_Reset(struct comedi_device *dev)
int i_APCI3120_SetupChannelList(struct comedi_device *dev, struct comedi_subdevice *s,
int n_chan, unsigned int *chanlist, char check)
int i_APCI3120_ExttrigEnable(struct comedi_device *dev)
int i_APCI3120_ExttrigDisable(struct comedi_device *dev)
void v_APCI3120_Interrupt(int irq, void *d)
int i_APCI3120_InterruptHandleEos(struct comedi_device *dev)
void v_APCI3120_InterruptDma(int irq, void *d)
void v_APCI3120_InterruptDmaMoveBlock16bit(struct comedi_device *dev,
struct comedi_subdevice *s, short *dma_buffer, unsigned int num_samples)
int i_APCI3120_InsnConfigTimer(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_InsnWriteTimer(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_InsnReadTimer(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_InsnReadDigitalInput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
int i_APCI3120_InsnBitsDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_InsnConfigDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3120_InsnBitsDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
int i_APCI3120_InsnWriteDigitalOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
int i_APCI3120_InsnWriteAnalogOutput(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
