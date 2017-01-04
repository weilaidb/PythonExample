static int sha1_init(struct shash_desc *desc)
static int sha1_export(struct shash_desc *desc, void *out)
static int sha1_import(struct shash_desc *desc, const void *in)
static struct shash_alg alg = ;
static int __init sha1_s390_init(void)
static void __exit sha1_s390_fini(void)
module_init(sha1_s390_init);
module_exit(sha1_s390_fini);
MODULE_ALIAS("sha1");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SHA1 Secure Hash Algorithm");
