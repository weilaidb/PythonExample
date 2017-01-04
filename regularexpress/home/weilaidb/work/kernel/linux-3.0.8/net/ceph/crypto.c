int ceph_crypto_key_clone(struct ceph_crypto_key *dst,
const struct ceph_crypto_key *src)
int ceph_crypto_key_encode(struct ceph_crypto_key *key, void **p, void *end)
int ceph_crypto_key_decode(struct ceph_crypto_key *key, void **p, void *end)
int ceph_crypto_key_unarmor(struct ceph_crypto_key *key, const char *inkey)
#define AES_KEY_SIZE 16
static struct crypto_blkcipher *ceph_crypto_alloc_cipher(void)
static const u8 *aes_iv = (u8 *)CEPH_AES_IV;
static int ceph_aes_encrypt(const void *key, int key_len,
void *dst, size_t *dst_len,
const void *src, size_t src_len)
static int ceph_aes_encrypt2(const void *key, int key_len, void *dst,
size_t *dst_len,
const void *src1, size_t src1_len,
const void *src2, size_t src2_len)
static int ceph_aes_decrypt(const void *key, int key_len,
void *dst, size_t *dst_len,
const void *src, size_t src_len)
static int ceph_aes_decrypt2(const void *key, int key_len,
void *dst1, size_t *dst1_len,
void *dst2, size_t *dst2_len,
const void *src, size_t src_len)
int ceph_decrypt(struct ceph_crypto_key *secret, void *dst, size_t *dst_len,
const void *src, size_t src_len)
int ceph_decrypt2(struct ceph_crypto_key *secret,
void *dst1, size_t *dst1_len,
void *dst2, size_t *dst2_len,
const void *src, size_t src_len)
int ceph_encrypt(struct ceph_crypto_key *secret, void *dst, size_t *dst_len,
const void *src, size_t src_len)
int ceph_encrypt2(struct ceph_crypto_key *secret, void *dst, size_t *dst_len,
const void *src1, size_t src1_len,
const void *src2, size_t src2_len)
int ceph_key_instantiate(struct key *key, const void *data, size_t datalen)
int ceph_key_match(const struct key *key, const void *description)
void ceph_key_destroy(struct key *key)
struct key_type key_type_ceph = ;
int ceph_crypto_init(void)
void ceph_crypto_shutdown(void)
