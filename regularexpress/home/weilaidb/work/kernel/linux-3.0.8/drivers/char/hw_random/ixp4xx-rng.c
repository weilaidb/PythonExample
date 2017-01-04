static int ixp4xx_rng_data_read(struct hwrng *rng, u32 *buffer)
static struct hwrng ixp4xx_rng_ops = ;
static int __init ixp4xx_rng_init(void)
static void __exit ixp4xx_rng_exit(void)
module_init(ixp4xx_rng_init);
module_exit(ixp4xx_rng_exit);
MODULE_AUTHOR("Deepak Saxena <dsaxena@plexity.net>");
MODULE_DESCRIPTION("H/W Random Number Generator (RNG) driver for IXP4xx");
MODULE_LICENSE("GPL");
