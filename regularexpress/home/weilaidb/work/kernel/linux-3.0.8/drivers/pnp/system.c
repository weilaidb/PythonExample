static const struct pnp_device_id pnp_dev_table[] = ;
static void reserve_range(struct pnp_dev *dev, struct resource *r, int port)
static void reserve_resources_of_dev(struct pnp_dev *dev)
static int system_pnp_probe(struct pnp_dev *dev,
const struct pnp_device_id *dev_id)
static struct pnp_driver system_pnp_driver = ;
static int __init pnp_system_init(void)
fs_initcall(pnp_system_init);
