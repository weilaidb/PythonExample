static int BcmFileDownload(PMINI_ADAPTER Adapter, const char *path,
unsigned int loc);
static VOID doPowerAutoCorrection(PMINI_ADAPTER psAdapter);
static void HandleShutDownModeRequest(PMINI_ADAPTER Adapter,PUCHAR pucBuffer);
static int bcm_parse_target_params(PMINI_ADAPTER Adapter);
static void beceem_protocol_reset (PMINI_ADAPTER Adapter);
static VOID default_wimax_protocol_initialize(PMINI_ADAPTER Adapter)
INT
InitAdapter(PMINI_ADAPTER psAdapter)
VOID AdapterFree(PMINI_ADAPTER Adapter)
static int create_worker_threads(PMINI_ADAPTER psAdapter)
static struct file *open_firmware_file(PMINI_ADAPTER Adapter, const char *path)
static int BcmFileDownload(PMINI_ADAPTER Adapter,
const char *path,
unsigned int loc
)
INT CopyBufferToControlPacket(PMINI_ADAPTER Adapter,
PVOID ioBuffer
)
VOID LinkMessage(PMINI_ADAPTER Adapter)
VOID StatisticsResponse(PMINI_ADAPTER Adapter,PVOID pvBuffer)
VOID LinkControlResponseMessage(PMINI_ADAPTER Adapter,PUCHAR pucBuffer)
void SendIdleModeResponse(PMINI_ADAPTER Adapter)
VOID DumpPackInfo(PMINI_ADAPTER Adapter)
int reset_card_proc(PMINI_ADAPTER ps_adapter)
int run_card_proc(PMINI_ADAPTER ps_adapter )
int InitCardAndDownloadFirmware(PMINI_ADAPTER ps_adapter)
static int bcm_parse_target_params(PMINI_ADAPTER Adapter)
void beceem_parse_target_struct(PMINI_ADAPTER Adapter)
static VOID doPowerAutoCorrection(PMINI_ADAPTER psAdapter)
static void convertEndian(B_UINT8 rwFlag, PUINT puiBuffer, UINT uiByteCount)
#define CACHE_ADDRESS_MASK	0x80000000
#define UNCACHE_ADDRESS_MASK	0xa0000000
int rdm(PMINI_ADAPTER Adapter, UINT uiAddress, PCHAR pucBuff, size_t sSize)
int wrm(PMINI_ADAPTER Adapter, UINT uiAddress, PCHAR pucBuff, size_t sSize)
int wrmalt (PMINI_ADAPTER Adapter, UINT uiAddress, PUINT pucBuff, size_t size)
int rdmalt (PMINI_ADAPTER Adapter, UINT uiAddress, PUINT pucBuff, size_t size)
int wrmWithLock(PMINI_ADAPTER Adapter, UINT uiAddress, PCHAR pucBuff, size_t sSize)
int wrmaltWithLock (PMINI_ADAPTER Adapter, UINT uiAddress, PUINT pucBuff, size_t size)
int rdmaltWithLock (PMINI_ADAPTER Adapter, UINT uiAddress, PUINT pucBuff, size_t size)
static VOID HandleShutDownModeWakeup(PMINI_ADAPTER Adapter)
static VOID SendShutModeResponse(PMINI_ADAPTER Adapter)
static void HandleShutDownModeRequest(PMINI_ADAPTER Adapter,PUCHAR pucBuffer)
VOID ResetCounters(PMINI_ADAPTER Adapter)
S_CLASSIFIER_RULE *GetFragIPClsEntry(PMINI_ADAPTER Adapter,USHORT usIpIdentification,ULONG SrcIP)
void AddFragIPClsEntry(PMINI_ADAPTER Adapter,PS_FRAGMENTED_PACKET_INFO psFragPktInfo)
void DelFragIPClsEntry(PMINI_ADAPTER Adapter,USHORT usIpIdentification,ULONG SrcIp)
void update_per_cid_rx (PMINI_ADAPTER Adapter)
void update_per_sf_desc_cnts( PMINI_ADAPTER Adapter)
void flush_queue(PMINI_ADAPTER Adapter, UINT iQIndex)
static void beceem_protocol_reset (PMINI_ADAPTER Adapter)
