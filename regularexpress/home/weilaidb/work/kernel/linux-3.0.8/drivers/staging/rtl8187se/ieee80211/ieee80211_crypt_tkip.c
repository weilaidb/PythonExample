MODULE_AUTHOR("Jouni Malinen");
MODULE_DESCRIPTION("Host AP crypt: TKIP");
MODULE_LICENSE("GPL");
struct ieee80211_tkip_data ;
static void * ieee80211_tkip_init(int key_idx)
static void ieee80211_tkip_deinit(void *priv)
static inline u16 RotR1(u16 val)
static inline u8 Lo8(u16 val)
static inline u8 Hi8(u16 val)
static inline u16 Lo16(u32 val)
static inline u16 Hi16(u32 val)
static inline u16 Mk16(u8 hi, u8 lo)
static inline u16 Mk16_le(u16 *v)
static const u16 Sbox[256] =
;
static inline u16 _S_(u16 v)
#define PHASE1_LOOP_COUNT 8
static void tkip_mixing_phase1(u16 *TTAK, const u8 *TK, const u8 *TA, u32 IV32)
static void tkip_mixing_phase2(u8 *WEPSeed, const u8 *TK, const u16 *TTAK,
u16 IV16)
static int ieee80211_tkip_encrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int ieee80211_tkip_decrypt(struct sk_buff *skb, int hdr_len, void *priv)
static int michael_mic(struct crypto_hash *tfm_michael, u8 * key, u8 * hdr,
u8 * data, size_t data_len, u8 * mic)
static void michael_mic_hdr(struct sk_buff *skb, u8 *hdr)
static int ieee80211_michael_mic_add(struct sk_buff *skb, int hdr_len, void *priv)
static void ieee80211_michael_mic_failure(struct net_device *dev,
struct ieee80211_hdr_4addr *hdr,
int keyidx)
static int ieee80211_michael_mic_verify(struct sk_buff *skb, int keyidx,
int hdr_len, void *priv)
static int ieee80211_tkip_set_key(void *key, int len, u8 *seq, void *priv)
static int ieee80211_tkip_get_key(void *key, int len, u8 *seq, void *priv)
static char * ieee80211_tkip_print_stats(char *p, void *priv)
static struct ieee80211_crypto_ops ieee80211_crypt_tkip = ;
int ieee80211_crypto_tkip_init(void)
void ieee80211_crypto_tkip_exit(void)
void ieee80211_tkip_null(void)
