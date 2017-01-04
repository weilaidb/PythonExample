int i_APCI1710_InsnConfigINCCPT(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InitCounter(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_CounterRange,
unsigned char b_FirstCounterModus,
unsigned char b_FirstCounterOption,
unsigned char b_SecondCounterModus, unsigned char b_SecondCounterOption)
int i_APCI1710_CounterAutoTest(struct comedi_device *dev, unsigned char *pb_TestStatus)
int i_APCI1710_InitIndex(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_ReferenceAction,
unsigned char b_IndexOperation, unsigned char b_AutoMode, unsigned char b_InterruptEnable)
int i_APCI1710_InitReference(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_ReferenceLevel)
int i_APCI1710_InitExternalStrobe(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_ExternalStrobe, unsigned char b_ExternalStrobeLevel)
int i_APCI1710_InitCompareLogic(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned int ui_CompareValue)
int i_APCI1710_InitFrequencyMeasurement(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char b_PCIInputClock,
unsigned char b_TimingUnity,
unsigned int ul_TimingInterval, unsigned int *pul_RealTimingInterval)
int i_APCI1710_InsnBitsINCCPT(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_ClearCounterValue(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_ClearAllCounterValue(struct comedi_device *dev)
int i_APCI1710_SetInputFilter(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_PCIInputClock, unsigned char b_Filter)
int i_APCI1710_LatchCounter(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_LatchReg)
int i_APCI1710_SetIndexAndReferenceSource(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_SourceSelection)
int i_APCI1710_SetDigitalChlOn(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_SetDigitalChlOff(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_InsnWriteINCCPT(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_EnableLatchInterrupt(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_DisableLatchInterrupt(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_Write16BitCounterValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_SelectedCounter, unsigned int ui_WriteValue)
int i_APCI1710_Write32BitCounterValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned int ul_WriteValue)
int i_APCI1710_EnableIndex(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_DisableIndex(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_EnableCompareLogic(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_DisableCompareLogic(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_EnableFrequencyMeasurement(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_InterruptEnable)
int i_APCI1710_DisableFrequencyMeasurement(struct comedi_device *dev, unsigned char b_ModulNbr)
int i_APCI1710_InsnReadINCCPT(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_ReadLatchRegisterStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_LatchReg, unsigned char *pb_LatchStatus)
int i_APCI1710_ReadLatchRegisterValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_LatchReg, unsigned int *pul_LatchValue)
int i_APCI1710_Read16BitCounterValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_SelectedCounter, unsigned int *pui_CounterValue)
int i_APCI1710_Read32BitCounterValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned int *pul_CounterValue)
int i_APCI1710_GetIndexStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_IndexStatus)
int i_APCI1710_GetReferenceStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_ReferenceStatus)
int i_APCI1710_GetUASStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_UASStatus)
int i_APCI1710_GetCBStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_CBStatus)
int i_APCI1710_Get16BitCBStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_CBStatusCounter0, unsigned char *pb_CBStatusCounter1)
int i_APCI1710_GetUDStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_UDStatus)
int i_APCI1710_GetInterruptUDLatchedStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char *pb_UDStatus)
int i_APCI1710_ReadFrequencyMeasurement(struct comedi_device *dev,
unsigned char b_ModulNbr,
unsigned char *pb_Status, unsigned char *pb_UDStatus, unsigned int *pul_ReadValue)
