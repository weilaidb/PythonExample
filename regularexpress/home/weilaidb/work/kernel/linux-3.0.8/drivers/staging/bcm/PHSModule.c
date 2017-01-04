static UINT CreateSFToClassifierRuleMapping(B_UINT16 uiVcid,B_UINT16  uiClsId,S_SERVICEFLOW_TABLE *psServiceFlowTable,S_PHS_RULE *psPhsRule,B_UINT8 u8AssociatedPHSI);
static UINT CreateClassiferToPHSRuleMapping(B_UINT16 uiVcid,B_UINT16  uiClsId,S_SERVICEFLOW_ENTRY *pstServiceFlowEntry,S_PHS_RULE *psPhsRule,B_UINT8 u8AssociatedPHSI);
static UINT CreateClassifierPHSRule(B_UINT16  uiClsId,S_CLASSIFIER_TABLE *psaClassifiertable ,S_PHS_RULE *psPhsRule,E_CLASSIFIER_ENTRY_CONTEXT eClsContext,B_UINT8 u8AssociatedPHSI);
static UINT UpdateClassifierPHSRule(B_UINT16  uiClsId,S_CLASSIFIER_ENTRY *pstClassifierEntry,S_CLASSIFIER_TABLE *psaClassifiertable ,S_PHS_RULE *psPhsRule,B_UINT8 u8AssociatedPHSI);
static BOOLEAN ValidatePHSRuleComplete(S_PHS_RULE *psPhsRule);
static BOOLEAN DerefPhsRule(B_UINT16  uiClsId,S_CLASSIFIER_TABLE *psaClassifiertable,S_PHS_RULE *pstPhsRule);
static UINT GetClassifierEntry(S_CLASSIFIER_TABLE *pstClassifierTable,B_UINT32 uiClsid,E_CLASSIFIER_ENTRY_CONTEXT eClsContext, S_CLASSIFIER_ENTRY **ppstClassifierEntry);
static UINT GetPhsRuleEntry(S_CLASSIFIER_TABLE *pstClassifierTable,B_UINT32 uiPHSI,E_CLASSIFIER_ENTRY_CONTEXT eClsContext,S_PHS_RULE **ppstPhsRule);
static void free_phs_serviceflow_rules(S_SERVICEFLOW_TABLE *psServiceFlowRulesTable);
static int phs_compress(S_PHS_RULE   *phs_members,unsigned char *in_buf,
unsigned char *out_buf,unsigned int *header_size,UINT *new_header_size );
static int verify_suppress_phsf(unsigned char *in_buffer,unsigned char *out_buffer,
unsigned char *phsf,unsigned char *phsm,unsigned int phss,unsigned int phsv,UINT *new_header_size );
static int phs_decompress(unsigned char *in_buf,unsigned char *out_buf,\
S_PHS_RULE   *phs_rules,UINT *header_size);
static ULONG PhsCompress(void* pvContext,
B_UINT16 uiVcid,
B_UINT16 uiClsId,
void *pvInputBuffer,
void *pvOutputBuffer,
UINT *pOldHeaderSize,
UINT *pNewHeaderSize );
static ULONG PhsDeCompress(void* pvContext,
B_UINT16 uiVcid,
void *pvInputBuffer,
void *pvOutputBuffer,
UINT *pInHeaderSize,
UINT *pOutHeaderSize);
#define IN
#define OUT
int PHSTransmit(PMINI_ADAPTER Adapter,
struct sk_buff	**pPacket,
USHORT Vcid,
B_UINT16 uiClassifierRuleID,
BOOLEAN bHeaderSuppressionEnabled,
UINT *PacketLen,
UCHAR bEthCSSupport)
int PHSRecieve(PMINI_ADAPTER Adapter,
USHORT usVcid,
struct sk_buff *packet,
UINT *punPacketLen,
UCHAR *pucEthernetHdr,
UINT	bHeaderSuppressionEnabled)
void DumpFullPacket(UCHAR *pBuf,UINT nPktLen)
int phs_init(PPHS_DEVICE_EXTENSION pPhsdeviceExtension,PMINI_ADAPTER Adapter)
int PhsCleanup(IN PPHS_DEVICE_EXTENSION pPHSDeviceExt)
ULONG PhsUpdateClassifierRule(IN void* pvContext,
IN B_UINT16  uiVcid ,
IN B_UINT16  uiClsId   ,
IN S_PHS_RULE *psPhsRule,
IN B_UINT8  u8AssociatedPHSI)
ULONG PhsDeletePHSRule(IN void* pvContext,IN B_UINT16 uiVcid,IN B_UINT8 u8PHSI)
ULONG PhsDeleteClassifierRule(IN void* pvContext,IN B_UINT16 uiVcid ,IN B_UINT16  uiClsId)
ULONG PhsDeleteSFRules(IN void* pvContext,IN B_UINT16 uiVcid)
ULONG PhsCompress(IN void* pvContext,
IN B_UINT16 uiVcid,
IN B_UINT16 uiClsId,
IN void *pvInputBuffer,
OUT void *pvOutputBuffer,
OUT UINT *pOldHeaderSize,
OUT UINT *pNewHeaderSize )
ULONG PhsDeCompress(IN void* pvContext,
IN B_UINT16 uiVcid,
IN void *pvInputBuffer,
OUT void *pvOutputBuffer,
OUT UINT *pInHeaderSize,
OUT UINT *pOutHeaderSize )
static void free_phs_serviceflow_rules(S_SERVICEFLOW_TABLE *psServiceFlowRulesTable)
static BOOLEAN ValidatePHSRuleComplete(IN S_PHS_RULE *psPhsRule)
UINT GetServiceFlowEntry(IN S_SERVICEFLOW_TABLE *psServiceFlowTable,
IN B_UINT16 uiVcid,S_SERVICEFLOW_ENTRY **ppstServiceFlowEntry)
UINT GetClassifierEntry(IN S_CLASSIFIER_TABLE *pstClassifierTable,
IN B_UINT32 uiClsid,E_CLASSIFIER_ENTRY_CONTEXT eClsContext,
OUT S_CLASSIFIER_ENTRY **ppstClassifierEntry)
static UINT GetPhsRuleEntry(IN S_CLASSIFIER_TABLE *pstClassifierTable,
IN B_UINT32 uiPHSI,E_CLASSIFIER_ENTRY_CONTEXT eClsContext,
OUT S_PHS_RULE **ppstPhsRule)
UINT CreateSFToClassifierRuleMapping(IN B_UINT16 uiVcid,IN B_UINT16  uiClsId,
IN S_SERVICEFLOW_TABLE *psServiceFlowTable,S_PHS_RULE *psPhsRule,
B_UINT8 u8AssociatedPHSI)
UINT CreateClassiferToPHSRuleMapping(IN B_UINT16 uiVcid,
IN B_UINT16  uiClsId,IN S_SERVICEFLOW_ENTRY *pstServiceFlowEntry,
S_PHS_RULE *psPhsRule,B_UINT8 u8AssociatedPHSI)
static UINT CreateClassifierPHSRule(IN B_UINT16  uiClsId,
S_CLASSIFIER_TABLE *psaClassifiertable ,S_PHS_RULE *psPhsRule,
E_CLASSIFIER_ENTRY_CONTEXT eClsContext,B_UINT8 u8AssociatedPHSI)
static UINT UpdateClassifierPHSRule(IN B_UINT16  uiClsId,
IN S_CLASSIFIER_ENTRY *pstClassifierEntry,
S_CLASSIFIER_TABLE *psaClassifiertable ,S_PHS_RULE *psPhsRule,
B_UINT8 u8AssociatedPHSI)
static BOOLEAN DerefPhsRule(IN B_UINT16  uiClsId,S_CLASSIFIER_TABLE *psaClassifiertable,S_PHS_RULE *pstPhsRule)
void DumpPhsRules(PPHS_DEVICE_EXTENSION pDeviceExtension)
int phs_decompress(unsigned char *in_buf,unsigned char *out_buf,
S_PHS_RULE   *decomp_phs_rules,UINT *header_size)
static int phs_compress(S_PHS_RULE  *phs_rule,unsigned char *in_buf
,unsigned char *out_buf,UINT *header_size,UINT *new_header_size)
static int verify_suppress_phsf(unsigned char *in_buffer,unsigned char *out_buffer,
unsigned char *phsf,unsigned char *phsm,unsigned int phss,
unsigned int phsv,UINT* new_header_size)
