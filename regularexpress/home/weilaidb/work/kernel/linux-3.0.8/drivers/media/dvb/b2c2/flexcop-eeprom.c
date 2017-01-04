static u8 calc_lrc(u8 *buf, int len)
static int flexcop_eeprom_request(struct flexcop_device *fc,
flexcop_access_op_t op, u16 addr, u8 *buf, u16 len, int retries)
static int flexcop_eeprom_lrc_read(struct flexcop_device *fc, u16 addr,
u8 *buf, u16 len, int retries)
int flexcop_eeprom_check_mac_addr(struct flexcop_device *fc, int extended)
EXPORT_SYMBOL(flexcop_eeprom_check_mac_addr);
