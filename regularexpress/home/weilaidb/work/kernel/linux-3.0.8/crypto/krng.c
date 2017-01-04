static int krng_get_random(struct crypto_rng *tfm, u8 *rdata, unsigned int dlen)
static int krng_reset(struct crypto_rng *tfm, u8 *seed, unsigned int slen)
static struct crypto_alg krng_alg = ;
static int __init krng_mod_init(void)
static void __exit krng_mod_fini(void)
module_init(krng_mod_init);
module_exit(krng_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Kernel Random Number Generator");
MODULE_ALIAS("stdrng");
