#define ATH_H
#define	ATH_KEYMAX	        128
static const u8 ath_bcast_mac[ETH_ALEN] = ;
struct ath_ani ;
struct ath_cycle_counters ;
enum ath_device_state ;
enum ath_bus_type ;
struct reg_dmn_pair_mapping ;
struct ath_regulatory ;
enum ath_crypt_caps ;
struct ath_keyval ;
enum ath_cipher ;
struct ath_ops ;
struct ath_common;
struct ath_bus_ops;
struct ath_common ;
struct sk_buff *ath_rxbuf_alloc(struct ath_common *common,
u32 len,
gfp_t gfp_mask);
void ath_hw_setbssidmask(struct ath_common *common);
void ath_key_delete(struct ath_common *common, struct ieee80211_key_conf *key);
int ath_key_config(struct ath_common *common,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key);
bool ath_hw_keyreset(struct ath_common *common, u16 entry);
void ath_hw_cycle_counters_update(struct ath_common *common);
int32_t ath_hw_get_listen_time(struct ath_common *common);
extern __attribute__ ((format (printf, 3, 4))) int
ath_printk(const char *level, struct ath_common *common, const char *fmt, ...);
#define ath_emerg(common, fmt, ...)				\
ath_printk(KERN_EMERG, common, fmt, ##__VA_ARGS__)
#define ath_alert(common, fmt, ...)				\
ath_printk(KERN_ALERT, common, fmt, ##__VA_ARGS__)
#define ath_crit(common, fmt, ...)				\
ath_printk(KERN_CRIT, common, fmt, ##__VA_ARGS__)
#define ath_err(common, fmt, ...)				\
ath_printk(KERN_ERR, common, fmt, ##__VA_ARGS__)
#define ath_warn(common, fmt, ...)				\
ath_printk(KERN_WARNING, common, fmt, ##__VA_ARGS__)
#define ath_notice(common, fmt, ...)				\
ath_printk(KERN_NOTICE, common, fmt, ##__VA_ARGS__)
#define ath_info(common, fmt, ...)				\
ath_printk(KERN_INFO, common, fmt, ##__VA_ARGS__)
enum ATH_DEBUG ;
#define ATH_DBG_DEFAULT (ATH_DBG_FATAL)
#define ath_dbg(common, dbg_mask, fmt, ...)			\
()
#define ATH_DBG_WARN(foo, arg...) WARN(foo, arg)
#define ATH_DBG_WARN_ON_ONCE(foo) WARN_ON_ONCE(foo)
static inline  __attribute__ ((format (printf, 3, 4))) int
ath_dbg(struct ath_common *common, enum ATH_DEBUG dbg_mask,
const char *fmt, ...)
#define ATH_DBG_WARN(foo, arg...) do  while (0)
#define ATH_DBG_WARN_ON_ONCE(foo) ()
const char *ath_opmode_to_string(enum nl80211_iftype opmode);
static inline const char *ath_opmode_to_string(enum nl80211_iftype opmode)
