static inline void le32_to_cpu_array(u32 *buf, unsigned int words)
static inline void cpu_to_le32_array(u32 *buf, unsigned int words)
static inline void md5_transform_helper(struct md5_state *ctx)
static int md5_init(struct shash_desc *desc)
static int md5_update(struct shash_desc *desc, const u8 *data, unsigned int len)
static int md5_final(struct shash_desc *desc, u8 *out)
static int md5_export(struct shash_desc *desc, void *out)
static int md5_import(struct shash_desc *desc, const void *in)
static struct shash_alg alg = ;
static int __init md5_mod_init(void)
static void __exit md5_mod_fini(void)
module_init(md5_mod_init);
module_exit(md5_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MD5 Message Digest Algorithm");
