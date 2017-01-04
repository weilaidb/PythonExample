MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("lib80211 crypt: WEP");
MODULE_LICENSE("GPL");
struct lib80211_wep_data ;
static void *lib80211_wep_init(int keyidx)
static void lib80211_wep_deinit(void *priv)
static int lib80211_wep_build_iv(struct sk_buff *skb, int hdr_len,
u8 *key, int keylen, void *priv)
static int lib80211_wep_encrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int lib80211_wep_decrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int lib80211_wep_set_key(void *key, int len, u8 * seq, void *priv)
static int lib80211_wep_get_key(void *key, int len, u8 * seq, void *priv)
static char *lib80211_wep_print_stats(char *p, void *priv)
static struct lib80211_crypto_ops lib80211_crypt_wep = ;
static int __init lib80211_crypto_wep_init(void)
static void __exit lib80211_crypto_wep_exit(void)
module_init(lib80211_crypto_wep_init);
module_exit(lib80211_crypto_wep_exit);
