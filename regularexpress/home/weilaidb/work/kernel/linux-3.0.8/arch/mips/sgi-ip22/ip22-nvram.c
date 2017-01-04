#define EEPROM_READ	0xc000
#define EEPROM_WEN	0x9800
#define EEPROM_WRITE	0xa000
#define EEPROM_WRALL	0x8800
#define EEPROM_WDS	0x8000
#define	EEPROM_PRREAD	0xc000
#define	EEPROM_PREN	0x9800
#define	EEPROM_PRCLEAR	0xffff
#define	EEPROM_PRWRITE	0xa000
#define	EEPROM_PRDS	0x8000
#define EEPROM_EPROT	0x01
#define EEPROM_CSEL	0x02
#define EEPROM_ECLK	0x04
#define EEPROM_DATO	0x08
#define EEPROM_DATI	0x10
#define delay()	()
#define eeprom_cs_on(ptr) ()
#define eeprom_cs_off(ptr) ()
#define	BITS_IN_COMMAND	11
static inline void eeprom_cmd(unsigned int *ctrl, unsigned cmd, unsigned reg)
unsigned short ip22_eeprom_read(unsigned int *ctrl, int reg)
EXPORT_SYMBOL(ip22_eeprom_read);
unsigned short ip22_nvram_read(int reg)
EXPORT_SYMBOL(ip22_nvram_read);
