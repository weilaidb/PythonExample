int i_APCI1710_InsnConfigInitTimer(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
+----------------------------------------------------------------------------+
| Output Parameters : -                                                      |
+----------------------------------------------------------------------------+
| Return Value      : 0: No error                                            |
|                    -1: The handle parameter of the board is wrong          |
|                    -2: Module selection wrong                              |
|                    -3: Timer selection wrong                               |
|                    -4: The module is not a TIMER module                    |
|                    -5: Timer not initialised see function                  |
|                        "i_APCI1710_InitTimer"                              |
|                    -6: Interrupt parameter is wrong                        |
|                    -7: Interrupt function not initialised.                 |
|                        See function "i_APCI1710_SetBoardIntRoutineX"       |
+----------------------------------------------------------------------------+
*/
int i_APCI1710_InsnWriteEnableDisableTimer(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnReadAllTimerValue(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnBitsTimer(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_ReadTimerValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_TimerNbr,
unsigned int *pul_TimerValue)
int i_APCI1710_GetTimerOutputLevel(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_TimerNbr,
unsigned char *pb_OutputLevel)
int i_APCI1710_GetTimerProgressStatus(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_TimerNbr,
unsigned char *pb_TimerStatus)
int i_APCI1710_WriteTimerValue(struct comedi_device *dev,
unsigned char b_ModulNbr, unsigned char b_TimerNbr,
unsigned int ul_WriteValue)
