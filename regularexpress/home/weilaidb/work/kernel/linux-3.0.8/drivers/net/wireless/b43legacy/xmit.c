static u8 b43legacy_plcp_get_bitrate_idx_cck(struct b43legacy_plcp_hdr6 *plcp)
static u8 b43legacy_plcp_get_bitrate_idx_ofdm(struct b43legacy_plcp_hdr6 *plcp,
bool aphy)
u8 b43legacy_plcp_get_ratecode_cck(const u8 bitrate)
u8 b43legacy_plcp_get_ratecode_ofdm(const u8 bitrate)
void b43legacy_generate_plcp_hdr(struct b43legacy_plcp_hdr4 *plcp,
const u16 octets, const u8 bitrate)
static u8 b43legacy_calc_fallback_rate(u8 bitrate)
static int generate_txhdr_fw3(struct b43legacy_wldev *dev,
struct b43legacy_txhdr_fw3 *txhdr,
const unsigned char *fragment_data,
unsigned int fragment_len,
struct ieee80211_tx_info *info,
u16 cookie)
int b43legacy_generate_txhdr(struct b43legacy_wldev *dev,
u8 *txhdr,
const unsigned char *fragment_data,
unsigned int fragment_len,
struct ieee80211_tx_info *info,
u16 cookie)
static s8 b43legacy_rssi_postprocess(struct b43legacy_wldev *dev,
u8 in_rssi, int ofdm,
int adjust_2053, int adjust_2050)
void b43legacy_rx(struct b43legacy_wldev *dev,
struct sk_buff *skb,
const void *_rxhdr)
void b43legacy_handle_txstatus(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status)
void b43legacy_handle_hwtxstatus(struct b43legacy_wldev *dev,
const struct b43legacy_hwtxstatus *hw)
void b43legacy_tx_suspend(struct b43legacy_wldev *dev)
void b43legacy_tx_resume(struct b43legacy_wldev *dev)
void b43legacy_qos_init(struct b43legacy_wldev *dev)
