#define DCA_VERSION "1.12.1"
MODULE_VERSION(DCA_VERSION);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Intel Corporation");
static DEFINE_SPINLOCK(dca_lock);
static LIST_HEAD(dca_domains);
static BLOCKING_NOTIFIER_HEAD(dca_provider_chain);
static int dca_providers_blocked;
static struct pci_bus *dca_pci_rc_from_dev(struct device *dev)
static struct dca_domain *dca_allocate_domain(struct pci_bus *rc)
static void dca_free_domain(struct dca_domain *domain)
static int dca_provider_ioat_ver_3_0(struct device *dev)
static void unregister_dca_providers(void)
static struct dca_domain *dca_find_domain(struct pci_bus *rc)
static struct dca_domain *dca_get_domain(struct device *dev)
static struct dca_provider *dca_find_provider_by_dev(struct device *dev)
int dca_add_requester(struct device *dev)
EXPORT_SYMBOL_GPL(dca_add_requester);
int dca_remove_requester(struct device *dev)
EXPORT_SYMBOL_GPL(dca_remove_requester);
u8 dca_common_get_tag(struct device *dev, int cpu)
u8 dca3_get_tag(struct device *dev, int cpu)
EXPORT_SYMBOL_GPL(dca3_get_tag);
u8 dca_get_tag(int cpu)
EXPORT_SYMBOL_GPL(dca_get_tag);
struct dca_provider *alloc_dca_provider(struct dca_ops *ops, int priv_size)
EXPORT_SYMBOL_GPL(alloc_dca_provider);
void free_dca_provider(struct dca_provider *dca)
EXPORT_SYMBOL_GPL(free_dca_provider);
int register_dca_provider(struct dca_provider *dca, struct device *dev)
EXPORT_SYMBOL_GPL(register_dca_provider);
void unregister_dca_provider(struct dca_provider *dca, struct device *dev)
EXPORT_SYMBOL_GPL(unregister_dca_provider);
void dca_register_notify(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(dca_register_notify);
void dca_unregister_notify(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(dca_unregister_notify);
static int __init dca_init(void)
static void __exit dca_exit(void)
arch_initcall(dca_init);
module_exit(dca_exit);
