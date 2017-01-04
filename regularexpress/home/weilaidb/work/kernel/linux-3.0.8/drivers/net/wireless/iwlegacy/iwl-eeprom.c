const u8 iwlegacy_eeprom_band_1[14] = ;
static const u8 iwlegacy_eeprom_band_2[] = ;
static const u8 iwlegacy_eeprom_band_3[] = ;
static const u8 iwlegacy_eeprom_band_4[] = ;
static const u8 iwlegacy_eeprom_band_5[] = ;
static const u8 iwlegacy_eeprom_band_6[] = ;
static const u8 iwlegacy_eeprom_band_7[] = ;
static int iwl_legacy_eeprom_verify_signature(struct iwl_priv *priv)
const u8
*iwl_legacy_eeprom_query_addr(const struct iwl_priv *priv, size_t offset)
EXPORT_SYMBOL(iwl_legacy_eeprom_query_addr);
u16 iwl_legacy_eeprom_query16(const struct iwl_priv *priv, size_t offset)
EXPORT_SYMBOL(iwl_legacy_eeprom_query16);
int iwl_legacy_eeprom_init(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_eeprom_init);
void iwl_legacy_eeprom_free(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_eeprom_free);
static void iwl_legacy_init_band_reference(const struct iwl_priv *priv,
int eep_band, int *eeprom_ch_count,
const struct iwl_eeprom_channel **eeprom_ch_info,
const u8 **eeprom_ch_index)
#define CHECK_AND_PRINT(x) ((eeprom_ch->flags & EEPROM_CHANNEL_##x) \
? # x " " : "")
static int iwl_legacy_mod_ht40_chan_info(struct iwl_priv *priv,
enum ieee80211_band band, u16 channel,
const struct iwl_eeprom_channel *eeprom_ch,
u8 clear_ht40_extension_channel)
#define CHECK_AND_PRINT_I(x) ((eeprom_ch_info[ch].flags & EEPROM_CHANNEL_##x) \
? # x " " : "")
int iwl_legacy_init_channel_map(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_init_channel_map);
void iwl_legacy_free_channel_map(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_free_channel_map);
const struct
iwl_channel_info *iwl_legacy_get_channel_info(const struct iwl_priv *priv,
enum ieee80211_band band, u16 channel)
EXPORT_SYMBOL(iwl_legacy_get_channel_info);
