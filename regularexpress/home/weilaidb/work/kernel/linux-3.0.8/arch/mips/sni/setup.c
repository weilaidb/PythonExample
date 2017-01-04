unsigned int sni_brd_type;
EXPORT_SYMBOL(sni_brd_type);
extern void sni_machine_restart(char *command);
extern void sni_machine_power_off(void);
static void __init sni_display_setup(void)
static void __init sni_console_setup(void)
static void __init sni_idprom_dump(void)
void __init plat_mem_setup(void)
static void __devinit quirk_cirrus_ram_size(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5434_8,
quirk_cirrus_ram_size);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5436,
quirk_cirrus_ram_size);
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5446,
quirk_cirrus_ram_size);
