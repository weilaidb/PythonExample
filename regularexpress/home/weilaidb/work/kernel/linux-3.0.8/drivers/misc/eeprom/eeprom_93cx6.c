MODULE_AUTHOR("http:
MODULE_VERSION("1.0");
MODULE_DESCRIPTION("EEPROM 93cx6 chip driver");
MODULE_LICENSE("GPL");
static inline void eeprom_93cx6_pulse_high(struct eeprom_93cx6 *eeprom)
static inline void eeprom_93cx6_pulse_low(struct eeprom_93cx6 *eeprom)
static void eeprom_93cx6_startup(struct eeprom_93cx6 *eeprom)
static void eeprom_93cx6_cleanup(struct eeprom_93cx6 *eeprom)
static void eeprom_93cx6_write_bits(struct eeprom_93cx6 *eeprom,
const u16 data, const u16 count)
static void eeprom_93cx6_read_bits(struct eeprom_93cx6 *eeprom,
u16 *data, const u16 count)
void eeprom_93cx6_read(struct eeprom_93cx6 *eeprom, const u8 word,
u16 *data)
EXPORT_SYMBOL_GPL(eeprom_93cx6_read);
void eeprom_93cx6_multiread(struct eeprom_93cx6 *eeprom, const u8 word,
__le16 *data, const u16 words)
EXPORT_SYMBOL_GPL(eeprom_93cx6_multiread);
