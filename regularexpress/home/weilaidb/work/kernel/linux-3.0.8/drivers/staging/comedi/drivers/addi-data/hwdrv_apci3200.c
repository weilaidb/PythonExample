int i_InterruptFlag=0;
int i_ADDIDATAPolarity;
int i_ADDIDATAGain;
int i_AutoCalibration=0;
int i_ADDIDATAConversionTime;
int i_ADDIDATAConversionTimeUnit;
int i_ADDIDATAType;
int i_ChannelNo;
int i_ChannelCount=0;
int i_ScanType;
int i_FirstChannel;
int i_LastChannel;
int i_Sum=0;
int i_Offset;
unsigned int ui_Channel_num=0;
static int i_Count=0;
int i_Initialised=0;
unsigned int ui_InterruptChannelValue[96];
*/
struct str_BoardInfos s_BoardInfos[100];
int i_AddiHeaderRW_ReadEeprom(int i_NbOfWordsToRead,
unsigned int dw_PCIBoardEepromAddress,
unsigned short w_EepromStartAddress, unsigned short *pw_DataRead)
void v_GetAPCI3200EepromCalibrationValue(unsigned int dw_PCIBoardEepromAddress,
struct str_BoardInfos *BoardInformations)
int i_APCI3200_GetChannelCalibrationValue(struct comedi_device *dev,
unsigned int ui_Channel_num, unsigned int *CJCCurrentSource,
unsigned int *ChannelCurrentSource, unsigned int *ChannelGainFactor)
int i_APCI3200_ReadDigitalInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_ConfigDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_WriteDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_ReadDigitalOutput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_ConfigAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_ReadAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_Read1AnalogInputChannel(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_ReadCalibrationOffsetValue(struct comedi_device *dev, unsigned int *data)
int i_APCI3200_ReadCalibrationGainValue(struct comedi_device *dev, unsigned int *data)
int i_APCI3200_ReadCJCValue(struct comedi_device *dev, unsigned int *data)
int i_APCI3200_ReadCJCCalOffset(struct comedi_device *dev, unsigned int *data)
int i_APCI3200_ReadCJCCalGain(struct comedi_device *dev, unsigned int *data)
int i_APCI3200_InsnBits_AnalogInput_Test(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_InsnWriteReleaseAnalogInput(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
int i_APCI3200_CommandTestAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
int i_APCI3200_StopCyclicAcquisition(struct comedi_device *dev, struct comedi_subdevice *s)
int i_APCI3200_CommandAnalogInput(struct comedi_device *dev, struct comedi_subdevice *s)
int i_APCI3200_Reset(struct comedi_device *dev)
void v_APCI3200_Interrupt(int irq, void *d)
int i_APCI3200_InterruptHandleEos(struct comedi_device *dev)
