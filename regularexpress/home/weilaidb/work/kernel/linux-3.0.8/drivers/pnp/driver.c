static int compare_func(const char *ida, const char *idb)
int compare_pnp_id(struct pnp_id *pos, const char *id)
static const struct pnp_device_id *match_device(struct pnp_driver *drv,
struct pnp_dev *dev)
int pnp_device_attach(struct pnp_dev *pnp_dev)
void pnp_device_detach(struct pnp_dev *pnp_dev)
static int pnp_device_probe(struct device *dev)
static int pnp_device_remove(struct device *dev)
static void pnp_device_shutdown(struct device *dev)
static int pnp_bus_match(struct device *dev, struct device_driver *drv)
static int pnp_bus_suspend(struct device *dev, pm_message_t state)
static int pnp_bus_resume(struct device *dev)
struct bus_type pnp_bus_type = ;
int pnp_register_driver(struct pnp_driver *drv)
void pnp_unregister_driver(struct pnp_driver *drv)
struct pnp_id *pnp_add_id(struct pnp_dev *dev, const char *id)
EXPORT_SYMBOL(pnp_register_driver);
EXPORT_SYMBOL(pnp_unregister_driver);
EXPORT_SYMBOL(pnp_device_attach);
EXPORT_SYMBOL(pnp_device_detach);
