#define IWL5000_UCODE_API_MAX 5
#define IWL5150_UCODE_API_MAX 2
#define IWL5000_UCODE_API_MIN 1
#define IWL5150_UCODE_API_MIN 1
#define IWL5000_FW_PRE "iwlwifi-5000-"
#define IWL5000_MODULE_FIRMWARE(api) IWL5000_FW_PRE __stringify(api) ".ucode"
#define IWL5150_FW_PRE "iwlwifi-5150-"
#define IWL5150_MODULE_FIRMWARE(api) IWL5150_FW_PRE __stringify(api) ".ucode"
static void iwl5000_nic_config(struct iwl_priv *priv)
static struct iwl_sensitivity_ranges iwl5000_sensitivity = ;
static struct iwl_sensitivity_ranges iwl5150_sensitivity = ;
static void iwl5150_set_ct_threshold(struct iwl_priv *priv)
static void iwl5000_set_ct_threshold(struct iwl_priv *priv)
static int iwl5000_hw_set_hw_params(struct iwl_priv *priv)
static int iwl5150_hw_set_hw_params(struct iwl_priv *priv)
static void iwl5150_temperature(struct iwl_priv *priv)
static int iwl5000_hw_channel_switch(struct iwl_priv *priv,
struct ieee80211_channel_switch *ch_switch)
static struct iwl_lib_ops iwl5000_lib = ;
static struct iwl_lib_ops iwl5150_lib = ;
static const struct iwl_ops iwl5000_ops = ;
static const struct iwl_ops iwl5150_ops = ;
static struct iwl_base_params iwl5000_base_params = ;
static struct iwl_ht_params iwl5000_ht_params = ;
#define IWL_DEVICE_5000						\
.fw_name_pre = IWL5000_FW_PRE,				\
.ucode_api_max = IWL5000_UCODE_API_MAX,			\
.ucode_api_min = IWL5000_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_5000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_5000_TX_POWER_VERSION,	\
.ops = &iwl5000_ops,					\
.base_params = &iwl5000_base_params,			\
.led_mode = IWL_LED_BLINK
struct iwl_cfg iwl5300_agn_cfg = ;
struct iwl_cfg iwl5100_bgn_cfg = ;
struct iwl_cfg iwl5100_abg_cfg = ;
struct iwl_cfg iwl5100_agn_cfg = ;
struct iwl_cfg iwl5350_agn_cfg = ;
#define IWL_DEVICE_5150						\
.fw_name_pre = IWL5150_FW_PRE,				\
.ucode_api_max = IWL5150_UCODE_API_MAX,			\
.ucode_api_min = IWL5150_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_5050_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_5050_TX_POWER_VERSION,	\
.ops = &iwl5150_ops,					\
.base_params = &iwl5000_base_params,			\
.need_dc_calib = true,					\
.led_mode = IWL_LED_BLINK,				\
.internal_wimax_coex = true
struct iwl_cfg iwl5150_agn_cfg = ;
struct iwl_cfg iwl5150_abg_cfg = ;
MODULE_FIRMWARE(IWL5000_MODULE_FIRMWARE(IWL5000_UCODE_API_MAX));
MODULE_FIRMWARE(IWL5150_MODULE_FIRMWARE(IWL5150_UCODE_API_MAX));
