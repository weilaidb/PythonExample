#define LIB80211_H
const char *print_ssid(char *buf, const char *ssid, u8 ssid_len);
#define DECLARE_SSID_BUF(var) char var[IEEE80211_MAX_SSID_LEN * 4 + 1] __maybe_unused
#define NUM_WEP_KEYS	4
enum ;
struct lib80211_crypto_ops ;
struct lib80211_crypt_data ;
struct lib80211_crypt_info ;
int lib80211_crypt_info_init(struct lib80211_crypt_info *info, char *name,
spinlock_t *lock);
void lib80211_crypt_info_free(struct lib80211_crypt_info *info);
int lib80211_register_crypto_ops(struct lib80211_crypto_ops *ops);
int lib80211_unregister_crypto_ops(struct lib80211_crypto_ops *ops);
struct lib80211_crypto_ops *lib80211_get_crypto_ops(const char *name);
void lib80211_crypt_deinit_entries(struct lib80211_crypt_info *, int);
void lib80211_crypt_deinit_handler(unsigned long);
void lib80211_crypt_delayed_deinit(struct lib80211_crypt_info *info,
struct lib80211_crypt_data **crypt);
void lib80211_crypt_quiescing(struct lib80211_crypt_info *info);
