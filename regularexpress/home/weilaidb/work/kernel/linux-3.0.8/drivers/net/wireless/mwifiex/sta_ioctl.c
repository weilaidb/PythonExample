int mwifiex_copy_mcast_addr(struct mwifiex_multicast_list *mlist,
struct net_device *dev)
int mwifiex_wait_queue_complete(struct mwifiex_adapter *adapter)
int mwifiex_request_set_multicast_list(struct mwifiex_private *priv,
struct mwifiex_multicast_list *mcast_list)
int mwifiex_bss_start(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *ssid_bssid)
int mwifiex_set_hs_params(struct mwifiex_private *priv, u16 action,
int cmd_type, struct mwifiex_ds_hs_cfg *hs_cfg)
int mwifiex_cancel_hs(struct mwifiex_private *priv, int cmd_type)
EXPORT_SYMBOL_GPL(mwifiex_cancel_hs);
int mwifiex_enable_hs(struct mwifiex_adapter *adapter)
EXPORT_SYMBOL_GPL(mwifiex_enable_hs);
int mwifiex_get_bss_info(struct mwifiex_private *priv,
struct mwifiex_bss_info *info)
int mwifiex_set_radio_band_cfg(struct mwifiex_private *priv,
struct mwifiex_ds_band_cfg *radio_cfg)
int mwifiex_bss_set_channel(struct mwifiex_private *priv,
struct mwifiex_chan_freq_power *chan)
static int mwifiex_bss_ioctl_ibss_channel(struct mwifiex_private *priv,
u16 action, u16 *channel)
int mwifiex_bss_ioctl_find_bss(struct mwifiex_private *priv,
struct mwifiex_ssid_bssid *ssid_bssid)
int
mwifiex_drv_change_adhoc_chan(struct mwifiex_private *priv, int channel)
static int mwifiex_rate_ioctl_get_rate_value(struct mwifiex_private *priv,
struct mwifiex_rate_cfg *rate_cfg)
static int mwifiex_rate_ioctl_set_rate_value(struct mwifiex_private *priv,
struct mwifiex_rate_cfg *rate_cfg)
static int mwifiex_rate_ioctl_cfg(struct mwifiex_private *priv,
struct mwifiex_rate_cfg *rate_cfg)
int mwifiex_drv_get_data_rate(struct mwifiex_private *priv,
struct mwifiex_rate_cfg *rate)
int mwifiex_set_tx_power(struct mwifiex_private *priv,
struct mwifiex_power_cfg *power_cfg)
int mwifiex_drv_set_power(struct mwifiex_private *priv, u32 *ps_mode)
static int mwifiex_set_wpa_ie_helper(struct mwifiex_private *priv,
u8 *ie_data_ptr, u16 ie_len)
static int mwifiex_set_wapi_ie(struct mwifiex_private *priv,
u8 *ie_data_ptr, u16 ie_len)
static int mwifiex_sec_ioctl_set_wapi_key(struct mwifiex_private *priv,
struct mwifiex_ds_encrypt_key *encrypt_key)
static int mwifiex_sec_ioctl_set_wep_key(struct mwifiex_private *priv,
struct mwifiex_ds_encrypt_key *encrypt_key)
static int mwifiex_sec_ioctl_set_wpa_key(struct mwifiex_private *priv,
struct mwifiex_ds_encrypt_key *encrypt_key)
static int
mwifiex_sec_ioctl_encrypt_key(struct mwifiex_private *priv,
struct mwifiex_ds_encrypt_key *encrypt_key)
int
mwifiex_drv_get_driver_version(struct mwifiex_adapter *adapter, char *version,
int max_len)
int mwifiex_get_signal_info(struct mwifiex_private *priv,
struct mwifiex_ds_get_signal *signal)
int mwifiex_set_encode(struct mwifiex_private *priv, const u8 *key,
int key_len, u8 key_index, int disable)
int
mwifiex_get_ver_ext(struct mwifiex_private *priv)
int
mwifiex_get_stats_info(struct mwifiex_private *priv,
struct mwifiex_ds_get_stats *log)
static int mwifiex_reg_mem_ioctl_reg_rw(struct mwifiex_private *priv,
struct mwifiex_ds_reg_rw *reg_rw,
u16 action)
int
mwifiex_reg_write(struct mwifiex_private *priv, u32 reg_type,
u32 reg_offset, u32 reg_value)
int
mwifiex_reg_read(struct mwifiex_private *priv, u32 reg_type,
u32 reg_offset, u32 *value)
int
mwifiex_eeprom_read(struct mwifiex_private *priv, u16 offset, u16 bytes,
u8 *value)
static int
mwifiex_set_gen_ie_helper(struct mwifiex_private *priv, u8 *ie_data_ptr,
u16 ie_len)
static int mwifiex_misc_ioctl_gen_ie(struct mwifiex_private *priv,
struct mwifiex_ds_misc_gen_ie *gen_ie,
u16 action)
int
mwifiex_set_gen_ie(struct mwifiex_private *priv, u8 *ie, int ie_len)
