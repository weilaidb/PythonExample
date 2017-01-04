#define __WL1251_ACX_H__
struct acx_header  __packed;
struct acx_error_counter  __packed;
struct acx_revision  __packed;
enum wl1251_psm_mode ;
struct acx_sleep_auth  __packed;
enum ;
#define DEFAULT_UCAST_PRIORITY          0
#define DEFAULT_RX_Q_PRIORITY           0
#define DEFAULT_NUM_STATIONS            1
#define DEFAULT_RXQ_PRIORITY            0
#define DEFAULT_RXQ_TYPE                0x07
#define TRACE_BUFFER_MAX_SIZE           256
#define  DP_RX_PACKET_RING_CHUNK_SIZE 1600
#define  DP_TX_PACKET_RING_CHUNK_SIZE 1600
#define  DP_RX_PACKET_RING_CHUNK_NUM 2
#define  DP_TX_PACKET_RING_CHUNK_NUM 2
#define  DP_TX_COMPLETE_TIME_OUT 20
#define  FW_TX_CMPLT_BLOCK_SIZE 16
struct acx_data_path_params  __packed;
struct acx_data_path_params_resp  __packed;
#define TX_MSDU_LIFETIME_MIN       0
#define TX_MSDU_LIFETIME_MAX       3000
#define TX_MSDU_LIFETIME_DEF       512
#define RX_MSDU_LIFETIME_MIN       0
#define RX_MSDU_LIFETIME_MAX       0xFFFFFFFF
#define RX_MSDU_LIFETIME_DEF       512000
struct acx_rx_msdu_lifetime  __packed;
struct acx_rx_config  __packed;
enum ;
#define MAX_NUM_OF_AC             (QOS_HIGHEST_AC_INDEX+1)
#define FIRST_AC_INDEX            QOS_AC_BE
#define MAX_NUM_OF_802_1d_TAGS    8
#define AC_PARAMS_MAX_TSID        15
#define MAX_APSD_CONF             0xffff
#define  QOS_TX_HIGH_MIN      (0)
#define  QOS_TX_HIGH_MAX      (100)
#define  QOS_TX_HIGH_BK_DEF   (25)
#define  QOS_TX_HIGH_BE_DEF   (35)
#define  QOS_TX_HIGH_VI_DEF   (35)
#define  QOS_TX_HIGH_VO_DEF   (35)
#define  QOS_TX_LOW_BK_DEF    (15)
#define  QOS_TX_LOW_BE_DEF    (25)
#define  QOS_TX_LOW_VI_DEF    (25)
#define  QOS_TX_LOW_VO_DEF    (25)
struct acx_tx_queue_qos_config  __packed;
struct acx_packet_detection  __packed;
enum acx_slot_type ;
#define STATION_WONE_INDEX 0
struct acx_slot  __packed;
#define ADDRESS_GROUP_MAX	(8)
#define ADDRESS_GROUP_MAX_LEN	(ETH_ALEN * ADDRESS_GROUP_MAX)
struct acx_dot11_grp_addr_tbl  __packed;
#define  RX_TIMEOUT_PS_POLL_MIN    0
#define  RX_TIMEOUT_PS_POLL_MAX    (200000)
#define  RX_TIMEOUT_PS_POLL_DEF    (15)
#define  RX_TIMEOUT_UPSD_MIN       0
#define  RX_TIMEOUT_UPSD_MAX       (200000)
#define  RX_TIMEOUT_UPSD_DEF       (15)
struct acx_rx_timeout  __packed;
#define RTS_THRESHOLD_MIN              0
#define RTS_THRESHOLD_MAX              4096
#define RTS_THRESHOLD_DEF              2347
struct acx_rts_threshold  __packed;
enum wl1251_acx_low_rssi_type ;
struct acx_low_rssi  __packed;
struct acx_beacon_filter_option  __packed;
#define	BEACON_FILTER_TABLE_MAX_IE_NUM		       (32)
#define BEACON_FILTER_TABLE_MAX_VENDOR_SPECIFIC_IE_NUM (6)
#define BEACON_FILTER_TABLE_IE_ENTRY_SIZE	       (2)
#define BEACON_FILTER_TABLE_EXTRA_VENDOR_SPECIFIC_IE_SIZE (6)
#define BEACON_FILTER_TABLE_MAX_SIZE ((BEACON_FILTER_TABLE_MAX_IE_NUM * \
BEACON_FILTER_TABLE_IE_ENTRY_SIZE) + \
(BEACON_FILTER_TABLE_MAX_VENDOR_SPECIFIC_IE_NUM * \
BEACON_FILTER_TABLE_EXTRA_VENDOR_SPECIFIC_IE_SIZE))
#define BEACON_RULE_PASS_ON_CHANGE                     BIT(0)
#define BEACON_RULE_PASS_ON_APPEARANCE                 BIT(1)
#define BEACON_FILTER_IE_ID_CHANNEL_SWITCH_ANN         (37)
struct acx_beacon_filter_ie_table  __packed;
#define SYNCH_FAIL_DEFAULT_THRESHOLD    10
#define NO_BEACON_DEFAULT_TIMEOUT       (500)
struct acx_conn_monit_params  __packed;
enum ;
struct acx_bt_wlan_coex  __packed;
#define PTA_ANTENNA_TYPE_DEF		  (0)
#define PTA_BT_HP_MAXTIME_DEF		  (2000)
#define PTA_WLAN_HP_MAX_TIME_DEF	  (5000)
#define PTA_SENSE_DISABLE_TIMER_DEF	  (1350)
#define PTA_PROTECTIVE_RX_TIME_DEF	  (1500)
#define PTA_PROTECTIVE_TX_TIME_DEF	  (1500)
#define PTA_TIMEOUT_NEXT_BT_LP_PACKET_DEF (3000)
#define PTA_SIGNALING_TYPE_DEF		  (1)
#define PTA_AFH_LEVERAGE_ON_DEF		  (0)
#define PTA_NUMBER_QUIET_CYCLE_DEF	  (0)
#define PTA_MAX_NUM_CTS_DEF		  (3)
#define PTA_NUMBER_OF_WLAN_PACKETS_DEF	  (2)
#define PTA_NUMBER_OF_BT_PACKETS_DEF	  (2)
#define PTA_PROTECTIVE_RX_TIME_FAST_DEF	  (1500)
#define PTA_PROTECTIVE_TX_TIME_FAST_DEF	  (3000)
#define PTA_CYCLE_TIME_FAST_DEF		  (8700)
#define PTA_RX_FOR_AVALANCHE_DEF	  (5)
#define PTA_ELP_HP_DEF			  (0)
#define PTA_ANTI_STARVE_PERIOD_DEF	  (500)
#define PTA_ANTI_STARVE_NUM_CYCLE_DEF	  (4)
#define PTA_ALLOW_PA_SD_DEF		  (1)
#define PTA_TIME_BEFORE_BEACON_DEF	  (6300)
#define PTA_HPDM_MAX_TIME_DEF		  (1600)
#define PTA_TIME_OUT_NEXT_WLAN_DEF	  (2550)
#define PTA_AUTO_MODE_NO_CTS_DEF	  (0)
#define PTA_BT_HP_RESPECTED_DEF		  (3)
#define PTA_WLAN_RX_MIN_RATE_DEF	  (24)
#define PTA_ACK_MODE_DEF		  (1)
struct acx_bt_wlan_coex_param  __packed;
#define CCA_THRSH_ENABLE_ENERGY_D       0x140A
#define CCA_THRSH_DISABLE_ENERGY_D      0xFFEF
struct acx_energy_detection  __packed;
#define BCN_RX_TIMEOUT_DEF_VALUE        10000
#define BROADCAST_RX_TIMEOUT_DEF_VALUE  20000
#define RX_BROADCAST_IN_PS_DEF_VALUE    1
#define CONSECUTIVE_PS_POLL_FAILURE_DEF 4
struct acx_beacon_broadcast  __packed;
struct acx_event_mask  __packed;
#define CFG_RX_FCS		BIT(2)
#define CFG_RX_ALL_GOOD		BIT(3)
#define CFG_UNI_FILTER_EN	BIT(4)
#define CFG_BSSID_FILTER_EN	BIT(5)
#define CFG_MC_FILTER_EN	BIT(6)
#define CFG_MC_ADDR0_EN		BIT(7)
#define CFG_MC_ADDR1_EN		BIT(8)
#define CFG_BC_REJECT_EN	BIT(9)
#define CFG_SSID_FILTER_EN	BIT(10)
#define CFG_RX_INT_FCS_ERROR	BIT(11)
#define CFG_RX_INT_ENCRYPTED	BIT(12)
#define CFG_RX_WR_RX_STATUS	BIT(13)
#define CFG_RX_FILTER_NULTI	BIT(14)
#define CFG_RX_RESERVE		BIT(15)
#define CFG_RX_TIMESTAMP_TSF	BIT(16)
#define CFG_RX_RSV_EN		BIT(0)
#define CFG_RX_RCTS_ACK		BIT(1)
#define CFG_RX_PRSP_EN		BIT(2)
#define CFG_RX_PREQ_EN		BIT(3)
#define CFG_RX_MGMT_EN		BIT(4)
#define CFG_RX_FCS_ERROR	BIT(5)
#define CFG_RX_DATA_EN		BIT(6)
#define CFG_RX_CTL_EN		BIT(7)
#define CFG_RX_CF_EN		BIT(8)
#define CFG_RX_BCN_EN		BIT(9)
#define CFG_RX_AUTH_EN		BIT(10)
#define CFG_RX_ASSOC_EN		BIT(11)
#define SCAN_PASSIVE		BIT(0)
#define SCAN_5GHZ_BAND		BIT(1)
#define SCAN_TRIGGERED		BIT(2)
#define SCAN_PRIORITY_HIGH	BIT(3)
struct acx_fw_gen_frame_rates  __packed;
struct acx_dot11_station_id  __packed;
struct acx_feature_config  __packed;
struct acx_current_tx_power  __packed;
struct acx_dot11_default_key  __packed;
struct acx_tsf_info  __packed;
enum acx_wake_up_event ;
struct acx_wake_up_condition  __packed;
struct acx_aid  __packed;
enum acx_preamble_type ;
struct acx_preamble  __packed;
enum acx_ctsprotect_type ;
struct acx_ctsprotect  __packed;
struct acx_tx_statistics   __packed;
struct acx_rx_statistics  __packed;
struct acx_dma_statistics   __packed;
struct acx_isr_statistics  __packed;
struct acx_wep_statistics  __packed;
#define ACX_MISSED_BEACONS_SPREAD 10
struct acx_pwr_statistics  __packed;
struct acx_mic_statistics  __packed;
struct acx_aes_statistics  __packed;
struct acx_event_statistics  __packed;
struct acx_ps_statistics  __packed;
struct acx_rxpipe_statistics  __packed;
struct acx_statistics  __packed;
#define ACX_MAX_RATE_CLASSES       8
#define ACX_RATE_MASK_UNSPECIFIED  0
#define ACX_RATE_RETRY_LIMIT      10
struct acx_rate_class  __packed;
struct acx_rate_policy  __packed;
struct wl1251_acx_memory  __packed;
#define ACX_RX_DESC_MIN                1
#define ACX_RX_DESC_MAX                127
#define ACX_RX_DESC_DEF                32
struct wl1251_acx_rx_queue_config  __packed;
#define ACX_TX_DESC_MIN                1
#define ACX_TX_DESC_MAX                127
#define ACX_TX_DESC_DEF                16
struct wl1251_acx_tx_queue_config  __packed;
#define MAX_TX_QUEUE_CONFIGS 5
#define MAX_TX_QUEUES 4
struct wl1251_acx_config_memory  __packed;
struct wl1251_acx_mem_map  __packed;
struct wl1251_acx_wr_tbtt_and_dtim  __packed;
enum wl1251_acx_bet_mode ;
struct wl1251_acx_bet_enable  __packed;
struct wl1251_acx_ac_cfg  __packed;
enum wl1251_acx_channel_type ;
enum wl1251_acx_ps_scheme ;
enum wl1251_acx_ack_policy ;
struct wl1251_acx_tid_cfg  __packed;
#define WL1251_ACX_INTR_RX0_DATA      BIT(0)
#define WL1251_ACX_INTR_TX_RESULT	BIT(1)
#define WL1251_ACX_INTR_TX_XFR		BIT(2)
#define WL1251_ACX_INTR_RX1_DATA	BIT(3)
#define WL1251_ACX_INTR_EVENT_A		BIT(4)
#define WL1251_ACX_INTR_EVENT_B		BIT(5)
#define WL1251_ACX_INTR_WAKE_ON_HOST	BIT(6)
#define WL1251_ACX_INTR_TRACE_A		BIT(7)
#define WL1251_ACX_INTR_TRACE_B		BIT(8)
#define WL1251_ACX_INTR_CMD_COMPLETE	BIT(9)
#define WL1251_ACX_INTR_INIT_COMPLETE	BIT(14)
#define WL1251_ACX_INTR_ALL           0xFFFFFFFF
enum ;
int wl1251_acx_frame_rates(struct wl1251 *wl, u8 ctrl_rate, u8 ctrl_mod,
u8 mgt_rate, u8 mgt_mod);
int wl1251_acx_station_id(struct wl1251 *wl);
int wl1251_acx_default_key(struct wl1251 *wl, u8 key_id);
int wl1251_acx_wake_up_conditions(struct wl1251 *wl, u8 wake_up_event,
u8 listen_interval);
int wl1251_acx_sleep_auth(struct wl1251 *wl, u8 sleep_auth);
int wl1251_acx_fw_version(struct wl1251 *wl, char *buf, size_t len);
int wl1251_acx_tx_power(struct wl1251 *wl, int power);
int wl1251_acx_feature_cfg(struct wl1251 *wl);
int wl1251_acx_mem_map(struct wl1251 *wl,
struct acx_header *mem_map, size_t len);
int wl1251_acx_data_path_params(struct wl1251 *wl,
struct acx_data_path_params_resp *data_path);
int wl1251_acx_rx_msdu_life_time(struct wl1251 *wl, u32 life_time);
int wl1251_acx_rx_config(struct wl1251 *wl, u32 config, u32 filter);
int wl1251_acx_pd_threshold(struct wl1251 *wl);
int wl1251_acx_slot(struct wl1251 *wl, enum acx_slot_type slot_time);
int wl1251_acx_group_address_tbl(struct wl1251 *wl);
int wl1251_acx_service_period_timeout(struct wl1251 *wl);
int wl1251_acx_rts_threshold(struct wl1251 *wl, u16 rts_threshold);
int wl1251_acx_beacon_filter_opt(struct wl1251 *wl, bool enable_filter);
int wl1251_acx_beacon_filter_table(struct wl1251 *wl);
int wl1251_acx_conn_monit_params(struct wl1251 *wl);
int wl1251_acx_sg_enable(struct wl1251 *wl);
int wl1251_acx_sg_cfg(struct wl1251 *wl);
int wl1251_acx_cca_threshold(struct wl1251 *wl);
int wl1251_acx_bcn_dtim_options(struct wl1251 *wl);
int wl1251_acx_aid(struct wl1251 *wl, u16 aid);
int wl1251_acx_event_mbox_mask(struct wl1251 *wl, u32 event_mask);
int wl1251_acx_low_rssi(struct wl1251 *wl, s8 threshold, u8 weight,
u8 depth, enum wl1251_acx_low_rssi_type type);
int wl1251_acx_set_preamble(struct wl1251 *wl, enum acx_preamble_type preamble);
int wl1251_acx_cts_protect(struct wl1251 *wl,
enum acx_ctsprotect_type ctsprotect);
int wl1251_acx_statistics(struct wl1251 *wl, struct acx_statistics *stats);
int wl1251_acx_tsf_info(struct wl1251 *wl, u64 *mactime);
int wl1251_acx_rate_policies(struct wl1251 *wl);
int wl1251_acx_mem_cfg(struct wl1251 *wl);
int wl1251_acx_wr_tbtt_and_dtim(struct wl1251 *wl, u16 tbtt, u8 dtim);
int wl1251_acx_bet_enable(struct wl1251 *wl, enum wl1251_acx_bet_mode mode,
u8 max_consecutive);
int wl1251_acx_ac_cfg(struct wl1251 *wl, u8 ac, u8 cw_min, u16 cw_max,
u8 aifs, u16 txop);
int wl1251_acx_tid_cfg(struct wl1251 *wl, u8 queue,
enum wl1251_acx_channel_type type,
u8 tsid, enum wl1251_acx_ps_scheme ps_scheme,
enum wl1251_acx_ack_policy ack_policy);
