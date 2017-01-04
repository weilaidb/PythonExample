struct octeon_rng ;
static int octeon_rng_init(struct hwrng *rng)
static void octeon_rng_cleanup(struct hwrng *rng)
static int octeon_rng_data_read(struct hwrng *rng, u32 *data)
static int __devinit octeon_rng_probe(struct platform_device *pdev)
static int __exit octeon_rng_remove(struct platform_device *pdev)
static struct platform_driver octeon_rng_driver = ;
static int __init octeon_rng_mod_init(void)
static void __exit octeon_rng_mod_exit(void)
module_init(octeon_rng_mod_init);
module_exit(octeon_rng_mod_exit);
MODULE_AUTHOR("David Daney");
MODULE_LICENSE("GPL");
