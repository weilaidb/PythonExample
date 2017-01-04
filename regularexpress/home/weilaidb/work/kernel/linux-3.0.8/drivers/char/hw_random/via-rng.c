enum ;
static inline u32 xstore(u32 *addr, u32 edx_in)
static int via_rng_data_present(struct hwrng *rng, int wait)
static int via_rng_data_read(struct hwrng *rng, u32 *data)
static int via_rng_init(struct hwrng *rng)
static struct hwrng via_rng = ;
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_DESCRIPTION("H/W RNG driver for VIA CPU with PadLock");
MODULE_LICENSE("GPL");
