static struct class *dca_class;
static struct idr dca_idr;
static spinlock_t dca_idr_lock;
int dca_sysfs_add_req(struct dca_provider *dca, struct device *dev, int slot)
void dca_sysfs_remove_req(struct dca_provider *dca, int slot)
int dca_sysfs_add_provider(struct dca_provider *dca, struct device *dev)
void dca_sysfs_remove_provider(struct dca_provider *dca)
int __init dca_sysfs_init(void)
void __exit dca_sysfs_exit(void)
