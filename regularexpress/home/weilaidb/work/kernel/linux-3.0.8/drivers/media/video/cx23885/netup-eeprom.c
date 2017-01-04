#
#define EEPROM_I2C_ADDR 0x50
int netup_eeprom_read(struct i2c_adapter *i2c_adap, u8 addr)
;
int netup_eeprom_write(struct i2c_adapter *i2c_adap, u8 addr, u8 data)
;
void netup_get_card_info(struct i2c_adapter *i2c_adap,
struct netup_card_info *cinfo)
;
