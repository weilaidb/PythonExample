#define __VIA_I2C_H__
struct via_i2c_stuff ;
int viafb_i2c_readbyte(u8 adap, u8 slave_addr, u8 index, u8 *pdata);
int viafb_i2c_writebyte(u8 adap, u8 slave_addr, u8 index, u8 data);
int viafb_i2c_readbytes(u8 adap, u8 slave_addr, u8 index, u8 *buff, int buff_len);
struct i2c_adapter *viafb_find_i2c_adapter(enum viafb_i2c_adap which);
extern int viafb_i2c_init(void);
extern void viafb_i2c_exit(void);
