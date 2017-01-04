#define IWL6000_UCODE_API_MAX 4
#define IWL6050_UCODE_API_MAX 5
#define IWL6000G2_UCODE_API_MAX 5
#define IWL6000_UCODE_API_MIN 4
#define IWL6050_UCODE_API_MIN 4
#define IWL6000G2_UCODE_API_MIN 4
#define IWL6000_FW_PRE "iwlwifi-6000-"
#define IWL6000_MODULE_FIRMWARE(api) IWL6000_FW_PRE __stringify(api) ".ucode"
#define IWL6050_FW_PRE "iwlwifi-6050-"
#define IWL6050_MODULE_FIRMWARE(api) IWL6050_FW_PRE __stringify(api) ".ucode"
#define IWL6005_FW_PRE "iwlwifi-6000g2a-"
#define IWL6005_MODULE_FIRMWARE(api) IWL6005_FW_PRE __stringify(api) ".ucode"
#define IWL6030_FW_PRE "iwlwifi-6000g2b-"
#define IWL6030_MODULE_FIRMWARE(api) IWL6030_FW_PRE __stringify(api) ".ucode"
static void iwl6000_set_ct_threshold(struct iwl_priv *priv)
static void iwl6050_additional_nic_config(struct iwl_priv *priv)
static void iwl6150_additional_nic_config(struct iwl_priv *priv)
static void iwl6000_nic_config(struct iwl_priv *priv)
static struct iwl_sensitivity_ranges iwl6000_sensitivity = ;
static int iwl6000_hw_set_hw_params(struct iwl_priv *priv)
static int iwl6000_hw_channel_switch(struct iwl_priv *priv,
struct ieee80211_channel_switch *ch_switch)
static struct iwl_lib_ops iwl6000_lib = ;
static struct iwl_lib_ops iwl6030_lib = ;
static struct iwl_nic_ops iwl6050_nic_ops = ;
static struct iwl_nic_ops iwl6150_nic_ops = ;
static const struct iwl_ops iwl6000_ops = ;
static const struct iwl_ops iwl6050_ops = ;
static const struct iwl_ops iwl6150_ops = ;
static const struct iwl_ops iwl6030_ops = ;
static struct iwl_base_params iwl6000_base_params = ;
static struct iwl_base_params iwl6050_base_params = ;
static struct iwl_base_params iwl6000_g2_base_params = ;
static struct iwl_ht_params iwl6000_ht_params = ;
static struct iwl_bt_params iwl6000_bt_params = ;
#define IWL_DEVICE_6005						\
.fw_name_pre = IWL6005_FW_PRE,			\
.ucode_api_max = IWL6000G2_UCODE_API_MAX,		\
.ucode_api_min = IWL6000G2_UCODE_API_MIN,		\
.eeprom_ver = EEPROM_6005_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_6005_TX_POWER_VERSION,	\
.ops = &iwl6000_ops,					\
.base_params = &iwl6000_g2_base_params,			\
.need_dc_calib = true,					\
.need_temp_offset_calib = true,				\
.led_mode = IWL_LED_RF_STATE
struct iwl_cfg iwl6005_2agn_cfg = ;
struct iwl_cfg iwl6005_2abg_cfg = ;
struct iwl_cfg iwl6005_2bg_cfg = ;
#define IWL_DEVICE_6030						\
.fw_name_pre = IWL6030_FW_PRE,			\
.ucode_api_max = IWL6000G2_UCODE_API_MAX,		\
.ucode_api_min = IWL6000G2_UCODE_API_MIN,		\
.eeprom_ver = EEPROM_6030_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_6030_TX_POWER_VERSION,	\
.ops = &iwl6030_ops,					\
.base_params = &iwl6000_g2_base_params,			\
.bt_params = &iwl6000_bt_params,			\
.need_dc_calib = true,					\
.need_temp_offset_calib = true,				\
.led_mode = IWL_LED_RF_STATE,				\
.adv_pm = true						\
struct iwl_cfg iwl6030_2agn_cfg = ;
struct iwl_cfg iwl6030_2abg_cfg = ;
struct iwl_cfg iwl6030_2bgn_cfg = ;
struct iwl_cfg iwl6030_2bg_cfg = ;
struct iwl_cfg iwl6035_2agn_cfg = ;
struct iwl_cfg iwl6035_2abg_cfg = ;
struct iwl_cfg iwl6035_2bg_cfg = ;
struct iwl_cfg iwl1030_bgn_cfg = ;
struct iwl_cfg iwl1030_bg_cfg = ;
struct iwl_cfg iwl130_bgn_cfg = ;
struct iwl_cfg iwl130_bg_cfg = ;
#define IWL_DEVICE_6000i					\
.fw_name_pre = IWL6000_FW_PRE,				\
.ucode_api_max = IWL6000_UCODE_API_MAX,			\
.ucode_api_min = IWL6000_UCODE_API_MIN,			\
.valid_tx_ant = ANT_BC,	\
.valid_rx_ant = ANT_BC,	\
.eeprom_ver = EEPROM_6000_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_6000_TX_POWER_VERSION,	\
.ops = &iwl6000_ops,					\
.base_params = &iwl6000_base_params,			\
.pa_type = IWL_PA_INTERNAL,				\
.led_mode = IWL_LED_BLINK
struct iwl_cfg iwl6000i_2agn_cfg = ;
struct iwl_cfg iwl6000i_2abg_cfg = ;
struct iwl_cfg iwl6000i_2bg_cfg = ;
#define IWL_DEVICE_6050						\
.fw_name_pre = IWL6050_FW_PRE,				\
.ucode_api_max = IWL6050_UCODE_API_MAX,			\
.ucode_api_min = IWL6050_UCODE_API_MIN,			\
.valid_tx_ant = ANT_AB,	\
.valid_rx_ant = ANT_AB,	\
.ops = &iwl6050_ops,					\
.eeprom_ver = EEPROM_6050_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_6050_TX_POWER_VERSION,	\
.base_params = &iwl6050_base_params,			\
.need_dc_calib = true,					\
.led_mode = IWL_LED_BLINK,				\
.internal_wimax_coex = true
struct iwl_cfg iwl6050_2agn_cfg = ;
struct iwl_cfg iwl6050_2abg_cfg = ;
#define IWL_DEVICE_6150						\
.fw_name_pre = IWL6050_FW_PRE,				\
.ucode_api_max = IWL6050_UCODE_API_MAX,			\
.ucode_api_min = IWL6050_UCODE_API_MIN,			\
.ops = &iwl6150_ops,					\
.eeprom_ver = EEPROM_6150_EEPROM_VERSION,		\
.eeprom_calib_ver = EEPROM_6150_TX_POWER_VERSION,	\
.base_params = &iwl6050_base_params,			\
.need_dc_calib = true,					\
.led_mode = IWL_LED_BLINK,				\
.internal_wimax_coex = true
struct iwl_cfg iwl6150_bgn_cfg = ;
struct iwl_cfg iwl6150_bg_cfg = ;
struct iwl_cfg iwl6000_3agn_cfg = ;
MODULE_FIRMWARE(IWL6000_MODULE_FIRMWARE(IWL6000_UCODE_API_MAX));
MODULE_FIRMWARE(IWL6050_MODULE_FIRMWARE(IWL6050_UCODE_API_MAX));
MODULE_FIRMWARE(IWL6005_MODULE_FIRMWARE(IWL6000G2_UCODE_API_MAX));
MODULE_FIRMWARE(IWL6030_MODULE_FIRMWARE(IWL6000G2_UCODE_API_MAX));
