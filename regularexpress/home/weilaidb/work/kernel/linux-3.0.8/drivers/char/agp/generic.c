__u32 *agp_gatt_table;
int agp_memory_reserved;
EXPORT_SYMBOL_GPL(agp_memory_reserved);
void agp_free_key(int key)
EXPORT_SYMBOL(agp_free_key);
static int agp_get_key(void)
void agp_alloc_page_array(size_t size, struct agp_memory *mem)
EXPORT_SYMBOL(agp_alloc_page_array);
void agp_free_page_array(struct agp_memory *mem)
EXPORT_SYMBOL(agp_free_page_array);
static struct agp_memory *agp_create_user_memory(unsigned long num_agp_pages)
struct agp_memory *agp_create_memory(int scratch_pages)
EXPORT_SYMBOL(agp_create_memory);
void agp_free_memory(struct agp_memory *curr)
EXPORT_SYMBOL(agp_free_memory);
#define ENTRIES_PER_PAGE		(PAGE_SIZE / sizeof(unsigned long))
struct agp_memory *agp_allocate_memory(struct agp_bridge_data *bridge,
size_t page_count, u32 type)
EXPORT_SYMBOL(agp_allocate_memory);
static int agp_return_size(void)
int agp_num_entries(void)
EXPORT_SYMBOL_GPL(agp_num_entries);
int agp_copy_info(struct agp_bridge_data *bridge, struct agp_kern_info *info)
EXPORT_SYMBOL(agp_copy_info);
int agp_bind_memory(struct agp_memory *curr, off_t pg_start)
EXPORT_SYMBOL(agp_bind_memory);
int agp_unbind_memory(struct agp_memory *curr)
EXPORT_SYMBOL(agp_unbind_memory);
static void agp_v2_parse_one(u32 *requested_mode, u32 *bridge_agpstat, u32 *vga_agpstat)
static void agp_v3_parse_one(u32 *requested_mode, u32 *bridge_agpstat, u32 *vga_agpstat)
u32 agp_collect_device_status(struct agp_bridge_data *bridge, u32 requested_mode, u32 bridge_agpstat)
EXPORT_SYMBOL(agp_collect_device_status);
void agp_device_command(u32 bridge_agpstat, bool agp_v3)
EXPORT_SYMBOL(agp_device_command);
void get_agp_version(struct agp_bridge_data *bridge)
EXPORT_SYMBOL(get_agp_version);
void agp_generic_enable(struct agp_bridge_data *bridge, u32 requested_mode)
EXPORT_SYMBOL(agp_generic_enable);
int agp_generic_create_gatt_table(struct agp_bridge_data *bridge)
EXPORT_SYMBOL(agp_generic_create_gatt_table);
int agp_generic_free_gatt_table(struct agp_bridge_data *bridge)
EXPORT_SYMBOL(agp_generic_free_gatt_table);
int agp_generic_insert_memory(struct agp_memory * mem, off_t pg_start, int type)
EXPORT_SYMBOL(agp_generic_insert_memory);
int agp_generic_remove_memory(struct agp_memory *mem, off_t pg_start, int type)
EXPORT_SYMBOL(agp_generic_remove_memory);
struct agp_memory *agp_generic_alloc_by_type(size_t page_count, int type)
EXPORT_SYMBOL(agp_generic_alloc_by_type);
void agp_generic_free_by_type(struct agp_memory *curr)
EXPORT_SYMBOL(agp_generic_free_by_type);
struct agp_memory *agp_generic_alloc_user(size_t page_count, int type)
EXPORT_SYMBOL(agp_generic_alloc_user);
int agp_generic_alloc_pages(struct agp_bridge_data *bridge, struct agp_memory *mem, size_t num_pages)
EXPORT_SYMBOL(agp_generic_alloc_pages);
struct page *agp_generic_alloc_page(struct agp_bridge_data *bridge)
EXPORT_SYMBOL(agp_generic_alloc_page);
void agp_generic_destroy_pages(struct agp_memory *mem)
EXPORT_SYMBOL(agp_generic_destroy_pages);
void agp_generic_destroy_page(struct page *page, int flags)
EXPORT_SYMBOL(agp_generic_destroy_page);
void agp_enable(struct agp_bridge_data *bridge, u32 mode)
EXPORT_SYMBOL(agp_enable);
struct agp_bridge_data *agp_generic_find_bridge(struct pci_dev *pdev)
static void ipi_handler(void *null)
void global_cache_flush(void)
EXPORT_SYMBOL(global_cache_flush);
unsigned long agp_generic_mask_memory(struct agp_bridge_data *bridge,
dma_addr_t addr, int type)
EXPORT_SYMBOL(agp_generic_mask_memory);
int agp_generic_type_to_mask_type(struct agp_bridge_data *bridge,
int type)
EXPORT_SYMBOL(agp_generic_type_to_mask_type);
int agp3_generic_fetch_size(void)
EXPORT_SYMBOL(agp3_generic_fetch_size);
void agp3_generic_tlbflush(struct agp_memory *mem)
EXPORT_SYMBOL(agp3_generic_tlbflush);
int agp3_generic_configure(void)
EXPORT_SYMBOL(agp3_generic_configure);
void agp3_generic_cleanup(void)
EXPORT_SYMBOL(agp3_generic_cleanup);
const struct aper_size_info_16 agp3_generic_sizes[AGP_GENERIC_SIZES_ENTRIES] =
;
EXPORT_SYMBOL(agp3_generic_sizes);
