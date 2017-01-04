u8 oxygen_read8(struct oxygen *chip, unsigned int reg)
EXPORT_SYMBOL(oxygen_read8);
u16 oxygen_read16(struct oxygen *chip, unsigned int reg)
EXPORT_SYMBOL(oxygen_read16);
u32 oxygen_read32(struct oxygen *chip, unsigned int reg)
EXPORT_SYMBOL(oxygen_read32);
void oxygen_write8(struct oxygen *chip, unsigned int reg, u8 value)
EXPORT_SYMBOL(oxygen_write8);
void oxygen_write16(struct oxygen *chip, unsigned int reg, u16 value)
EXPORT_SYMBOL(oxygen_write16);
void oxygen_write32(struct oxygen *chip, unsigned int reg, u32 value)
EXPORT_SYMBOL(oxygen_write32);
void oxygen_write8_masked(struct oxygen *chip, unsigned int reg,
u8 value, u8 mask)
EXPORT_SYMBOL(oxygen_write8_masked);
void oxygen_write16_masked(struct oxygen *chip, unsigned int reg,
u16 value, u16 mask)
EXPORT_SYMBOL(oxygen_write16_masked);
void oxygen_write32_masked(struct oxygen *chip, unsigned int reg,
u32 value, u32 mask)
EXPORT_SYMBOL(oxygen_write32_masked);
static int oxygen_ac97_wait(struct oxygen *chip, unsigned int mask)
void oxygen_write_ac97(struct oxygen *chip, unsigned int codec,
unsigned int index, u16 data)
EXPORT_SYMBOL(oxygen_write_ac97);
u16 oxygen_read_ac97(struct oxygen *chip, unsigned int codec,
unsigned int index)
EXPORT_SYMBOL(oxygen_read_ac97);
void oxygen_write_ac97_masked(struct oxygen *chip, unsigned int codec,
unsigned int index, u16 data, u16 mask)
EXPORT_SYMBOL(oxygen_write_ac97_masked);
void oxygen_write_spi(struct oxygen *chip, u8 control, unsigned int data)
EXPORT_SYMBOL(oxygen_write_spi);
void oxygen_write_i2c(struct oxygen *chip, u8 device, u8 map, u8 data)
EXPORT_SYMBOL(oxygen_write_i2c);
static void _write_uart(struct oxygen *chip, unsigned int port, u8 data)
void oxygen_reset_uart(struct oxygen *chip)
EXPORT_SYMBOL(oxygen_reset_uart);
void oxygen_write_uart(struct oxygen *chip, u8 data)
EXPORT_SYMBOL(oxygen_write_uart);
u16 oxygen_read_eeprom(struct oxygen *chip, unsigned int index)
void oxygen_write_eeprom(struct oxygen *chip, unsigned int index, u16 value)
