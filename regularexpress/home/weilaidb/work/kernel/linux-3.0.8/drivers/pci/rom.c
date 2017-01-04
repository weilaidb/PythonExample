int pci_enable_rom(struct pci_dev *pdev)
void pci_disable_rom(struct pci_dev *pdev)
size_t pci_get_rom_size(struct pci_dev *pdev, void __iomem *rom, size_t size)
void __iomem *pci_map_rom(struct pci_dev *pdev, size_t *size)
void pci_unmap_rom(struct pci_dev *pdev, void __iomem *rom)
void pci_cleanup_rom(struct pci_dev *pdev)
EXPORT_SYMBOL(pci_map_rom);
EXPORT_SYMBOL(pci_unmap_rom);
EXPORT_SYMBOL_GPL(pci_enable_rom);
EXPORT_SYMBOL_GPL(pci_disable_rom);
