#define HP_ZX1_IOC_OFFSET	0x1000
#define HP_ZX1_IBASE		0x300
#define HP_ZX1_IMASK		0x308
#define HP_ZX1_PCOM		0x310
#define HP_ZX1_TCNFG		0x318
#define HP_ZX1_PDIR_BASE	0x320
#define HP_ZX1_IOVA_BASE	GB(1UL)
#define HP_ZX1_IOVA_SIZE	GB(1UL)
#define HP_ZX1_GART_SIZE	(HP_ZX1_IOVA_SIZE / 2)
#define HP_ZX1_SBA_IOMMU_COOKIE	0x0000badbadc0ffeeUL
#define HP_ZX1_PDIR_VALID_BIT	0x8000000000000000UL
#define HP_ZX1_IOVA_TO_PDIR(va)	((va - hp_private.iova_base) >> hp_private.io_tlb_shift)
#define AGP8X_MODE_BIT		3
#define AGP8X_MODE		(1 << AGP8X_MODE_BIT)
static struct pci_dev fake_bridge_dev;
static int hp_zx1_gart_found;
static struct aper_size_info_fixed hp_zx1_sizes[] =
;
static struct gatt_mask hp_zx1_masks[] =
;
static struct _hp_private  hp_private;
static int __init hp_zx1_ioc_shared(void)
static int __init
hp_zx1_ioc_owner (void)
static int __init
hp_zx1_ioc_init (u64 hpa)
static int
hp_zx1_lba_find_capability (volatile u8 __iomem *hpa, int cap)
static int __init
hp_zx1_lba_init (u64 hpa)
static int
hp_zx1_fetch_size(void)
static int
hp_zx1_configure (void)
static void
hp_zx1_cleanup (void)
static void
hp_zx1_tlbflush (struct agp_memory *mem)
static int
hp_zx1_create_gatt_table (struct agp_bridge_data *bridge)
static int
hp_zx1_free_gatt_table (struct agp_bridge_data *bridge)
static int
hp_zx1_insert_memory (struct agp_memory *mem, off_t pg_start, int type)
static int
hp_zx1_remove_memory (struct agp_memory *mem, off_t pg_start, int type)
static unsigned long
hp_zx1_mask_memory (struct agp_bridge_data *bridge, dma_addr_t addr, int type)
static void
hp_zx1_enable (struct agp_bridge_data *bridge, u32 mode)
const struct agp_bridge_driver hp_zx1_driver = ;
static int __init
hp_zx1_setup (u64 ioc_hpa, u64 lba_hpa)
static acpi_status __init
zx1_gart_probe (acpi_handle obj, u32 depth, void *context, void **ret)
static int __init
agp_hp_init (void)
static void __exit
agp_hp_cleanup (void)
module_init(agp_hp_init);
module_exit(agp_hp_cleanup);
MODULE_LICENSE("GPL and additional rights");
