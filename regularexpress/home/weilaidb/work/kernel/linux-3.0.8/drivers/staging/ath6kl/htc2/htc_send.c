typedef enum _HTC_SEND_QUEUE_RESULT  HTC_SEND_QUEUE_RESULT;
#define DO_EP_TX_COMPLETION(ep,q)  DoSendCompletion(ep,q)
#define DO_DISTRIBUTION(t,reason,description,pList) \
static void DoSendCompletion(struct htc_endpoint       *pEndpoint,
struct htc_packet_queue   *pQueueToIndicate)
static INLINE void CompleteSentPacket(struct htc_target *target, struct htc_endpoint *pEndpoint, struct htc_packet *pPacket)
static void HTCSendPktCompletionHandler(void *Context, struct htc_packet *pPacket)
int HTCIssueSend(struct htc_target *target, struct htc_packet *pPacket)
static INLINE void GetHTCSendPackets(struct htc_target        *target,
struct htc_endpoint      *pEndpoint,
struct htc_packet_queue  *pQueue)
static void HTCAsyncSendScatterCompletion(struct hif_scatter_req *pScatterReq)
static void HTCIssueSendBundle(struct htc_endpoint      *pEndpoint,
struct htc_packet_queue  *pQueue,
int               *pBundlesSent,
int               *pTotalBundlesPkts)
static HTC_SEND_QUEUE_RESULT HTCTrySend(struct htc_target       *target,
struct htc_endpoint     *pEndpoint,
struct htc_packet_queue *pCallersSendQueue)
int  HTCSendPktsMultiple(HTC_HANDLE HTCHandle, struct htc_packet_queue *pPktQueue)
int HTCSendPkt(HTC_HANDLE HTCHandle, struct htc_packet *pPacket)
static INLINE void HTCCheckEndpointTxQueues(struct htc_target *target)
void HTCProcessCreditRpt(struct htc_target *target, HTC_CREDIT_REPORT *pRpt, int NumEntries, HTC_ENDPOINT_ID FromEndpoint)
static void HTCFlushEndpointTX(struct htc_target *target, struct htc_endpoint *pEndpoint, HTC_TX_TAG Tag)
void DumpCreditDist(struct htc_endpoint_credit_dist *pEPDist)
void DumpCreditDistStates(struct htc_target *target)
void HTCFlushSendPkts(struct htc_target *target)
void HTCFlushEndpoint(HTC_HANDLE HTCHandle, HTC_ENDPOINT_ID Endpoint, HTC_TX_TAG Tag)
void HTCIndicateActivityChange(HTC_HANDLE      HTCHandle,
HTC_ENDPOINT_ID Endpoint,
bool          Active)
bool HTCIsEndpointActive(HTC_HANDLE      HTCHandle,
HTC_ENDPOINT_ID Endpoint)
