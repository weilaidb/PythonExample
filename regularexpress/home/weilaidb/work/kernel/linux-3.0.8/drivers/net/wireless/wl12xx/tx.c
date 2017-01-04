static int wl1271_set_default_wep_key(struct wl1271 *wl, u8 id)
static int wl1271_alloc_tx_id(struct wl1271 *wl, struct sk_buff *skb)
static void wl1271_free_tx_id(struct wl1271 *wl, int id)
static int wl1271_tx_update_filters(struct wl1271 *wl,
struct sk_buff *skb)
static void wl1271_tx_ap_update_inconnection_sta(struct wl1271 *wl,
struct sk_buff *skb)
static void wl1271_tx_regulate_link(struct wl1271 *wl, u8 hlid)
u8 wl1271_tx_get_hlid(struct sk_buff *skb)
static unsigned int wl12xx_calc_packet_alignment(struct wl1271 *wl,
unsigned int packet_length)
static int wl1271_tx_allocate(struct wl1271 *wl, struct sk_buff *skb, u32 extra,
u32 buf_offset, u8 hlid)
static bool wl12xx_is_dummy_packet(struct wl1271 *wl, struct sk_buff *skb)
static void wl1271_tx_fill_hdr(struct wl1271 *wl, struct sk_buff *skb,
u32 extra, struct ieee80211_tx_info *control,
u8 hlid)
static int wl1271_prepare_tx_frame(struct wl1271 *wl, struct sk_buff *skb,
u32 buf_offset)
u32 wl1271_tx_enabled_rates_get(struct wl1271 *wl, u32 rate_set)
void wl1271_handle_tx_low_watermark(struct wl1271 *wl)
static struct sk_buff *wl1271_sta_skb_dequeue(struct wl1271 *wl)
static struct sk_buff *wl1271_ap_skb_dequeue(struct wl1271 *wl)
static struct sk_buff *wl1271_skb_dequeue(struct wl1271 *wl)
static void wl1271_skb_queue_head(struct wl1271 *wl, struct sk_buff *skb)
void wl1271_tx_work_locked(struct wl1271 *wl)
void wl1271_tx_work(struct work_struct *work)
static void wl1271_tx_complete_packet(struct wl1271 *wl,
struct wl1271_tx_hw_res_descr *result)
void wl1271_tx_complete(struct wl1271 *wl)
void wl1271_tx_reset_link_queues(struct wl1271 *wl, u8 hlid)
void wl1271_tx_reset(struct wl1271 *wl, bool reset_tx_queues)
#define WL1271_TX_FLUSH_TIMEOUT 500000
void wl1271_tx_flush(struct wl1271 *wl)
u32 wl1271_tx_min_rate_get(struct wl1271 *wl)
