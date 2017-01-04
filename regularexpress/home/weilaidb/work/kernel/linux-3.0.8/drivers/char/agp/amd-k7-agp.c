#define AMD_MMBASE	0x14
#define AMD_APSIZE	0xac
#define AMD_MODECNTL	0xb0
#define AMD_MODECNTL2	0xb2
#define AMD_GARTENABLE	0x02
#define AMD_ATTBASE	0x04
#define AMD_TLBFLUSH	0x0c
#define AMD_CACHEENTRY	0x10
static struct pci_device_id agp_amdk7_pci_table[];
struct amd_page_map ;
static struct _amd_irongate_private  amd_irongate_private;
static int amd_create_page_map(struct amd_page_map *page_map)
static void amd_free_page_map(struct amd_page_map *page_map)
static void amd_free_gatt_pages(void)
static int amd_create_gatt_pages(int nr_tables)
#define GET_PAGE_DIR_OFF(addr) (addr >> 22)
#define GET_PAGE_DIR_IDX(addr) (GET_PAGE_DIR_OFF(addr) - \
GET_PAGE_DIR_OFF(agp_bridge->gart_bus_addr))
#define GET_GATT_OFF(addr) ((addr & 0x003ff000) >> 12)
#define GET_GATT(addr) (amd_irongate_private.gatt_pages[\
GET_PAGE_DIR_IDX(addr)]->remapped)
static int amd_create_gatt_table(struct agp_bridge_data *bridge)
static int amd_free_gatt_table(struct agp_bridge_data *bridge)
static int amd_irongate_fetch_size(void)
static int amd_irongate_configure(void)
static void amd_irongate_cleanup(void)
static void amd_irongate_tlbflush(struct agp_memory *temp)
static int amd_insert_memory(struct agp_memory *mem, off_t pg_start, int type)
static int amd_remove_memory(struct agp_memory *mem, off_t pg_start, int type)
static const struct aper_size_info_lvl2 amd_irongate_sizes[7] =
;
static const struct gatt_mask amd_irongate_masks[] =
;
static const struct agp_bridge_driver amd_irongate_driver = ;
static struct agp_device_ids amd_agp_device_ids[] __devinitdata =
;
static int __devinit agp_amdk7_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_amdk7_remove(struct pci_dev *pdev)
static int agp_amdk7_suspend(struct pci_dev *pdev, pm_message_t state)
static int agp_amdk7_resume(struct pci_dev *pdev)
static struct pci_device_id agp_amdk7_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_amdk7_pci_table);
static struct pci_driver agp_amdk7_pci_driver = ;
static int __init agp_amdk7_init(void)
static void __exit agp_amdk7_cleanup(void)
module_init(agp_amdk7_init);
module_exit(agp_amdk7_cleanup);
MODULE_LICENSE("GPL and additional rights");
