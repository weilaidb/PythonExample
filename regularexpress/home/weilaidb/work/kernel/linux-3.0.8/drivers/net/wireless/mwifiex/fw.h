#define _MWIFIEX_FW_H_
#define INTF_HEADER_LEN     4
struct rfc_1042_hdr ;
struct rx_packet_hdr ;
struct tx_packet_hdr ;
#define B_SUPPORTED_RATES               5
#define G_SUPPORTED_RATES               9
#define BG_SUPPORTED_RATES              13
#define A_SUPPORTED_RATES               9
#define HOSTCMD_SUPPORTED_RATES         14
#define N_SUPPORTED_RATES               3
#define ALL_802_11_BANDS           (BAND_A | BAND_B | BAND_G | BAND_GN)
#define FW_MULTI_BANDS_SUPPORT  (BIT(8) | BIT(9) | BIT(10) | BIT(11))
#define IS_SUPPORT_MULTI_BANDS(adapter)        \
(adapter->fw_cap_info & FW_MULTI_BANDS_SUPPORT)
#define GET_FW_DEFAULT_BANDS(adapter)  \
((adapter->fw_cap_info >> 8) & ALL_802_11_BANDS)
extern u8 supported_rates_b[B_SUPPORTED_RATES];
extern u8 supported_rates_g[G_SUPPORTED_RATES];
extern u8 supported_rates_bg[BG_SUPPORTED_RATES];
extern u8 supported_rates_a[A_SUPPORTED_RATES];
extern u8 supported_rates_n[N_SUPPORTED_RATES];
#define HostCmd_WEP_KEY_INDEX_MASK              0x3fff
#define KEY_INFO_ENABLED        0x01
enum KEY_TYPE_ID ;
#define KEY_MCAST	BIT(0)
#define KEY_UNICAST	BIT(1)
#define KEY_ENABLED	BIT(2)
#define WAPI_KEY_LEN			50
#define MAX_POLL_TRIES			100
#define MAX_MULTI_INTERFACE_POLL_TRIES  1000
#define MAX_FIRMWARE_POLL_TRIES			100
#define FIRMWARE_READY				0xfedc
enum MWIFIEX_802_11_PRIVACY_FILTER ;
enum MWIFIEX_802_11_WEP_STATUS ;
#define CAL_SNR(RSSI, NF)		((s16)((s16)(RSSI)-(s16)(NF)))
#define PROPRIETARY_TLV_BASE_ID                 0x0100
#define TLV_TYPE_KEY_MATERIAL       (PROPRIETARY_TLV_BASE_ID + 0)
#define TLV_TYPE_CHANLIST           (PROPRIETARY_TLV_BASE_ID + 1)
#define TLV_TYPE_NUMPROBES          (PROPRIETARY_TLV_BASE_ID + 2)
#define TLV_TYPE_PASSTHROUGH        (PROPRIETARY_TLV_BASE_ID + 10)
#define TLV_TYPE_WMMQSTATUS         (PROPRIETARY_TLV_BASE_ID + 16)
#define TLV_TYPE_WILDCARDSSID       (PROPRIETARY_TLV_BASE_ID + 18)
#define TLV_TYPE_TSFTIMESTAMP       (PROPRIETARY_TLV_BASE_ID + 19)
#define TLV_TYPE_AUTH_TYPE          (PROPRIETARY_TLV_BASE_ID + 31)
#define TLV_TYPE_CHANNELBANDLIST    (PROPRIETARY_TLV_BASE_ID + 42)
#define TLV_TYPE_RATE_DROP_CONTROL  (PROPRIETARY_TLV_BASE_ID + 82)
#define TLV_TYPE_RATE_SCOPE         (PROPRIETARY_TLV_BASE_ID + 83)
#define TLV_TYPE_POWER_GROUP        (PROPRIETARY_TLV_BASE_ID + 84)
#define TLV_TYPE_WAPI_IE            (PROPRIETARY_TLV_BASE_ID + 94)
#define TLV_TYPE_AUTO_DS_PARAM      (PROPRIETARY_TLV_BASE_ID + 113)
#define TLV_TYPE_PS_PARAM           (PROPRIETARY_TLV_BASE_ID + 114)
#define MWIFIEX_TX_DATA_BUF_SIZE_2K        2048
#define SSN_MASK         0xfff0
#define BA_RESULT_SUCCESS        0x0
#define BA_RESULT_TIMEOUT        0x2
#define IS_BASTREAM_SETUP(ptr)  (ptr->ba_status)
#define BA_STREAM_NOT_ALLOWED   0xff
#define IS_11N_ENABLED(priv) ((priv->adapter->config_bands & BAND_GN || \
priv->adapter->config_bands & BAND_AN) \
&& priv->curr_bss_params.bss_descriptor.bcn_ht_cap)
#define INITIATOR_BIT(DelBAParamSet) (((DelBAParamSet) &\
BIT(DELBA_INITIATOR_POS)) >> DELBA_INITIATOR_POS)
#define MWIFIEX_TX_DATA_BUF_SIZE_4K        4096
#define MWIFIEX_TX_DATA_BUF_SIZE_8K        8192
#define ISSUPP_11NENABLED(FwCapInfo) (FwCapInfo & BIT(11))
#define ISSUPP_CHANWIDTH40(Dot11nDevCap) (Dot11nDevCap & BIT(17))
#define ISSUPP_SHORTGI20(Dot11nDevCap) (Dot11nDevCap & BIT(23))
#define ISSUPP_SHORTGI40(Dot11nDevCap) (Dot11nDevCap & BIT(24))
#define ISSUPP_TXSTBC(Dot11nDevCap) (Dot11nDevCap & BIT(25))
#define ISSUPP_RXSTBC(Dot11nDevCap) (Dot11nDevCap & BIT(26))
#define ISSUPP_GREENFIELD(Dot11nDevCap) (Dot11nDevCap & BIT(29))
#define GET_RXMCSSUPP(DevMCSSupported) (DevMCSSupported & 0x0f)
#define SETHT_MCS32(x) (x[4] |= 1)
#define SET_SECONDARYCHAN(RadioType, SECCHAN) (RadioType |= (SECCHAN << 4))
#define LLC_SNAP_LEN    8
#define MOD_CLASS_HR_DSSS       0x03
#define MOD_CLASS_OFDM          0x07
#define MOD_CLASS_HT            0x08
#define HT_BW_20    0
#define HT_BW_40    1
#define HostCmd_CMD_GET_HW_SPEC                       0x0003
#define HostCmd_CMD_802_11_SCAN                       0x0006
#define HostCmd_CMD_802_11_GET_LOG                    0x000b
#define HostCmd_CMD_MAC_MULTICAST_ADR                 0x0010
#define HostCmd_CMD_802_11_EEPROM_ACCESS              0x0059
#define HostCmd_CMD_802_11_ASSOCIATE                  0x0012
#define HostCmd_CMD_802_11_SNMP_MIB                   0x0016
#define HostCmd_CMD_MAC_REG_ACCESS                    0x0019
#define HostCmd_CMD_BBP_REG_ACCESS                    0x001a
#define HostCmd_CMD_RF_REG_ACCESS                     0x001b
#define HostCmd_CMD_PMIC_REG_ACCESS                   0x00ad
#define HostCmd_CMD_802_11_RF_CHANNEL                 0x001d
#define HostCmd_CMD_802_11_DEAUTHENTICATE             0x0024
#define HostCmd_CMD_MAC_CONTROL                       0x0028
#define HostCmd_CMD_802_11_AD_HOC_START               0x002b
#define HostCmd_CMD_802_11_AD_HOC_JOIN                0x002c
#define HostCmd_CMD_802_11_AD_HOC_STOP                0x0040
#define HostCmd_CMD_802_11_MAC_ADDRESS                0x004D
#define HostCmd_CMD_802_11D_DOMAIN_INFO               0x005b
#define HostCmd_CMD_802_11_KEY_MATERIAL               0x005e
#define HostCmd_CMD_802_11_BG_SCAN_QUERY              0x006c
#define HostCmd_CMD_WMM_GET_STATUS                    0x0071
#define HostCmd_CMD_802_11_TX_RATE_QUERY              0x007f
#define HostCmd_CMD_802_11_IBSS_COALESCING_STATUS     0x0083
#define HostCmd_CMD_VERSION_EXT                       0x0097
#define HostCmd_CMD_RSSI_INFO                         0x00a4
#define HostCmd_CMD_FUNC_INIT                         0x00a9
#define HostCmd_CMD_FUNC_SHUTDOWN                     0x00aa
#define HostCmd_CMD_11N_CFG                           0x00cd
#define HostCmd_CMD_11N_ADDBA_REQ                     0x00ce
#define HostCmd_CMD_11N_ADDBA_RSP                     0x00cf
#define HostCmd_CMD_11N_DELBA                         0x00d0
#define HostCmd_CMD_RECONFIGURE_TX_BUFF               0x00d9
#define HostCmd_CMD_AMSDU_AGGR_CTRL                   0x00df
#define HostCmd_CMD_TXPWR_CFG                         0x00d1
#define HostCmd_CMD_TX_RATE_CFG                       0x00d6
#define HostCmd_CMD_802_11_PS_MODE_ENH                0x00e4
#define HostCmd_CMD_802_11_HS_CFG_ENH                 0x00e5
#define HostCmd_CMD_CAU_REG_ACCESS                    0x00ed
#define HostCmd_CMD_SET_BSS_MODE                      0x00f7
enum ENH_PS_MODES ;
#define HostCmd_RET_BIT                       0x8000
#define HostCmd_ACT_GEN_GET                   0x0000
#define HostCmd_ACT_GEN_SET                   0x0001
#define HostCmd_RESULT_OK                     0x0000
#define HostCmd_ACT_MAC_RX_ON                 0x0001
#define HostCmd_ACT_MAC_TX_ON                 0x0002
#define HostCmd_ACT_MAC_WEP_ENABLE            0x0008
#define HostCmd_ACT_MAC_ETHERNETII_ENABLE     0x0010
#define HostCmd_ACT_MAC_PROMISCUOUS_ENABLE    0x0080
#define HostCmd_ACT_MAC_ALL_MULTICAST_ENABLE  0x0100
#define HostCmd_ACT_MAC_ADHOC_G_PROTECTION_ON     0x2000
#define HostCmd_BSS_MODE_IBSS               0x0002
#define HostCmd_BSS_MODE_ANY                0x0003
#define HostCmd_SCAN_RADIO_TYPE_BG          0
#define HostCmd_SCAN_RADIO_TYPE_A           1
#define HOST_SLEEP_CFG_CANCEL		0xffffffff
#define HOST_SLEEP_CFG_COND_DEF		0x0000000f
#define HOST_SLEEP_CFG_GPIO_DEF		0xff
#define HOST_SLEEP_CFG_GAP_DEF		0
#define CMD_F_HOSTCMD           (1 << 0)
#define CMD_F_CANCELED          (1 << 1)
#define HostCmd_CMD_ID_MASK             0x0fff
#define HostCmd_SEQ_NUM_MASK            0x00ff
#define HostCmd_BSS_NUM_MASK            0x0f00
#define HostCmd_BSS_TYPE_MASK           0xf000
#define HostCmd_SET_SEQ_NO_BSS_INFO(seq, num, type)
#define HostCmd_GET_SEQ_NO(seq)       \
((seq) & HostCmd_SEQ_NUM_MASK)
#define HostCmd_GET_BSS_NO(seq)         \
(((seq) & HostCmd_BSS_NUM_MASK) >> 8)
#define HostCmd_GET_BSS_TYPE(seq)       \
(((seq) & HostCmd_BSS_TYPE_MASK) >> 12)
#define EVENT_DUMMY_HOST_WAKEUP_SIGNAL  0x00000001
#define EVENT_LINK_LOST                 0x00000003
#define EVENT_LINK_SENSED               0x00000004
#define EVENT_MIB_CHANGED               0x00000006
#define EVENT_INIT_DONE                 0x00000007
#define EVENT_DEAUTHENTICATED           0x00000008
#define EVENT_DISASSOCIATED             0x00000009
#define EVENT_PS_AWAKE                  0x0000000a
#define EVENT_PS_SLEEP                  0x0000000b
#define EVENT_MIC_ERR_MULTICAST         0x0000000d
#define EVENT_MIC_ERR_UNICAST           0x0000000e
#define EVENT_DEEP_SLEEP_AWAKE          0x00000010
#define EVENT_ADHOC_BCN_LOST            0x00000011
#define EVENT_WMM_STATUS_CHANGE         0x00000017
#define EVENT_BG_SCAN_REPORT            0x00000018
#define EVENT_RSSI_LOW                  0x00000019
#define EVENT_SNR_LOW                   0x0000001a
#define EVENT_MAX_FAIL                  0x0000001b
#define EVENT_RSSI_HIGH                 0x0000001c
#define EVENT_SNR_HIGH                  0x0000001d
#define EVENT_IBSS_COALESCED            0x0000001e
#define EVENT_DATA_RSSI_LOW             0x00000024
#define EVENT_DATA_SNR_LOW              0x00000025
#define EVENT_DATA_RSSI_HIGH            0x00000026
#define EVENT_DATA_SNR_HIGH             0x00000027
#define EVENT_LINK_QUALITY              0x00000028
#define EVENT_PORT_RELEASE              0x0000002b
#define EVENT_PRE_BEACON_LOST           0x00000031
#define EVENT_ADDBA                     0x00000033
#define EVENT_DELBA                     0x00000034
#define EVENT_BA_STREAM_TIEMOUT         0x00000037
#define EVENT_AMSDU_AGGR_CTRL           0x00000042
#define EVENT_WEP_ICV_ERR               0x00000046
#define EVENT_HS_ACT_REQ                0x00000047
#define EVENT_BW_CHANGE                 0x00000048
#define EVENT_HOSTWAKE_STAIE		0x0000004d
#define EVENT_ID_MASK                   0xffff
#define BSS_NUM_MASK                    0xf
#define EVENT_GET_BSS_NUM(event_cause)          \
(((event_cause) >> 16) & BSS_NUM_MASK)
#define EVENT_GET_BSS_TYPE(event_cause)         \
(((event_cause) >> 24) & 0x00ff)
struct mwifiex_ie_types_header  __packed;
struct mwifiex_ie_types_data  __packed;
#define MWIFIEX_TxPD_POWER_MGMT_NULL_PACKET 0x01
#define MWIFIEX_TxPD_POWER_MGMT_LAST_PACKET 0x08
struct txpd  __packed;
struct rxpd  __packed;
enum mwifiex_chan_scan_mode_bitmasks ;
#define SECOND_CHANNEL_BELOW    0x30
#define SECOND_CHANNEL_ABOVE    0x10
struct mwifiex_chan_scan_param_set  __packed;
struct mwifiex_ie_types_chan_list_param_set  __packed;
struct chan_band_param_set ;
struct mwifiex_ie_types_chan_band_list_param_set  __packed;
struct mwifiex_ie_types_rates_param_set  __packed;
struct mwifiex_ie_types_ssid_param_set  __packed;
struct mwifiex_ie_types_num_probes  __packed;
struct mwifiex_ie_types_wildcard_ssid_params  __packed;
#define TSF_DATA_SIZE            8
struct mwifiex_ie_types_tsf_timestamp  __packed;
struct mwifiex_cf_param_set  __packed;
struct mwifiex_ibss_param_set  __packed;
struct mwifiex_ie_types_ss_param_set  __packed;
struct mwifiex_fh_param_set  __packed;
struct mwifiex_ds_param_set  __packed;
struct mwifiex_ie_types_phy_param_set  __packed;
struct mwifiex_ie_types_auth_type  __packed;
struct mwifiex_ie_types_vendor_param_set ;
struct mwifiex_ie_types_rsn_param_set  __packed;
#define KEYPARAMSET_FIXED_LEN 6
struct mwifiex_ie_type_key_param_set  __packed;
struct host_cmd_ds_802_11_key_material  __packed;
struct host_cmd_ds_gen ;
#define S_DS_GEN        sizeof(struct host_cmd_ds_gen)
enum sleep_resp_ctrl ;
struct mwifiex_ps_param ;
#define BITMAP_AUTO_DS         0x01
#define BITMAP_STA_PS          0x10
struct mwifiex_ie_types_auto_ds_param  __packed;
struct mwifiex_ie_types_ps_param  __packed;
struct host_cmd_ds_802_11_ps_mode_enh  __packed;
struct host_cmd_ds_get_hw_spec  __packed;
struct host_cmd_ds_802_11_rssi_info ;
struct host_cmd_ds_802_11_rssi_info_rsp ;
struct host_cmd_ds_802_11_mac_address ;
struct host_cmd_ds_mac_control ;
struct host_cmd_ds_mac_multicast_adr  __packed;
struct host_cmd_ds_802_11_deauthenticate  __packed;
struct host_cmd_ds_802_11_associate  __packed;
struct ieee_types_assoc_rsp  __packed;
struct host_cmd_ds_802_11_associate_rsp  __packed;
struct ieee_types_cf_param_set  __packed;
struct ieee_types_ibss_param_set  __packed;
union ieee_types_ss_param_set  __packed;
struct ieee_types_fh_param_set  __packed;
struct ieee_types_ds_param_set  __packed;
union ieee_types_phy_param_set  __packed;
struct host_cmd_ds_802_11_ad_hoc_start  __packed;
struct host_cmd_ds_802_11_ad_hoc_result  __packed;
struct adhoc_bss_desc  __packed;
struct host_cmd_ds_802_11_ad_hoc_join  __packed;
struct host_cmd_ds_802_11_get_log ;
struct host_cmd_ds_tx_rate_query  __packed;
enum Host_Sleep_Action ;
struct mwifiex_hs_config_param  __packed;
struct hs_activate_param  __packed;
struct host_cmd_ds_802_11_hs_cfg_enh  __packed;
enum SNMP_MIB_INDEX ;
#define MAX_SNMP_BUF_SIZE   128
struct host_cmd_ds_802_11_snmp_mib  __packed;
struct mwifiex_rate_scope  __packed;
struct mwifiex_rate_drop_pattern  __packed;
struct host_cmd_ds_tx_rate_cfg  __packed;
struct mwifiex_power_group  __packed;
struct mwifiex_types_power_group  __packed;
struct host_cmd_ds_txpwr_cfg  __packed;
#define MWIFIEX_USER_SCAN_CHAN_MAX             50
#define MWIFIEX_MAX_SSID_LIST_LENGTH         10
struct mwifiex_scan_cmd_config  __packed;
struct mwifiex_user_scan_chan  __packed;
struct mwifiex_user_scan_ssid  __packed;
struct mwifiex_user_scan_cfg  __packed;
struct ie_body  __packed;
struct host_cmd_ds_802_11_scan  __packed;
struct host_cmd_ds_802_11_scan_rsp  __packed;
struct host_cmd_ds_802_11_bg_scan_query  __packed;
struct host_cmd_ds_802_11_bg_scan_query_rsp  __packed;
struct mwifiex_ietypes_domain_param_set  __packed;
struct host_cmd_ds_802_11d_domain_info  __packed;
struct host_cmd_ds_802_11d_domain_info_rsp  __packed;
struct host_cmd_ds_11n_addba_req  __packed;
struct host_cmd_ds_11n_addba_rsp  __packed;
struct host_cmd_ds_11n_delba  __packed;
struct host_cmd_ds_11n_batimeout  __packed;
struct host_cmd_ds_11n_cfg  __packed;
struct host_cmd_ds_txbuf_cfg  __packed;
struct host_cmd_ds_amsdu_aggr_ctrl  __packed;
struct mwifiex_ie_types_wmm_param_set ;
struct mwifiex_ie_types_wmm_queue_status ;
struct ieee_types_vendor_header  __packed;
struct ieee_types_wmm_ac_parameters  __packed;
struct ieee_types_wmm_parameter  __packed;
struct ieee_types_wmm_info  __packed;
struct host_cmd_ds_wmm_get_status  __packed;
struct mwifiex_wmm_ac_status ;
struct mwifiex_ie_types_htcap  __packed;
struct mwifiex_ie_types_htinfo  __packed;
struct mwifiex_ie_types_2040bssco  __packed;
struct mwifiex_ie_types_extcap  __packed;
struct host_cmd_ds_mac_reg_access  __packed;
struct host_cmd_ds_bbp_reg_access  __packed;
struct host_cmd_ds_rf_reg_access  __packed;
struct host_cmd_ds_pmic_reg_access  __packed;
struct host_cmd_ds_802_11_eeprom_access  __packed;
struct host_cmd_ds_802_11_rf_channel  __packed;
struct host_cmd_ds_version_ext  __packed;
struct host_cmd_ds_802_11_ibss_status  __packed;
#define CONNECTION_TYPE_INFRA   0
#define CONNECTION_TYPE_ADHOC   1
struct host_cmd_ds_set_bss_mode  __packed;
struct host_cmd_ds_command  __packed;
struct mwifiex_opt_sleep_confirm  __packed;
