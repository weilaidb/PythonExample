#define __IWM_H__
#define IWM_COPYRIGHT "Copyright(c) 2009 Intel Corporation"
#define IWM_AUTHOR "<ilw@linux.intel.com>"
#define IWM_SRC_LMAC	UMAC_HDI_IN_SOURCE_FHRX
#define IWM_SRC_UDMA	UMAC_HDI_IN_SOURCE_UDMA
#define IWM_SRC_UMAC	UMAC_HDI_IN_SOURCE_FW
#define IWM_SRC_NUM	3
#define IWM_POWER_INDEX_MIN	0
#define IWM_POWER_INDEX_MAX	5
#define IWM_POWER_INDEX_DEFAULT	3
struct iwm_conf ;
enum ;
struct iwm_if_ops;
struct iwm_wifi_cmd;
struct pool_entry ;
struct spool_entry ;
struct iwm_tx_credit ;
struct iwm_notif ;
struct iwm_tid_info ;
struct iwm_sta_info ;
struct iwm_tx_info ;
struct iwm_rx_info ;
#define IWM_NUM_KEYS 4
struct iwm_umac_key_hdr  __packed;
struct iwm_key ;
#define IWM_RX_ID_HASH  0xff
#define IWM_RX_ID_GET_HASH(id) ((id) % IWM_RX_ID_HASH)
#define IWM_STA_TABLE_NUM	16
#define IWM_TX_LIST_SIZE	64
#define IWM_RX_LIST_SIZE        256
#define IWM_SCAN_ID_MAX 0xff
#define IWM_STATUS_READY		0
#define IWM_STATUS_SCANNING		1
#define IWM_STATUS_SCAN_ABORTING	2
#define IWM_STATUS_SME_CONNECTING	3
#define IWM_STATUS_ASSOCIATED		4
#define IWM_STATUS_RESETTING		5
struct iwm_tx_queue ;
#define IWM_TX_QUEUES		5
#define IWM_TX_DATA_QUEUES	4
#define IWM_TX_CMD_QUEUE	4
struct iwm_bss_info ;
typedef int (*iwm_handler)(struct iwm_priv *priv, u8 *buf,
unsigned long buf_size, struct iwm_wifi_cmd *cmd);
#define IWM_WATCHDOG_PERIOD	(6 * HZ)
struct iwm_priv ;
static inline void *iwm_private(struct iwm_priv *iwm)
#define hw_to_iwm(h) (h->iwm)
#define iwm_to_dev(i) (wiphy_dev(i->wdev->wiphy))
#define iwm_to_wiphy(i) (i->wdev->wiphy)
#define wiphy_to_iwm(w) (struct iwm_priv *)(wiphy_priv(w))
#define iwm_to_wdev(i) (i->wdev)
#define wdev_to_iwm(w) (struct iwm_priv *)(wdev_priv(w))
#define iwm_to_ndev(i) (i->wdev->netdev)
#define ndev_to_iwm(n) (wdev_to_iwm(n->ieee80211_ptr))
#define skb_to_rx_info(s) ((struct iwm_rx_info *)(s->cb))
#define skb_to_tx_info(s) ((struct iwm_tx_info *)s->cb)
void *iwm_if_alloc(int sizeof_bus, struct device *dev,
struct iwm_if_ops *if_ops);
void iwm_if_free(struct iwm_priv *iwm);
int iwm_if_add(struct iwm_priv *iwm);
void iwm_if_remove(struct iwm_priv *iwm);
int iwm_mode_to_nl80211_iftype(int mode);
int iwm_priv_init(struct iwm_priv *iwm);
void iwm_priv_deinit(struct iwm_priv *iwm);
void iwm_reset(struct iwm_priv *iwm);
void iwm_resetting(struct iwm_priv *iwm);
void iwm_tx_credit_init_pools(struct iwm_priv *iwm,
struct iwm_umac_notif_alive *alive);
int iwm_tx_credit_alloc(struct iwm_priv *iwm, int id, int nb);
int iwm_notif_send(struct iwm_priv *iwm, struct iwm_wifi_cmd *cmd,
u8 cmd_id, u8 source, u8 *buf, unsigned long buf_size);
int iwm_notif_handle(struct iwm_priv *iwm, u32 cmd, u8 source, long timeout);
void iwm_init_default_profile(struct iwm_priv *iwm,
struct iwm_umac_profile *profile);
void iwm_link_on(struct iwm_priv *iwm);
void iwm_link_off(struct iwm_priv *iwm);
int iwm_up(struct iwm_priv *iwm);
int iwm_down(struct iwm_priv *iwm);
int iwm_tid_to_queue(u16 tid);
void iwm_tx_credit_inc(struct iwm_priv *iwm, int id, int total_freed_pages);
void iwm_tx_worker(struct work_struct *work);
int iwm_xmit_frame(struct sk_buff *skb, struct net_device *netdev);
void iwm_rx_setup_handlers(struct iwm_priv *iwm);
int iwm_rx_handle(struct iwm_priv *iwm, u8 *buf, unsigned long buf_size);
int iwm_rx_handle_resp(struct iwm_priv *iwm, u8 *buf, unsigned long buf_size,
struct iwm_wifi_cmd *cmd);
void iwm_rx_free(struct iwm_priv *iwm);
