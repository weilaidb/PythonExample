static struct crypto_shash *tfm;
u32 crc32c(u32 crc, const void *address, unsigned int length)
EXPORT_SYMBOL(crc32c);
static int __init libcrc32c_mod_init(void)
static void __exit libcrc32c_mod_fini(void)
module_init(libcrc32c_mod_init);
module_exit(libcrc32c_mod_fini);
MODULE_AUTHOR("Clay Haapala <chaapala@cisco.com>");
MODULE_DESCRIPTION("CRC32c (Castagnoli) calculations");
MODULE_LICENSE("GPL");
