#define SYMBOL_MAX_VER_LEN	(14)
#define TX_NICBUF_SIZE_BUG	1585
static const struct  bitrate_table[] = ;
#define BITRATE_TABLE_SIZE ARRAY_SIZE(bitrate_table)
struct comp_id  __packed;
static inline fwtype_t determine_firmware_type(struct comp_id *nic_id)
int determine_fw_capabilities(struct orinoco_private *priv,
char *fw_name, size_t fw_name_len,
u32 *hw_ver)
int orinoco_hw_read_card_settings(struct orinoco_private *priv, u8 *dev_addr)
int orinoco_hw_allocate_fid(struct orinoco_private *priv)
int orinoco_get_bitratemode(int bitrate, int automatic)
void orinoco_get_ratemode_cfg(int ratemode, int *bitrate, int *automatic)
int orinoco_hw_program_rids(struct orinoco_private *priv)
int orinoco_hw_get_tkip_iv(struct orinoco_private *priv, int key, u8 *tsc)
int __orinoco_hw_set_bitrate(struct orinoco_private *priv)
int orinoco_hw_get_act_bitrate(struct orinoco_private *priv, int *bitrate)
int __orinoco_hw_set_wap(struct orinoco_private *priv)
int __orinoco_hw_setup_wepkeys(struct orinoco_private *priv)
int __orinoco_hw_setup_enc(struct orinoco_private *priv)
int __orinoco_hw_set_tkip_key(struct orinoco_private *priv, int key_idx,
int set_tx, u8 *key, u8 *rsc, size_t rsc_len,
u8 *tsc, size_t tsc_len)
int orinoco_clear_tkip_key(struct orinoco_private *priv, int key_idx)
int __orinoco_hw_set_multicast_list(struct orinoco_private *priv,
struct net_device *dev,
int mc_count, int promisc)
int orinoco_hw_get_essid(struct orinoco_private *priv, int *active,
char buf[IW_ESSID_MAX_SIZE+1])
int orinoco_hw_get_freq(struct orinoco_private *priv)
int orinoco_hw_get_bitratelist(struct orinoco_private *priv,
int *numrates, s32 *rates, int max)
int orinoco_hw_trigger_scan(struct orinoco_private *priv,
const struct cfg80211_ssid *ssid)
int orinoco_hw_disassociate(struct orinoco_private *priv,
u8 *addr, u16 reason_code)
int orinoco_hw_get_current_bssid(struct orinoco_private *priv,
u8 *addr)
