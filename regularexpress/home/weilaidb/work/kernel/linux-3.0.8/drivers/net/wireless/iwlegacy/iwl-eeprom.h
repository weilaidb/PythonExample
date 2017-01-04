#define __iwl_legacy_eeprom_h__
struct iwl_priv;
#define IWL_EEPROM_ACCESS_TIMEOUT	5000
#define IWL_EEPROM_SEM_TIMEOUT		10
#define IWL_EEPROM_SEM_RETRY_LIMIT	1000
#define IWL_NUM_TX_CALIB_GROUPS 5
enum ;
#define EEPROM_SKU_CAP_SW_RF_KILL_ENABLE                (1 << 0)
#define EEPROM_SKU_CAP_HW_RF_KILL_ENABLE                (1 << 1)
struct iwl_eeprom_channel  __packed;
#define EEPROM_3945_EEPROM_VERSION	(0x2f)
#define EEPROM_TX_POWER_TX_CHAINS      (2)
#define EEPROM_TX_POWER_BANDS          (8)
#define EEPROM_TX_POWER_MEASUREMENTS   (3)
#define EEPROM_4965_TX_POWER_VERSION    (5)
#define EEPROM_4965_EEPROM_VERSION	(0x2f)
#define EEPROM_4965_CALIB_VERSION_OFFSET       (2*0xB6)
#define EEPROM_4965_CALIB_TXPOWER_OFFSET       (2*0xE8)
#define EEPROM_4965_BOARD_REVISION             (2*0x4F)
#define EEPROM_4965_BOARD_PBA                  (2*0x56+1)
extern const u8 iwlegacy_eeprom_band_1[14];
struct iwl_eeprom_calib_measure  __packed;
struct iwl_eeprom_calib_ch_info  __packed;
struct iwl_eeprom_calib_subband_info  __packed;
struct iwl_eeprom_calib_info  __packed;
#define EEPROM_DEVICE_ID                    (2*0x08)
#define EEPROM_MAC_ADDRESS                  (2*0x15)
#define EEPROM_BOARD_REVISION               (2*0x35)
#define EEPROM_BOARD_PBA_NUMBER             (2*0x3B+1)
#define EEPROM_VERSION                      (2*0x44)
#define EEPROM_SKU_CAP                      (2*0x45)
#define EEPROM_OEM_MODE                     (2*0x46)
#define EEPROM_WOWLAN_MODE                  (2*0x47)
#define EEPROM_RADIO_CONFIG                 (2*0x48)
#define EEPROM_NUM_MAC_ADDRESS              (2*0x4C)
#define EEPROM_RF_CFG_TYPE_MSK(x)   (x & 0x3)
#define EEPROM_RF_CFG_STEP_MSK(x)   ((x >> 2)  & 0x3)
#define EEPROM_RF_CFG_DASH_MSK(x)   ((x >> 4)  & 0x3)
#define EEPROM_RF_CFG_PNUM_MSK(x)   ((x >> 6)  & 0x3)
#define EEPROM_RF_CFG_TX_ANT_MSK(x) ((x >> 8)  & 0xF)
#define EEPROM_RF_CFG_RX_ANT_MSK(x) ((x >> 12) & 0xF)
#define EEPROM_3945_RF_CFG_TYPE_MAX  0x0
#define EEPROM_4965_RF_CFG_TYPE_MAX  0x1
#define EEPROM_REGULATORY_SKU_ID            (2*0x60)
#define EEPROM_REGULATORY_BAND_1            (2*0x62)
#define EEPROM_REGULATORY_BAND_1_CHANNELS   (2*0x63)
#define EEPROM_REGULATORY_BAND_2            (2*0x71)
#define EEPROM_REGULATORY_BAND_2_CHANNELS   (2*0x72)
#define EEPROM_REGULATORY_BAND_3            (2*0x7F)
#define EEPROM_REGULATORY_BAND_3_CHANNELS   (2*0x80)
#define EEPROM_REGULATORY_BAND_4            (2*0x8C)
#define EEPROM_REGULATORY_BAND_4_CHANNELS   (2*0x8D)
#define EEPROM_REGULATORY_BAND_5            (2*0x98)
#define EEPROM_REGULATORY_BAND_5_CHANNELS   (2*0x99)
#define EEPROM_4965_REGULATORY_BAND_24_HT40_CHANNELS (2*0xA0)
#define EEPROM_4965_REGULATORY_BAND_52_HT40_CHANNELS (2*0xA8)
#define EEPROM_REGULATORY_BAND_NO_HT40			(0)
struct iwl_eeprom_ops ;
int iwl_legacy_eeprom_init(struct iwl_priv *priv);
void iwl_legacy_eeprom_free(struct iwl_priv *priv);
const u8 *iwl_legacy_eeprom_query_addr(const struct iwl_priv *priv,
size_t offset);
u16 iwl_legacy_eeprom_query16(const struct iwl_priv *priv, size_t offset);
int iwl_legacy_init_channel_map(struct iwl_priv *priv);
void iwl_legacy_free_channel_map(struct iwl_priv *priv);
const struct iwl_channel_info *iwl_legacy_get_channel_info(
const struct iwl_priv *priv,
enum ieee80211_band band, u16 channel);
