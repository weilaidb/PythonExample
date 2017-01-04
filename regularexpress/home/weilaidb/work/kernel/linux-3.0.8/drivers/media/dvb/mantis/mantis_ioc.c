static int read_eeprom_bytes(struct mantis_pci *mantis, u8 reg, u8 *data, u8 length)
int mantis_get_mac(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_get_mac);
void mantis_gpio_set_bits(struct mantis_pci *mantis, u32 bitpos, u8 value)
EXPORT_SYMBOL_GPL(mantis_gpio_set_bits);
int mantis_stream_control(struct mantis_pci *mantis, enum mantis_stream_control stream_ctl)
EXPORT_SYMBOL_GPL(mantis_stream_control);
