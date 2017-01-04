#define CAPINFO_MASK    (~(BIT(15) | BIT(14) | BIT(12) | BIT(11) | BIT(9)))
static int
mwifiex_cmd_append_generic_ie(struct mwifiex_private *priv, u8 **buffer)
static int
mwifiex_cmd_append_tsf_tlv(struct mwifiex_private *priv, u8 **buffer,
struct mwifiex_bssdescriptor *bss_desc)
static int mwifiex_get_common_rates(struct mwifiex_private *priv, u8 *rate1,
u32 rate1_size, u8 *rate2, u32 rate2_size)
static int
mwifiex_setup_rates_from_bssdesc(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc,
u8 *out_rates, u32 *out_rates_size)
static void
mwifiex_update_tsf_timestamps(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *new_bss_desc)
static int
mwifiex_cmd_append_wapi_ie(struct mwifiex_private *priv, u8 **buffer)
static int mwifiex_append_rsn_ie_wpa_wpa2(struct mwifiex_private *priv,
u8 **buffer)
int mwifiex_cmd_802_11_associate(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
void *data_buf)
int mwifiex_ret_802_11_associate(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
int
mwifiex_cmd_802_11_ad_hoc_start(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd, void *data_buf)
int
mwifiex_cmd_802_11_ad_hoc_join(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd, void *data_buf)
int mwifiex_ret_802_11_ad_hoc(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
int mwifiex_associate(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
int
mwifiex_adhoc_start(struct mwifiex_private *priv,
struct mwifiex_802_11_ssid *adhoc_ssid)
int mwifiex_adhoc_join(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
static int mwifiex_deauthenticate_infra(struct mwifiex_private *priv, u8 *mac)
int mwifiex_deauthenticate(struct mwifiex_private *priv, u8 *mac)
EXPORT_SYMBOL_GPL(mwifiex_deauthenticate);
u8
mwifiex_band_to_radio_type(u8 band)
