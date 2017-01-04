#define RT2X00QUEUE_H
#define DATA_FRAME_SIZE		2432
#define MGMT_FRAME_SIZE		256
#define AGGREGATION_SIZE	3840
enum data_queue_qid ;
enum skb_frame_desc_flags ;
struct skb_frame_desc ;
static inline struct skb_frame_desc* get_skb_frame_desc(struct sk_buff *skb)
enum rxdone_entry_desc_flags ;
#define RXDONE_SIGNAL_MASK \
( RXDONE_SIGNAL_PLCP | RXDONE_SIGNAL_BITRATE | RXDONE_SIGNAL_MCS )
struct rxdone_entry_desc ;
enum txdone_entry_desc_flags ;
struct txdone_entry_desc ;
enum txentry_desc_flags ;
struct txentry_desc ;
enum queue_entry_flags ;
struct queue_entry ;
enum queue_index ;
enum data_queue_flags ;
struct data_queue ;
struct data_queue_desc ;
#define queue_end(__dev) \
&(__dev)->rx[(__dev)->data_queues]
#define tx_queue_end(__dev) \
&(__dev)->tx[(__dev)->ops->tx_queues]
#define queue_next(__queue) \
&(__queue)[1]
#define queue_loop(__entry, __start, __end)			\
for ((__entry) = (__start);				\
prefetch(queue_next(__entry)), (__entry) != (__end);\
(__entry) = queue_next(__entry))
#define queue_for_each(__dev, __entry) \
queue_loop(__entry, (__dev)->rx, queue_end(__dev))
#define tx_queue_for_each(__dev, __entry) \
queue_loop(__entry, (__dev)->tx, tx_queue_end(__dev))
#define txall_queue_for_each(__dev, __entry) \
queue_loop(__entry, (__dev)->tx, queue_end(__dev))
bool rt2x00queue_for_each_entry(struct data_queue *queue,
enum queue_index start,
enum queue_index end,
void *data,
bool (*fn)(struct queue_entry *entry,
void *data));
static inline int rt2x00queue_empty(struct data_queue *queue)
static inline int rt2x00queue_full(struct data_queue *queue)
static inline int rt2x00queue_available(struct data_queue *queue)
static inline int rt2x00queue_threshold(struct data_queue *queue)
static inline int rt2x00queue_status_timeout(struct queue_entry *entry)
static inline int rt2x00queue_dma_timeout(struct queue_entry *entry)
static inline void _rt2x00_desc_read(__le32 *desc, const u8 word, __le32 *value)
static inline void rt2x00_desc_read(__le32 *desc, const u8 word, u32 *value)
static inline void _rt2x00_desc_write(__le32 *desc, const u8 word, __le32 value)
static inline void rt2x00_desc_write(__le32 *desc, const u8 word, u32 value)
