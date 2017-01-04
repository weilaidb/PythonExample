int i_APCI1710_InsnConfigInitTTLIO(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnBitsReadTTLIO(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
int i_APCI1710_InsnReadTTLIOAllPortValue(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
+----------------------------------------------------------------------------+
| Output Parameters : -                                                      |
+----------------------------------------------------------------------------+
| Return Value      : 0: No error                                            |
|                    -1: The handle parameter of the board is wrong          |
|                    -2: The module parameter is wrong                       |
|                    -3: The module is not a TTL I/O module                  |
|                    -4: The selected digital output is wrong                |
|                    -5: TTL I/O not initialised see function                |
|                        " i_APCI1710_InitTTLIO"
+----------------------------------------------------------------------------+
*/
int i_APCI1710_InsnWriteSetTTLIOChlOnOff(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn, unsigned int *data)
