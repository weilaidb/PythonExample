int rt2x00lib_enable_radio(struct rt2x00_dev *rt2x00dev)
void rt2x00lib_disable_radio(struct rt2x00_dev *rt2x00dev)
static void rt2x00lib_intf_scheduled_iter(void *data, u8 *mac,
struct ieee80211_vif *vif)
static void rt2x00lib_intf_scheduled(struct work_struct *work)
static void rt2x00lib_autowakeup(struct work_struct *work)
static void rt2x00lib_bc_buffer_iter(void *data, u8 *mac,
struct ieee80211_vif *vif)
static void rt2x00lib_beaconupdate_iter(void *data, u8 *mac,
struct ieee80211_vif *vif)
void rt2x00lib_beacondone(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00lib_beacondone);
void rt2x00lib_pretbtt(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00lib_pretbtt);
void rt2x00lib_dmastart(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2x00lib_dmastart);
void rt2x00lib_dmadone(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2x00lib_dmadone);
void rt2x00lib_txdone(struct queue_entry *entry,
struct txdone_entry_desc *txdesc)
EXPORT_SYMBOL_GPL(rt2x00lib_txdone);
void rt2x00lib_txdone_noinfo(struct queue_entry *entry, u32 status)
EXPORT_SYMBOL_GPL(rt2x00lib_txdone_noinfo);
static u8 *rt2x00lib_find_ie(u8 *data, unsigned int len, u8 ie)
static void rt2x00lib_rxdone_check_ps(struct rt2x00_dev *rt2x00dev,
struct sk_buff *skb,
struct rxdone_entry_desc *rxdesc)
static int rt2x00lib_rxdone_read_signal(struct rt2x00_dev *rt2x00dev,
struct rxdone_entry_desc *rxdesc)
void rt2x00lib_rxdone(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2x00lib_rxdone);
const struct rt2x00_rate rt2x00_supported_rates[12] = ;
static void rt2x00lib_channel(struct ieee80211_channel *entry,
const int channel, const int tx_power,
const int value)
static void rt2x00lib_rate(struct ieee80211_rate *entry,
const u16 index, const struct rt2x00_rate *rate)
static int rt2x00lib_probe_hw_modes(struct rt2x00_dev *rt2x00dev,
struct hw_mode_spec *spec)
static void rt2x00lib_remove_hw(struct rt2x00_dev *rt2x00dev)
static int rt2x00lib_probe_hw(struct rt2x00_dev *rt2x00dev)
static void rt2x00lib_uninitialize(struct rt2x00_dev *rt2x00dev)
static int rt2x00lib_initialize(struct rt2x00_dev *rt2x00dev)
int rt2x00lib_start(struct rt2x00_dev *rt2x00dev)
void rt2x00lib_stop(struct rt2x00_dev *rt2x00dev)
int rt2x00lib_probe_dev(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00lib_probe_dev);
void rt2x00lib_remove_dev(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00lib_remove_dev);
int rt2x00lib_suspend(struct rt2x00_dev *rt2x00dev, pm_message_t state)
EXPORT_SYMBOL_GPL(rt2x00lib_suspend);
int rt2x00lib_resume(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00lib_resume);
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("rt2x00 library");
MODULE_LICENSE("GPL");
