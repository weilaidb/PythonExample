#define PCI_EEPROM_WIDTH_93C46	6
#define PCI_EEPROM_WIDTH_93C56	8
#define PCI_EEPROM_WIDTH_93C66	8
#define PCI_EEPROM_WIDTH_93C86	8
#define PCI_EEPROM_WIDTH_OPCODE	3
#define PCI_EEPROM_WRITE_OPCODE	0x05
#define PCI_EEPROM_READ_OPCODE	0x06
#define PCI_EEPROM_EWDS_OPCODE	0x10
#define PCI_EEPROM_EWEN_OPCODE	0x13
struct eeprom_93cx6 ;
extern void eeprom_93cx6_read(struct eeprom_93cx6 *eeprom,
const u8 word, u16 *data);
extern void eeprom_93cx6_multiread(struct eeprom_93cx6 *eeprom,
const u8 word, __le16 *data, const u16 words);
