#define IWL1000_UCODE_API_MAX 5
#define IWL100_UCODE_API_MAX 5
#define IWL1000_UCODE_API_MIN 1
#define IWL100_UCODE_API_MIN 5
#define IWL1000_FW_PRE "iwlwifi-1000-"
#define IWL1000_MODULE_FIRMWARE(api) IWL1000_FW_PRE __stringify(api) ".ucode"
#define IWL100_FW_PRE "iwlwifi-100-"
#define IWL100_MODULE_FIRMWARE(api) IWL100_FW_PRE __stringify(api) ".ucode"
static void iwl1000_set_ct_threshold(struct iwl_priv *priv)
static void iwl1000_nic_config(struct iwl_priv *priv)
static struct iwl_sensitivity_ranges iwl1000_sensitivity = ;
static int iwl1000_hw_set_hw_params(struct iwl_priv *priv)
static struct iwl_lib_ops iwl1000_lib = ;
static const struct iwl_ops iwl1000_ops = ;
static struct iwl_base_params iwl1000_base_params = ;
static struct iwl_ht_params iwl1000_ht_params = ;
#define IWL_DEVICE_1000						\
.fw_name_pre = IWL1000_FW_PRE,				\
.ucode_api_max = IWL1000_UCODE_API_MAX,			\
.ucode_api_min = IWL1000_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_1000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_1000_TX_POWER_VERSION,	\
.ops = &iwl1000_ops,					\
.base_params = &iwl1000_base_params,			\
.led_mode = IWL_LED_BLINK
struct iwl_cfg iwl1000_bgn_cfg = ;
struct iwl_cfg iwl1000_bg_cfg = ;
#define IWL_DEVICE_100						\
.fw_name_pre = IWL100_FW_PRE,				\
.ucode_api_max = IWL100_UCODE_API_MAX,			\
.ucode_api_min = IWL100_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_1000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_1000_TX_POWER_VERSION,	\
.ops = &iwl1000_ops,					\
.base_params = &iwl1000_base_params,			\
.led_mode = IWL_LED_RF_STATE,				\
.rx_with_siso_diversity = true
struct iwl_cfg iwl100_bgn_cfg = ;
struct iwl_cfg iwl100_bg_cfg = ;
MODULE_FIRMWARE(IWL1000_MODULE_FIRMWARE(IWL1000_UCODE_API_MAX));
MODULE_FIRMWARE(IWL100_MODULE_FIRMWARE(IWL100_UCODE_API_MAX));
