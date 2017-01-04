#define IEEE80211_VERIFY_LENGTH(_len, _minlen) do  while (0)
#define IEEE80211_VERIFY_ELEMENT(__elem, __maxlen) do  while (0)
#define LE_READ_2(p)                            \
((u16)                            \
((((u8 *)(p))[0]      ) | (((u8 *)(p))[1] <<  8)))
#define LE_READ_4(p)                            \
((u32)                            \
((((u8 *)(p))[0]      ) | (((u8 *)(p))[1] <<  8) | \
(((u8 *)(p))[2] << 16) | (((u8 *)(p))[3] << 24)))
static int __inline
iswpaoui(const u8 *frm)
static int __inline
iswmmoui(const u8 *frm)
static int __inline
isatherosoui(const u8 *frm)
static int __inline
iswscoui(const u8 *frm)
int
wlan_parse_beacon(u8 *buf, int framelen, struct ieee80211_common_ie *cie)
