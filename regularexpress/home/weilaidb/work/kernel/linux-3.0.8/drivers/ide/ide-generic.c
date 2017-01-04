#define DRV_NAME	"ide_generic"
static int probe_mask;
module_param(probe_mask, int, 0);
MODULE_PARM_DESC(probe_mask, "probe mask for legacy ISA IDE ports");
static const struct ide_port_info ide_generic_port_info = ;
static const u16 legacy_bases[] = ;
static const int legacy_irqs[]  = ;
#elif defined(CONFIG_PLAT_M32700UT) || defined(CONFIG_PLAT_MAPPI2) || \
defined(CONFIG_PLAT_OPSPUT)
static const u16 legacy_bases[] = ;
static const int legacy_irqs[]  = ;
#elif defined(CONFIG_PLAT_MAPPI3)
static const u16 legacy_bases[] = ;
static const int legacy_irqs[]  = ;
#elif defined(CONFIG_ALPHA)
static const u16 legacy_bases[] = ;
static const int legacy_irqs[]  = ;
static const u16 legacy_bases[] = ;
static const int legacy_irqs[]  = ;
static void ide_generic_check_pci_legacy_iobases(int *primary, int *secondary)
static int __init ide_generic_init(void)
module_init(ide_generic_init);
MODULE_LICENSE("GPL");
