#define ATH_MODULE_NAME wlan
#define ATH_DEBUG_WLAN ATH_DEBUG_MAKE_MODULE_MASK(0)
static struct ath_debug_mask_description wlan_debug_desc[] = ;
ATH_DEBUG_INSTANTIATE_MODULE_VAR(wlan,
"wlan",
"WLAN Node Management",
ATH_DEBUG_MASK_DEFAULTS,
ATH_DEBUG_DESCRIPTION_COUNT(wlan_debug_desc),
wlan_debug_desc);
static void wlan_node_timeout(unsigned long arg);
static bss_t * _ieee80211_find_node (struct ieee80211_node_table *nt,
const u8 *macaddr);
bss_t *
wlan_node_alloc(struct ieee80211_node_table *nt, int wh_size)
void
wlan_node_free(bss_t *ni)
void
wlan_setup_node(struct ieee80211_node_table *nt, bss_t *ni,
const u8 *macaddr)
static bss_t *
_ieee80211_find_node(struct ieee80211_node_table *nt,
const u8 *macaddr)
bss_t *
wlan_find_node(struct ieee80211_node_table *nt, const u8 *macaddr)
void
wlan_node_reclaim(struct ieee80211_node_table *nt, bss_t *ni)
static void
wlan_node_dec_free(bss_t *ni)
void
wlan_free_allnodes(struct ieee80211_node_table *nt)
void
wlan_iterate_nodes(struct ieee80211_node_table *nt, wlan_node_iter_func *f,
void *arg)
void
wlan_node_table_init(void *wmip, struct ieee80211_node_table *nt)
void
wlan_set_nodeage(struct ieee80211_node_table *nt, u32 nodeAge)
void
wlan_refresh_inactive_nodes (struct ieee80211_node_table *nt)
static void
wlan_node_timeout (unsigned long arg)
void
wlan_node_table_cleanup(struct ieee80211_node_table *nt)
bss_t *
wlan_find_Ssidnode (struct ieee80211_node_table *nt, u8 *pSsid,
u32 ssidLength, bool bIsWPA2, bool bMatchSSID)
void
wlan_node_return (struct ieee80211_node_table *nt, bss_t *ni)
void
wlan_node_remove_core (struct ieee80211_node_table *nt, bss_t *ni)
bss_t *
wlan_node_remove(struct ieee80211_node_table *nt, u8 *bssid)
bss_t *
wlan_find_matching_Ssidnode (struct ieee80211_node_table *nt, u8 *pSsid,
u32 ssidLength, u32 dot11AuthMode, u32 authMode,
u32 pairwiseCryptoType, u32 grpwiseCryptoTyp)
