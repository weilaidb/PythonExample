#define USE_PCI_DMA_API 1
#define USE_PCI_DMA_API 0
struct intel_gtt_driver ;
static struct _intel_private  intel_private;
#define INTEL_GTT_GEN	intel_private.driver->gen
#define IS_G33		intel_private.driver->is_g33
#define IS_PINEVIEW	intel_private.driver->is_pineview
#define IS_IRONLAKE	intel_private.driver->is_ironlake
#define HAS_PGTBL_EN	intel_private.driver->has_pgtbl_enable
int intel_gtt_map_memory(struct page **pages, unsigned int num_entries,
struct scatterlist **sg_list, int *num_sg)
EXPORT_SYMBOL(intel_gtt_map_memory);
void intel_gtt_unmap_memory(struct scatterlist *sg_list, int num_sg)
EXPORT_SYMBOL(intel_gtt_unmap_memory);
static void intel_fake_agp_enable(struct agp_bridge_data *bridge, u32 mode)
static struct page *i8xx_alloc_pages(void)
static void i8xx_destroy_pages(struct page *page)
#define I810_GTT_ORDER 4
static int i810_setup(void)
static void i810_cleanup(void)
static int i810_insert_dcache_entries(struct agp_memory *mem, off_t pg_start,
int type)
static struct agp_memory *alloc_agpphysmem_i8xx(size_t pg_count, int type)
static void intel_i810_free_by_type(struct agp_memory *curr)
static int intel_gtt_setup_scratch_page(void)
static void i810_write_entry(dma_addr_t addr, unsigned int entry,
unsigned int flags)
static const struct aper_size_info_fixed intel_fake_agp_sizes[] = ;
static unsigned int intel_gtt_stolen_size(void)
static void i965_adjust_pgetbl_size(unsigned int size_flag)
static unsigned int i965_gtt_total_entries(void)
static unsigned int intel_gtt_total_entries(void)
static unsigned int intel_gtt_mappable_entries(void)
static void intel_gtt_teardown_scratch_page(void)
static void intel_gtt_cleanup(void)
static int intel_gtt_init(void)
static int intel_fake_agp_fetch_size(void)
static void i830_cleanup(void)
static void i830_chipset_flush(void)
static void i830_write_entry(dma_addr_t addr, unsigned int entry,
unsigned int flags)
static bool intel_enable_gtt(void)
static int i830_setup(void)
static int intel_fake_agp_create_gatt_table(struct agp_bridge_data *bridge)
static int intel_fake_agp_free_gatt_table(struct agp_bridge_data *bridge)
static int intel_fake_agp_configure(void)
static bool i830_check_flags(unsigned int flags)
void intel_gtt_insert_sg_entries(struct scatterlist *sg_list,
unsigned int sg_len,
unsigned int pg_start,
unsigned int flags)
EXPORT_SYMBOL(intel_gtt_insert_sg_entries);
void intel_gtt_insert_pages(unsigned int first_entry, unsigned int num_entries,
struct page **pages, unsigned int flags)
EXPORT_SYMBOL(intel_gtt_insert_pages);
static int intel_fake_agp_insert_entries(struct agp_memory *mem,
off_t pg_start, int type)
void intel_gtt_clear_range(unsigned int first_entry, unsigned int num_entries)
EXPORT_SYMBOL(intel_gtt_clear_range);
static int intel_fake_agp_remove_entries(struct agp_memory *mem,
off_t pg_start, int type)
static struct agp_memory *intel_fake_agp_alloc_by_type(size_t pg_count,
int type)
static int intel_alloc_chipset_flush_resource(void)
static void intel_i915_setup_chipset_flush(void)
static void intel_i965_g33_setup_chipset_flush(void)
static void intel_i9xx_setup_flush(void)
static void i9xx_cleanup(void)
static void i9xx_chipset_flush(void)
static void i965_write_entry(dma_addr_t addr,
unsigned int entry,
unsigned int flags)
static bool gen6_check_flags(unsigned int flags)
static void gen6_write_entry(dma_addr_t addr, unsigned int entry,
unsigned int flags)
static void gen6_cleanup(void)
static int i9xx_setup(void)
static const struct agp_bridge_driver intel_fake_agp_driver = ;
static const struct intel_gtt_driver i81x_gtt_driver = ;
static const struct intel_gtt_driver i8xx_gtt_driver = ;
static const struct intel_gtt_driver i915_gtt_driver = ;
static const struct intel_gtt_driver g33_gtt_driver = ;
static const struct intel_gtt_driver pineview_gtt_driver = ;
static const struct intel_gtt_driver i965_gtt_driver = ;
static const struct intel_gtt_driver g4x_gtt_driver = ;
static const struct intel_gtt_driver ironlake_gtt_driver = ;
static const struct intel_gtt_driver sandybridge_gtt_driver = ;
static const struct intel_gtt_driver_description  intel_gtt_chipsets[] = ;
static int find_gmch(u16 device)
int intel_gmch_probe(struct pci_dev *pdev,
struct agp_bridge_data *bridge)
EXPORT_SYMBOL(intel_gmch_probe);
const struct intel_gtt *intel_gtt_get(void)
EXPORT_SYMBOL(intel_gtt_get);
void intel_gtt_chipset_flush(void)
EXPORT_SYMBOL(intel_gtt_chipset_flush);
void intel_gmch_remove(struct pci_dev *pdev)
EXPORT_SYMBOL(intel_gmch_remove);
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_LICENSE("GPL and additional rights");
