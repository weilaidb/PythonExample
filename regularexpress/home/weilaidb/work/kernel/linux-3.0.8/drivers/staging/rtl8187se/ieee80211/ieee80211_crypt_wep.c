MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Host AP crypt: WEP");
MODULE_LICENSE("GPL");
struct prism2_wep_data ;
static void * prism2_wep_init(int keyidx)
static void prism2_wep_deinit(void *priv)
static int prism2_wep_encrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int prism2_wep_decrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int prism2_wep_set_key(void *key, int len, u8 *seq, void *priv)
static int prism2_wep_get_key(void *key, int len, u8 *seq, void *priv)
static char * prism2_wep_print_stats(char *p, void *priv)
static struct ieee80211_crypto_ops ieee80211_crypt_wep = ;
int ieee80211_crypto_wep_init(void)
void ieee80211_crypto_wep_exit(void)
void ieee80211_wep_null(void)
