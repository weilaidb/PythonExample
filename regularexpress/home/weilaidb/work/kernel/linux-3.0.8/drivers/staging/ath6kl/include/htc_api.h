#define _HTC_API_H_
#define ENDPOINT1 0
#define HTC_MAILBOX_NUM_MAX    4
#define HTC_HEADER_LEN         HTC_HDR_LENGTH
typedef void *HTC_HANDLE;
typedef u16 HTC_SERVICE_ID;
struct htc_init_info ;
typedef void   (*HTC_EP_SEND_PKT_COMPLETE)(void *,struct htc_packet *);
typedef void   (*HTC_EP_SEND_PKT_COMP_MULTIPLE)(void *,struct htc_packet_queue *);
typedef void   (*HTC_EP_RECV_PKT)(void *,struct htc_packet *);
typedef void   (*HTC_EP_RECV_PKT_MULTIPLE)(void *,struct htc_packet_queue *);
typedef void   (*HTC_EP_RECV_REFILL)(void *, HTC_ENDPOINT_ID Endpoint);
typedef struct htc_packet *(*HTC_EP_RECV_ALLOC)(void *, HTC_ENDPOINT_ID Endpoint, int Length);
typedef enum _HTC_SEND_FULL_ACTION  HTC_SEND_FULL_ACTION;
typedef HTC_SEND_FULL_ACTION (*HTC_EP_SEND_QUEUE_FULL)(void *, struct htc_packet *pPacket);
struct htc_ep_callbacks ;
struct htc_service_connect_req ;
#define HTC_LOCAL_CONN_FLAGS_ENABLE_SEND_BUNDLE_PADDING (1 << 0)
struct htc_service_connect_resp ;
struct htc_endpoint_credit_dist ;
#define HTC_EP_ACTIVE                            ((u32) (1u << 31))
#define IS_EP_ACTIVE(epDist)  ((epDist)->DistFlags & HTC_EP_ACTIVE)
#define SET_EP_ACTIVE(epDist) (epDist)->DistFlags |= HTC_EP_ACTIVE
typedef enum _HTC_CREDIT_DIST_REASON  HTC_CREDIT_DIST_REASON;
typedef void (*HTC_CREDIT_DIST_CALLBACK)(void                     *Context,
struct htc_endpoint_credit_dist *pEPList,
HTC_CREDIT_DIST_REASON   Reason);
typedef void (*HTC_CREDIT_INIT_CALLBACK)(void *Context,
struct htc_endpoint_credit_dist *pEPList,
int                      TotalCredits);
typedef enum _HTC_ENDPOINT_STAT_ACTION  HTC_ENDPOINT_STAT_ACTION;
struct htc_endpoint_stats ;
HTC_HANDLE HTCCreate(void *HifDevice, struct htc_init_info *pInfo);
void       *HTCGetHifDevice(HTC_HANDLE HTCHandle);
void        HTCSetCreditDistribution(HTC_HANDLE               HTCHandle,
void                     *pCreditDistContext,
HTC_CREDIT_DIST_CALLBACK CreditDistFunc,
HTC_CREDIT_INIT_CALLBACK CreditInitFunc,
HTC_SERVICE_ID           ServicePriorityOrder[],
int                      ListLength);
int    HTCWaitTarget(HTC_HANDLE HTCHandle);
int    HTCStart(HTC_HANDLE HTCHandle);
int    HTCAddReceivePkt(HTC_HANDLE HTCHandle, struct htc_packet *pPacket);
int    HTCConnectService(HTC_HANDLE HTCHandle,
struct htc_service_connect_req  *pReq,
struct htc_service_connect_resp *pResp);
int    HTCSendPkt(HTC_HANDLE HTCHandle, struct htc_packet *pPacket);
void        HTCStop(HTC_HANDLE HTCHandle);
void        HTCDestroy(HTC_HANDLE HTCHandle);
void        HTCFlushEndpoint(HTC_HANDLE HTCHandle, HTC_ENDPOINT_ID Endpoint, HTC_TX_TAG Tag);
void        HTCDumpCreditStates(HTC_HANDLE HTCHandle);
void        HTCIndicateActivityChange(HTC_HANDLE      HTCHandle,
HTC_ENDPOINT_ID Endpoint,
bool          Active);
bool       HTCGetEndpointStatistics(HTC_HANDLE               HTCHandle,
HTC_ENDPOINT_ID          Endpoint,
HTC_ENDPOINT_STAT_ACTION Action,
struct htc_endpoint_stats       *pStats);
void HTCUnblockRecv(HTC_HANDLE HTCHandle);
int    HTCSendPktsMultiple(HTC_HANDLE HTCHandle, struct htc_packet_queue *pPktQueue);
int    HTCAddReceivePktMultiple(HTC_HANDLE HTCHandle, struct htc_packet_queue *pPktQueue);
bool      HTCIsEndpointActive(HTC_HANDLE      HTCHandle,
HTC_ENDPOINT_ID Endpoint);
int         HTCGetNumRecvBuffers(HTC_HANDLE      HTCHandle,
HTC_ENDPOINT_ID Endpoint);
void HTCEnableRecv(HTC_HANDLE HTCHandle);
void HTCDisableRecv(HTC_HANDLE HTCHandle);
int HTCWaitForPendingRecv(HTC_HANDLE   HTCHandle,
u32 TimeoutInMs,
bool      *pbIsRecvPending);
