DEFINE_MUTEX(pnp_res_mutex);
static int pnp_assign_port(struct pnp_dev *dev, struct pnp_port *rule, int idx)
static int pnp_assign_mem(struct pnp_dev *dev, struct pnp_mem *rule, int idx)
static int pnp_assign_irq(struct pnp_dev *dev, struct pnp_irq *rule, int idx)
static int pnp_assign_dma(struct pnp_dev *dev, struct pnp_dma *rule, int idx)
void pnp_init_resources(struct pnp_dev *dev)
static void pnp_clean_resource_table(struct pnp_dev *dev)
static int pnp_assign_resources(struct pnp_dev *dev, int set)
int pnp_auto_config_dev(struct pnp_dev *dev)
int pnp_start_dev(struct pnp_dev *dev)
int pnp_stop_dev(struct pnp_dev *dev)
int pnp_activate_dev(struct pnp_dev *dev)
int pnp_disable_dev(struct pnp_dev *dev)
EXPORT_SYMBOL(pnp_start_dev);
EXPORT_SYMBOL(pnp_stop_dev);
EXPORT_SYMBOL(pnp_activate_dev);
EXPORT_SYMBOL(pnp_disable_dev);
