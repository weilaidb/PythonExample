static int sha1_init(struct shash_desc *desc)
static int sha1_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
static int sha1_final(struct shash_desc *desc, u8 *out)
static int sha1_export(struct shash_desc *desc, void *out)
static int sha1_import(struct shash_desc *desc, const void *in)
static struct shash_alg alg = ;
static int __init sha1_generic_mod_init(void)
static void __exit sha1_generic_mod_fini(void)
module_init(sha1_generic_mod_init);
module_exit(sha1_generic_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHA1 Secure Hash Algorithm");
MODULE_ALIAS("sha1");
