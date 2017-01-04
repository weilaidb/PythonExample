extern int agp_memory_reserved;
extern uint32_t tioca_gart_found;
extern struct list_head tioca_list;
static struct agp_bridge_data **sgi_tioca_agp_bridges;
static struct aper_size_info_fixed sgi_tioca_sizes[] = ;
static struct page *sgi_tioca_alloc_page(struct agp_bridge_data *bridge)
static void sgi_tioca_tlbflush(struct agp_memory *mem)
static unsigned long
sgi_tioca_mask_memory(struct agp_bridge_data *bridge, dma_addr_t addr,
int type)
static void sgi_tioca_agp_enable(struct agp_bridge_data *bridge, u32 mode)
static int sgi_tioca_configure(void)
static int sgi_tioca_fetch_size(void)
static int sgi_tioca_create_gatt_table(struct agp_bridge_data *bridge)
static int sgi_tioca_free_gatt_table(struct agp_bridge_data *bridge)
static int sgi_tioca_insert_memory(struct agp_memory *mem, off_t pg_start,
int type)
static int sgi_tioca_remove_memory(struct agp_memory *mem, off_t pg_start,
int type)
static void sgi_tioca_cache_flush(void)
static void sgi_tioca_cleanup(void)
static struct agp_bridge_data *sgi_tioca_find_bridge(struct pci_dev *pdev)
const struct agp_bridge_driver sgi_tioca_driver = ;
static int __devinit agp_sgi_init(void)
static void __devexit agp_sgi_cleanup(void)
module_init(agp_sgi_init);
module_exit(agp_sgi_cleanup);
MODULE_LICENSE("GPL and additional rights");
