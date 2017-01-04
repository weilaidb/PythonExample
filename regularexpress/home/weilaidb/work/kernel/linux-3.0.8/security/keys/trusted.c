static const char hmac_alg[] = "hmac(sha1)";
static const char hash_alg[] = "sha1";
struct sdesc ;
static struct crypto_shash *hashalg;
static struct crypto_shash *hmacalg;
static struct sdesc *init_sdesc(struct crypto_shash *alg)
static int TSS_sha1(const unsigned char *data, unsigned int datalen,
unsigned char *digest)
static int TSS_rawhmac(unsigned char *digest, const unsigned char *key,
unsigned int keylen, ...)
static int TSS_authhmac(unsigned char *digest, const unsigned char *key,
unsigned int keylen, unsigned char *h1,
unsigned char *h2, unsigned char h3, ...)
static int TSS_checkhmac1(unsigned char *buffer,
const uint32_t command,
const unsigned char *ononce,
const unsigned char *key,
unsigned int keylen, ...)
static int TSS_checkhmac2(unsigned char *buffer,
const uint32_t command,
const unsigned char *ononce,
const unsigned char *key1,
unsigned int keylen1,
const unsigned char *key2,
unsigned int keylen2, ...)
static int trusted_tpm_send(const u32 chip_num, unsigned char *cmd,
size_t buflen)
static int tpm_get_random(struct tpm_buf *tb, unsigned char *buf, uint32_t len)
static int my_get_random(unsigned char *buf, int len)
static int pcrlock(const int pcrnum)
static int osap(struct tpm_buf *tb, struct osapsess *s,
const unsigned char *key, uint16_t type, uint32_t handle)
static int oiap(struct tpm_buf *tb, uint32_t *handle, unsigned char *nonce)
struct tpm_digests ;
static int tpm_seal(struct tpm_buf *tb, uint16_t keytype,
uint32_t keyhandle, const unsigned char *keyauth,
const unsigned char *data, uint32_t datalen,
unsigned char *blob, uint32_t *bloblen,
const unsigned char *blobauth,
const unsigned char *pcrinfo, uint32_t pcrinfosize)
static int tpm_unseal(struct tpm_buf *tb,
uint32_t keyhandle, const unsigned char *keyauth,
const unsigned char *blob, int bloblen,
const unsigned char *blobauth,
unsigned char *data, unsigned int *datalen)
static int key_seal(struct trusted_key_payload *p,
struct trusted_key_options *o)
static int key_unseal(struct trusted_key_payload *p,
struct trusted_key_options *o)
enum ;
static const match_table_t key_tokens = ;
static int getoptions(char *c, struct trusted_key_payload *pay,
struct trusted_key_options *opt)
static int datablob_parse(char *datablob, struct trusted_key_payload *p,
struct trusted_key_options *o)
static struct trusted_key_options *trusted_options_alloc(void)
static struct trusted_key_payload *trusted_payload_alloc(struct key *key)
static int trusted_instantiate(struct key *key, const void *data,
size_t datalen)
static void trusted_rcu_free(struct rcu_head *rcu)
static int trusted_update(struct key *key, const void *data, size_t datalen)
static long trusted_read(const struct key *key, char __user *buffer,
size_t buflen)
static void trusted_destroy(struct key *key)
struct key_type key_type_trusted = ;
EXPORT_SYMBOL_GPL(key_type_trusted);
static void trusted_shash_release(void)
static int __init trusted_shash_alloc(void)
static int __init init_trusted(void)
static void __exit cleanup_trusted(void)
late_initcall(init_trusted);
module_exit(cleanup_trusted);
MODULE_LICENSE("GPL");
