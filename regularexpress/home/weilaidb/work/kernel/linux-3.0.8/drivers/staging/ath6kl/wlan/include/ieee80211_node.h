#define _IEEE80211_NODE_H_
#define IEEE80211_NODE_LOCK_INIT(_nt)   A_MUTEX_INIT(&(_nt)->nt_nodelock)
#define IEEE80211_NODE_LOCK_DESTROY(_nt) if (A_IS_MUTEX_VALID(&(_nt)->nt_nodelock))
#define IEEE80211_NODE_LOCK(_nt)        A_MUTEX_LOCK(&(_nt)->nt_nodelock)
#define IEEE80211_NODE_UNLOCK(_nt)      A_MUTEX_UNLOCK(&(_nt)->nt_nodelock)
#define IEEE80211_NODE_LOCK_BH(_nt)     A_MUTEX_LOCK(&(_nt)->nt_nodelock)
#define IEEE80211_NODE_UNLOCK_BH(_nt)   A_MUTEX_UNLOCK(&(_nt)->nt_nodelock)
#define IEEE80211_NODE_LOCK_ASSERT(_nt)
#define ieee80211_node_initref(_ni)     ((_ni)->ni_refcnt = 1)
#define ieee80211_node_incref(_ni)      ((_ni)->ni_refcnt++)
#define ieee80211_node_decref(_ni)      ((_ni)->ni_refcnt--)
#define ieee80211_node_dectestref(_ni)  (((_ni)->ni_refcnt--) == 1)
#define ieee80211_node_refcnt(_ni)      ((_ni)->ni_refcnt)
#define IEEE80211_NODE_HASHSIZE 32
#define IEEE80211_NODE_HASH(addr)   \
(((const u8 *)(addr))[IEEE80211_ADDR_LEN - 1] % \
IEEE80211_NODE_HASHSIZE)
struct ieee80211_node_table ;
#define WLAN_NODE_INACT_TIMEOUT_MSEC            20000
#define WLAN_NODE_INACT_TIMEOUT_MSEC            120000
#define WLAN_NODE_INACT_CNT            4
