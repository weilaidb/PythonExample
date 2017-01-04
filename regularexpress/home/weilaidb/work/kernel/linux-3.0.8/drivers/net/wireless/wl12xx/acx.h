#define __ACX_H__
#define WL1271_ACX_INTR_WATCHDOG           BIT(0)
#define WL1271_ACX_INTR_INIT_COMPLETE      BIT(1)
#define WL1271_ACX_INTR_EVENT_A            BIT(2)
#define WL1271_ACX_INTR_EVENT_B            BIT(3)
#define WL1271_ACX_INTR_CMD_COMPLETE       BIT(4)
#define WL1271_ACX_INTR_HW_AVAILABLE       BIT(5)
#define WL1271_ACX_INTR_DATA               BIT(6)
#define WL1271_ACX_INTR_TRACE_A            BIT(7)
#define WL1271_ACX_INTR_TRACE_B            BIT(8)
#define WL1271_ACX_INTR_ALL		   0xFFFFFFFF
#define WL1271_ACX_ALL_EVENTS_VECTOR       (WL1271_ACX_INTR_WATCHDOG      | \
WL1271_ACX_INTR_INIT_COMPLETE | \
WL1271_ACX_INTR_EVENT_A       | \
WL1271_ACX_INTR_EVENT_B       | \
WL1271_ACX_INTR_CMD_COMPLETE  | \
WL1271_ACX_INTR_HW_AVAILABLE  | \
WL1271_ACX_INTR_DATA)
#define WL1271_INTR_MASK                   (WL1271_ACX_INTR_WATCHDOG     | \
WL1271_ACX_INTR_EVENT_A      | \
WL1271_ACX_INTR_EVENT_B      | \
WL1271_ACX_INTR_HW_AVAILABLE | \
WL1271_ACX_INTR_DATA)
struct acx_header  __packed;
struct acx_error_counter  __packed;
enum wl1271_psm_mode ;
struct acx_sleep_auth  __packed;
enum ;
#define DEFAULT_UCAST_PRIORITY          0
#define DEFAULT_RX_Q_PRIORITY           0
#define DEFAULT_RXQ_PRIORITY            0
#define DEFAULT_RXQ_TYPE                0x07
#define TRACE_BUFFER_MAX_SIZE           256
#define  DP_RX_PACKET_RING_CHUNK_SIZE 1600
#define  DP_TX_PACKET_RING_CHUNK_SIZE 1600
#define  DP_RX_PACKET_RING_CHUNK_NUM 2
#define  DP_TX_PACKET_RING_CHUNK_NUM 2
#define  DP_TX_COMPLETE_TIME_OUT 20
#define TX_MSDU_LIFETIME_MIN       0
#define TX_MSDU_LIFETIME_MAX       3000
#define TX_MSDU_LIFETIME_DEF       512
#define RX_MSDU_LIFETIME_MIN       0
#define RX_MSDU_LIFETIME_MAX       0xFFFFFFFF
#define RX_MSDU_LIFETIME_DEF       512000
struct acx_rx_msdu_lifetime  __packed;
struct acx_rx_config  __packed;
struct acx_packet_detection  __packed;
enum acx_slot_type ;
#define STATION_WONE_INDEX 0
struct acx_slot  __packed;
#define ACX_MC_ADDRESS_GROUP_MAX	(8)
#define ADDRESS_GROUP_MAX_LEN	        (ETH_ALEN * ACX_MC_ADDRESS_GROUP_MAX)
struct acx_dot11_grp_addr_tbl  __packed;
struct acx_rx_timeout  __packed;
struct acx_rts_threshold  __packed;
struct acx_beacon_filter_option  __packed;
#define	BEACON_FILTER_TABLE_MAX_IE_NUM		       (32)
#define BEACON_FILTER_TABLE_MAX_VENDOR_SPECIFIC_IE_NUM (6)
#define BEACON_FILTER_TABLE_IE_ENTRY_SIZE	       (2)
#define BEACON_FILTER_TABLE_EXTRA_VENDOR_SPECIFIC_IE_SIZE (6)
#define BEACON_FILTER_TABLE_MAX_SIZE ((BEACON_FILTER_TABLE_MAX_IE_NUM * \
BEACON_FILTER_TABLE_IE_ENTRY_SIZE) + \
(BEACON_FILTER_TABLE_MAX_VENDOR_SPECIFIC_IE_NUM * \
BEACON_FILTER_TABLE_EXTRA_VENDOR_SPECIFIC_IE_SIZE))
struct acx_beacon_filter_ie_table  __packed;
struct acx_conn_monit_params  __packed;
struct acx_bt_wlan_coex  __packed;
struct acx_sta_bt_wlan_coex_param  __packed;
struct acx_ap_bt_wlan_coex_param  __packed;
struct acx_dco_itrim_params  __packed;
struct acx_energy_detection  __packed;
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
#define DF_ENCRYPTION_DISABLE      0x01
#define DF_SNIFF_MODE_ENABLE       0x80
struct acx_feature_config  __packed;
struct acx_current_tx_power  __packed;
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
struct acx_rate_class ;
#define ACX_TX_BASIC_RATE      0
#define ACX_TX_AP_FULL_RATE    1
#define ACX_TX_RATE_POLICY_CNT 2
struct acx_sta_rate_policy  __packed;
#define ACX_TX_AP_MODE_MGMT_RATE 4
#define ACX_TX_AP_MODE_BCST_RATE 5
struct acx_ap_rate_policy  __packed;
struct acx_ac_cfg  __packed;
struct acx_tid_config  __packed;
struct acx_frag_threshold  __packed;
struct acx_tx_config_options  __packed;
#define ACX_TX_DESCRIPTORS    32
struct wl1271_acx_ap_config_memory  __packed;
struct wl1271_acx_sta_config_memory  __packed;
struct wl1271_acx_mem_map  __packed;
struct wl1271_acx_rx_config_opt  __packed;
struct wl1271_acx_bet_enable  __packed;
#define ACX_IPV4_VERSION 4
#define ACX_IPV6_VERSION 6
#define ACX_IPV4_ADDR_SIZE 4
#define ACX_ARP_FILTER_ARP_FILTERING	BIT(0)
#define ACX_ARP_FILTER_AUTO_ARP		BIT(1)
struct wl1271_acx_arp_filter  __packed;
struct wl1271_acx_pm_config  __packed;
struct wl1271_acx_keep_alive_mode  __packed;
enum ;
enum ;
struct wl1271_acx_keep_alive_config  __packed;
#define HOST_IF_CFG_RX_FIFO_ENABLE     BIT(0)
#define HOST_IF_CFG_TX_EXTRA_BLKS_SWAP BIT(1)
#define HOST_IF_CFG_TX_PAD_TO_SDIO_BLK BIT(3)
struct wl1271_acx_host_config_bitmap  __packed;
enum ;
enum ;
enum ;
enum ;
enum ;
struct wl1271_acx_rssi_snr_trigger ;
struct wl1271_acx_rssi_snr_avg_weights ;
struct wl1271_acx_ht_capabilities  __packed;
#define WL1271_ACX_FW_CAP_HT_OPERATION                 BIT(0)
#define WL1271_ACX_FW_CAP_GREENFIELD_FRAME_FORMAT      BIT(1)
#define WL1271_ACX_FW_CAP_SHORT_GI_FOR_20MHZ_PACKETS   BIT(2)
#define WL1271_ACX_FW_CAP_LSIG_TXOP_PROTECTION         BIT(3)
#define WL1271_ACX_FW_CAP_HT_CONTROL_FIELDS            BIT(4)
#define WL1271_ACX_FW_CAP_RD_INITIATION                BIT(5)
struct wl1271_acx_ht_information  __packed;
#define RX_BA_WIN_SIZE 8
struct wl1271_acx_ba_session_policy  __packed;
struct wl1271_acx_ba_receiver_setup  __packed;
struct wl1271_acx_fw_tsf_information  __packed;
struct wl1271_acx_max_tx_retry  __packed;
struct wl1271_acx_config_ps  __packed;
struct wl1271_acx_inconnection_sta  __packed;
struct acx_ap_beacon_filter  __packed;
struct wl1271_acx_fm_coex  __packed;
enum ;
int wl1271_acx_wake_up_conditions(struct wl1271 *wl);
int wl1271_acx_sleep_auth(struct wl1271 *wl, u8 sleep_auth);
int wl1271_acx_tx_power(struct wl1271 *wl, int power);
int wl1271_acx_feature_cfg(struct wl1271 *wl);
int wl1271_acx_mem_map(struct wl1271 *wl,
struct acx_header *mem_map, size_t len);
int wl1271_acx_rx_msdu_life_time(struct wl1271 *wl);
int wl1271_acx_rx_config(struct wl1271 *wl, u32 config, u32 filter);
int wl1271_acx_pd_threshold(struct wl1271 *wl);
int wl1271_acx_slot(struct wl1271 *wl, enum acx_slot_type slot_time);
int wl1271_acx_group_address_tbl(struct wl1271 *wl, bool enable,
void *mc_list, u32 mc_list_len);
int wl1271_acx_service_period_timeout(struct wl1271 *wl);
int wl1271_acx_rts_threshold(struct wl1271 *wl, u32 rts_threshold);
int wl1271_acx_dco_itrim_params(struct wl1271 *wl);
int wl1271_acx_beacon_filter_opt(struct wl1271 *wl, bool enable_filter);
int wl1271_acx_beacon_filter_table(struct wl1271 *wl);
int wl1271_acx_conn_monit_params(struct wl1271 *wl, bool enable);
int wl1271_acx_sg_enable(struct wl1271 *wl, bool enable);
int wl1271_acx_sta_sg_cfg(struct wl1271 *wl);
int wl1271_acx_ap_sg_cfg(struct wl1271 *wl);
int wl1271_acx_cca_threshold(struct wl1271 *wl);
int wl1271_acx_bcn_dtim_options(struct wl1271 *wl);
int wl1271_acx_aid(struct wl1271 *wl, u16 aid);
int wl1271_acx_event_mbox_mask(struct wl1271 *wl, u32 event_mask);
int wl1271_acx_set_preamble(struct wl1271 *wl, enum acx_preamble_type preamble);
int wl1271_acx_cts_protect(struct wl1271 *wl,
enum acx_ctsprotect_type ctsprotect);
int wl1271_acx_statistics(struct wl1271 *wl, struct acx_statistics *stats);
int wl1271_acx_sta_rate_policies(struct wl1271 *wl);
int wl1271_acx_ap_rate_policy(struct wl1271 *wl, struct conf_tx_rate_class *c,
u8 idx);
int wl1271_acx_ac_cfg(struct wl1271 *wl, u8 ac, u8 cw_min, u16 cw_max,
u8 aifsn, u16 txop);
int wl1271_acx_tid_cfg(struct wl1271 *wl, u8 queue_id, u8 channel_type,
u8 tsid, u8 ps_scheme, u8 ack_policy,
u32 apsd_conf0, u32 apsd_conf1);
int wl1271_acx_frag_threshold(struct wl1271 *wl, u32 frag_threshold);
int wl1271_acx_tx_config_options(struct wl1271 *wl);
int wl1271_acx_ap_mem_cfg(struct wl1271 *wl);
int wl1271_acx_sta_mem_cfg(struct wl1271 *wl);
int wl1271_acx_init_mem_config(struct wl1271 *wl);
int wl1271_acx_host_if_cfg_bitmap(struct wl1271 *wl, u32 host_cfg_bitmap);
int wl1271_acx_init_rx_interrupt(struct wl1271 *wl);
int wl1271_acx_smart_reflex(struct wl1271 *wl);
int wl1271_acx_bet_enable(struct wl1271 *wl, bool enable);
int wl1271_acx_arp_ip_filter(struct wl1271 *wl, u8 enable, __be32 address);
int wl1271_acx_pm_config(struct wl1271 *wl);
int wl1271_acx_keep_alive_mode(struct wl1271 *wl, bool enable);
int wl1271_acx_keep_alive_config(struct wl1271 *wl, u8 index, u8 tpl_valid);
int wl1271_acx_rssi_snr_trigger(struct wl1271 *wl, bool enable,
s16 thold, u8 hyst);
int wl1271_acx_rssi_snr_avg_weights(struct wl1271 *wl);
int wl1271_acx_set_ht_capabilities(struct wl1271 *wl,
struct ieee80211_sta_ht_cap *ht_cap,
bool allow_ht_operation);
int wl1271_acx_set_ht_information(struct wl1271 *wl,
u16 ht_operation_mode);
int wl1271_acx_set_ba_session(struct wl1271 *wl,
enum ieee80211_back_parties direction,
u8 tid_index, u8 policy);
int wl1271_acx_set_ba_receiver_session(struct wl1271 *wl, u8 tid_index, u16 ssn,
bool enable);
int wl1271_acx_tsf_info(struct wl1271 *wl, u64 *mactime);
int wl1271_acx_max_tx_retry(struct wl1271 *wl);
int wl1271_acx_config_ps(struct wl1271 *wl);
int wl1271_acx_set_inconnection_sta(struct wl1271 *wl, u8 *addr);
int wl1271_acx_set_ap_beacon_filter(struct wl1271 *wl, bool enable);
int wl1271_acx_fm_coex(struct wl1271 *wl);
