#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME        "lib80211"
#define DRV_DESCRIPTION	"common routines for IEEE802.11 drivers"
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("John W. Linville <linville@tuxdriver.com>");
MODULE_LICENSE("GPL");
struct lib80211_crypto_alg ;
static LIST_HEAD(lib80211_crypto_algs);
static DEFINE_SPINLOCK(lib80211_crypto_lock);
const char *print_ssid(char *buf, const char *ssid, u8 ssid_len)
EXPORT_SYMBOL(print_ssid);
int lib80211_crypt_info_init(struct lib80211_crypt_info *info, char *name,
spinlock_t *lock)
EXPORT_SYMBOL(lib80211_crypt_info_init);
void lib80211_crypt_info_free(struct lib80211_crypt_info *info)
EXPORT_SYMBOL(lib80211_crypt_info_free);
void lib80211_crypt_deinit_entries(struct lib80211_crypt_info *info, int force)
EXPORT_SYMBOL(lib80211_crypt_deinit_entries);
void lib80211_crypt_quiescing(struct lib80211_crypt_info *info)
EXPORT_SYMBOL(lib80211_crypt_quiescing);
void lib80211_crypt_deinit_handler(unsigned long data)
EXPORT_SYMBOL(lib80211_crypt_deinit_handler);
void lib80211_crypt_delayed_deinit(struct lib80211_crypt_info *info,
struct lib80211_crypt_data **crypt)
EXPORT_SYMBOL(lib80211_crypt_delayed_deinit);
int lib80211_register_crypto_ops(struct lib80211_crypto_ops *ops)
EXPORT_SYMBOL(lib80211_register_crypto_ops);
int lib80211_unregister_crypto_ops(struct lib80211_crypto_ops *ops)
EXPORT_SYMBOL(lib80211_unregister_crypto_ops);
struct lib80211_crypto_ops *lib80211_get_crypto_ops(const char *name)
EXPORT_SYMBOL(lib80211_get_crypto_ops);
static void *lib80211_crypt_null_init(int keyidx)
static void lib80211_crypt_null_deinit(void *priv)
static struct lib80211_crypto_ops lib80211_crypt_null = ;
static int __init lib80211_init(void)
static void __exit lib80211_exit(void)
module_init(lib80211_init);
module_exit(lib80211_exit);
