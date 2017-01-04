#define PHASE1_LOOP_COUNT 8
static const u16 tkip_sbox[256] =
;
static u16 tkipS(u16 val)
static u8 *write_tkip_iv(u8 *pos, u16 iv16)
static void tkip_mixing_phase1(const u8 *tk, struct tkip_ctx *ctx,
const u8 *ta, u32 tsc_IV32)
static void tkip_mixing_phase2(const u8 *tk, struct tkip_ctx *ctx,
u16 tsc_IV16, u8 *rc4key)
u8 *ieee80211_tkip_add_iv(u8 *pos, struct ieee80211_key *key, u16 iv16)
void ieee80211_get_tkip_key(struct ieee80211_key_conf *keyconf,
struct sk_buff *skb, enum ieee80211_tkip_key_type type,
u8 *outkey)
EXPORT_SYMBOL(ieee80211_get_tkip_key);
int ieee80211_tkip_encrypt_data(struct crypto_cipher *tfm,
struct ieee80211_key *key,
u8 *pos, size_t payload_len, u8 *ta)
int ieee80211_tkip_decrypt_data(struct crypto_cipher *tfm,
struct ieee80211_key *key,
u8 *payload, size_t payload_len, u8 *ta,
u8 *ra, int only_iv, int queue,
u32 *out_iv32, u16 *out_iv16)
