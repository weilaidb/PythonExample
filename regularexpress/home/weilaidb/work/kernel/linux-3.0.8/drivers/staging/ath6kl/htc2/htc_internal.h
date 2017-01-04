#define _HTC_INTERNAL_H_
#define HTC_TARGET_RESPONSE_TIMEOUT        2000
#define HTC_TARGET_DEBUG_INTR_MASK         0x01
#define HTC_TARGET_CREDIT_INTR_MASK        0xF0
#define HTC_HOST_MAX_MSG_PER_BUNDLE        8
#define HTC_MIN_HTC_MSGS_TO_BUNDLE         2
#define HTC_RX_PKT_IGNORE_LOOKAHEAD      (1 << 0)
#define HTC_RX_PKT_REFRESH_HDR           (1 << 1)
#define HTC_RX_PKT_PART_OF_BUNDLE        (1 << 2)
#define HTC_RX_PKT_NO_RECYCLE            (1 << 3)
#define HTC_SCATTER_REQ_FLAGS_PARTIAL_BUNDLE  (1 << 0)
struct htc_endpoint ;
#define INC_HTC_EP_STAT(p,stat,count) (p)->EndPointStats.stat += (count);
#define HTC_SERVICE_TX_PACKET_TAG  HTC_TX_PACKET_TAG_INTERNAL
#define NUM_CONTROL_BUFFERS     8
#define NUM_CONTROL_TX_BUFFERS  2
#define NUM_CONTROL_RX_BUFFERS  (NUM_CONTROL_BUFFERS - NUM_CONTROL_TX_BUFFERS)
struct htc_control_buffer ;
#define HTC_RECV_WAIT_BUFFERS        (1 << 0)
#define HTC_OP_STATE_STOPPING        (1 << 0)
struct htc_target ;
#define HTC_STOPPING(t) ((t)->OpStateFlags & HTC_OP_STATE_STOPPING)
#define LOCK_HTC(t)      A_MUTEX_LOCK(&(t)->HTCLock);
#define UNLOCK_HTC(t)    A_MUTEX_UNLOCK(&(t)->HTCLock);
#define LOCK_HTC_RX(t)   A_MUTEX_LOCK(&(t)->HTCRxLock);
#define UNLOCK_HTC_RX(t) A_MUTEX_UNLOCK(&(t)->HTCRxLock);
#define LOCK_HTC_TX(t)   A_MUTEX_LOCK(&(t)->HTCTxLock);
#define UNLOCK_HTC_TX(t) A_MUTEX_UNLOCK(&(t)->HTCTxLock);
#define GET_HTC_TARGET_FROM_HANDLE(hnd) ((struct htc_target *)(hnd))
#define HTC_RECYCLE_RX_PKT(target,p,e)                           \
void        HTCControlTxComplete(void *Context, struct htc_packet *pPacket);
void        HTCControlRecv(void *Context, struct htc_packet *pPacket);
int    HTCWaitforControlMessage(struct htc_target *target, struct htc_packet **ppControlPacket);
struct htc_packet *HTCAllocControlBuffer(struct htc_target *target, struct htc_packet_queue *pList);
void        HTCFreeControlBuffer(struct htc_target *target, struct htc_packet *pPacket, struct htc_packet_queue *pList);
int    HTCIssueSend(struct htc_target *target, struct htc_packet *pPacket);
void        HTCRecvCompleteHandler(void *Context, struct htc_packet *pPacket);
int    HTCRecvMessagePendingHandler(void *Context, u32 MsgLookAheads[], int NumLookAheads, bool *pAsyncProc, int *pNumPktsFetched);
void        HTCProcessCreditRpt(struct htc_target *target, HTC_CREDIT_REPORT *pRpt, int NumEntries, HTC_ENDPOINT_ID FromEndpoint);
int    HTCSendSetupComplete(struct htc_target *target);
void        HTCFlushRecvBuffers(struct htc_target *target);
void        HTCFlushSendPkts(struct htc_target *target);
void        DumpCreditDist(struct htc_endpoint_credit_dist *pEPDist);
void        DumpCreditDistStates(struct htc_target *target);
void 		DebugDumpBytes(u8 *buffer, u16 length, char *pDescription);
static INLINE struct htc_packet *HTC_ALLOC_CONTROL_TX(struct htc_target *target)
#define HTC_FREE_CONTROL_TX(t,p) HTCFreeControlBuffer((t),(p),&(t)->ControlBufferTXFreeList)
#define HTC_ALLOC_CONTROL_RX(t)  HTCAllocControlBuffer((t),&(t)->ControlBufferRXFreeList)
#define HTC_FREE_CONTROL_RX(t,p) \
#define HTC_PREPARE_SEND_PKT(pP,sendflags,ctrl0,ctrl1)       \
#define HTC_UNPREPARE_SEND_PKT(pP)     \
(pP)->pBuffer += HTC_HDR_LENGTH;   \
