#define AES_BLOCK_SIZE 16
#define AES_CMAC_KEY_LEN 16
#define CMAC_TLEN 8
#define AAD_LEN 20
static void gf_mulx(u8 *pad)
static void aes_128_cmac_vector(struct crypto_cipher *tfm, u8 *scratch,
size_t num_elem,
const u8 *addr[], const size_t *len, u8 *mac)
void ieee80211_aes_cmac(struct crypto_cipher *tfm, u8 *scratch, const u8 *aad,
const u8 *data, size_t data_len, u8 *mic)
struct crypto_cipher * ieee80211_aes_cmac_key_setup(const u8 key[])
void ieee80211_aes_cmac_key_free(struct crypto_cipher *tfm)
