static void michael_block(struct michael_mic_ctx *mctx, u32 val)
static void michael_mic_hdr(struct michael_mic_ctx *mctx, const u8 *key,
struct ieee80211_hdr *hdr)
void michael_mic(const u8 *key, struct ieee80211_hdr *hdr,
const u8 *data, size_t data_len, u8 *mic)
