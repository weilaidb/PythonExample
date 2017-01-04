#define MFD_CORE_H
struct mfd_cell ;
extern int mfd_cell_enable(struct platform_device *pdev);
extern int mfd_cell_disable(struct platform_device *pdev);
extern int mfd_clone_cell(const char *cell, const char **clones,
size_t n_clones);
static inline const struct mfd_cell *mfd_get_cell(struct platform_device *pdev)
extern int mfd_add_devices(struct device *parent, int id,
struct mfd_cell *cells, int n_devs,
struct resource *mem_base,
int irq_base);
extern void mfd_remove_devices(struct device *parent);
