static u32 bcma_pcie_read(struct bcma_drv_pci *pc, u32 address)
static void bcma_pcie_mdio_set_phy(struct bcma_drv_pci *pc, u8 phy)
static u16 bcma_pcie_mdio_read(struct bcma_drv_pci *pc, u8 device, u8 address)
static void bcma_pcie_mdio_write(struct bcma_drv_pci *pc, u8 device,
u8 address, u16 data)
static u8 bcma_pcicore_polarity_workaround(struct bcma_drv_pci *pc)
static void bcma_pcicore_serdes_workaround(struct bcma_drv_pci *pc)
void bcma_core_pci_init(struct bcma_drv_pci *pc)
