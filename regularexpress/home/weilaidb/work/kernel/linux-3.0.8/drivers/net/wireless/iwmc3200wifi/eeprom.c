static struct iwm_eeprom_entry eeprom_map[] = ;
static int iwm_eeprom_read(struct iwm_priv *iwm, u8 eeprom_id)
u8 *iwm_eeprom_access(struct iwm_priv *iwm, u8 eeprom_id)
int iwm_eeprom_fat_channels(struct iwm_priv *iwm)
u32 iwm_eeprom_wireless_mode(struct iwm_priv *iwm)
int iwm_eeprom_init(struct iwm_priv *iwm)
void iwm_eeprom_exit(struct iwm_priv *iwm)
