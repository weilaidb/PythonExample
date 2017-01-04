#define DRV_NAME "pdc202xx_new"
#undef DEBUG
#define DBG(fmt, args...) printk("%s: " fmt, __func__, ## args)
#define DBG(fmt, args...)
static u8 max_dma_rate(struct pci_dev *pdev)
static u8 get_indexed_reg(ide_hwif_t *hwif, u8 index)
static void set_indexed_reg(ide_hwif_t *hwif, u8 index, u8 value)
static struct pio_timing  pio_timings [] = ;
static struct mwdma_timing  mwdma_timings [] = ;
static struct udma_timing  udma_timings [] = ;
static void pdcnew_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void pdcnew_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 pdcnew_cable_detect(ide_hwif_t *hwif)
static void pdcnew_reset(ide_drive_t *drive)
static long read_counter(u32 dma_base)
static long detect_pll_input_clock(unsigned long dma_base)
static void apple_kiwi_init(struct pci_dev *pdev)
static int init_chipset_pdcnew(struct pci_dev *dev)
static struct pci_dev * __devinit pdc20270_get_dev2(struct pci_dev *dev)
static const struct ide_port_ops pdcnew_port_ops = ;
#define DECLARE_PDCNEW_DEV(udma) \
static const struct ide_port_info pdcnew_chipsets[] __devinitdata = ;
static int __devinit pdc202new_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit pdc202new_remove(struct pci_dev *dev)
static const struct pci_device_id pdc202new_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pdc202new_pci_tbl);
static struct pci_driver pdc202new_pci_driver = ;
static int __init pdc202new_ide_init(void)
static void __exit pdc202new_ide_exit(void)
module_init(pdc202new_ide_init);
module_exit(pdc202new_ide_exit);
MODULE_AUTHOR("Andre Hedrick, Frank Tiernan");
MODULE_DESCRIPTION("PCI driver module for Promise PDC20268 and higher");
MODULE_LICENSE("GPL");
