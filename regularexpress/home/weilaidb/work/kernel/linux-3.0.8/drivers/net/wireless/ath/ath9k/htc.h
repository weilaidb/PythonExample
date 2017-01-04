#define HTC_H
#define ATH_STA_SHORT_CALINTERVAL 1000
#define ATH_AP_SHORT_CALINTERVAL  100
#define ATH_ANI_POLLINTERVAL      100
#define ATH_LONG_CALINTERVAL      30000
#define ATH_RESTART_CALINTERVAL   1200000
#define ATH_DEFAULT_BMISS_LIMIT 10
#define IEEE80211_MS_TO_TU(x)   (((x) * 1000) / 1024)
#define TSF_TO_TU(_h, _l) \
((((u32)(_h)) << 22) | (((u32)(_l)) >> 10))
extern struct ieee80211_ops ath9k_htc_ops;
extern int htc_modparam_nohwcrypt;
enum htc_phymode ;
enum htc_opmode ;
#define ATH9K_HTC_AMPDU  1
#define ATH9K_HTC_NORMAL 2
#define ATH9K_HTC_BEACON 3
#define ATH9K_HTC_MGMT   4
#define ATH9K_HTC_TX_CTSONLY      0x1
#define ATH9K_HTC_TX_RTSCTS       0x2
struct tx_frame_hdr  __packed;
struct tx_mgmt_hdr  __packed;
struct tx_beacon_header  __packed;
#define MAX_TX_AMPDU_SUBFRAMES_9271 17
#define MAX_TX_AMPDU_SUBFRAMES_7010 22
struct ath9k_htc_cap_target  __packed;
struct ath9k_htc_target_vif  __packed;
struct ath9k_htc_target_sta  __packed;
struct ath9k_htc_target_aggr  __packed;
#define ATH_HTC_RATE_MAX 30
#define WLAN_RC_DS_FLAG  0x01
#define WLAN_RC_40_FLAG  0x02
#define WLAN_RC_SGI_FLAG 0x04
#define WLAN_RC_HT_FLAG  0x08
struct ath9k_htc_rateset ;
struct ath9k_htc_rate  __packed;
struct ath9k_htc_target_rate ;
struct ath9k_htc_target_rate_mask  __packed;
struct ath9k_htc_target_int_stats  __packed;
struct ath9k_htc_target_tx_stats  __packed;
struct ath9k_htc_target_rx_stats  __packed;
#define ATH9K_HTC_MAX_VIF 2
#define ATH9K_HTC_MAX_BCN_VIF 2
#define INC_VIF(_priv, _type) do  while (0)
#define DEC_VIF(_priv, _type) do  while (0)
struct ath9k_htc_vif ;
struct ath9k_vif_iter_data ;
#define ATH9K_HTC_MAX_STA 8
#define ATH9K_HTC_MAX_TID 8
enum tid_aggr_state ;
struct ath9k_htc_sta ;
#define ATH9K_HTC_RXBUF 256
#define HTC_RX_FRAME_HEADER_SIZE 40
struct ath9k_htc_rxbuf ;
struct ath9k_htc_rx ;
#define ATH9K_HTC_TX_CLEANUP_INTERVAL 50
#define ATH9K_HTC_TX_TIMEOUT_INTERVAL 3000
#define ATH9K_HTC_TX_RESERVE 10
#define ATH9K_HTC_TX_TIMEOUT_COUNT 40
#define ATH9K_HTC_TX_THRESHOLD (MAX_TX_BUF_NUM - ATH9K_HTC_TX_RESERVE)
#define ATH9K_HTC_OP_TX_QUEUES_STOP BIT(0)
#define ATH9K_HTC_OP_TX_DRAIN       BIT(1)
struct ath9k_htc_tx ;
struct ath9k_htc_tx_ctl ;
static inline struct ath9k_htc_tx_ctl *HTC_SKB_CB(struct sk_buff *skb)
#define TX_STAT_INC(c) (hif_dev->htc_handle->drv_priv->debug.tx_stats.c++)
#define RX_STAT_INC(c) (hif_dev->htc_handle->drv_priv->debug.rx_stats.c++)
#define CAB_STAT_INC   priv->debug.tx_stats.cab_queued++
#define TX_QSTAT_INC(q) (priv->debug.tx_stats.queue_stats[q]++)
void ath9k_htc_err_stat_rx(struct ath9k_htc_priv *priv,
struct ath_htc_rx_status *rxs);
struct ath_tx_stats ;
struct ath_rx_stats ;
struct ath9k_debug ;
#define TX_STAT_INC(c) do  while (0)
#define RX_STAT_INC(c) do  while (0)
#define CAB_STAT_INC   do  while (0)
#define TX_QSTAT_INC(c) do  while (0)
static inline void ath9k_htc_err_stat_rx(struct ath9k_htc_priv *priv,
struct ath_htc_rx_status *rxs)
#define ATH_LED_PIN_DEF             1
#define ATH_LED_PIN_9287            10
#define ATH_LED_PIN_9271            15
#define ATH_LED_PIN_7010            12
#define BSTUCK_THRESHOLD 10
#define DEFAULT_SWBA_RESPONSE 40
#define MIN_SWBA_RESPONSE     10
struct htc_beacon_config ;
struct ath_btcoex ;
void ath_htc_init_btcoex_work(struct ath9k_htc_priv *priv);
void ath_htc_resume_btcoex_work(struct ath9k_htc_priv *priv);
void ath_htc_cancel_btcoex_work(struct ath9k_htc_priv *priv);
#define OP_INVALID		   BIT(0)
#define OP_SCANNING		   BIT(1)
#define OP_ENABLE_BEACON           BIT(2)
#define OP_BT_PRIORITY_DETECTED    BIT(3)
#define OP_BT_SCAN                 BIT(4)
#define OP_ANI_RUNNING             BIT(5)
#define OP_TSF_RESET               BIT(6)
struct ath9k_htc_priv ;
static inline void ath_read_cachesize(struct ath_common *common, int *csz)
void ath9k_htc_reset(struct ath9k_htc_priv *priv);
void ath9k_htc_assign_bslot(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif);
void ath9k_htc_remove_bslot(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif);
void ath9k_htc_set_tsfadjust(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif);
void ath9k_htc_beaconq_config(struct ath9k_htc_priv *priv);
void ath9k_htc_beacon_config(struct ath9k_htc_priv *priv,
struct ieee80211_vif *vif);
void ath9k_htc_beacon_reconfig(struct ath9k_htc_priv *priv);
void ath9k_htc_swba(struct ath9k_htc_priv *priv,
struct wmi_event_swba *swba);
void ath9k_htc_rxep(void *priv, struct sk_buff *skb,
enum htc_endpoint_id ep_id);
void ath9k_htc_txep(void *priv, struct sk_buff *skb, enum htc_endpoint_id ep_id,
bool txok);
void ath9k_htc_beaconep(void *drv_priv, struct sk_buff *skb,
enum htc_endpoint_id ep_id, bool txok);
int ath9k_htc_update_cap_target(struct ath9k_htc_priv *priv,
u8 enable_coex);
void ath9k_htc_station_work(struct work_struct *work);
void ath9k_htc_aggr_work(struct work_struct *work);
void ath9k_htc_ani_work(struct work_struct *work);
void ath9k_htc_start_ani(struct ath9k_htc_priv *priv);
void ath9k_htc_stop_ani(struct ath9k_htc_priv *priv);
int ath9k_tx_init(struct ath9k_htc_priv *priv);
int ath9k_htc_tx_start(struct ath9k_htc_priv *priv,
struct sk_buff *skb, u8 slot, bool is_cab);
void ath9k_tx_cleanup(struct ath9k_htc_priv *priv);
bool ath9k_htc_txq_setup(struct ath9k_htc_priv *priv, int subtype);
int ath9k_htc_cabq_setup(struct ath9k_htc_priv *priv);
int get_hw_qnum(u16 queue, int *hwq_map);
int ath_htc_txq_update(struct ath9k_htc_priv *priv, int qnum,
struct ath9k_tx_queue_info *qinfo);
void ath9k_htc_check_stop_queues(struct ath9k_htc_priv *priv);
void ath9k_htc_check_wake_queues(struct ath9k_htc_priv *priv);
int ath9k_htc_tx_get_slot(struct ath9k_htc_priv *priv);
void ath9k_htc_tx_clear_slot(struct ath9k_htc_priv *priv, int slot);
void ath9k_htc_tx_drain(struct ath9k_htc_priv *priv);
void ath9k_htc_txstatus(struct ath9k_htc_priv *priv, void *wmi_event);
void ath9k_htc_tx_failed(struct ath9k_htc_priv *priv);
void ath9k_tx_failed_tasklet(unsigned long data);
void ath9k_htc_tx_cleanup_timer(unsigned long data);
int ath9k_rx_init(struct ath9k_htc_priv *priv);
void ath9k_rx_cleanup(struct ath9k_htc_priv *priv);
void ath9k_host_rx_init(struct ath9k_htc_priv *priv);
void ath9k_rx_tasklet(unsigned long data);
u32 ath9k_htc_calcrxfilter(struct ath9k_htc_priv *priv);
void ath9k_htc_ps_wakeup(struct ath9k_htc_priv *priv);
void ath9k_htc_ps_restore(struct ath9k_htc_priv *priv);
void ath9k_ps_work(struct work_struct *work);
bool ath9k_htc_setpower(struct ath9k_htc_priv *priv,
enum ath9k_power_mode mode);
void ath9k_start_rfkill_poll(struct ath9k_htc_priv *priv);
void ath9k_htc_rfkill_poll_state(struct ieee80211_hw *hw);
void ath9k_htc_radio_enable(struct ieee80211_hw *hw);
void ath9k_htc_radio_disable(struct ieee80211_hw *hw);
void ath9k_init_leds(struct ath9k_htc_priv *priv);
void ath9k_deinit_leds(struct ath9k_htc_priv *priv);
void ath9k_led_work(struct work_struct *work);
static inline void ath9k_init_leds(struct ath9k_htc_priv *priv)
static inline void ath9k_deinit_leds(struct ath9k_htc_priv *priv)
static inline void ath9k_led_work(struct work_struct *work)
int ath9k_htc_probe_device(struct htc_target *htc_handle, struct device *dev,
u16 devid, char *product, u32 drv_info);
void ath9k_htc_disconnect_device(struct htc_target *htc_handle, bool hotunplug);
void ath9k_htc_suspend(struct htc_target *htc_handle);
int ath9k_htc_resume(struct htc_target *htc_handle);
int ath9k_htc_init_debug(struct ath_hw *ah);
static inline int ath9k_htc_init_debug(struct ath_hw *ah) ;
