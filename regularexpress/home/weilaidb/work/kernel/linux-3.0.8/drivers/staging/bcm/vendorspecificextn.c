INT vendorextnGetSectionInfo(PVOID  pContext,PFLASH2X_VENDORSPECIFIC_INFO pVendorInfo)
INT vendorextnInit(PMINI_ADAPTER Adapter)
INT vendorextnExit(PMINI_ADAPTER Adapter)
INT vendorextnIoctl(PMINI_ADAPTER Adapter, UINT cmd, ULONG arg)
INT vendorextnReadSection(PVOID  pContext, PUCHAR pBuffer, FLASH2X_SECTION_VAL SectionVal,
UINT offset, UINT numOfBytes)
INT vendorextnWriteSection(PVOID  pContext, PUCHAR pBuffer, FLASH2X_SECTION_VAL SectionVal,
UINT offset, UINT numOfBytes, BOOLEAN bVerify)
INT vendorextnWriteSectionWithoutErase(PVOID  pContext, PUCHAR pBuffer, FLASH2X_SECTION_VAL SectionVal,
UINT offset, UINT numOfBytes)
