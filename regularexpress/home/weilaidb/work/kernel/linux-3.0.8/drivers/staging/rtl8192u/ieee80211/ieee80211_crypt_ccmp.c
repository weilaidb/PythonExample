MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Host AP crypt: CCMP");
MODULE_LICENSE("GPL");
#define AES_BLOCK_LEN 16
#define CCMP_HDR_LEN 8
#define CCMP_MIC_LEN 8
#define CCMP_TK_LEN 16
#define CCMP_PN_LEN 6
struct ieee80211_ccmp_data ;
void ieee80211_ccmp_aes_encrypt(struct crypto_tfm *tfm,
const u8 pt[16], u8 ct[16])
static void * ieee80211_ccmp_init(int key_idx)
static void ieee80211_ccmp_deinit(void *priv)
static inline void xor_block(u8 *b, u8 *a, size_t len)
static void ccmp_init_blocks(struct crypto_tfm *tfm,
struct ieee80211_hdr_4addr *hdr,
u8 *pn, size_t dlen, u8 *b0, u8 *auth,
u8 *s0)
static int ieee80211_ccmp_encrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int ieee80211_ccmp_decrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int ieee80211_ccmp_set_key(void *key, int len, u8 *seq, void *priv)
static int ieee80211_ccmp_get_key(void *key, int len, u8 *seq, void *priv)
static char * ieee80211_ccmp_print_stats(char *p, void *priv)
void ieee80211_ccmp_null(void)
static struct ieee80211_crypto_ops ieee80211_crypt_ccmp = ;
int __init ieee80211_crypto_ccmp_init(void)
void __exit ieee80211_crypto_ccmp_exit(void)
