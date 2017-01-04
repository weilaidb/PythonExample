#define PFX	KBUILD_MODNAME ": "
#define GEODE_RNG_DATA_REG   0x50
#define GEODE_RNG_STATUS_REG 0x54
static const struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static int geode_rng_data_read(struct hwrng *rng, u32 *data)
static int geode_rng_data_present(struct hwrng *rng, int wait)
static struct hwrng geode_rng = ;
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_DESCRIPTION("H/W RNG driver for AMD Geode LX CPUs");
MODULE_LICENSE("GPL");
