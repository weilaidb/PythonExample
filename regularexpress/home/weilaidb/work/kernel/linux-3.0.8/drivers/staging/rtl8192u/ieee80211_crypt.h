#define IEEE80211_CRYPT_H
struct ieee80211_crypto_ops ;
struct ieee80211_crypt_data ;
int ieee80211_register_crypto_ops(struct ieee80211_crypto_ops *ops);
int ieee80211_unregister_crypto_ops(struct ieee80211_crypto_ops *ops);
struct ieee80211_crypto_ops *ieee80211_get_crypto_ops(const char *name);
void ieee80211_crypt_deinit_entries(struct ieee80211_device *, int);
void ieee80211_crypt_deinit_handler(unsigned long);
void ieee80211_crypt_delayed_deinit(struct ieee80211_device *ieee,
struct ieee80211_crypt_data **crypt);
