static const char KEY_TRUSTED_PREFIX[] = "trusted:";
static const char KEY_USER_PREFIX[] = "user:";
static const char hash_alg[] = "sha256";
static const char hmac_alg[] = "hmac(sha256)";
static const char blkcipher_alg[] = "cbc(aes)";
static unsigned int ivsize;
static int blksize;
#define KEY_TRUSTED_PREFIX_LEN (sizeof (KEY_TRUSTED_PREFIX) - 1)
#define KEY_USER_PREFIX_LEN (sizeof (KEY_USER_PREFIX) - 1)
#define HASH_SIZE SHA256_DIGEST_SIZE
#define MAX_DATA_SIZE 4096
#define MIN_DATA_SIZE  20
struct sdesc ;
static struct crypto_shash *hashalg;
static struct crypto_shash *hmacalg;
enum ;
static const match_table_t key_tokens = ;
static int aes_get_sizes(void)
static int valid_master_desc(const char *new_desc, const char *orig_desc)
static int datablob_parse(char *datablob, char **master_desc,
char **decrypted_datalen, char **hex_encoded_iv)
static char *datablob_format(struct encrypted_key_payload *epayload,
size_t asciiblob_len)
static struct key *request_trusted_key(const char *trusted_desc,
u8 **master_key, size_t *master_keylen)
static struct key *request_user_key(const char *master_desc, u8 **master_key,
size_t *master_keylen)
static struct sdesc *alloc_sdesc(struct crypto_shash *alg)
static int calc_hmac(u8 *digest, const u8 *key, unsigned int keylen,
const u8 *buf, unsigned int buflen)
static int calc_hash(u8 *digest, const u8 *buf, unsigned int buflen)
enum derived_key_type ;
static int get_derived_key(u8 *derived_key, enum derived_key_type key_type,
const u8 *master_key, size_t master_keylen)
static int init_blkcipher_desc(struct blkcipher_desc *desc, const u8 *key,
unsigned int key_len, const u8 *iv,
unsigned int ivsize)
static struct key *request_master_key(struct encrypted_key_payload *epayload,
u8 **master_key, size_t *master_keylen)
static int derived_key_encrypt(struct encrypted_key_payload *epayload,
const u8 *derived_key,
unsigned int derived_keylen)
static int datablob_hmac_append(struct encrypted_key_payload *epayload,
const u8 *master_key, size_t master_keylen)
static int datablob_hmac_verify(struct encrypted_key_payload *epayload,
const u8 *master_key, size_t master_keylen)
static int derived_key_decrypt(struct encrypted_key_payload *epayload,
const u8 *derived_key,
unsigned int derived_keylen)
static struct encrypted_key_payload *encrypted_key_alloc(struct key *key,
const char *master_desc,
const char *datalen)
static int encrypted_key_decrypt(struct encrypted_key_payload *epayload,
const char *hex_encoded_iv)
static void __ekey_init(struct encrypted_key_payload *epayload,
const char *master_desc, const char *datalen)
static int encrypted_init(struct encrypted_key_payload *epayload,
const char *master_desc, const char *datalen,
const char *hex_encoded_iv)
static int encrypted_instantiate(struct key *key, const void *data,
size_t datalen)
static void encrypted_rcu_free(struct rcu_head *rcu)
static int encrypted_update(struct key *key, const void *data, size_t datalen)
static long encrypted_read(const struct key *key, char __user *buffer,
size_t buflen)
static void encrypted_destroy(struct key *key)
struct key_type key_type_encrypted = ;
EXPORT_SYMBOL_GPL(key_type_encrypted);
static void encrypted_shash_release(void)
static int __init encrypted_shash_alloc(void)
static int __init init_encrypted(void)
static void __exit cleanup_encrypted(void)
late_initcall(init_encrypted);
module_exit(cleanup_encrypted);
MODULE_LICENSE("GPL");
