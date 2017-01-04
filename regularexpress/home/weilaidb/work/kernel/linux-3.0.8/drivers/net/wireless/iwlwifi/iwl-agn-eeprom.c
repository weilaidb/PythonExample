int iwl_eeprom_check_version(struct iwl_priv *priv)
int iwl_eeprom_check_sku(struct iwl_priv *priv)
void iwl_eeprom_get_mac(const struct iwl_priv *priv, u8 *mac)
static s8 iwl_get_max_txpower_avg(struct iwl_priv *priv,
struct iwl_eeprom_enhanced_txpwr *enhanced_txpower,
int element, s8 *max_txpower_in_half_dbm)
static void
iwlcore_eeprom_enh_txp_read_element(struct iwl_priv *priv,
struct iwl_eeprom_enhanced_txpwr *txp,
s8 max_txpower_avg)
#define EEPROM_TXP_OFFS	(0x00 | INDIRECT_ADDRESS | INDIRECT_TXP_LIMIT)
#define EEPROM_TXP_ENTRY_LEN sizeof(struct iwl_eeprom_enhanced_txpwr)
#define EEPROM_TXP_SZ_OFFS (0x00 | INDIRECT_ADDRESS | INDIRECT_TXP_LIMIT_SIZE)
#define TXP_CHECK_AND_PRINT(x) ((txp->flags & IWL_EEPROM_ENH_TXP_FL_##x) \
? # x " " : "")
void iwlcore_eeprom_enhanced_txpower(struct iwl_priv *priv)
