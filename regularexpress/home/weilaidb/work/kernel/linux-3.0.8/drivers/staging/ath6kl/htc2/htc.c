static struct ath_debug_mask_description g_HTCDebugDescription[] = ;
ATH_DEBUG_INSTANTIATE_MODULE_VAR(htc,
"htc",
"Host Target Communications",
ATH_DEBUG_MASK_DEFAULTS,
ATH_DEBUG_DESCRIPTION_COUNT(g_HTCDebugDescription),
g_HTCDebugDescription);
static void HTCReportFailure(void *Context);
static void ResetEndpointStates(struct htc_target *target);
void HTCFreeControlBuffer(struct htc_target *target, struct htc_packet *pPacket, struct htc_packet_queue *pList)
struct htc_packet *HTCAllocControlBuffer(struct htc_target *target,  struct htc_packet_queue *pList)
static void HTCCleanup(struct htc_target *target)
HTC_HANDLE HTCCreate(void *hif_handle, struct htc_init_info *pInfo)
void  HTCDestroy(HTC_HANDLE HTCHandle)
void *HTCGetHifDevice(HTC_HANDLE HTCHandle)
int HTCWaitTarget(HTC_HANDLE HTCHandle)
int HTCStart(HTC_HANDLE HTCHandle)
static void ResetEndpointStates(struct htc_target *target)
void HTCStop(HTC_HANDLE HTCHandle)
void HTCDumpCreditStates(HTC_HANDLE HTCHandle)
static void HTCReportFailure(void *Context)
bool HTCGetEndpointStatistics(HTC_HANDLE               HTCHandle,
HTC_ENDPOINT_ID          Endpoint,
HTC_ENDPOINT_STAT_ACTION Action,
struct htc_endpoint_stats       *pStats)
struct ar6k_device  *HTCGetAR6KDevice(void *HTCHandle)
