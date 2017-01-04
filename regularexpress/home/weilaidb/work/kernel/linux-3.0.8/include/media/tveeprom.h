struct tveeprom ;
void tveeprom_hauppauge_analog(struct i2c_client *c, struct tveeprom *tvee,
unsigned char *eeprom_data);
int tveeprom_read(struct i2c_client *c, unsigned char *eedata, int len);
