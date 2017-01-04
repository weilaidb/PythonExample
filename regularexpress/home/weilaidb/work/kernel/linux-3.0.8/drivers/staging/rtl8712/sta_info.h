#define __STA_INFO_H_
#define NUM_STA 32
#define NUM_ACL 64
struct wlan_acl_node ;
struct wlan_acl_pool ;
struct	stainfo_stats ;
struct sta_info ;
struct	sta_priv ;
static inline u32 wifi_mac_hash(u8 *mac)
u32 _r8712_init_sta_priv(struct sta_priv *pstapriv);
u32 _r8712_free_sta_priv(struct sta_priv *pstapriv);
struct sta_info *r8712_alloc_stainfo(struct sta_priv *pstapriv,
u8 *hwaddr);
void r8712_free_stainfo(struct _adapter *padapter , struct sta_info *psta);
void r8712_free_all_stainfo(struct _adapter *padapter);
struct sta_info *r8712_get_stainfo(struct sta_priv *pstapriv, u8 *hwaddr);
void r8712_init_bcmc_stainfo(struct _adapter *padapter);
struct sta_info *r8712_get_bcmc_stainfo(struct _adapter *padapter);
u8 r8712_access_ctrl(struct wlan_acl_pool *pacl_list, u8 * mac_addr);
