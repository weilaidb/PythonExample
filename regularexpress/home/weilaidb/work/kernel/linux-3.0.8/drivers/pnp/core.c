static LIST_HEAD(pnp_protocols);
LIST_HEAD(pnp_global);
DEFINE_SPINLOCK(pnp_lock);
int pnp_platform_devices;
EXPORT_SYMBOL(pnp_platform_devices);
void *pnp_alloc(long size)
int pnp_register_protocol(struct pnp_protocol *protocol)
void pnp_unregister_protocol(struct pnp_protocol *protocol)
static void pnp_free_ids(struct pnp_dev *dev)
void pnp_free_resource(struct pnp_resource *pnp_res)
void pnp_free_resources(struct pnp_dev *dev)
static void pnp_release_device(struct device *dmdev)
struct pnp_dev *pnp_alloc_dev(struct pnp_protocol *protocol, int id,
const char *pnpid)
int __pnp_add_device(struct pnp_dev *dev)
int pnp_add_device(struct pnp_dev *dev)
void __pnp_remove_device(struct pnp_dev *dev)
static int __init pnp_init(void)
subsys_initcall(pnp_init);
int pnp_debug;
#if defined(CONFIG_PNP_DEBUG_MESSAGES)
module_param_named(debug, pnp_debug, int, 0644);
