int mfd_cell_enable(struct platform_device *pdev)
EXPORT_SYMBOL(mfd_cell_enable);
int mfd_cell_disable(struct platform_device *pdev)
EXPORT_SYMBOL(mfd_cell_disable);
static int mfd_platform_add_cell(struct platform_device *pdev,
const struct mfd_cell *cell)
static int mfd_add_device(struct device *parent, int id,
const struct mfd_cell *cell,
struct resource *mem_base,
int irq_base)
int mfd_add_devices(struct device *parent, int id,
struct mfd_cell *cells, int n_devs,
struct resource *mem_base,
int irq_base)
EXPORT_SYMBOL(mfd_add_devices);
static int mfd_remove_devices_fn(struct device *dev, void *c)
void mfd_remove_devices(struct device *parent)
EXPORT_SYMBOL(mfd_remove_devices);
int mfd_clone_cell(const char *cell, const char **clones, size_t n_clones)
EXPORT_SYMBOL(mfd_clone_cell);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ian Molton, Dmitry Baryshkov");
