struct ieee80211_crypto_alg ;
struct ieee80211_crypto ;
static struct ieee80211_crypto *hcrypt;
void ieee80211_crypt_deinit_entries(struct ieee80211_device *ieee,
int force)
void ieee80211_crypt_deinit_handler(unsigned long data)
void ieee80211_crypt_delayed_deinit(struct ieee80211_device *ieee,
struct ieee80211_crypt_data **crypt)
int ieee80211_register_crypto_ops(struct ieee80211_crypto_ops *ops)
int ieee80211_unregister_crypto_ops(struct ieee80211_crypto_ops *ops)
struct ieee80211_crypto_ops * ieee80211_get_crypto_ops(const char *name)
static void * ieee80211_crypt_null_init(int keyidx)
static void ieee80211_crypt_null_deinit(void *priv)
static struct ieee80211_crypto_ops ieee80211_crypt_null = ;
int __init ieee80211_crypto_init(void)
void ieee80211_crypto_deinit(void)
