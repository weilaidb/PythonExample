int i_APCI1710_InsnConfigPWM(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InitPWM(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_PWM,
unsigned char b_ClockSelection,
unsigned char b_TimingUnit,
unsigned int ul_LowTiming,
unsigned int ul_HighTiming,
unsigned int *pul_RealLowTiming, unsigned int *pul_RealHighTiming)
int i_APCI1710_GetPWMInitialisation(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_PWM,
unsigned char *pb_TimingUnit,
unsigned int *pul_LowTiming,
unsigned int *pul_HighTiming,
unsigned char *pb_StartLevel,
unsigned char *pb_StopMode,
unsigned char *pb_StopLevel,
unsigned char *pb_ExternGate, unsigned char *pb_InterruptEnable, unsigned char *pb_Enable)
int i_APCI1710_InsnWritePWM(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_EnablePWM(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_PWM,
unsigned char b_StartLevel,
unsigned char b_StopMode,
unsigned char b_StopLevel, unsigned char b_ExternGate, unsigned char b_InterruptEnable)
int i_APCI1710_DisablePWM(struct comedi_device *dev, unsigned char b_ModulNbr, unsigned char b_PWM)
int i_APCI1710_SetNewPWMTiming(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_PWM, unsigned char b_TimingUnit, unsigned int ul_LowTiming, unsigned int ul_HighTiming)
int i_APCI1710_InsnReadGetPWMStatus(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnBitsReadPWMInterrupt(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
