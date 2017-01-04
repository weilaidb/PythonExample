static const struct b43_tx_legacy_rate_phy_ctl_entry b43_tx_legacy_rate_phy_ctl[] = ;
static const struct b43_tx_legacy_rate_phy_ctl_entry *
b43_tx_legacy_rate_phy_ctl_ent(u8 bitrate)
static int b43_plcp_get_bitrate_idx_cck(struct b43_plcp_hdr6 *plcp)
static int b43_plcp_get_bitrate_idx_ofdm(struct b43_plcp_hdr6 *plcp, bool aphy)
u8 b43_plcp_get_ratecode_cck(const u8 bitrate)
u8 b43_plcp_get_ratecode_ofdm(const u8 bitrate)
void b43_generate_plcp_hdr(struct b43_plcp_hdr4 *plcp,
const u16 octets, const u8 bitrate)
static u16 b43_generate_tx_phy_ctl1(struct b43_wldev *dev, u8 bitrate)
static u8 b43_calc_fallback_rate(u8 bitrate)
int b43_generate_txhdr(struct b43_wldev *dev,
u8 *_txhdr,
struct sk_buff *skb_frag,
struct ieee80211_tx_info *info,
u16 cookie)
static s8 b43_rssi_postprocess(struct b43_wldev *dev,
u8 in_rssi, int ofdm,
int adjust_2053, int adjust_2050)
void b43_rx(struct b43_wldev *dev, struct sk_buff *skb, const void *_rxhdr)
void b43_handle_txstatus(struct b43_wldev *dev,
const struct b43_txstatus *status)
bool b43_fill_txstatus_report(struct b43_wldev *dev,
struct ieee80211_tx_info *report,
const struct b43_txstatus *status)
void b43_tx_suspend(struct b43_wldev *dev)
void b43_tx_resume(struct b43_wldev *dev)
