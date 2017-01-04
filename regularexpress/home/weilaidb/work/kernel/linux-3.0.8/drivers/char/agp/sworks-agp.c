#define SVWRKS_COMMAND		0x04
#define SVWRKS_APSIZE		0x10
#define SVWRKS_MMBASE		0x14
#define SVWRKS_CACHING		0x4b
#define SVWRKS_AGP_ENABLE	0x60
#define SVWRKS_FEATURE		0x68
#define SVWRKS_SIZE_MASK	0xfe000000
#define SVWRKS_GART_CACHE	0x02
#define SVWRKS_GATTBASE		0x04
#define SVWRKS_TLBFLUSH		0x10
#define SVWRKS_POSTFLUSH	0x14
#define SVWRKS_DIRFLUSH		0x0c
struct serverworks_page_map ;
static struct _serverworks_private  serverworks_private;
static int serverworks_create_page_map(struct serverworks_page_map *page_map)
static void serverworks_free_page_map(struct serverworks_page_map *page_map)
static void serverworks_free_gatt_pages(void)
static int serverworks_create_gatt_pages(int nr_tables)
#define SVRWRKS_GET_GATT(addr) (serverworks_private.gatt_pages[\
GET_PAGE_DIR_IDX(addr)]->remapped)
#define GET_PAGE_DIR_OFF(addr) (addr >> 22)
#define GET_PAGE_DIR_IDX(addr) (GET_PAGE_DIR_OFF(addr) - \
GET_PAGE_DIR_OFF(agp_bridge->gart_bus_addr))
#define GET_GATT_OFF(addr) ((addr & 0x003ff000) >> 12)
static int serverworks_create_gatt_table(struct agp_bridge_data *bridge)
static int serverworks_free_gatt_table(struct agp_bridge_data *bridge)
static int serverworks_fetch_size(void)
static void serverworks_tlbflush(struct agp_memory *temp)
static int serverworks_configure(void)
static void serverworks_cleanup(void)
static int serverworks_insert_memory(struct agp_memory *mem,
off_t pg_start, int type)
static int serverworks_remove_memory(struct agp_memory *mem, off_t pg_start,
int type)
static const struct gatt_mask serverworks_masks[] =
;
static const struct aper_size_info_lvl2 serverworks_sizes[7] =
;
static void serverworks_agp_enable(struct agp_bridge_data *bridge, u32 mode)
static const struct agp_bridge_driver sworks_driver = ;
static int __devinit agp_serverworks_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_serverworks_remove(struct pci_dev *pdev)
static struct pci_device_id agp_serverworks_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_serverworks_pci_table);
static struct pci_driver agp_serverworks_pci_driver = ;
static int __init agp_serverworks_init(void)
static void __exit agp_serverworks_cleanup(void)
module_init(agp_serverworks_init);
module_exit(agp_serverworks_cleanup);
MODULE_LICENSE("GPL and additional rights");
