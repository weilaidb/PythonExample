#define IEEE80211S_H
enum mesh_path_flags ;
enum mesh_deferred_task_flags ;
struct mesh_path ;
struct mesh_table ;
#define RMC_BUCKETS		256
#define RMC_QUEUE_MAX_LEN	4
#define RMC_TIMEOUT		(3 * HZ)
struct rmc_entry ;
struct mesh_rmc ;
#define MESH_DEFAULT_BEACON_INTERVAL		1000
#define MESH_PATH_EXPIRE (600 * HZ)
#define MESH_MAX_PLINKS		256
#define MESH_MAX_MPATHS		1024
#define MESH_PATH_SEL_ACTION	0
#define PEER_RCODE_UNSPECIFIED  11
#define PERR_RCODE_NO_ROUTE     12
#define PERR_RCODE_DEST_UNREACH 13
int ieee80211_fill_mesh_addresses(struct ieee80211_hdr *hdr, __le16 *fc,
const u8 *da, const u8 *sa);
int ieee80211_new_mesh_header(struct ieee80211s_hdr *meshhdr,
struct ieee80211_sub_if_data *sdata, char *addr4or5,
char *addr6);
int mesh_rmc_check(u8 *addr, struct ieee80211s_hdr *mesh_hdr,
struct ieee80211_sub_if_data *sdata);
bool mesh_matches_local(struct ieee802_11_elems *ie,
struct ieee80211_sub_if_data *sdata);
void mesh_ids_set_default(struct ieee80211_if_mesh *mesh);
void mesh_mgmt_ies_add(struct sk_buff *skb,
struct ieee80211_sub_if_data *sdata);
void mesh_rmc_free(struct ieee80211_sub_if_data *sdata);
int mesh_rmc_init(struct ieee80211_sub_if_data *sdata);
void ieee80211s_init(void);
void ieee80211s_update_metric(struct ieee80211_local *local,
struct sta_info *stainfo, struct sk_buff *skb);
void ieee80211s_stop(void);
void ieee80211_mesh_init_sdata(struct ieee80211_sub_if_data *sdata);
void ieee80211_start_mesh(struct ieee80211_sub_if_data *sdata);
void ieee80211_stop_mesh(struct ieee80211_sub_if_data *sdata);
void ieee80211_mesh_root_setup(struct ieee80211_if_mesh *ifmsh);
int mesh_nexthop_lookup(struct sk_buff *skb,
struct ieee80211_sub_if_data *sdata);
void mesh_path_start_discovery(struct ieee80211_sub_if_data *sdata);
struct mesh_path *mesh_path_lookup(u8 *dst,
struct ieee80211_sub_if_data *sdata);
struct mesh_path *mpp_path_lookup(u8 *dst,
struct ieee80211_sub_if_data *sdata);
int mpp_path_add(u8 *dst, u8 *mpp, struct ieee80211_sub_if_data *sdata);
struct mesh_path *mesh_path_lookup_by_idx(int idx,
struct ieee80211_sub_if_data *sdata);
void mesh_path_fix_nexthop(struct mesh_path *mpath, struct sta_info *next_hop);
void mesh_path_expire(struct ieee80211_sub_if_data *sdata);
void mesh_path_flush(struct ieee80211_sub_if_data *sdata);
void mesh_rx_path_sel_frame(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt, size_t len);
int mesh_path_add(u8 *dst, struct ieee80211_sub_if_data *sdata);
void mesh_neighbour_update(u8 *hw_addr, u32 rates,
struct ieee80211_sub_if_data *sdata,
struct ieee802_11_elems *ie);
bool mesh_peer_accepts_plinks(struct ieee802_11_elems *ie);
void mesh_accept_plinks_update(struct ieee80211_sub_if_data *sdata);
void mesh_plink_broken(struct sta_info *sta);
void mesh_plink_deactivate(struct sta_info *sta);
int mesh_plink_open(struct sta_info *sta);
void mesh_plink_block(struct sta_info *sta);
void mesh_rx_plink_frame(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt, size_t len,
struct ieee80211_rx_status *rx_status);
void mesh_mpath_table_grow(void);
void mesh_mpp_table_grow(void);
int mesh_path_error_tx(u8 ttl, u8 *target, __le32 target_sn, __le16 target_rcode,
const u8 *ra, struct ieee80211_sub_if_data *sdata);
void mesh_path_assign_nexthop(struct mesh_path *mpath, struct sta_info *sta);
void mesh_path_flush_pending(struct mesh_path *mpath);
void mesh_path_tx_pending(struct mesh_path *mpath);
int mesh_pathtbl_init(void);
void mesh_pathtbl_unregister(void);
int mesh_path_del(u8 *addr, struct ieee80211_sub_if_data *sdata);
void mesh_path_timer(unsigned long data);
void mesh_path_flush_by_nexthop(struct sta_info *sta);
void mesh_path_discard_frame(struct sk_buff *skb,
struct ieee80211_sub_if_data *sdata);
void mesh_path_quiesce(struct ieee80211_sub_if_data *sdata);
void mesh_path_restart(struct ieee80211_sub_if_data *sdata);
void mesh_path_tx_root_frame(struct ieee80211_sub_if_data *sdata);
extern int mesh_paths_generation;
extern int mesh_allocated;
static inline int mesh_plink_free_count(struct ieee80211_sub_if_data *sdata)
static inline bool mesh_plink_availables(struct ieee80211_sub_if_data *sdata)
static inline void mesh_path_activate(struct mesh_path *mpath)
static inline bool mesh_path_sel_is_hwmp(struct ieee80211_sub_if_data *sdata)
void ieee80211_mesh_notify_scan_completed(struct ieee80211_local *local);
void ieee80211_mesh_quiesce(struct ieee80211_sub_if_data *sdata);
void ieee80211_mesh_restart(struct ieee80211_sub_if_data *sdata);
void mesh_plink_quiesce(struct sta_info *sta);
void mesh_plink_restart(struct sta_info *sta);
#define mesh_allocated	0
static inline void
ieee80211_mesh_notify_scan_completed(struct ieee80211_local *local)
static inline void ieee80211_mesh_quiesce(struct ieee80211_sub_if_data *sdata)
static inline void ieee80211_mesh_restart(struct ieee80211_sub_if_data *sdata)
static inline void mesh_plink_quiesce(struct sta_info *sta)
static inline void mesh_plink_restart(struct sta_info *sta)
static inline bool mesh_path_sel_is_hwmp(struct ieee80211_sub_if_data *sdata)
