#define EFFICEON_ATTPAGE	0xb8
#define EFFICEON_L1_SIZE	64
#define EFFICEON_PATI		(0 << 9)
#define EFFICEON_PRESENT	(1 << 8)
static struct _efficeon_private  efficeon_private;
static const struct gatt_mask efficeon_generic_masks[] =
;
static inline unsigned long efficeon_mask_memory(struct page *page)
static const struct aper_size_info_lvl2 efficeon_generic_sizes[4] =
;
static int efficeon_fetch_size(void)
static void efficeon_tlbflush(struct agp_memory * mem)
static void efficeon_cleanup(void)
static int efficeon_configure(void)
static int efficeon_free_gatt_table(struct agp_bridge_data *bridge)
#define GET_PAGE_DIR_OFF(addr) (addr >> 22)
#define GET_PAGE_DIR_IDX(addr) (GET_PAGE_DIR_OFF(addr) - \
GET_PAGE_DIR_OFF(agp_bridge->gart_bus_addr))
#define GET_GATT_OFF(addr) ((addr & 0x003ff000) >> 12)
#undef  GET_GATT
#define GET_GATT(addr) (efficeon_private.gatt_pages[\
GET_PAGE_DIR_IDX(addr)]->remapped)
static int efficeon_create_gatt_table(struct agp_bridge_data *bridge)
static int efficeon_insert_memory(struct agp_memory * mem, off_t pg_start, int type)
static int efficeon_remove_memory(struct agp_memory * mem, off_t pg_start, int type)
static const struct agp_bridge_driver efficeon_driver = ;
static int __devinit agp_efficeon_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_efficeon_remove(struct pci_dev *pdev)
static int agp_efficeon_suspend(struct pci_dev *dev, pm_message_t state)
static int agp_efficeon_resume(struct pci_dev *pdev)
static struct pci_device_id agp_efficeon_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_efficeon_pci_table);
static struct pci_driver agp_efficeon_pci_driver = ;
static int __init agp_efficeon_init(void)
static void __exit agp_efficeon_cleanup(void)
module_init(agp_efficeon_init);
module_exit(agp_efficeon_cleanup);
MODULE_AUTHOR("Carlos Puchol <cpglinux@puchol.com>");
MODULE_LICENSE("GPL and additional rights");
