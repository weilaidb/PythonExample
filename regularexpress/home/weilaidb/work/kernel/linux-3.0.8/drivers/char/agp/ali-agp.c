#define ALI_AGPCTRL	0xb8
#define ALI_ATTBASE	0xbc
#define ALI_TLBCTRL	0xc0
#define ALI_TAGCTRL	0xc4
#define ALI_CACHE_FLUSH_CTRL	0xD0
#define ALI_CACHE_FLUSH_ADDR_MASK	0xFFFFF000
#define ALI_CACHE_FLUSH_EN	0x100
static int ali_fetch_size(void)
static void ali_tlbflush(struct agp_memory *mem)
static void ali_cleanup(void)
static int ali_configure(void)
static void m1541_cache_flush(void)
static struct page *m1541_alloc_page(struct agp_bridge_data *bridge)
static void ali_destroy_page(struct page *page, int flags)
static void m1541_destroy_page(struct page *page, int flags)
static const struct aper_size_info_32 ali_generic_sizes[7] =
;
static const struct agp_bridge_driver ali_generic_bridge = ;
static const struct agp_bridge_driver ali_m1541_bridge = ;
static struct agp_device_ids ali_agp_device_ids[] __devinitdata =
;
static int __devinit agp_ali_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_ali_remove(struct pci_dev *pdev)
static struct pci_device_id agp_ali_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_ali_pci_table);
static struct pci_driver agp_ali_pci_driver = ;
static int __init agp_ali_init(void)
static void __exit agp_ali_cleanup(void)
module_init(agp_ali_init);
module_exit(agp_ali_cleanup);
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_LICENSE("GPL and additional rights");
