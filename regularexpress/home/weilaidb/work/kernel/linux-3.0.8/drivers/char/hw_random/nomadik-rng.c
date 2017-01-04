static struct clk *rng_clk;
static int nmk_rng_read(struct hwrng *rng, void *data, size_t max, bool wait)
static struct hwrng nmk_rng = ;
static int nmk_rng_probe(struct amba_device *dev, const struct amba_id *id)
static int nmk_rng_remove(struct amba_device *dev)
static struct amba_id nmk_rng_ids[] = ;
static struct amba_driver nmk_rng_driver = ;
static int __init nmk_rng_init(void)
static void __devexit nmk_rng_exit(void)
module_init(nmk_rng_init);
module_exit(nmk_rng_exit);
MODULE_LICENSE("GPL");
