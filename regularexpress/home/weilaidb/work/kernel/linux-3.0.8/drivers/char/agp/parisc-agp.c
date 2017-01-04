#define DRVNAME	"quicksilver"
#define DRVPFX	DRVNAME ": "
#define AGP8X_MODE_BIT		3
#define AGP8X_MODE		(1 << AGP8X_MODE_BIT)
static unsigned long
parisc_agp_mask_memory(struct agp_bridge_data *bridge, dma_addr_t addr,
int type);
static struct _parisc_agp_info  parisc_agp_info;
static struct gatt_mask parisc_agp_masks[] =
;
static struct aper_size_info_fixed parisc_agp_sizes[] =
;
static int
parisc_agp_fetch_size(void)
static int
parisc_agp_configure(void)
static void
parisc_agp_tlbflush(struct agp_memory *mem)
static int
parisc_agp_create_gatt_table(struct agp_bridge_data *bridge)
static int
parisc_agp_free_gatt_table(struct agp_bridge_data *bridge)
static int
parisc_agp_insert_memory(struct agp_memory *mem, off_t pg_start, int type)
static int
parisc_agp_remove_memory(struct agp_memory *mem, off_t pg_start, int type)
static unsigned long
parisc_agp_mask_memory(struct agp_bridge_data *bridge, dma_addr_t addr,
int type)
static void
parisc_agp_enable(struct agp_bridge_data *bridge, u32 mode)
static const struct agp_bridge_driver parisc_agp_driver = ;
static int __init
agp_ioc_init(void __iomem *ioc_regs)
static int
lba_find_capability(int cap)
static int __init
agp_lba_init(void __iomem *lba_hpa)
static int __init
parisc_agp_setup(void __iomem *ioc_hpa, void __iomem *lba_hpa)
static int
find_quicksilver(struct device *dev, void *data)
static int
parisc_agp_init(void)
module_init(parisc_agp_init);
MODULE_AUTHOR("Kyle McMartin <kyle@parisc-linux.org>");
MODULE_LICENSE("GPL");
