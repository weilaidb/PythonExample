unsigned char SROMbyReadEmbedded(unsigned long dwIoBase, unsigned char byContntOffset)
bool SROMbWriteEmbedded(unsigned long dwIoBase, unsigned char byContntOffset, unsigned char byData)
void SROMvRegBitsOn(unsigned long dwIoBase, unsigned char byContntOffset, unsigned char byBits)
void SROMvRegBitsOff(unsigned long dwIoBase, unsigned char byContntOffset, unsigned char byBits)
bool SROMbIsRegBitsOn(unsigned long dwIoBase, unsigned char byContntOffset, unsigned char byTestBits)
bool SROMbIsRegBitsOff(unsigned long dwIoBase, unsigned char byContntOffset, unsigned char byTestBits)
void SROMvReadAllContents(unsigned long dwIoBase, unsigned char *pbyEepromRegs)
void SROMvWriteAllContents(unsigned long dwIoBase, unsigned char *pbyEepromRegs)
void SROMvReadEtherAddress(unsigned long dwIoBase, unsigned char *pbyEtherAddress)
void SROMvWriteEtherAddress(unsigned long dwIoBase, unsigned char *pbyEtherAddress)
void SROMvReadSubSysVenId(unsigned long dwIoBase, unsigned long *pdwSubSysVenId)
bool SROMbAutoLoad(unsigned long dwIoBase)