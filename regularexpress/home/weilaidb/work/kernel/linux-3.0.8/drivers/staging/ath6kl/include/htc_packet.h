#define HTC_PACKET_H_
typedef enum
HTC_ENDPOINT_ID;
struct htc_packet;
typedef void (* HTC_PACKET_COMPLETION)(void *,struct htc_packet *);
typedef u16 HTC_TX_TAG;
struct htc_tx_packet_info ;
#define HTC_TX_PACKET_TAG_ALL          0
#define HTC_TX_PACKET_TAG_INTERNAL     1
#define HTC_TX_PACKET_TAG_USER_DEFINED (HTC_TX_PACKET_TAG_INTERNAL + 9)
struct htc_rx_packet_info ;
#define HTC_RX_FLAGS_INDICATE_MORE_PKTS  (1 << 0)
struct htc_packet ;
#define COMPLETE_HTC_PACKET(p,status)        \
#define INIT_HTC_PACKET_INFO(p,b,len)             \
#define SET_HTC_PACKET_INFO_RX_REFILL(p,c,b,len,ep) \
#define HTC_PACKET_RESET_RX(p)              \
#define SET_HTC_PACKET_INFO_TX(p,c,b,len,ep,tag)  \
struct htc_packet_queue ;
#define INIT_HTC_PACKET_QUEUE(pQ)   \
#define HTC_PACKET_ENQUEUE(pQ,p)                        \
#define HTC_PACKET_ENQUEUE_TO_HEAD(pQ,p)                \
#define HTC_QUEUE_EMPTY(pQ)       ((pQ)->Depth == 0)
static INLINE struct htc_packet *HTC_GET_PKT_AT_HEAD(struct htc_packet_queue *queue)
#define HTC_PACKET_REMOVE(pQ,p)     \
static INLINE struct htc_packet *HTC_PACKET_DEQUEUE(struct htc_packet_queue *queue)
static INLINE struct htc_packet *HTC_PACKET_DEQUEUE_TAIL(struct htc_packet_queue *queue)
#define HTC_PACKET_QUEUE_DEPTH(pQ) (pQ)->Depth
#define HTC_GET_ENDPOINT_FROM_PKT(p) (p)->Endpoint
#define HTC_GET_TAG_FROM_PKT(p)      (p)->PktInfo.AsTx.Tag
#define HTC_PACKET_QUEUE_TRANSFER_TO_TAIL(pQDest,pQSrc) \
#define INIT_HTC_PACKET_QUEUE_AND_ADD(pQ,pP) \
#define HTC_PACKET_QUEUE_ITERATE_ALLOW_REMOVE(pQ, pPTemp) \
ITERATE_OVER_LIST_ALLOW_REMOVE(&(pQ)->QueueHead,(pPTemp), struct htc_packet, ListLink)
#define HTC_PACKET_QUEUE_ITERATE_END ITERATE_END
