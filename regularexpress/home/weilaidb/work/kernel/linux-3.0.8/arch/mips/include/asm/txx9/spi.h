#define __ASM_TXX9_SPI_H
int spi_eeprom_register(int busid, int chipid, int size);
int spi_eeprom_read(int busid, int chipid,
int address, unsigned char *buf, int len);
static inline int spi_eeprom_register(int busid, int chipid, int size)
static inline int spi_eeprom_read(int busid, int chipid,
int address, unsigned char *buf, int len)
