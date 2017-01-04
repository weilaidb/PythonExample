static int sha256_init(struct shash_desc *desc)
static int sha256_export(struct shash_desc *desc, void *out)
static int sha256_import(struct shash_desc *desc, const void *in)
static struct shash_alg alg = ;
static int sha256_s390_init(void)
static void __exit sha256_s390_fini(void)
module_init(sha256_s390_init);
module_exit(sha256_s390_fini);
MODULE_ALIAS("sha256");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHA256 Secure Hash Algorithm");
