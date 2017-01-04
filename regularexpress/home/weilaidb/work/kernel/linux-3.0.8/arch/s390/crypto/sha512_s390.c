static int sha512_init(struct shash_desc *desc)
static int sha512_export(struct shash_desc *desc, void *out)
static int sha512_import(struct shash_desc *desc, const void *in)
static struct shash_alg sha512_alg = ;
MODULE_ALIAS("sha512");
static int sha384_init(struct shash_desc *desc)
static struct shash_alg sha384_alg = ;
MODULE_ALIAS("sha384");
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHA512 and SHA-384 Secure Hash Algorithm");
