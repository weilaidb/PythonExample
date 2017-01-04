static void quirk_awe32_add_ports(struct pnp_dev *dev,
struct pnp_option *option,
unsigned int offset)
static void quirk_awe32_resources(struct pnp_dev *dev)
static void quirk_cmi8330_resources(struct pnp_dev *dev)
static void quirk_sb16audio_resources(struct pnp_dev *dev)
static struct pnp_option *pnp_clone_dependent_set(struct pnp_dev *dev,
unsigned int set)
static void quirk_add_irq_optional_dependent_sets(struct pnp_dev *dev)
static void quirk_ad1815_mpu_resources(struct pnp_dev *dev)
static void quirk_system_pci_resources(struct pnp_dev *dev)
static struct pnp_fixup pnp_fixups[] = ;
void pnp_fixup_device(struct pnp_dev *dev)
