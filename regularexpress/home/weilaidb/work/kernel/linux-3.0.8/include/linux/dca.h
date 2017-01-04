#define DCA_H
void dca_register_notify(struct notifier_block *nb);
void dca_unregister_notify(struct notifier_block *nb);
#define DCA_PROVIDER_ADD     0x0001
#define DCA_PROVIDER_REMOVE  0x0002
struct dca_provider ;
struct dca_domain ;
struct dca_ops ;
struct dca_provider *alloc_dca_provider(struct dca_ops *ops, int priv_size);
void free_dca_provider(struct dca_provider *dca);
int register_dca_provider(struct dca_provider *dca, struct device *dev);
void unregister_dca_provider(struct dca_provider *dca, struct device *dev);
static inline void *dca_priv(struct dca_provider *dca)
#define DCA_GET_TAG_TWO_ARGS
int dca_add_requester(struct device *dev);
int dca_remove_requester(struct device *dev);
u8 dca_get_tag(int cpu);
u8 dca3_get_tag(struct device *dev, int cpu);
int __init dca_sysfs_init(void);
void __exit dca_sysfs_exit(void);
int dca_sysfs_add_provider(struct dca_provider *dca, struct device *dev);
void dca_sysfs_remove_provider(struct dca_provider *dca);
int dca_sysfs_add_req(struct dca_provider *dca, struct device *dev, int slot);
void dca_sysfs_remove_req(struct dca_provider *dca, int slot);
