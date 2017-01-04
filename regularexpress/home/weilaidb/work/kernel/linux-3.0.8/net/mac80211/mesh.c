#define IEEE80211_MESH_PEER_INACTIVITY_LIMIT (1800 * HZ)
#define IEEE80211_MESH_HOUSEKEEPING_INTERVAL (60 * HZ)
#define IEEE80211_MESH_RANN_INTERVAL	     (1 * HZ)
#define MESHCONF_CAPAB_ACCEPT_PLINKS 0x01
#define MESHCONF_CAPAB_FORWARDING    0x08
#define TMR_RUNNING_HK	0
#define TMR_RUNNING_MP	1
#define TMR_RUNNING_MPR	2
int mesh_allocated;
static struct kmem_cache *rm_cache;
void ieee80211s_init(void)
void ieee80211s_stop(void)
static void ieee80211_mesh_housekeeping_timer(unsigned long data)
bool mesh_matches_local(struct ieee802_11_elems *ie, struct ieee80211_sub_if_data *sdata)
bool mesh_peer_accepts_plinks(struct ieee802_11_elems *ie)
void mesh_accept_plinks_update(struct ieee80211_sub_if_data *sdata)
int mesh_rmc_init(struct ieee80211_sub_if_data *sdata)
void mesh_rmc_free(struct ieee80211_sub_if_data *sdata)
int mesh_rmc_check(u8 *sa, struct ieee80211s_hdr *mesh_hdr,
struct ieee80211_sub_if_data *sdata)
void mesh_mgmt_ies_add(struct sk_buff *skb, struct ieee80211_sub_if_data *sdata)
static void ieee80211_mesh_path_timer(unsigned long data)
static void ieee80211_mesh_path_root_timer(unsigned long data)
void ieee80211_mesh_root_setup(struct ieee80211_if_mesh *ifmsh)
int ieee80211_fill_mesh_addresses(struct ieee80211_hdr *hdr, __le16 *fc,
const u8 *meshda, const u8 *meshsa)
int ieee80211_new_mesh_header(struct ieee80211s_hdr *meshhdr,
struct ieee80211_sub_if_data *sdata, char *addr4or5,
char *addr6)
static void ieee80211_mesh_housekeeping(struct ieee80211_sub_if_data *sdata,
struct ieee80211_if_mesh *ifmsh)
static void ieee80211_mesh_rootpath(struct ieee80211_sub_if_data *sdata)
void ieee80211_mesh_quiesce(struct ieee80211_sub_if_data *sdata)
void ieee80211_mesh_restart(struct ieee80211_sub_if_data *sdata)
void ieee80211_start_mesh(struct ieee80211_sub_if_data *sdata)
void ieee80211_stop_mesh(struct ieee80211_sub_if_data *sdata)
static void ieee80211_mesh_rx_bcn_presp(struct ieee80211_sub_if_data *sdata,
u16 stype,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status)
static void ieee80211_mesh_rx_mgmt_action(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee80211_rx_status *rx_status)
void ieee80211_mesh_rx_queued_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
void ieee80211_mesh_work(struct ieee80211_sub_if_data *sdata)
void ieee80211_mesh_notify_scan_completed(struct ieee80211_local *local)
void ieee80211_mesh_init_sdata(struct ieee80211_sub_if_data *sdata)
