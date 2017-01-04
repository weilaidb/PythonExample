static bool wl1251_tx_double_buffer_busy(struct wl1251 *wl, u32 data_out_count)
static int wl1251_tx_path_status(struct wl1251 *wl)
static int wl1251_tx_id(struct wl1251 *wl, struct sk_buff *skb)
static void wl1251_tx_control(struct tx_double_buffer_desc *tx_hdr,
struct ieee80211_tx_info *control, u16 fc)
#define MAX_MSDU_SECURITY_LENGTH      16
#define MAX_MPDU_SECURITY_LENGTH      16
#define WLAN_QOS_HDR_LEN              26
#define MAX_MPDU_HEADER_AND_SECURITY  (MAX_MPDU_SECURITY_LENGTH + \
WLAN_QOS_HDR_LEN)
#define HW_BLOCK_SIZE                 252
static void wl1251_tx_frag_block_num(struct tx_double_buffer_desc *tx_hdr)
static int wl1251_tx_fill_hdr(struct wl1251 *wl, struct sk_buff *skb,
struct ieee80211_tx_info *control)
static int wl1251_tx_send_packet(struct wl1251 *wl, struct sk_buff *skb,
struct ieee80211_tx_info *control)
static void wl1251_tx_trigger(struct wl1251 *wl)
static int wl1251_tx_frame(struct wl1251 *wl, struct sk_buff *skb)
void wl1251_tx_work(struct work_struct *work)
static const char *wl1251_tx_parse_status(u8 status)
static void wl1251_tx_packet_cb(struct wl1251 *wl,
struct tx_result *result)
void wl1251_tx_complete(struct wl1251 *wl)
void wl1251_tx_flush(struct wl1251 *wl)
