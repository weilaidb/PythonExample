#if 1
#define dprintk(x...) do  while (0)
#define dprintk(x...) do  while (0)
static int check_mac_tt(u8 *buf)
static int getmac_tt(u8 * decodedMAC, u8 * encodedMAC)
static int ttpci_eeprom_read_encodedMAC(struct i2c_adapter *adapter, u8 * encodedMAC)
int ttpci_eeprom_parse_mac(struct i2c_adapter *adapter, u8 *proposed_mac)
EXPORT_SYMBOL(ttpci_eeprom_parse_mac);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ralph Metzler, Marcus Metzler, others");
MODULE_DESCRIPTION("Decode dvb_net MAC address from EEPROM of PCI DVB cards "
"made by Siemens, Technotrend, Hauppauge");
