#define MAX_KEYLEN 32
#define NPE_CTX_LEN 80
#define AES_BLOCK128 16
#define NPE_OP_HASH_VERIFY   0x01
#define NPE_OP_CCM_ENABLE    0x04
#define NPE_OP_CRYPT_ENABLE  0x08
#define NPE_OP_HASH_ENABLE   0x10
#define NPE_OP_NOT_IN_PLACE  0x20
#define NPE_OP_HMAC_DISABLE  0x40
#define NPE_OP_CRYPT_ENCRYPT 0x80
#define NPE_OP_CCM_GEN_MIC   0xcc
#define NPE_OP_HASH_GEN_ICV  0x50
#define NPE_OP_ENC_GEN_KEY   0xc9
#define MOD_ECB     0x0000
#define MOD_CTR     0x1000
#define MOD_CBC_ENC 0x2000
#define MOD_CBC_DEC 0x3000
#define MOD_CCM_ENC 0x4000
#define MOD_CCM_DEC 0x5000
#define KEYLEN_128  4
#define KEYLEN_192  6
#define KEYLEN_256  8
#define CIPH_DECR   0x0000
#define CIPH_ENCR   0x0400
#define MOD_DES     0x0000
#define MOD_TDEA2   0x0100
#define MOD_3DES   0x0200
#define MOD_AES     0x0800
#define MOD_AES128  (0x0800 | KEYLEN_128)
#define MOD_AES192  (0x0900 | KEYLEN_192)
#define MOD_AES256  (0x0a00 | KEYLEN_256)
#define MAX_IVLEN   16
#define NPE_ID      2
#define NPE_QLEN    16
#define NPE_QLEN_TOTAL 64
#define SEND_QID    29
#define RECV_QID    30
#define CTL_FLAG_UNUSED		0x0000
#define CTL_FLAG_USED		0x1000
#define CTL_FLAG_PERFORM_ABLK	0x0001
#define CTL_FLAG_GEN_ICV	0x0002
#define CTL_FLAG_GEN_REVAES	0x0004
#define CTL_FLAG_PERFORM_AEAD	0x0008
#define CTL_FLAG_MASK		0x000f
#define HMAC_IPAD_VALUE   0x36
#define HMAC_OPAD_VALUE   0x5C
#define HMAC_PAD_BLOCKLEN SHA1_BLOCK_SIZE
#define MD5_DIGEST_SIZE   16
struct buffer_desc ;
struct crypt_ctl ;
struct ablk_ctx ;
struct aead_ctx ;
struct ix_hash_algo ;
struct ix_sa_dir ;
struct ixp_ctx ;
struct ixp_alg ;
static const struct ix_hash_algo hash_alg_md5 = ;
static const struct ix_hash_algo hash_alg_sha1 = ;
static struct npe *npe_c;
static struct dma_pool *buffer_pool = NULL;
static struct dma_pool *ctx_pool = NULL;
static struct crypt_ctl *crypt_virt = NULL;
static dma_addr_t crypt_phys;
static int support_aes = 1;
static void dev_release(struct device *dev)
#define DRIVER_NAME "ixp4xx_crypto"
static struct platform_device pseudo_dev = ;
static struct device *dev = &pseudo_dev.dev;
static inline dma_addr_t crypt_virt2phys(struct crypt_ctl *virt)
static inline struct crypt_ctl *crypt_phys2virt(dma_addr_t phys)
static inline u32 cipher_cfg_enc(struct crypto_tfm *tfm)
static inline u32 cipher_cfg_dec(struct crypto_tfm *tfm)
static inline const struct ix_hash_algo *ix_hash(struct crypto_tfm *tfm)
static int setup_crypt_desc(void)
static spinlock_t desc_lock;
static struct crypt_ctl *get_crypt_desc(void)
static spinlock_t emerg_lock;
static struct crypt_ctl *get_crypt_desc_emerg(void)
static void free_buf_chain(struct device *dev, struct buffer_desc *buf,u32 phys)
static struct tasklet_struct crypto_done_tasklet;
static void finish_scattered_hmac(struct crypt_ctl *crypt)
static void one_packet(dma_addr_t phys)
static void irqhandler(void *_unused)
static void crypto_done_action(unsigned long arg)
static int init_ixp_crypto(void)
static void release_ixp_crypto(void)
static void reset_sa_dir(struct ix_sa_dir *dir)
static int init_sa_dir(struct ix_sa_dir *dir)
static void free_sa_dir(struct ix_sa_dir *dir)
static int init_tfm(struct crypto_tfm *tfm)
static int init_tfm_ablk(struct crypto_tfm *tfm)
static int init_tfm_aead(struct crypto_tfm *tfm)
static void exit_tfm(struct crypto_tfm *tfm)
static int register_chain_var(struct crypto_tfm *tfm, u8 xpad, u32 target,
int init_len, u32 ctx_addr, const u8 *key, int key_len)
static int setup_auth(struct crypto_tfm *tfm, int encrypt, unsigned authsize,
const u8 *key, int key_len, unsigned digest_len)
static int gen_rev_aes_key(struct crypto_tfm *tfm)
static int setup_cipher(struct crypto_tfm *tfm, int encrypt,
const u8 *key, int key_len)
static struct buffer_desc *chainup_buffers(struct device *dev,
struct scatterlist *sg,	unsigned nbytes,
struct buffer_desc *buf, gfp_t flags,
enum dma_data_direction dir)
static int ablk_setkey(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int key_len)
static int ablk_rfc3686_setkey(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int key_len)
static int ablk_perform(struct ablkcipher_request *req, int encrypt)
static int ablk_encrypt(struct ablkcipher_request *req)
static int ablk_decrypt(struct ablkcipher_request *req)
static int ablk_rfc3686_crypt(struct ablkcipher_request *req)
static int hmac_inconsistent(struct scatterlist *sg, unsigned start,
unsigned int nbytes)
static int aead_perform(struct aead_request *req, int encrypt,
int cryptoffset, int eff_cryptlen, u8 *iv)
static int aead_setup(struct crypto_aead *tfm, unsigned int authsize)
static int aead_setauthsize(struct crypto_aead *tfm, unsigned int authsize)
static int aead_setkey(struct crypto_aead *tfm, const u8 *key,
unsigned int keylen)
static int aead_encrypt(struct aead_request *req)
static int aead_decrypt(struct aead_request *req)
static int aead_givencrypt(struct aead_givcrypt_request *req)
static struct ixp_alg ixp4xx_algos[] = ;
#define IXP_POSTFIX "-ixp4xx"
static int __init ixp_module_init(void)
static void __exit ixp_module_exit(void)
module_init(ixp_module_init);
module_exit(ixp_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Hohnstaedt <chohnstaedt@innominate.com>");
MODULE_DESCRIPTION("IXP4xx hardware crypto");
