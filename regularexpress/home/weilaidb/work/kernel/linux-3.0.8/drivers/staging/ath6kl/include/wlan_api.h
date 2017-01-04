#define _HOST_WLAN_API_H_
struct ieee80211_node_table;
struct ieee80211_frame;
struct ieee80211_common_ie ;
typedef struct bss  bss_t;
typedef void wlan_node_iter_func(void *arg, bss_t *);
bss_t *wlan_node_alloc(struct ieee80211_node_table *nt, int wh_size);
void wlan_node_free(bss_t *ni);
void wlan_setup_node(struct ieee80211_node_table *nt, bss_t *ni,
const u8 *macaddr);
bss_t *wlan_find_node(struct ieee80211_node_table *nt, const u8 *macaddr);
void wlan_node_reclaim(struct ieee80211_node_table *nt, bss_t *ni);
void wlan_free_allnodes(struct ieee80211_node_table *nt);
void wlan_iterate_nodes(struct ieee80211_node_table *nt, wlan_node_iter_func *f,
void *arg);
void wlan_node_table_init(void *wmip, struct ieee80211_node_table *nt);
void wlan_node_table_reset(struct ieee80211_node_table *nt);
void wlan_node_table_cleanup(struct ieee80211_node_table *nt);
int wlan_parse_beacon(u8 *buf, int framelen,
struct ieee80211_common_ie *cie);
u16 wlan_ieee2freq(int chan);
u32 wlan_freq2ieee(u16 freq);
void wlan_set_nodeage(struct ieee80211_node_table *nt, u32 nodeAge);
void
wlan_refresh_inactive_nodes (struct ieee80211_node_table *nt);
bss_t *
wlan_find_Ssidnode (struct ieee80211_node_table *nt, u8 *pSsid,
u32 ssidLength, bool bIsWPA2, bool bMatchSSID);
void
wlan_node_return (struct ieee80211_node_table *nt, bss_t *ni);
bss_t *wlan_node_remove(struct ieee80211_node_table *nt, u8 *bssid);
bss_t *
wlan_find_matching_Ssidnode (struct ieee80211_node_table *nt, u8 *pSsid,
u32 ssidLength, u32 dot11AuthMode, u32 authMode,
u32 pairwiseCryptoType, u32 grpwiseCryptoTyp);
