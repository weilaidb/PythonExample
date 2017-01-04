static int          msglevel                =MSG_LEVEL_INFO;
void MACvSetMultiAddrByHash (PSDevice pDevice, BYTE byHashIdx)
void MACvWriteMultiAddr(PSDevice pDevice, unsigned int uByteIdx, BYTE byData)
BOOL MACbShutdown (PSDevice pDevice)
void MACvSetBBType(PSDevice pDevice,BYTE byType)
void MACvSetMISCFifo (PSDevice pDevice, WORD wOffset, DWORD dwData)
void MACvDisableKeyEntry(PSDevice pDevice, unsigned int uEntryIdx)
void MACvSetKeyEntry(PSDevice pDevice, WORD wKeyCtl,
unsigned int uEntryIdx, unsigned int uKeyIdx,
PBYTE pbyAddr, PDWORD pdwKey)
void MACvRegBitsOff(PSDevice pDevice, BYTE byRegOfs, BYTE byBits)
void MACvRegBitsOn(PSDevice pDevice, BYTE byRegOfs, BYTE byBits)
void MACvWriteWord(PSDevice pDevice, BYTE byRegOfs, WORD wData)
void MACvWriteBSSIDAddress(PSDevice pDevice, PBYTE pbyEtherAddr)
void MACvEnableProtectMD(PSDevice pDevice)
void MACvDisableProtectMD(PSDevice pDevice)
void MACvEnableBarkerPreambleMd(PSDevice pDevice)
void MACvDisableBarkerPreambleMd(PSDevice pDevice)
void MACvWriteBeaconInterval(PSDevice pDevice, WORD wInterval)
