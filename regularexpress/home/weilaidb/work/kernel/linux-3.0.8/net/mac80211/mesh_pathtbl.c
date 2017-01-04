#define INIT_PATHS_SIZE_ORDER	2
#define MEAN_CHAIN_LEN		2
#define MPATH_EXPIRED(mpath) ((mpath->flags & MESH_PATH_ACTIVE) && \
time_after(jiffies, mpath->exp_time) && \
!(mpath->flags & MESH_PATH_FIXED))
struct mpath_node ;
static struct mesh_table __rcu *mesh_paths;
static struct mesh_table __rcu *mpp_paths;
int mesh_paths_generation;
static DEFINE_RWLOCK(pathtbl_resize_lock);
static inline struct mesh_table *resize_dereference_mesh_paths(void)
static inline struct mesh_table *resize_dereference_mpp_paths(void)
#define for_each_mesh_entry(tbl, p, node, i) \
for (i = 0; i <= tbl->hash_mask; i++) \
hlist_for_each_entry_rcu(node, p, &tbl->hash_buckets[i], list)
static struct mesh_table *mesh_table_alloc(int size_order)
static void __mesh_table_free(struct mesh_table *tbl)
static void mesh_table_free(struct mesh_table *tbl, bool free_leafs)
static int mesh_table_grow(struct mesh_table *oldtbl,
struct mesh_table *newtbl)
static u32 mesh_table_hash(u8 *addr, struct ieee80211_sub_if_data *sdata,
struct mesh_table *tbl)
void mesh_path_assign_nexthop(struct mesh_path *mpath, struct sta_info *sta)
struct mesh_path *mesh_path_lookup(u8 *dst, struct ieee80211_sub_if_data *sdata)
struct mesh_path *mpp_path_lookup(u8 *dst, struct ieee80211_sub_if_data *sdata)
struct mesh_path *mesh_path_lookup_by_idx(int idx, struct ieee80211_sub_if_data *sdata)
int mesh_path_add(u8 *dst, struct ieee80211_sub_if_data *sdata)
static void mesh_table_free_rcu(struct rcu_head *rcu)
void mesh_mpath_table_grow(void)
void mesh_mpp_table_grow(void)
int mpp_path_add(u8 *dst, u8 *mpp, struct ieee80211_sub_if_data *sdata)
void mesh_plink_broken(struct sta_info *sta)
void mesh_path_flush_by_nexthop(struct sta_info *sta)
void mesh_path_flush(struct ieee80211_sub_if_data *sdata)
static void mesh_path_node_reclaim(struct rcu_head *rp)
int mesh_path_del(u8 *addr, struct ieee80211_sub_if_data *sdata)
void mesh_path_tx_pending(struct mesh_path *mpath)
void mesh_path_discard_frame(struct sk_buff *skb,
struct ieee80211_sub_if_data *sdata)
void mesh_path_flush_pending(struct mesh_path *mpath)
void mesh_path_fix_nexthop(struct mesh_path *mpath, struct sta_info *next_hop)
static void mesh_path_node_free(struct hlist_node *p, bool free_leafs)
static int mesh_path_node_copy(struct hlist_node *p, struct mesh_table *newtbl)
int mesh_pathtbl_init(void)
void mesh_path_expire(struct ieee80211_sub_if_data *sdata)
void mesh_pathtbl_unregister(void)
