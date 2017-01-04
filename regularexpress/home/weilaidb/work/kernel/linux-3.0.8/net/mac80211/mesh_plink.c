#define mpl_dbg(fmt, args...)	printk(KERN_DEBUG fmt, ##args)
#define mpl_dbg(fmt, args...)	do  while (0)
#define PLINK_GET_LLID(p) (p + 4)
#define PLINK_GET_PLID(p) (p + 6)
#define mod_plink_timer(s, t) (mod_timer(&s->plink_timer, \
jiffies + HZ * t / 1000))
#define MESH_LINK_CANCELLED			2
#define MESH_MAX_NEIGHBORS			3
#define MESH_CAPABILITY_POLICY_VIOLATION	4
#define MESH_CLOSE_RCVD				5
#define MESH_MAX_RETRIES			6
#define MESH_CONFIRM_TIMEOUT			7
#define MESH_SECURITY_ROLE_NEGOTIATION_DIFFERS	8
#define MESH_SECURITY_AUTHENTICATION_IMPOSSIBLE	9
#define MESH_SECURITY_FAILED_VERIFICATION	10
#define dot11MeshMaxRetries(s) (s->u.mesh.mshcfg.dot11MeshMaxRetries)
#define dot11MeshRetryTimeout(s) (s->u.mesh.mshcfg.dot11MeshRetryTimeout)
#define dot11MeshConfirmTimeout(s) (s->u.mesh.mshcfg.dot11MeshConfirmTimeout)
#define dot11MeshHoldingTimeout(s) (s->u.mesh.mshcfg.dot11MeshHoldingTimeout)
#define dot11MeshMaxPeerLinks(s) (s->u.mesh.mshcfg.dot11MeshMaxPeerLinks)
enum plink_frame_type ;
enum plink_event ;
static inline
void mesh_plink_inc_estab_count(struct ieee80211_sub_if_data *sdata)
static inline
void mesh_plink_dec_estab_count(struct ieee80211_sub_if_data *sdata)
static inline void mesh_plink_fsm_restart(struct sta_info *sta)
static struct sta_info *mesh_plink_alloc(struct ieee80211_sub_if_data *sdata,
u8 *hw_addr, u32 rates)
static bool __mesh_plink_deactivate(struct sta_info *sta)
void mesh_plink_deactivate(struct sta_info *sta)
static int mesh_plink_frame_tx(struct ieee80211_sub_if_data *sdata,
enum plink_frame_type action, u8 *da, __le16 llid, __le16 plid,
__le16 reason)
void mesh_neighbour_update(u8 *hw_addr, u32 rates,
struct ieee80211_sub_if_data *sdata,
struct ieee802_11_elems *elems)
static void mesh_plink_timer(unsigned long data)
void mesh_plink_quiesce(struct sta_info *sta)
void mesh_plink_restart(struct sta_info *sta)
static inline void mesh_plink_timer_set(struct sta_info *sta, int timeout)
int mesh_plink_open(struct sta_info *sta)
void mesh_plink_block(struct sta_info *sta)
void mesh_rx_plink_frame(struct ieee80211_sub_if_data *sdata, struct ieee80211_mgmt *mgmt,
size_t len, struct ieee80211_rx_status *rx_status)
