extern void AR6KFreeIOPacket(struct ar6k_device *pDev, struct htc_packet *pPacket);
extern struct htc_packet *AR6KAllocIOPacket(struct ar6k_device *pDev);
static int DevServiceDebugInterrupt(struct ar6k_device *pDev);
#define DELAY_PER_INTERVAL_MS 10
int DevRWCompletionHandler(void *context, int status)
int DevPollMboxMsgRecv(struct ar6k_device *pDev,
u32 *pLookAhead,
int          TimeoutMS)
static int DevServiceCPUInterrupt(struct ar6k_device *pDev)
static int DevServiceErrorInterrupt(struct ar6k_device *pDev)
static int DevServiceDebugInterrupt(struct ar6k_device *pDev)
static int DevServiceCounterInterrupt(struct ar6k_device *pDev)
static void DevGetEventAsyncHandler(void *Context, struct htc_packet *pPacket)
int DevCheckPendingRecvMsgsAsync(void *context)
void DevAsyncIrqProcessComplete(struct ar6k_device *pDev)
static int ProcessPendingIRQs(struct ar6k_device *pDev, bool *pDone, bool *pASyncProcessing)
int DevDsrHandler(void *context)
void DumpAR6KDevState(struct ar6k_device *pDev)
