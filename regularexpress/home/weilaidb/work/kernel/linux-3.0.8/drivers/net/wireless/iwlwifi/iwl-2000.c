#define IWL2030_UCODE_API_MAX 5
#define IWL2000_UCODE_API_MAX 5
#define IWL105_UCODE_API_MAX 5
#define IWL2030_UCODE_API_MIN 5
#define IWL2000_UCODE_API_MIN 5
#define IWL105_UCODE_API_MIN 5
#define IWL2030_FW_PRE "iwlwifi-2030-"
#define IWL2030_MODULE_FIRMWARE(api) IWL2030_FW_PRE __stringify(api) ".ucode"
#define IWL2000_FW_PRE "iwlwifi-2000-"
#define IWL2000_MODULE_FIRMWARE(api) IWL2000_FW_PRE __stringify(api) ".ucode"
#define IWL105_FW_PRE "iwlwifi-105-"
#define IWL105_MODULE_FIRMWARE(api) IWL105_FW_PRE __stringify(api) ".ucode"
static void iwl2000_set_ct_threshold(struct iwl_priv *priv)
static void iwl2000_nic_config(struct iwl_priv *priv)
static struct iwl_sensitivity_ranges iwl2000_sensitivity = ;
static int iwl2000_hw_set_hw_params(struct iwl_priv *priv)
static struct iwl_lib_ops iwl2000_lib = ;
static const struct iwl_ops iwl2000_ops = ;
static const struct iwl_ops iwl2030_ops = ;
static const struct iwl_ops iwl105_ops = ;
static const struct iwl_ops iwl135_ops = ;
static struct iwl_base_params iwl2000_base_params = ;
static struct iwl_base_params iwl2030_base_params = ;
static struct iwl_ht_params iwl2000_ht_params = ;
static struct iwl_bt_params iwl2030_bt_params = ;
#define IWL_DEVICE_2000						\
.fw_name_pre = IWL2000_FW_PRE,				\
.ucode_api_max = IWL2000_UCODE_API_MAX,			\
.ucode_api_min = IWL2000_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_2000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_2000_TX_POWER_VERSION,	\
.ops = &iwl2000_ops,					\
.base_params = &iwl2000_base_params,			\
.need_dc_calib = true,					\
.need_temp_offset_calib = true,				\
.led_mode = IWL_LED_RF_STATE,				\
.iq_invert = true,					\
.disable_otp_refresh = true				\
struct iwl_cfg iwl2000_2bgn_cfg = ;
struct iwl_cfg iwl2000_2bg_cfg = ;
#define IWL_DEVICE_2030						\
.fw_name_pre = IWL2030_FW_PRE,				\
.ucode_api_max = IWL2030_UCODE_API_MAX,			\
.ucode_api_min = IWL2030_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_2000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_2000_TX_POWER_VERSION,	\
.ops = &iwl2030_ops,					\
.base_params = &iwl2030_base_params,			\
.bt_params = &iwl2030_bt_params,			\
.need_dc_calib = true,					\
.need_temp_offset_calib = true,				\
.led_mode = IWL_LED_RF_STATE,				\
.adv_pm = true,						\
.iq_invert = true					\
struct iwl_cfg iwl2030_2bgn_cfg = ;
struct iwl_cfg iwl2030_2bg_cfg = ;
#define IWL_DEVICE_105						\
.fw_name_pre = IWL105_FW_PRE,				\
.ucode_api_max = IWL105_UCODE_API_MAX,			\
.ucode_api_min = IWL105_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_2000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_2000_TX_POWER_VERSION,	\
.ops = &iwl105_ops,					\
.base_params = &iwl2000_base_params,			\
.need_dc_calib = true,					\
.need_temp_offset_calib = true,				\
.led_mode = IWL_LED_RF_STATE,				\
.adv_pm = true,						\
.rx_with_siso_diversity = true				\
struct iwl_cfg iwl105_bg_cfg = ;
struct iwl_cfg iwl105_bgn_cfg = ;
#define IWL_DEVICE_135						\
.fw_name_pre = IWL105_FW_PRE,				\
.ucode_api_max = IWL105_UCODE_API_MAX,			\
.ucode_api_min = IWL105_UCODE_API_MIN,			\
.eeprom_ver = EEPROM_2000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_2000_TX_POWER_VERSION,	\
.ops = &iwl135_ops,					\
.base_params = &iwl2030_base_params,			\
.bt_params = &iwl2030_bt_params,			\
.need_dc_calib = true,					\
.need_temp_offset_calib = true,				\
.led_mode = IWL_LED_RF_STATE,				\
.adv_pm = true,						\
.rx_with_siso_diversity = true				\
struct iwl_cfg iwl135_bg_cfg = ;
struct iwl_cfg iwl135_bgn_cfg = ;
MODULE_FIRMWARE(IWL2000_MODULE_FIRMWARE(IWL2000_UCODE_API_MAX));
MODULE_FIRMWARE(IWL2030_MODULE_FIRMWARE(IWL2030_UCODE_API_MAX));
MODULE_FIRMWARE(IWL105_MODULE_FIRMWARE(IWL105_UCODE_API_MAX));
