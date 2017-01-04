typedef enum _E_CLASSIFIER_ACTION
E_CLASSIFIER_ACTION;
static ULONG GetNextTargetBufferLocation(PMINI_ADAPTER Adapter,B_UINT16 tid);
INT SearchSfid(PMINI_ADAPTER Adapter,UINT uiSfid)
static INT SearchFreeSfid(PMINI_ADAPTER Adapter)
static int SearchClsid(PMINI_ADAPTER Adapter,ULONG ulSFID,B_UINT16  uiClassifierID)
static int SearchFreeClsid(PMINI_ADAPTER Adapter
)
static VOID deleteSFBySfid(PMINI_ADAPTER Adapter, UINT uiSearchRuleIndex)
static inline VOID
CopyIpAddrToClassifier(S_CLASSIFIER_RULE *pstClassifierEntry ,
B_UINT8 u8IpAddressLen , B_UINT8 *pu8IpAddressMaskSrc ,
BOOLEAN bIpVersion6 , E_IPADDR_CONTEXT eIpAddrContext)
void ClearTargetDSXBuffer(PMINI_ADAPTER Adapter,B_UINT16 TID,BOOLEAN bFreeAll)
static inline VOID CopyClassifierRuleToSF(PMINI_ADAPTER Adapter,stConvergenceSLTypes  *psfCSType,UINT uiSearchRuleIndex,UINT nClassifierIndex)
static inline VOID DeleteClassifierRuleFromSF(PMINI_ADAPTER Adapter,UINT uiSearchRuleIndex,UINT nClassifierIndex)
VOID DeleteAllClassifiersForSF(PMINI_ADAPTER Adapter,UINT uiSearchRuleIndex)
static VOID CopyToAdapter( register PMINI_ADAPTER Adapter,
register pstServiceFlowParamSI psfLocalSet,
register UINT uiSearchRuleIndex,
register UCHAR ucDsxType,
stLocalSFAddIndicationAlt *pstAddIndication)
static VOID DumpCmControlPacket(PVOID pvBuffer)
static inline ULONG RestoreSFParam(PMINI_ADAPTER Adapter, ULONG ulAddrSFParamSet,PUCHAR pucDestBuffer)
static ULONG StoreSFParam(PMINI_ADAPTER Adapter,PUCHAR pucSrcBuffer,ULONG  ulAddrSFParamSet)
ULONG StoreCmControlResponseMessage(PMINI_ADAPTER Adapter,PVOID pvBuffer,UINT *puBufferLength)
static inline stLocalSFAddIndicationAlt
*RestoreCmControlResponseMessage(register PMINI_ADAPTER Adapter,register PVOID pvBuffer)
ULONG SetUpTargetDsxBuffers(PMINI_ADAPTER Adapter)
static ULONG GetNextTargetBufferLocation(PMINI_ADAPTER Adapter,B_UINT16 tid)
INT AllocAdapterDsxBuffer(PMINI_ADAPTER Adapter)
INT FreeAdapterDsxBuffer(PMINI_ADAPTER Adapter)
BOOLEAN CmControlResponseMessage(PMINI_ADAPTER Adapter,
PVOID pvBuffer
)
int get_dsx_sf_data_to_application(PMINI_ADAPTER Adapter, UINT uiSFId, void __user *user_buffer)
VOID OverrideServiceFlowParams(PMINI_ADAPTER Adapter,PUINT puiBuffer)
