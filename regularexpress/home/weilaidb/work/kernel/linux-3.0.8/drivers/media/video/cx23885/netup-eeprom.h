#define NETUP_EEPROM_H
struct netup_port_info ;
struct netup_card_info ;
extern int netup_eeprom_read(struct i2c_adapter *i2c_adap, u8 addr);
extern int netup_eeprom_write(struct i2c_adapter *i2c_adap, u8 addr, u8 data);
extern void netup_get_card_info(struct i2c_adapter *i2c_adap,
struct netup_card_info *cinfo);
