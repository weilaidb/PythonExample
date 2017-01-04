#define AGPGART_VERSION_MAJOR 0
#define AGPGART_VERSION_MINOR 103
static const struct agp_version agp_current_version =
;
struct agp_bridge_data *(*agp_find_bridge)(struct pci_dev *) =
&agp_generic_find_bridge;
struct agp_bridge_data *agp_bridge;
LIST_HEAD(agp_bridges);
EXPORT_SYMBOL(agp_bridge);
EXPORT_SYMBOL(agp_bridges);
EXPORT_SYMBOL(agp_find_bridge);
struct agp_bridge_data *agp_backend_acquire(struct pci_dev *pdev)
EXPORT_SYMBOL(agp_backend_acquire);
void agp_backend_release(struct agp_bridge_data *bridge)
EXPORT_SYMBOL(agp_backend_release);
static const struct  maxes_table[] = ;
static int agp_find_max(void)
static int agp_backend_initialize(struct agp_bridge_data *bridge)
static void agp_backend_cleanup(struct agp_bridge_data *bridge)
struct agp_bridge_data *agp_alloc_bridge(void)
EXPORT_SYMBOL(agp_alloc_bridge);
void agp_put_bridge(struct agp_bridge_data *bridge)
EXPORT_SYMBOL(agp_put_bridge);
int agp_add_bridge(struct agp_bridge_data *bridge)
EXPORT_SYMBOL_GPL(agp_add_bridge);
void agp_remove_bridge(struct agp_bridge_data *bridge)
EXPORT_SYMBOL_GPL(agp_remove_bridge);
int agp_off;
int agp_try_unsupported_boot;
EXPORT_SYMBOL(agp_off);
EXPORT_SYMBOL(agp_try_unsupported_boot);
static int __init agp_init(void)
static void __exit agp_exit(void)
static __init int agp_setup(char *s)
__setup("agp=", agp_setup);
MODULE_AUTHOR("Dave Jones <davej@redhat.com>");
MODULE_DESCRIPTION("AGP GART driver");
MODULE_LICENSE("GPL and additional rights");
MODULE_ALIAS_MISCDEV(AGPGART_MINOR);
module_init(agp_init);
module_exit(agp_exit);
