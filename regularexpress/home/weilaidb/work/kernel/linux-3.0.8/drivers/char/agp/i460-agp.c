#define INTEL_I460_BAPBASE		0x98
#define INTEL_I460_GXBCTL		0xa0
#define INTEL_I460_AGPSIZ		0xa2
#define INTEL_I460_ATTBASE		0xfe200000
#define INTEL_I460_GATT_VALID		(1UL << 24)
#define INTEL_I460_GATT_COHERENT	(1UL << 25)
#define I460_LARGE_IO_PAGES		0
#if I460_LARGE_IO_PAGES
# define I460_IO_PAGE_SHIFT		i460.io_page_shift
# define I460_IO_PAGE_SHIFT		12
#define I460_IOPAGES_PER_KPAGE		(PAGE_SIZE >> I460_IO_PAGE_SHIFT)
#define I460_KPAGES_PER_IOPAGE		(1 << (I460_IO_PAGE_SHIFT - PAGE_SHIFT))
#define I460_SRAM_IO_DISABLE		(1 << 4)
#define I460_BAPBASE_ENABLE		(1 << 3)
#define I460_AGPSIZ_MASK		0x7
#define I460_4M_PS			(1 << 1)
#define I460_GXBCTL_OOG		(1UL << 0)
#define I460_GXBCTL_BWC		(1UL << 2)
#define RD_GATT(index)		readl((u32 *) i460.gatt + (index))
#define WR_GATT(index, val)	writel((val), (u32 *) i460.gatt + (index))
#define WR_FLUSH_GATT(index)	RD_GATT(index)
static unsigned long i460_mask_memory (struct agp_bridge_data *bridge,
dma_addr_t addr, int type);
static struct  i460;
static const struct aper_size_info_8 i460_sizes[3] =
;
static struct gatt_mask i460_masks[] =
;
static int i460_fetch_size (void)
static void i460_tlb_flush (struct agp_memory *mem)
static void i460_write_agpsiz (u8 size_value)
static void i460_cleanup (void)
static int i460_configure (void)
static int i460_create_gatt_table (struct agp_bridge_data *bridge)
static int i460_free_gatt_table (struct agp_bridge_data *bridge)
static int i460_insert_memory_small_io_page (struct agp_memory *mem,
off_t pg_start, int type)
static int i460_remove_memory_small_io_page(struct agp_memory *mem,
off_t pg_start, int type)
#if I460_LARGE_IO_PAGES
static int i460_alloc_large_page (struct lp_desc *lp)
static void i460_free_large_page (struct lp_desc *lp)
static int i460_insert_memory_large_io_page (struct agp_memory *mem,
off_t pg_start, int type)
static int i460_remove_memory_large_io_page (struct agp_memory *mem,
off_t pg_start, int type)
static int i460_insert_memory (struct agp_memory *mem,
off_t pg_start, int type)
static int i460_remove_memory (struct agp_memory *mem,
off_t pg_start, int type)
static struct page *i460_alloc_page (struct agp_bridge_data *bridge)
static void i460_destroy_page (struct page *page, int flags)
static unsigned long i460_mask_memory (struct agp_bridge_data *bridge,
dma_addr_t addr, int type)
const struct agp_bridge_driver intel_i460_driver = ;
static int __devinit agp_intel_i460_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_intel_i460_remove(struct pci_dev *pdev)
static struct pci_device_id agp_intel_i460_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_intel_i460_pci_table);
static struct pci_driver agp_intel_i460_pci_driver = ;
static int __init agp_intel_i460_init(void)
static void __exit agp_intel_i460_cleanup(void)
module_init(agp_intel_i460_init);
module_exit(agp_intel_i460_cleanup);
MODULE_AUTHOR("Chris Ahna <Christopher.J.Ahna@intel.com>");
MODULE_LICENSE("GPL and additional rights");
