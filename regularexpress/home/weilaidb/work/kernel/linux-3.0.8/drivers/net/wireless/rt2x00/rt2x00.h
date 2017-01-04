#define RT2X00_H
#define DRV_VERSION	"2.3.0"
#define DRV_PROJECT	"http:
#define DEBUG_PRINTK_MSG(__dev, __kernlvl, __lvl, __msg, __args...)	\
printk(__kernlvl "%s -> %s: %s - " __msg,			\
wiphy_name((__dev)->hw->wiphy), __func__, __lvl, ##__args)
#define DEBUG_PRINTK_PROBE(__kernlvl, __lvl, __msg, __args...)	\
printk(__kernlvl "%s -> %s: %s - " __msg,		\
KBUILD_MODNAME, __func__, __lvl, ##__args)
#define DEBUG_PRINTK(__dev, __kernlvl, __lvl, __msg, __args...)	\
DEBUG_PRINTK_MSG(__dev, __kernlvl, __lvl, __msg, ##__args)
#define DEBUG_PRINTK(__dev, __kernlvl, __lvl, __msg, __args...)	\
do  while (0)
#define PANIC(__dev, __msg, __args...) \
DEBUG_PRINTK_MSG(__dev, KERN_CRIT, "Panic", __msg, ##__args)
#define ERROR(__dev, __msg, __args...)	\
DEBUG_PRINTK_MSG(__dev, KERN_ERR, "Error", __msg, ##__args)
#define ERROR_PROBE(__msg, __args...) \
DEBUG_PRINTK_PROBE(KERN_ERR, "Error", __msg, ##__args)
#define WARNING(__dev, __msg, __args...) \
DEBUG_PRINTK(__dev, KERN_WARNING, "Warning", __msg, ##__args)
#define NOTICE(__dev, __msg, __args...) \
DEBUG_PRINTK(__dev, KERN_NOTICE, "Notice", __msg, ##__args)
#define INFO(__dev, __msg, __args...) \
DEBUG_PRINTK(__dev, KERN_INFO, "Info", __msg, ##__args)
#define DEBUG(__dev, __msg, __args...) \
DEBUG_PRINTK(__dev, KERN_DEBUG, "Debug", __msg, ##__args)
#define EEPROM(__dev, __msg, __args...) \
DEBUG_PRINTK(__dev, KERN_DEBUG, "EEPROM recovery", __msg, ##__args)
#define GET_DURATION(__size, __rate)	(((__size) * 8 * 10) / (__rate))
#define GET_DURATION_RES(__size, __rate)(((__size) * 8 * 10) % (__rate))
#define L2PAD_SIZE(__hdrlen)	(-(__hdrlen) & 3)
#define ALIGN_SIZE(__skb, __header) \
(  ((unsigned long)((__skb)->data + (__header))) & 3 )
#define RT2X00_ALIGN_SIZE	4
#define RT2X00_L2PAD_SIZE	8
#define ACK_SIZE		14
#define IEEE80211_HEADER	24
#define PLCP			48
#define BEACON			100
#define PREAMBLE		144
#define SHORT_PREAMBLE		72
#define SLOT_TIME		20
#define SHORT_SLOT_TIME		9
#define SIFS			10
#define PIFS			( SIFS + SLOT_TIME )
#define SHORT_PIFS		( SIFS + SHORT_SLOT_TIME )
#define DIFS			( PIFS + SLOT_TIME )
#define SHORT_DIFS		( SHORT_PIFS + SHORT_SLOT_TIME )
#define EIFS			( SIFS + DIFS + \
GET_DURATION(IEEE80211_HEADER + ACK_SIZE, 10) )
#define SHORT_EIFS		( SIFS + SHORT_DIFS + \
GET_DURATION(IEEE80211_HEADER + ACK_SIZE, 10) )
struct avg_val ;
enum rt2x00_chip_intf ;
struct rt2x00_chip ;
struct rf_channel ;
struct channel_info ;
struct antenna_setup ;
struct link_qual ;
struct link_ant ;
struct link ;
enum rt2x00_delayed_flags ;
struct rt2x00_intf ;
static inline struct rt2x00_intf* vif_to_intf(struct ieee80211_vif *vif)
struct hw_mode_spec ;
struct rt2x00lib_conf ;
struct rt2x00lib_erp ;
struct rt2x00lib_crypto ;
struct rt2x00intf_conf ;
struct rt2x00lib_ops ;
struct rt2x00_ops ;
enum rt2x00_state_flags ;
enum rt2x00_capability_flags ;
struct rt2x00_dev ;
#define REGISTER_BUSY_COUNT	100
#define REGISTER_BUSY_DELAY	100
static inline void rt2x00_rf_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u32 *data)
static inline void rt2x00_rf_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u32 data)
static inline void *rt2x00_eeprom_addr(struct rt2x00_dev *rt2x00dev,
const unsigned int word)
static inline void rt2x00_eeprom_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u16 *data)
static inline void rt2x00_eeprom_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u16 data)
static inline void rt2x00_set_chip(struct rt2x00_dev *rt2x00dev,
const u16 rt, const u16 rf, const u16 rev)
static inline bool rt2x00_rt(struct rt2x00_dev *rt2x00dev, const u16 rt)
static inline bool rt2x00_rf(struct rt2x00_dev *rt2x00dev, const u16 rf)
static inline u16 rt2x00_rev(struct rt2x00_dev *rt2x00dev)
static inline bool rt2x00_rt_rev(struct rt2x00_dev *rt2x00dev,
const u16 rt, const u16 rev)
static inline bool rt2x00_rt_rev_lt(struct rt2x00_dev *rt2x00dev,
const u16 rt, const u16 rev)
static inline bool rt2x00_rt_rev_gte(struct rt2x00_dev *rt2x00dev,
const u16 rt, const u16 rev)
static inline void rt2x00_set_chip_intf(struct rt2x00_dev *rt2x00dev,
enum rt2x00_chip_intf intf)
static inline bool rt2x00_intf(struct rt2x00_dev *rt2x00dev,
enum rt2x00_chip_intf intf)
static inline bool rt2x00_is_pci(struct rt2x00_dev *rt2x00dev)
static inline bool rt2x00_is_pcie(struct rt2x00_dev *rt2x00dev)
static inline bool rt2x00_is_usb(struct rt2x00_dev *rt2x00dev)
static inline bool rt2x00_is_soc(struct rt2x00_dev *rt2x00dev)
void rt2x00queue_map_txskb(struct queue_entry *entry);
void rt2x00queue_unmap_skb(struct queue_entry *entry);
static inline struct data_queue *
rt2x00queue_get_tx_queue(struct rt2x00_dev *rt2x00dev,
const enum data_queue_qid queue)
struct queue_entry *rt2x00queue_get_entry(struct data_queue *queue,
enum queue_index index);
void rt2x00queue_pause_queue(struct data_queue *queue);
void rt2x00queue_unpause_queue(struct data_queue *queue);
void rt2x00queue_start_queue(struct data_queue *queue);
void rt2x00queue_stop_queue(struct data_queue *queue);
void rt2x00queue_flush_queue(struct data_queue *queue, bool drop);
void rt2x00queue_start_queues(struct rt2x00_dev *rt2x00dev);
void rt2x00queue_stop_queues(struct rt2x00_dev *rt2x00dev);
void rt2x00queue_flush_queues(struct rt2x00_dev *rt2x00dev, bool drop);
void rt2x00debug_dump_frame(struct rt2x00_dev *rt2x00dev,
enum rt2x00_dump_type type, struct sk_buff *skb);
static inline void rt2x00debug_dump_frame(struct rt2x00_dev *rt2x00dev,
enum rt2x00_dump_type type,
struct sk_buff *skb)
void rt2x00lib_beacondone(struct rt2x00_dev *rt2x00dev);
void rt2x00lib_pretbtt(struct rt2x00_dev *rt2x00dev);
void rt2x00lib_dmastart(struct queue_entry *entry);
void rt2x00lib_dmadone(struct queue_entry *entry);
void rt2x00lib_txdone(struct queue_entry *entry,
struct txdone_entry_desc *txdesc);
void rt2x00lib_txdone_noinfo(struct queue_entry *entry, u32 status);
void rt2x00lib_rxdone(struct queue_entry *entry);
void rt2x00mac_tx(struct ieee80211_hw *hw, struct sk_buff *skb);
int rt2x00mac_start(struct ieee80211_hw *hw);
void rt2x00mac_stop(struct ieee80211_hw *hw);
int rt2x00mac_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
void rt2x00mac_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif);
int rt2x00mac_config(struct ieee80211_hw *hw, u32 changed);
void rt2x00mac_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast);
int rt2x00mac_set_tim(struct ieee80211_hw *hw, struct ieee80211_sta *sta,
bool set);
int rt2x00mac_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key);
#define rt2x00mac_set_key	NULL
void rt2x00mac_sw_scan_start(struct ieee80211_hw *hw);
void rt2x00mac_sw_scan_complete(struct ieee80211_hw *hw);
int rt2x00mac_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats);
void rt2x00mac_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes);
int rt2x00mac_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params);
void rt2x00mac_rfkill_poll(struct ieee80211_hw *hw);
void rt2x00mac_flush(struct ieee80211_hw *hw, bool drop);
int rt2x00mac_set_antenna(struct ieee80211_hw *hw, u32 tx_ant, u32 rx_ant);
int rt2x00mac_get_antenna(struct ieee80211_hw *hw, u32 *tx_ant, u32 *rx_ant);
void rt2x00mac_get_ringparam(struct ieee80211_hw *hw,
u32 *tx, u32 *tx_max, u32 *rx, u32 *rx_max);
int rt2x00lib_probe_dev(struct rt2x00_dev *rt2x00dev);
void rt2x00lib_remove_dev(struct rt2x00_dev *rt2x00dev);
int rt2x00lib_suspend(struct rt2x00_dev *rt2x00dev, pm_message_t state);
int rt2x00lib_resume(struct rt2x00_dev *rt2x00dev);
