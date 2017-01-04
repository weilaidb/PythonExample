const u8 iwl_eeprom_band_1[14] = ;
static const u8 iwl_eeprom_band_2[] = ;
static const u8 iwl_eeprom_band_3[] = ;
static const u8 iwl_eeprom_band_4[] = ;
static const u8 iwl_eeprom_band_5[] = ;
static const u8 iwl_eeprom_band_6[] = ;
static const u8 iwl_eeprom_band_7[] = ;
static int iwl_eeprom_acquire_semaphore(struct iwl_priv *priv)
static void iwl_eeprom_release_semaphore(struct iwl_priv *priv)
static int iwl_eeprom_verify_signature(struct iwl_priv *priv)
static void iwl_set_otp_access(struct iwl_priv *priv, enum iwl_access_mode mode)
static int iwlcore_get_nvm_type(struct iwl_priv *priv, u32 hw_rev)
static int iwl_init_otp_access(struct iwl_priv *priv)
static int iwl_read_otp_word(struct iwl_priv *priv, u16 addr, __le16 *eeprom_data)
static bool iwl_is_otp_empty(struct iwl_priv *priv)
static int iwl_find_otp_image(struct iwl_priv *priv,
u16 *validblockaddr)
const u8 *iwl_eeprom_query_addr(const struct iwl_priv *priv, size_t offset)
u16 iwl_eeprom_query16(const struct iwl_priv *priv, size_t offset)
int iwl_eeprom_init(struct iwl_priv *priv, u32 hw_rev)
void iwl_eeprom_free(struct iwl_priv *priv)
static void iwl_init_band_reference(const struct iwl_priv *priv,
int eep_band, int *eeprom_ch_count,
const struct iwl_eeprom_channel **eeprom_ch_info,
const u8 **eeprom_ch_index)
#define CHECK_AND_PRINT(x) ((eeprom_ch->flags & EEPROM_CHANNEL_##x) \
? # x " " : "")
static int iwl_mod_ht40_chan_info(struct iwl_priv *priv,
enum ieee80211_band band, u16 channel,
const struct iwl_eeprom_channel *eeprom_ch,
u8 clear_ht40_extension_channel)
#define CHECK_AND_PRINT_I(x) ((eeprom_ch_info[ch].flags & EEPROM_CHANNEL_##x) \
? # x " " : "")
int iwl_init_channel_map(struct iwl_priv *priv)
void iwl_free_channel_map(struct iwl_priv *priv)
const struct iwl_channel_info *iwl_get_channel_info(const struct iwl_priv *priv,
enum ieee80211_band band, u16 channel)
