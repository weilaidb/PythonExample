#define DWORD unsigned int
static INT BcmDoChipSelect(PMINI_ADAPTER Adapter, UINT offset);
static INT BcmGetActiveDSD(PMINI_ADAPTER Adapter);
static INT BcmGetActiveISO(PMINI_ADAPTER Adapter);
static UINT BcmGetEEPROMSize(PMINI_ADAPTER Adapter);
static INT BcmGetFlashCSInfo(PMINI_ADAPTER Adapter);
static UINT BcmGetFlashSectorSize(PMINI_ADAPTER Adapter, UINT FlashSectorSizeSig, UINT FlashSectorSize);
static VOID BcmValidateNvmType(PMINI_ADAPTER Adapter);
static INT BcmGetNvmSize(PMINI_ADAPTER Adapter);
static UINT BcmGetFlashSize(PMINI_ADAPTER Adapter);
static NVM_TYPE BcmGetNvmType(PMINI_ADAPTER Adapter);
static INT BcmGetSectionValEndOffset(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal);
static B_UINT8 IsOffsetWritable(PMINI_ADAPTER Adapter, UINT uiOffset);
static INT IsSectionWritable(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL Section);
static INT IsSectionExistInVendorInfo(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL section);
static INT ReadDSDPriority(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL dsd);
static INT ReadDSDSignature(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL dsd);
static INT ReadISOPriority(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL iso);
static INT ReadISOSignature(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL iso);
static INT CorruptDSDSig(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal);
static INT CorruptISOSig(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal);
static INT SaveHeaderIfPresent(PMINI_ADAPTER Adapter, PUCHAR pBuff, UINT uiSectAlignAddr);
static INT WriteToFlashWithoutSectorErase(PMINI_ADAPTER Adapter, PUINT pBuff,
FLASH2X_SECTION_VAL eFlash2xSectionVal,
UINT uiOffset, UINT uiNumBytes);
static FLASH2X_SECTION_VAL getHighestPriDSD(PMINI_ADAPTER Adapter);
static FLASH2X_SECTION_VAL getHighestPriISO(PMINI_ADAPTER Adapter);
static INT BeceemFlashBulkRead(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes);
static INT BeceemFlashBulkWrite(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes,
BOOLEAN bVerify);
static INT GetFlashBaseAddr(PMINI_ADAPTER Adapter);
static INT ReadBeceemEEPROMBulk(PMINI_ADAPTER Adapter,UINT dwAddress, UINT *pdwData, UINT dwNumData);
static UCHAR ReadEEPROMStatusRegister( PMINI_ADAPTER Adapter )
INT ReadBeceemEEPROMBulk( PMINI_ADAPTER Adapter,
DWORD dwAddress,
DWORD *pdwData,
DWORD dwNumWords
)
INT ReadBeceemEEPROM( PMINI_ADAPTER Adapter,
DWORD uiOffset,
DWORD *pBuffer
)
INT ReadMacAddressFromNVM(PMINI_ADAPTER Adapter)
INT BeceemEEPROMBulkRead(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes)
static INT BeceemFlashBulkRead(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes)
static UINT BcmGetFlashSize(PMINI_ADAPTER Adapter)
static UINT BcmGetEEPROMSize(PMINI_ADAPTER Adapter)
static INT FlashSectorErase(PMINI_ADAPTER Adapter,
UINT addr,
UINT numOfSectors)
static INT flashByteWrite(
PMINI_ADAPTER Adapter,
UINT uiOffset,
PVOID pData)
static INT flashWrite(
PMINI_ADAPTER Adapter,
UINT uiOffset,
PVOID pData)
static INT flashByteWriteStatus(
PMINI_ADAPTER Adapter,
UINT uiOffset,
PVOID pData)
static INT flashWriteStatus(
PMINI_ADAPTER Adapter,
UINT uiOffset,
PVOID pData)
static VOID BcmRestoreBlockProtectStatus(PMINI_ADAPTER Adapter,ULONG ulWriteStatus)
static ULONG BcmFlashUnProtectBlock(PMINI_ADAPTER Adapter,UINT uiOffset, UINT uiLength)
static INT BeceemFlashBulkWrite(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes,
BOOLEAN bVerify)
static INT BeceemFlashBulkWriteStatus(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes,
BOOLEAN bVerify)
INT PropagateCalParamsFromEEPROMToMemory(PMINI_ADAPTER Adapter)
INT PropagateCalParamsFromFlashToMemory(PMINI_ADAPTER Adapter)
static INT BeceemEEPROMReadBackandVerify(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes)
static VOID BcmSwapWord(UINT *ptr1)
static INT BeceemEEPROMWritePage( PMINI_ADAPTER Adapter, UINT uiData[], UINT uiOffset )
INT BeceemEEPROMBulkWrite(
PMINI_ADAPTER Adapter,
PUCHAR pBuffer,
UINT uiOffset,
UINT uiNumBytes,
BOOLEAN bVerify)
INT BeceemNVMRead(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes)
INT BeceemNVMWrite(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
UINT uiOffset,
UINT uiNumBytes,
BOOLEAN bVerify)
INT BcmUpdateSectorSize(PMINI_ADAPTER Adapter,UINT uiSectorSize)
static UINT BcmGetFlashSectorSize(PMINI_ADAPTER Adapter, UINT FlashSectorSizeSig, UINT FlashSectorSize)
static INT BcmInitEEPROMQueues(PMINI_ADAPTER Adapter)
INT BcmInitNVM(PMINI_ADAPTER ps_adapter)
static INT BcmGetNvmSize(PMINI_ADAPTER Adapter)
static VOID BcmValidateNvmType(PMINI_ADAPTER Adapter)
static ULONG BcmReadFlashRDID(PMINI_ADAPTER Adapter)
INT BcmAllocFlashCSStructure(PMINI_ADAPTER psAdapter)
INT BcmDeAllocFlashCSStructure(PMINI_ADAPTER psAdapter)
static INT	BcmDumpFlash2XCSStructure(PFLASH2X_CS_INFO psFlash2xCSInfo,PMINI_ADAPTER Adapter)
static INT	ConvertEndianOf2XCSStructure(PFLASH2X_CS_INFO psFlash2xCSInfo)
static INT	ConvertEndianOfCSStructure(PFLASH_CS_INFO psFlashCSInfo)
static INT IsSectionExistInVendorInfo(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL section)
static VOID UpdateVendorInfo(PMINI_ADAPTER Adapter)
static INT BcmGetFlashCSInfo(PMINI_ADAPTER Adapter)
static NVM_TYPE BcmGetNvmType(PMINI_ADAPTER Adapter)
INT BcmGetSectionValStartOffset(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlashSectionVal)
INT BcmGetSectionValEndOffset(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal)
INT BcmFlash2xBulkRead(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
FLASH2X_SECTION_VAL eFlash2xSectionVal,
UINT uiOffsetWithinSectionVal,
UINT uiNumBytes)
INT BcmFlash2xBulkWrite(
PMINI_ADAPTER Adapter,
PUINT pBuffer,
FLASH2X_SECTION_VAL eFlash2xSectVal,
UINT uiOffset,
UINT uiNumBytes,
UINT bVerify)
static INT BcmGetActiveDSD(PMINI_ADAPTER Adapter)
static INT BcmGetActiveISO(PMINI_ADAPTER Adapter)
B_UINT8 IsOffsetWritable(PMINI_ADAPTER Adapter, UINT uiOffset)
static INT BcmDumpFlash2xSectionBitMap(PFLASH2X_BITMAP psFlash2xBitMap)
INT BcmGetFlash2xSectionalBitMap(PMINI_ADAPTER Adapter, PFLASH2X_BITMAP psFlash2xBitMap)
INT BcmSetActiveSection(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectVal)
INT BcmCopyISO(PMINI_ADAPTER Adapter, FLASH2X_COPY_SECTION sCopySectStrut)
INT BcmFlash2xCorruptSig(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal)
INT BcmFlash2xWriteSig(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlashSectionVal)
INT	validateFlash2xReadWrite(PMINI_ADAPTER Adapter, PFLASH2X_READWRITE psFlash2xReadWrite)
INT IsFlash2x(PMINI_ADAPTER Adapter)
static INT GetFlashBaseAddr(PMINI_ADAPTER Adapter)
INT	BcmCopySection(PMINI_ADAPTER Adapter,
FLASH2X_SECTION_VAL SrcSection,
FLASH2X_SECTION_VAL DstSection,
UINT offset,
UINT numOfBytes)
INT SaveHeaderIfPresent(PMINI_ADAPTER Adapter, PUCHAR pBuff, UINT uiOffset)
static INT BcmDoChipSelect(PMINI_ADAPTER Adapter, UINT offset)
INT ReadDSDSignature(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL dsd)
INT ReadDSDPriority(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL dsd)
FLASH2X_SECTION_VAL getHighestPriDSD(PMINI_ADAPTER Adapter)
INT ReadISOSignature(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL iso)
INT ReadISOPriority(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL iso)
FLASH2X_SECTION_VAL getHighestPriISO(PMINI_ADAPTER Adapter)
INT WriteToFlashWithoutSectorErase(PMINI_ADAPTER Adapter,
PUINT pBuff,
FLASH2X_SECTION_VAL eFlash2xSectionVal,
UINT uiOffset,
UINT uiNumBytes
)
BOOLEAN IsSectionExistInFlash(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL section)
INT IsSectionWritable(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL Section)
static INT CorruptDSDSig(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal)
static INT CorruptISOSig(PMINI_ADAPTER Adapter, FLASH2X_SECTION_VAL eFlash2xSectionVal)
BOOLEAN IsNonCDLessDevice(PMINI_ADAPTER Adapter)
