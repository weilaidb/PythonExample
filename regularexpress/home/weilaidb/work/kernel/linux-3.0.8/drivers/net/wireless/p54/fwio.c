int p54_parse_firmware(struct ieee80211_hw *dev, const struct firmware *fw)
EXPORT_SYMBOL_GPL(p54_parse_firmware);
static struct sk_buff *p54_alloc_skb(struct p54_common *priv, u16 hdr_flags,
u16 payload_len, u16 type, gfp_t memflags)
int p54_download_eeprom(struct p54_common *priv, void *buf,
u16 offset, u16 len)
int p54_update_beacon_tim(struct p54_common *priv, u16 aid, bool set)
int p54_sta_unlock(struct p54_common *priv, u8 *addr)
int p54_tx_cancel(struct p54_common *priv, __le32 req_id)
int p54_setup_mac(struct p54_common *priv)
int p54_scan(struct p54_common *priv, u16 mode, u16 dwell)
int p54_set_leds(struct p54_common *priv)
int p54_set_edcf(struct p54_common *priv)
int p54_set_ps(struct p54_common *priv)
int p54_init_xbow_synth(struct p54_common *priv)
int p54_upload_key(struct p54_common *priv, u8 algo, int slot, u8 idx, u8 len,
u8 *addr, u8* key)
int p54_fetch_statistics(struct p54_common *priv)
int p54_set_groupfilter(struct p54_common *priv)
