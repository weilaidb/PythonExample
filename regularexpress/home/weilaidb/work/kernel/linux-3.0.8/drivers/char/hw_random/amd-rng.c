#define PFX	KBUILD_MODNAME ": "
static const struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct pci_dev *amd_pdev;
static int amd_rng_data_present(struct hwrng *rng, int wait)
static int amd_rng_data_read(struct hwrng *rng, u32 *data)
static int amd_rng_init(struct hwrng *rng)
static void amd_rng_cleanup(struct hwrng *rng)
static struct hwrng amd_rng = ;
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_AUTHOR("The Linux Kernel team");
MODULE_DESCRIPTION("H/W RNG driver for AMD chipsets");
MODULE_LICENSE("GPL");
