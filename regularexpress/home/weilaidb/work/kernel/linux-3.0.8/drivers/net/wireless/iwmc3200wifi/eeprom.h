#define __IWM_EEPROM_H__
enum ;
#define IWM_EEPROM_SIG_OFF                 0x00
#define IWM_EEPROM_VERSION_OFF            (0x54 << 1)
#define IWM_EEPROM_OEM_HW_VERSION_OFF     (0x56 << 1)
#define IWM_EEPROM_MAC_VERSION_OFF        (0x30 << 1)
#define IWM_EEPROM_CARD_ID_OFF            (0x5d << 1)
#define IWM_EEPROM_RADIO_CONF_OFF         (0x58 << 1)
#define IWM_EEPROM_SKU_CAP_OFF            (0x55 << 1)
#define IWM_EEPROM_CALIB_CONFIG_OFF       (0x7c << 1)
#define IWM_EEPROM_FAT_CHANNELS_CAP_OFF   (0xde << 1)
#define IWM_EEPROM_SIG_LEN              4
#define IWM_EEPROM_VERSION_LEN          2
#define IWM_EEPROM_OEM_HW_VERSION_LEN   2
#define IWM_EEPROM_MAC_VERSION_LEN      1
#define IWM_EEPROM_CARD_ID_LEN          2
#define IWM_EEPROM_RADIO_CONF_LEN       2
#define IWM_EEPROM_SKU_CAP_LEN          2
#define IWM_EEPROM_FAT_CHANNELS_CAP_LEN 40
#define IWM_EEPROM_INDIRECT_LEN		2
#define IWM_MAX_EEPROM_DATA_LEN         240
#define IWM_EEPROM_LEN                  0x800
#define IWM_EEPROM_MIN_ALLOWED_VERSION          0x0610
#define IWM_EEPROM_MAX_ALLOWED_VERSION          0x0700
#define IWM_EEPROM_CURRENT_VERSION              0x0612
#define IWM_EEPROM_SKU_CAP_BAND_24GHZ           (1 << 4)
#define IWM_EEPROM_SKU_CAP_BAND_52GHZ           (1 << 5)
#define IWM_EEPROM_SKU_CAP_11N_ENABLE           (1 << 6)
#define IWM_EEPROM_FAT_CHANNELS 20
#define IWM_EEPROM_FAT_CHANNELS_24 9
#define IWM_EEPROM_FAT_CHANNELS_52 11
#define IWM_EEPROM_FAT_CHANNEL_ENABLED (1 << 0)
enum ;
#define IWM_EEPROM_CALIB_RXIQ_OFF	(IWM_EEPROM_CALIB_CONFIG_OFF + \
(IWM_EEPROM_CALIB_RX_IQ << 1))
#define IWM_EEPROM_CALIB_RXIQ_LEN	sizeof(struct iwm_lmac_calib_rxiq)
struct iwm_eeprom_entry ;
int iwm_eeprom_init(struct iwm_priv *iwm);
void iwm_eeprom_exit(struct iwm_priv *iwm);
u8 *iwm_eeprom_access(struct iwm_priv *iwm, u8 eeprom_id);
int iwm_eeprom_fat_channels(struct iwm_priv *iwm);
u32 iwm_eeprom_wireless_mode(struct iwm_priv *iwm);
