struct sk_buff *rt2x00queue_alloc_rxskb(struct queue_entry *entry)
void rt2x00queue_map_txskb(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2x00queue_map_txskb);
void rt2x00queue_unmap_skb(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2x00queue_unmap_skb);
void rt2x00queue_free_skb(struct queue_entry *entry)
void rt2x00queue_align_frame(struct sk_buff *skb)
void rt2x00queue_insert_l2pad(struct sk_buff *skb, unsigned int header_length)
void rt2x00queue_remove_l2pad(struct sk_buff *skb, unsigned int header_length)
static void rt2x00queue_create_tx_descriptor_seq(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2x00queue_create_tx_descriptor_plcp(struct queue_entry *entry,
struct txentry_desc *txdesc,
const struct rt2x00_rate *hwrate)
static void rt2x00queue_create_tx_descriptor_ht(struct queue_entry *entry,
struct txentry_desc *txdesc,
const struct rt2x00_rate *hwrate)
static void rt2x00queue_create_tx_descriptor(struct queue_entry *entry,
struct txentry_desc *txdesc)
static int rt2x00queue_write_tx_data(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2x00queue_write_tx_descriptor(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2x00queue_kick_tx_queue(struct data_queue *queue,
struct txentry_desc *txdesc)
int rt2x00queue_write_tx_frame(struct data_queue *queue, struct sk_buff *skb,
bool local)
int rt2x00queue_clear_beacon(struct rt2x00_dev *rt2x00dev,
struct ieee80211_vif *vif)
int rt2x00queue_update_beacon_locked(struct rt2x00_dev *rt2x00dev,
struct ieee80211_vif *vif)
int rt2x00queue_update_beacon(struct rt2x00_dev *rt2x00dev,
struct ieee80211_vif *vif)
bool rt2x00queue_for_each_entry(struct data_queue *queue,
enum queue_index start,
enum queue_index end,
void *data,
bool (*fn)(struct queue_entry *entry,
void *data))
EXPORT_SYMBOL_GPL(rt2x00queue_for_each_entry);
struct queue_entry *rt2x00queue_get_entry(struct data_queue *queue,
enum queue_index index)
EXPORT_SYMBOL_GPL(rt2x00queue_get_entry);
void rt2x00queue_index_inc(struct queue_entry *entry, enum queue_index index)
void rt2x00queue_pause_queue(struct data_queue *queue)
EXPORT_SYMBOL_GPL(rt2x00queue_pause_queue);
void rt2x00queue_unpause_queue(struct data_queue *queue)
EXPORT_SYMBOL_GPL(rt2x00queue_unpause_queue);
void rt2x00queue_start_queue(struct data_queue *queue)
EXPORT_SYMBOL_GPL(rt2x00queue_start_queue);
void rt2x00queue_stop_queue(struct data_queue *queue)
EXPORT_SYMBOL_GPL(rt2x00queue_stop_queue);
void rt2x00queue_flush_queue(struct data_queue *queue, bool drop)
EXPORT_SYMBOL_GPL(rt2x00queue_flush_queue);
void rt2x00queue_start_queues(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00queue_start_queues);
void rt2x00queue_stop_queues(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00queue_stop_queues);
void rt2x00queue_flush_queues(struct rt2x00_dev *rt2x00dev, bool drop)
EXPORT_SYMBOL_GPL(rt2x00queue_flush_queues);
static void rt2x00queue_reset(struct data_queue *queue)
void rt2x00queue_init_queues(struct rt2x00_dev *rt2x00dev)
static int rt2x00queue_alloc_entries(struct data_queue *queue,
const struct data_queue_desc *qdesc)
static void rt2x00queue_free_skbs(struct data_queue *queue)
static int rt2x00queue_alloc_rxskbs(struct data_queue *queue)
int rt2x00queue_initialize(struct rt2x00_dev *rt2x00dev)
void rt2x00queue_uninitialize(struct rt2x00_dev *rt2x00dev)
static void rt2x00queue_init(struct rt2x00_dev *rt2x00dev,
struct data_queue *queue, enum data_queue_qid qid)
int rt2x00queue_allocate(struct rt2x00_dev *rt2x00dev)
void rt2x00queue_free(struct rt2x00_dev *rt2x00dev)
