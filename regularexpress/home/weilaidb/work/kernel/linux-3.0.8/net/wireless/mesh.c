#define MESH_TTL 		31
#define MESH_DEFAULT_ELEMENT_TTL 31
#define MESH_MAX_RETR	 	3
#define MESH_RET_T 		100
#define MESH_CONF_T 		100
#define MESH_HOLD_T 		100
#define MESH_PATH_TIMEOUT	5000
#define MESH_PREQ_MIN_INT	10
#define MESH_DIAM_TRAVERSAL_TIME 50
#define MESH_PATH_REFRESH_TIME			1000
#define MESH_MIN_DISCOVERY_TIMEOUT (2 * MESH_DIAM_TRAVERSAL_TIME)
#define MESH_MAX_ESTAB_PLINKS	32
#define MESH_MAX_PREQ_RETRIES	4
const struct mesh_config default_mesh_config = ;
const struct mesh_setup default_mesh_setup = ;
int __cfg80211_join_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev,
const struct mesh_setup *setup,
const struct mesh_config *conf)
int cfg80211_join_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev,
const struct mesh_setup *setup,
const struct mesh_config *conf)
void cfg80211_notify_new_peer_candidate(struct net_device *dev,
const u8 *macaddr, const u8* ie, u8 ie_len, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_notify_new_peer_candidate);
static int __cfg80211_leave_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev)
int cfg80211_leave_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev)
