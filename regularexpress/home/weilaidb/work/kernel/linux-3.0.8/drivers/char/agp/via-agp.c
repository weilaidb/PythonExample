static const struct pci_device_id agp_via_pci_table[];
#define VIA_GARTCTRL	0x80
#define VIA_APSIZE	0x84
#define VIA_ATTBASE	0x88
#define VIA_AGP3_GARTCTRL	0x90
#define VIA_AGP3_APSIZE		0x94
#define VIA_AGP3_ATTBASE	0x98
#define VIA_AGPSEL		0xfd
static int via_fetch_size(void)
static int via_configure(void)
static void via_cleanup(void)
static void via_tlbflush(struct agp_memory *mem)
static const struct aper_size_info_8 via_generic_sizes[9] =
;
static int via_fetch_size_agp3(void)
static int via_configure_agp3(void)
static void via_cleanup_agp3(void)
static void via_tlbflush_agp3(struct agp_memory *mem)
static const struct agp_bridge_driver via_agp3_driver = ;
static const struct agp_bridge_driver via_driver = ;
static struct agp_device_ids via_agp_device_ids[] __devinitdata =
;
static void check_via_agp3 (struct agp_bridge_data *bridge)
static int __devinit agp_via_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_via_remove(struct pci_dev *pdev)
static int agp_via_suspend(struct pci_dev *pdev, pm_message_t state)
static int agp_via_resume(struct pci_dev *pdev)
static const struct pci_device_id agp_via_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_via_pci_table);
static struct pci_driver agp_via_pci_driver = ;
static int __init agp_via_init(void)
static void __exit agp_via_cleanup(void)
module_init(agp_via_init);
module_exit(agp_via_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
