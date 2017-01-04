int intel_agp_enabled;
EXPORT_SYMBOL(intel_agp_enabled);
static int intel_fetch_size(void)
static int __intel_8xx_fetch_size(u8 temp)
static int intel_8xx_fetch_size(void)
static int intel_815_fetch_size(void)
static void intel_tlbflush(struct agp_memory *mem)
static void intel_8xx_tlbflush(struct agp_memory *mem)
static void intel_cleanup(void)
static void intel_8xx_cleanup(void)
static int intel_configure(void)
static int intel_815_configure(void)
static void intel_820_tlbflush(struct agp_memory *mem)
static void intel_820_cleanup(void)
static int intel_820_configure(void)
static int intel_840_configure(void)
static int intel_845_configure(void)
static int intel_850_configure(void)
static int intel_860_configure(void)
static int intel_830mp_configure(void)
static int intel_7505_configure(void)
static const struct gatt_mask intel_generic_masks[] =
;
static const struct aper_size_info_8 intel_815_sizes[2] =
;
static const struct aper_size_info_8 intel_8xx_sizes[7] =
;
static const struct aper_size_info_16 intel_generic_sizes[7] =
;
static const struct aper_size_info_8 intel_830mp_sizes[4] =
;
static const struct agp_bridge_driver intel_generic_driver = ;
static const struct agp_bridge_driver intel_815_driver = ;
static const struct agp_bridge_driver intel_820_driver = ;
static const struct agp_bridge_driver intel_830mp_driver = ;
static const struct agp_bridge_driver intel_840_driver = ;
static const struct agp_bridge_driver intel_845_driver = ;
static const struct agp_bridge_driver intel_850_driver = ;
static const struct agp_bridge_driver intel_860_driver = ;
static const struct agp_bridge_driver intel_7505_driver = ;
static const struct intel_agp_driver_description  intel_agp_chipsets[] = ;
static int __devinit agp_intel_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_intel_remove(struct pci_dev *pdev)
static int agp_intel_resume(struct pci_dev *pdev)
static struct pci_device_id agp_intel_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_intel_pci_table);
static struct pci_driver agp_intel_pci_driver = ;
static int __init agp_intel_init(void)
static void __exit agp_intel_cleanup(void)
module_init(agp_intel_init);
module_exit(agp_intel_cleanup);
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_LICENSE("GPL and additional rights");
