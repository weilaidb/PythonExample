#define ATI_GART_MMBASE_ADDR	0x14
#define ATI_RS100_APSIZE	0xac
#define ATI_RS100_IG_AGPMODE	0xb0
#define ATI_RS300_APSIZE	0xf8
#define ATI_RS300_IG_AGPMODE	0xfc
#define ATI_GART_FEATURE_ID		0x00
#define ATI_GART_BASE			0x04
#define ATI_GART_CACHE_SZBASE		0x08
#define ATI_GART_CACHE_CNTRL		0x0c
#define ATI_GART_CACHE_ENTRY_CNTRL	0x10
static const struct aper_size_info_lvl2 ati_generic_sizes[7] =
;
static struct gatt_mask ati_generic_masks[] =
;
struct ati_page_map ;
static struct _ati_generic_private  ati_generic_private;
static int ati_create_page_map(struct ati_page_map *page_map)
static void ati_free_page_map(struct ati_page_map *page_map)
static void ati_free_gatt_pages(void)
static int ati_create_gatt_pages(int nr_tables)
static int is_r200(void)
static int ati_fetch_size(void)
static void ati_tlbflush(struct agp_memory * mem)
static void ati_cleanup(void)
static int ati_configure(void)
static int agp_ati_suspend(struct pci_dev *dev, pm_message_t state)
static int agp_ati_resume(struct pci_dev *dev)
#define GET_PAGE_DIR_OFF(addr) (addr >> 22)
#define GET_PAGE_DIR_IDX(addr) (GET_PAGE_DIR_OFF(addr) - \
GET_PAGE_DIR_OFF(agp_bridge->gart_bus_addr))
#define GET_GATT_OFF(addr) ((addr & 0x003ff000) >> 12)
#undef  GET_GATT
#define GET_GATT(addr) (ati_generic_private.gatt_pages[\
GET_PAGE_DIR_IDX(addr)]->remapped)
static int ati_insert_memory(struct agp_memory * mem,
off_t pg_start, int type)
static int ati_remove_memory(struct agp_memory * mem, off_t pg_start,
int type)
static int ati_create_gatt_table(struct agp_bridge_data *bridge)
static int ati_free_gatt_table(struct agp_bridge_data *bridge)
static const struct agp_bridge_driver ati_generic_bridge = ;
static struct agp_device_ids ati_agp_device_ids[] __devinitdata =
;
static int __devinit agp_ati_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_ati_remove(struct pci_dev *pdev)
static struct pci_device_id agp_ati_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_ati_pci_table);
static struct pci_driver agp_ati_pci_driver = ;
static int __init agp_ati_init(void)
static void __exit agp_ati_cleanup(void)
module_init(agp_ati_init);
module_exit(agp_ati_cleanup);
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_LICENSE("GPL and additional rights");
