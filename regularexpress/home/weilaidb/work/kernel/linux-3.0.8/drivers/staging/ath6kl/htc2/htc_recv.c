#define HTCIssueRecv(t, p) \
DevRecvPacket(&(t)->Device,  \
(p),          \
(p)->ActualLength)
#define DO_RCV_COMPLETION(e,q)  DoRecvCompletion(e,q)
#define DUMP_RECV_PKT_INFO(pP) \
AR_DEBUG_PRINTF(ATH_DEBUG_RECV, (" HTC RECV packet 0x%lX (%d bytes) (hdr:0x%X) on ep : %d \n", \
(unsigned long)(pP),                   \
(pP)->ActualLength,                    \
(pP)->PktInfo.AsRx.ExpectedHdr,        \
(pP)->Endpoint))
#define HTC_RX_STAT_PROFILE(t,ep,numLookAheads)        \
static void DoRecvCompletion(struct htc_endpoint     *pEndpoint,
struct htc_packet_queue *pQueueToIndicate)
static INLINE int HTCProcessTrailer(struct htc_target *target,
u8 *pBuffer,
int         Length,
u32 *pNextLookAheads,
int        *pNumLookAheads,
HTC_ENDPOINT_ID FromEndpoint)
static int HTCProcessRecvHeader(struct htc_target *target,
struct htc_packet *pPacket,
u32 *pNextLookAheads,
int        *pNumLookAheads)
static INLINE void HTCAsyncRecvCheckMorePackets(struct htc_target  *target,
u32 NextLookAheads[],
int         NumLookAheads,
bool      CheckMoreMsgs)
static INLINE void DrainRecvIndicationQueue(struct htc_target *target, struct htc_endpoint *pEndpoint)
#define SET_MORE_RX_PACKET_INDICATION_FLAG(L,N,E,P) \
if ((N) > 0)
#define FORCE_MORE_RX_PACKET_INDICATION_FLAG(P) \
(P)->PktInfo.AsRx.IndicationFlags |= HTC_RX_FLAGS_INDICATE_MORE_PKTS;
static INLINE void SetRxPacketIndicationFlags(u32 LookAhead,
struct htc_endpoint  *pEndpoint,
struct htc_packet    *pPacket)
void HTCRecvCompleteHandler(void *Context, struct htc_packet *pPacket)
int HTCWaitforControlMessage(struct htc_target *target, struct htc_packet **ppControlPacket)
static int AllocAndPrepareRxPackets(struct htc_target       *target,
u32 LookAheads[],
int              Messages,
struct htc_endpoint     *pEndpoint,
struct htc_packet_queue *pQueue)
static void HTCAsyncRecvScatterCompletion(struct hif_scatter_req *pScatterReq)
static int HTCIssueRecvPacketBundle(struct htc_target        *target,
struct htc_packet_queue  *pRecvPktQueue,
struct htc_packet_queue  *pSyncCompletionQueue,
int               *pNumPacketsFetched,
bool             PartialBundle)
static INLINE void CheckRecvWaterMark(struct htc_endpoint    *pEndpoint)
int HTCRecvMessagePendingHandler(void *Context, u32 MsgLookAheads[], int NumLookAheads, bool *pAsyncProc, int *pNumPktsFetched)
int HTCAddReceivePktMultiple(HTC_HANDLE HTCHandle, struct htc_packet_queue *pPktQueue)
int HTCAddReceivePkt(HTC_HANDLE HTCHandle, struct htc_packet *pPacket)
void HTCUnblockRecv(HTC_HANDLE HTCHandle)
static void HTCFlushRxQueue(struct htc_target *target, struct htc_endpoint *pEndpoint, struct htc_packet_queue *pQueue)
static void HTCFlushEndpointRX(struct htc_target *target, struct htc_endpoint *pEndpoint)
void HTCFlushRecvBuffers(struct htc_target *target)
void HTCEnableRecv(HTC_HANDLE HTCHandle)
void HTCDisableRecv(HTC_HANDLE HTCHandle)
int HTCGetNumRecvBuffers(HTC_HANDLE      HTCHandle,
HTC_ENDPOINT_ID Endpoint)
int HTCWaitForPendingRecv(HTC_HANDLE   HTCHandle,
u32 TimeoutInMs,
bool      *pbIsRecvPending)
