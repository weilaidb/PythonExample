#define _wl_cfg80211_h_
struct wl_conf;
struct wl_iface;
struct wl_priv;
struct wl_security;
struct wl_ibss;
#define WL_DBG_NONE		0
#define WL_DBG_CONN		(1 << 5)
#define WL_DBG_SCAN		(1 << 4)
#define WL_DBG_TRACE		(1 << 3)
#define WL_DBG_INFO		(1 << 1)
#define WL_DBG_ERR		(1 << 0)
#define WL_DBG_MASK		((WL_DBG_INFO | WL_DBG_ERR | WL_DBG_TRACE) | \
(WL_DBG_SCAN) | (WL_DBG_CONN))
#define	WL_ERR(fmt, args...)					\
do  while (0)
#if (defined BCMDBG)
#define	WL_INFO(fmt, args...)					\
do  while (0)
#define	WL_TRACE(fmt, args...)					\
do  while (0)
#define	WL_SCAN(fmt, args...)					\
do  while (0)
#define	WL_CONN(fmt, args...)					\
do  while (0)
#define	WL_INFO(fmt, args...)
#define	WL_TRACE(fmt, args...)
#define	WL_SCAN(fmt, args...)
#define	WL_CONN(fmt, args...)
#define WL_SCAN_RETRY_MAX	3
#define WL_NUM_SCAN_MAX		1
#define WL_NUM_PMKIDS_MAX	MAXPMKID
#define WL_SCAN_BUF_MAX 		(1024 * 8)
#define WL_TLV_INFO_MAX 		1024
#define WL_BSS_INFO_MAX			2048
#define WL_ASSOC_INFO_MAX	512
#define WL_IOCTL_LEN_MAX	1024
#define WL_EXTRA_BUF_MAX	2048
#define WL_ISCAN_BUF_MAX	2048
#define WL_ISCAN_TIMER_INTERVAL_MS	3000
#define WL_SCAN_ERSULTS_LAST 	(WL_SCAN_RESULTS_NO_MEM+1)
#define WL_AP_MAX	256
#define WL_FILE_NAME_MAX		256
#define WL_ROAM_TRIGGER_LEVEL		-75
#define WL_ROAM_DELTA			20
#define WL_BEACON_TIMEOUT		3
#define WL_SCAN_CHANNEL_TIME		40
#define WL_SCAN_UNASSOC_TIME		40
#define WL_SCAN_PASSIVE_TIME		120
enum wl_status ;
enum wl_mode ;
enum wl_prof_list ;
enum wl_iscan_state ;
enum wl_fw_status ;
struct beacon_proberesp  __attribute__ ((packed));
struct wl_conf ;
struct wl_event_loop ;
struct wl_iface ;
struct wl_dev ;
struct wl_cfg80211_bss_info ;
struct wl_scan_req ;
struct wl_ie ;
struct wl_event_q ;
struct wl_security ;
struct wl_ibss ;
struct wl_profile ;
struct wl_iscan_eloop ;
struct wl_iscan_ctrl ;
struct wl_connect_info ;
struct wl_fw_ctrl ;
struct wl_assoc_ielen ;
struct wl_pmk_list ;
struct wl_priv ;
#define wl_to_dev(w) (wiphy_dev(wl->wdev->wiphy))
#define wl_to_wiphy(w) (w->wdev->wiphy)
#define wiphy_to_wl(w) ((struct wl_priv *)(wiphy_priv(w)))
#define wl_to_wdev(w) (w->wdev)
#define wdev_to_wl(w) ((struct wl_priv *)(wdev_priv(w)))
#define wl_to_ndev(w) (w->wdev->netdev)
#define ndev_to_wl(n) (wdev_to_wl(n->ieee80211_ptr))
#define ci_to_wl(c) (ci->wl)
#define wl_to_ci(w) (&w->ci)
#define wl_to_sr(w) (w->scan_req_int)
#define wl_to_ie(w) (&w->ie)
#define iscan_to_wl(i) ((struct wl_priv *)(i->data))
#define wl_to_iscan(w) (w->iscan)
#define wl_to_conn(w) (&w->conn_info)
static inline struct wl_bss_info *next_bss(struct wl_scan_results *list,
struct wl_bss_info *bss)
#define for_each_bss(list, bss, __i)	\
for (__i = 0; __i < list->count && __i < WL_AP_MAX; __i++, bss = next_bss(list, bss))
extern s32 wl_cfg80211_attach(struct net_device *ndev, void *data);
extern void wl_cfg80211_detach(void);
extern void wl_cfg80211_event(struct net_device *ndev, const wl_event_msg_t *e,
void *data);
extern void wl_cfg80211_sdio_func(void *func);
extern struct sdio_func *wl_cfg80211_get_sdio_func(void);
extern s32 wl_cfg80211_up(void);
extern s32 wl_cfg80211_down(void);
extern void wl_cfg80211_dbg_level(u32 level);
extern void *wl_cfg80211_request_fw(s8 *file_name);
extern s32 wl_cfg80211_read_fw(s8 *buf, u32 size);
extern void wl_cfg80211_release_fw(void);
extern s8 *wl_cfg80211_get_fwname(void);
extern s8 *wl_cfg80211_get_nvramname(void);
extern void wl_os_wd_timer(struct net_device *ndev, uint wdtick);
