static void carl9170_dbg_message(struct ar9170 *ar, const char *buf, u32 len)
static void carl9170_handle_ps(struct ar9170 *ar, struct carl9170_rsp *rsp)
static int carl9170_check_sequence(struct ar9170 *ar, unsigned int seq)
static void carl9170_cmd_callback(struct ar9170 *ar, u32 len, void *buffer)
void carl9170_handle_command_response(struct ar9170 *ar, void *buf, u32 len)
static int carl9170_rx_mac_status(struct ar9170 *ar,
struct ar9170_rx_head *head, struct ar9170_rx_macstatus *mac,
struct ieee80211_rx_status *status)
static void carl9170_rx_phy_status(struct ar9170 *ar,
struct ar9170_rx_phystatus *phy, struct ieee80211_rx_status *status)
static struct sk_buff *carl9170_rx_copy_data(u8 *buf, int len)
static u8 *carl9170_find_ie(u8 *data, unsigned int len, u8 ie)
static void carl9170_ps_beacon(struct ar9170 *ar, void *data, unsigned int len)
static bool carl9170_ampdu_check(struct ar9170 *ar, u8 *buf, u8 ms)
static void carl9170_handle_mpdu(struct ar9170 *ar, u8 *buf, int len)
static void carl9170_rx_untie_cmds(struct ar9170 *ar, const u8 *respbuf,
const unsigned int resplen)
static void __carl9170_rx(struct ar9170 *ar, u8 *buf, unsigned int len)
static void carl9170_rx_stream(struct ar9170 *ar, void *buf, unsigned int len)
void carl9170_rx(struct ar9170 *ar, void *buf, unsigned int len)
