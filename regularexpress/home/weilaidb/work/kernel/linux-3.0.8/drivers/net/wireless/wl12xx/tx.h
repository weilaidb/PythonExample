#define __TX_H__
#define TX_HW_BLOCK_SIZE                 252
#define TX_HW_MGMT_PKT_LIFETIME_TU       2000
#define TX_HW_AP_MODE_PKT_LIFETIME_TU    8000
#define TX_HW_DEFAULT_AID                1
#define TX_HW_ATTR_SAVE_RETRIES          BIT(0)
#define TX_HW_ATTR_HEADER_PAD            BIT(1)
#define TX_HW_ATTR_SESSION_COUNTER       (BIT(2) | BIT(3) | BIT(4))
#define TX_HW_ATTR_RATE_POLICY           (BIT(5) | BIT(6) | BIT(7) | \
BIT(8) | BIT(9))
#define TX_HW_ATTR_LAST_WORD_PAD         (BIT(10) | BIT(11))
#define TX_HW_ATTR_TX_CMPLT_REQ          BIT(12)
#define TX_HW_ATTR_TX_DUMMY_REQ          BIT(13)
#define TX_HW_ATTR_OFST_SAVE_RETRIES     0
#define TX_HW_ATTR_OFST_HEADER_PAD       1
#define TX_HW_ATTR_OFST_SESSION_COUNTER  2
#define TX_HW_ATTR_OFST_RATE_POLICY      5
#define TX_HW_ATTR_OFST_LAST_WORD_PAD    10
#define TX_HW_ATTR_OFST_TX_CMPLT_REQ     12
#define TX_HW_RESULT_QUEUE_LEN           16
#define TX_HW_RESULT_QUEUE_LEN_MASK      0xf
#define WL1271_TX_ALIGN_TO 4
#define WL1271_TKIP_IV_SPACE 4
#define WL1271_TID_MGMT 7
struct wl127x_tx_mem  __packed;
struct wl128x_tx_mem  __packed;
#define WL12XX_BUS_BLOCK_SIZE min(512u,	\
(1u << (8 * sizeof(((struct wl128x_tx_mem *) 0)->extra_bytes))))
struct wl1271_tx_hw_descr  __packed;
enum wl1271_tx_hw_res_status ;
struct wl1271_tx_hw_res_descr  __packed;
struct wl1271_tx_hw_res_if  __packed;
static inline int wl1271_tx_get_queue(int queue)
void wl1271_tx_work(struct work_struct *work);
void wl1271_tx_work_locked(struct wl1271 *wl);
void wl1271_tx_complete(struct wl1271 *wl);
void wl1271_tx_reset(struct wl1271 *wl, bool reset_tx_queues);
void wl1271_tx_flush(struct wl1271 *wl);
u8 wl1271_rate_to_idx(int rate, enum ieee80211_band band);
u32 wl1271_tx_enabled_rates_get(struct wl1271 *wl, u32 rate_set);
u32 wl1271_tx_min_rate_get(struct wl1271 *wl);
u8 wl1271_tx_get_hlid(struct sk_buff *skb);
void wl1271_tx_reset_link_queues(struct wl1271 *wl, u8 hlid);
void wl1271_handle_tx_low_watermark(struct wl1271 *wl);
