static void __iomem *_iobase;
static spinlock_t lock;
static inline void
_writefield(u32 offset, void *value)
static inline void
_readfield(u32 offset, void *value)
static int
do_crypt(void *src, void *dst, int len, u32 flags)
static unsigned int
geode_aes_crypt(struct geode_aes_op *op)
static int geode_setkey_cip(struct crypto_tfm *tfm, const u8 *key,
unsigned int len)
static int geode_setkey_blk(struct crypto_tfm *tfm, const u8 *key,
unsigned int len)
static int fallback_blk_dec(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int fallback_blk_enc(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static void
geode_encrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static void
geode_decrypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static int fallback_init_cip(struct crypto_tfm *tfm)
static void fallback_exit_cip(struct crypto_tfm *tfm)
static struct crypto_alg geode_alg = ;
static int
geode_cbc_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int
geode_cbc_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int fallback_init_blk(struct crypto_tfm *tfm)
static void fallback_exit_blk(struct crypto_tfm *tfm)
static struct crypto_alg geode_cbc_alg = ;
static int
geode_ecb_decrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static int
geode_ecb_encrypt(struct blkcipher_desc *desc,
struct scatterlist *dst, struct scatterlist *src,
unsigned int nbytes)
static struct crypto_alg geode_ecb_alg = ;
static void __devexit
geode_aes_remove(struct pci_dev *dev)
static int __devinit
geode_aes_probe(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_device_id geode_aes_tbl[] = ;
MODULE_DEVICE_TABLE(pci, geode_aes_tbl);
static struct pci_driver geode_aes_driver = ;
static int __init
geode_aes_init(void)
static void __exit
geode_aes_exit(void)
MODULE_AUTHOR("Advanced Micro Devices, Inc.");
MODULE_DESCRIPTION("Geode LX Hardware AES driver");
MODULE_LICENSE("GPL");
module_init(geode_aes_init);
module_exit(geode_aes_exit);
