static DEFINE_MUTEX(lasat_eeprom_mutex);
#define EEPROM_CRC(data, len) (~crc32(~0, data, len))
struct lasat_info lasat_board_info;
int EEPROMRead(unsigned int pos, unsigned char *data, int len)
int EEPROMWrite(unsigned int pos, unsigned char *data, int len)
static void init_flash_sizes(void)
int lasat_init_board_info(void)
void lasat_write_eeprom_info(void)
