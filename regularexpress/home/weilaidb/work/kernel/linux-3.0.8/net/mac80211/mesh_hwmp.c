#define mhwmp_dbg(fmt, args...)   printk(KERN_DEBUG "Mesh HWMP: " fmt, ##args)
#define mhwmp_dbg(fmt, args...)   do  while (0)
#define TEST_FRAME_LEN	8192
#define MAX_METRIC	0xffffffff
#define ARITH_SHIFT	8
#define MESH_FRAME_QUEUE_LEN	10
#define MAX_PREQ_QUEUE_LEN	64
#define MP_F_DO	0x1
#define MP_F_RF	0x2
#define MP_F_USN    0x01
#define MP_F_RCODE  0x02
static void mesh_queue_preq(struct mesh_path *, u8);
static inline u32 u32_field_get(u8 *preq_elem, int offset, bool ae)
static inline u32 u16_field_get(u8 *preq_elem, int offset, bool ae)
#define AE_F			(1<<6)
#define AE_F_SET(x)		(*x & AE_F)
#define PREQ_IE_FLAGS(x)	(*(x))
#define PREQ_IE_HOPCOUNT(x)	(*(x + 1))
#define PREQ_IE_TTL(x)		(*(x + 2))
#define PREQ_IE_PREQ_ID(x)	u32_field_get(x, 3, 0)
#define PREQ_IE_ORIG_ADDR(x)	(x + 7)
#define PREQ_IE_ORIG_SN(x)	u32_field_get(x, 13, 0);
#define PREQ_IE_LIFETIME(x)	u32_field_get(x, 17, AE_F_SET(x));
#define PREQ_IE_METRIC(x) 	u32_field_get(x, 21, AE_F_SET(x));
#define PREQ_IE_TARGET_F(x)	(*(AE_F_SET(x) ? x + 32 : x + 26))
#define PREQ_IE_TARGET_ADDR(x) 	(AE_F_SET(x) ? x + 33 : x + 27)
#define PREQ_IE_TARGET_SN(x) 	u32_field_get(x, 33, AE_F_SET(x));
#define PREP_IE_FLAGS(x)	PREQ_IE_FLAGS(x)
#define PREP_IE_HOPCOUNT(x)	PREQ_IE_HOPCOUNT(x)
#define PREP_IE_TTL(x)		PREQ_IE_TTL(x)
#define PREP_IE_ORIG_ADDR(x)	(x + 3)
#define PREP_IE_ORIG_SN(x)	u32_field_get(x, 9, 0);
#define PREP_IE_LIFETIME(x)	u32_field_get(x, 13, AE_F_SET(x));
#define PREP_IE_METRIC(x)	u32_field_get(x, 17, AE_F_SET(x));
#define PREP_IE_TARGET_ADDR(x)	(AE_F_SET(x) ? x + 27 : x + 21)
#define PREP_IE_TARGET_SN(x)	u32_field_get(x, 27, AE_F_SET(x));
#define PERR_IE_TTL(x)		(*(x))
#define PERR_IE_TARGET_FLAGS(x)	(*(x + 2))
#define PERR_IE_TARGET_ADDR(x)	(x + 3)
#define PERR_IE_TARGET_SN(x)	u32_field_get(x, 9, 0);
#define PERR_IE_TARGET_RCODE(x)	u16_field_get(x, 13, 0);
#define MSEC_TO_TU(x) (x*1000/1024)
#define SN_GT(x, y) ((long) (y) - (long) (x) < 0)
#define SN_LT(x, y) ((long) (x) - (long) (y) < 0)
#define net_traversal_jiffies(s) \
msecs_to_jiffies(s->u.mesh.mshcfg.dot11MeshHWMPnetDiameterTraversalTime)
#define default_lifetime(s) \
MSEC_TO_TU(s->u.mesh.mshcfg.dot11MeshHWMPactivePathTimeout)
#define min_preq_int_jiff(s) \
(msecs_to_jiffies(s->u.mesh.mshcfg.dot11MeshHWMPpreqMinInterval))
#define max_preq_retries(s) (s->u.mesh.mshcfg.dot11MeshHWMPmaxPREQretries)
#define disc_timeout_jiff(s) \
msecs_to_jiffies(sdata->u.mesh.mshcfg.min_discovery_timeout)
enum mpath_frame_type ;
static const u8 broadcast_addr[ETH_ALEN] = ;
static int mesh_path_sel_frame_tx(enum mpath_frame_type action, u8 flags,
u8 *orig_addr, __le32 orig_sn, u8 target_flags, u8 *target,
__le32 target_sn, const u8 *da, u8 hop_count, u8 ttl,
__le32 lifetime, __le32 metric, __le32 preq_id,
struct ieee80211_sub_if_data *sdata)
int mesh_path_error_tx(u8 ttl, u8 *target, __le32 target_sn,
__le16 target_rcode, const u8 *ra,
struct ieee80211_sub_if_data *sdata)
void ieee80211s_update_metric(struct ieee80211_local *local,
struct sta_info *stainfo, struct sk_buff *skb)
static u32 airtime_link_metric_get(struct ieee80211_local *local,
struct sta_info *sta)
static u32 hwmp_route_info_get(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
u8 *hwmp_ie, enum mpath_frame_type action)
static void hwmp_preq_frame_process(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
u8 *preq_elem, u32 metric)
static inline struct sta_info *
next_hop_deref_protected(struct mesh_path *mpath)
static void hwmp_prep_frame_process(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
u8 *prep_elem, u32 metric)
static void hwmp_perr_frame_process(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt, u8 *perr_elem)
static void hwmp_rann_frame_process(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
struct ieee80211_rann_ie *rann)
void mesh_rx_path_sel_frame(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len)
static void mesh_queue_preq(struct mesh_path *mpath, u8 flags)
void mesh_path_start_discovery(struct ieee80211_sub_if_data *sdata)
int mesh_nexthop_lookup(struct sk_buff *skb,
struct ieee80211_sub_if_data *sdata)
void mesh_path_timer(unsigned long data)
void
mesh_path_tx_root_frame(struct ieee80211_sub_if_data *sdata)
