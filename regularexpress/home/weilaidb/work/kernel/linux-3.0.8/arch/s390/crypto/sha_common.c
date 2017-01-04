int s390_sha_update(struct shash_desc *desc, const u8 *data, unsigned int len)
EXPORT_SYMBOL_GPL(s390_sha_update);
int s390_sha_final(struct shash_desc *desc, u8 *out)
EXPORT_SYMBOL_GPL(s390_sha_final);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("s390 SHA cipher common functions");
