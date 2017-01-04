#define MICHAEL_H
#define MICHAEL_MIC_LEN 8
struct michael_mic_ctx ;
void michael_mic(const u8 *key, struct ieee80211_hdr *hdr,
const u8 *data, size_t data_len, u8 *mic);
