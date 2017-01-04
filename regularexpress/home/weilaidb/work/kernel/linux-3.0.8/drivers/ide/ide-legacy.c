static void ide_legacy_init_one(struct ide_hw **hws, struct ide_hw *hw,
u8 port_no, const struct ide_port_info *d,
unsigned long config)
int ide_legacy_device_add(const struct ide_port_info *d, unsigned long config)
EXPORT_SYMBOL_GPL(ide_legacy_device_add);
