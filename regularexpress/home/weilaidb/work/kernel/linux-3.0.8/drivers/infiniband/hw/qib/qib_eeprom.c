int qib_eeprom_read(struct qib_devdata *dd, u8 eeprom_offset,
void *buff, int len)
static int eeprom_write_with_enable(struct qib_devdata *dd, u8 offset,
const void *buf, int len)
int qib_eeprom_write(struct qib_devdata *dd, u8 eeprom_offset,
const void *buff, int len)
static u8 flash_csum(struct qib_flash *ifp, int adjust)
void qib_get_eeprom_info(struct qib_devdata *dd)
int qib_update_eeprom_log(struct qib_devdata *dd)
void qib_inc_eeprom_err(struct qib_devdata *dd, u32 eidx, u32 incr)
