int i_APCI1710_InsnConfigInitChrono(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnWriteEnableDisableChrono(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnReadChrono(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_GetChronoProgressStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_ChronoStatus)
int i_APCI1710_ReadChronoValue(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned int ui_TimeOut, unsigned char *pb_ChronoStatus, unsigned int *pul_ChronoValue)
int i_APCI1710_ConvertChronoValue(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned int ul_ChronoValue,
unsigned int *pul_Hour,
unsigned char *pb_Minute,
unsigned char *pb_Second,
unsigned int *pui_MilliSecond, unsigned int *pui_MicroSecond, unsigned int *pui_NanoSecond)
int i_APCI1710_InsnBitsChronoDigitalIO(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
