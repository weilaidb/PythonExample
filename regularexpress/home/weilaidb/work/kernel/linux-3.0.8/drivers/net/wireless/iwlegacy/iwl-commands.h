#define __iwl_legacy_commands_h__
struct iwl_priv;
#define IWL_UCODE_MAJOR(ver)	(((ver) & 0xFF000000) >> 24)
#define IWL_UCODE_MINOR(ver)	(((ver) & 0x00FF0000) >> 16)
#define IWL_UCODE_API(ver)	(((ver) & 0x0000FF00) >> 8)
#define IWL_UCODE_SERIAL(ver)	((ver) & 0x000000FF)
#define IWL_CCK_RATES	4
#define IWL_OFDM_RATES	8
#define IWL_MAX_RATES	(IWL_CCK_RATES + IWL_OFDM_RATES)
enum ;
#define IWL_CMD_FAILED_MSK 0x40
#define SEQ_TO_QUEUE(s)	(((s) >> 8) & 0x1f)
#define QUEUE_TO_SEQ(q)	(((q) & 0x1f) << 8)
#define SEQ_TO_INDEX(s)	((s) & 0xff)
#define INDEX_TO_SEQ(i)	((i) & 0xff)
#define SEQ_HUGE_FRAME	cpu_to_le16(0x4000)
#define SEQ_RX_FRAME	cpu_to_le16(0x8000)
struct iwl_cmd_header  __packed;
struct iwl3945_tx_power  __packed;
struct iwl3945_power_per_rate  __packed;
#define RATE_MCS_CODE_MSK 0x7
#define RATE_MCS_SPATIAL_POS 3
#define RATE_MCS_SPATIAL_MSK 0x18
#define RATE_MCS_HT_DUP_POS 5
#define RATE_MCS_HT_DUP_MSK 0x20
#define RATE_MCS_FLAGS_POS 8
#define RATE_MCS_HT_POS 8
#define RATE_MCS_HT_MSK 0x100
#define RATE_MCS_CCK_POS 9
#define RATE_MCS_CCK_MSK 0x200
#define RATE_MCS_GF_POS 10
#define RATE_MCS_GF_MSK 0x400
#define RATE_MCS_HT40_POS 11
#define RATE_MCS_HT40_MSK 0x800
#define RATE_MCS_DUP_POS 12
#define RATE_MCS_DUP_MSK 0x1000
#define RATE_MCS_SGI_POS 13
#define RATE_MCS_SGI_MSK 0x2000
#define RATE_MCS_ANT_POS	14
#define RATE_MCS_ANT_A_MSK	0x04000
#define RATE_MCS_ANT_B_MSK	0x08000
#define RATE_MCS_ANT_C_MSK	0x10000
#define RATE_MCS_ANT_AB_MSK	(RATE_MCS_ANT_A_MSK | RATE_MCS_ANT_B_MSK)
#define RATE_MCS_ANT_ABC_MSK	(RATE_MCS_ANT_AB_MSK | RATE_MCS_ANT_C_MSK)
#define RATE_ANT_NUM 3
#define POWER_TABLE_NUM_ENTRIES			33
#define POWER_TABLE_NUM_HT_OFDM_ENTRIES		32
#define POWER_TABLE_CCK_ENTRY			32
#define IWL_PWR_NUM_HT_OFDM_ENTRIES		24
#define IWL_PWR_CCK_ENTRIES			2
union iwl4965_tx_power_dual_stream ;
struct tx_power_dual_stream  __packed;
struct iwl4965_tx_power_db  __packed;
#define UCODE_VALID_OK	cpu_to_le32(0x1)
#define INITIALIZE_SUBTYPE    (9)
struct iwl_init_alive_resp  __packed;
struct iwl_alive_resp  __packed;
struct iwl_error_resp  __packed;
enum ;
#define RXON_RX_CHAIN_DRIVER_FORCE_MSK		cpu_to_le16(0x1 << 0)
#define RXON_RX_CHAIN_DRIVER_FORCE_POS		(0)
#define RXON_RX_CHAIN_VALID_MSK			cpu_to_le16(0x7 << 1)
#define RXON_RX_CHAIN_VALID_POS			(1)
#define RXON_RX_CHAIN_FORCE_SEL_MSK		cpu_to_le16(0x7 << 4)
#define RXON_RX_CHAIN_FORCE_SEL_POS		(4)
#define RXON_RX_CHAIN_FORCE_MIMO_SEL_MSK	cpu_to_le16(0x7 << 7)
#define RXON_RX_CHAIN_FORCE_MIMO_SEL_POS	(7)
#define RXON_RX_CHAIN_CNT_MSK			cpu_to_le16(0x3 << 10)
#define RXON_RX_CHAIN_CNT_POS			(10)
#define RXON_RX_CHAIN_MIMO_CNT_MSK		cpu_to_le16(0x3 << 12)
#define RXON_RX_CHAIN_MIMO_CNT_POS		(12)
#define RXON_RX_CHAIN_MIMO_FORCE_MSK		cpu_to_le16(0x1 << 14)
#define RXON_RX_CHAIN_MIMO_FORCE_POS		(14)
#define RXON_FLG_BAND_24G_MSK           cpu_to_le32(1 << 0)
#define RXON_FLG_CCK_MSK                cpu_to_le32(1 << 1)
#define RXON_FLG_AUTO_DETECT_MSK        cpu_to_le32(1 << 2)
#define RXON_FLG_TGG_PROTECT_MSK        cpu_to_le32(1 << 3)
#define RXON_FLG_SHORT_SLOT_MSK          cpu_to_le32(1 << 4)
#define RXON_FLG_SHORT_PREAMBLE_MSK     cpu_to_le32(1 << 5)
#define RXON_FLG_DIS_DIV_MSK            cpu_to_le32(1 << 7)
#define RXON_FLG_ANT_SEL_MSK            cpu_to_le32(0x0f00)
#define RXON_FLG_ANT_A_MSK              cpu_to_le32(1 << 8)
#define RXON_FLG_ANT_B_MSK              cpu_to_le32(1 << 9)
#define RXON_FLG_RADAR_DETECT_MSK       cpu_to_le32(1 << 12)
#define RXON_FLG_TGJ_NARROW_BAND_MSK    cpu_to_le32(1 << 13)
#define RXON_FLG_TSF2HOST_MSK           cpu_to_le32(1 << 15)
#define RXON_FLG_CTRL_CHANNEL_LOC_POS		(22)
#define RXON_FLG_CTRL_CHANNEL_LOC_HI_MSK	cpu_to_le32(0x1 << 22)
#define RXON_FLG_HT_OPERATING_MODE_POS		(23)
#define RXON_FLG_HT_PROT_MSK			cpu_to_le32(0x1 << 23)
#define RXON_FLG_HT40_PROT_MSK			cpu_to_le32(0x2 << 23)
#define RXON_FLG_CHANNEL_MODE_POS		(25)
#define RXON_FLG_CHANNEL_MODE_MSK		cpu_to_le32(0x3 << 25)
enum ;
#define RXON_FLG_CHANNEL_MODE_LEGACY			\
cpu_to_le32(CHANNEL_MODE_LEGACY << RXON_FLG_CHANNEL_MODE_POS)
#define RXON_FLG_CHANNEL_MODE_PURE_40			\
cpu_to_le32(CHANNEL_MODE_PURE_40 << RXON_FLG_CHANNEL_MODE_POS)
#define RXON_FLG_CHANNEL_MODE_MIXED			\
cpu_to_le32(CHANNEL_MODE_MIXED << RXON_FLG_CHANNEL_MODE_POS)
#define RXON_FLG_SELF_CTS_EN			cpu_to_le32(0x1<<30)
#define RXON_FILTER_PROMISC_MSK         cpu_to_le32(1 << 0)
#define RXON_FILTER_CTL2HOST_MSK        cpu_to_le32(1 << 1)
#define RXON_FILTER_ACCEPT_GRP_MSK      cpu_to_le32(1 << 2)
#define RXON_FILTER_DIS_DECRYPT_MSK     cpu_to_le32(1 << 3)
#define RXON_FILTER_DIS_GRP_DECRYPT_MSK cpu_to_le32(1 << 4)
#define RXON_FILTER_ASSOC_MSK           cpu_to_le32(1 << 5)
#define RXON_FILTER_BCON_AWARE_MSK      cpu_to_le32(1 << 6)
struct iwl3945_rxon_cmd  __packed;
struct iwl4965_rxon_cmd  __packed;
struct iwl_legacy_rxon_cmd  __packed;
struct iwl3945_rxon_assoc_cmd  __packed;
struct iwl4965_rxon_assoc_cmd  __packed;
#define IWL_CONN_MAX_LISTEN_INTERVAL	10
#define IWL_MAX_UCODE_BEACON_INTERVAL	4
#define IWL39_MAX_UCODE_BEACON_INTERVAL	1
struct iwl_rxon_time_cmd  __packed;
struct iwl3945_channel_switch_cmd  __packed;
struct iwl4965_channel_switch_cmd  __packed;
struct iwl_csa_notification  __packed;
struct iwl_ac_qos  __packed;
#define QOS_PARAM_FLG_UPDATE_EDCA_MSK	cpu_to_le32(0x01)
#define QOS_PARAM_FLG_TGN_MSK		cpu_to_le32(0x02)
#define QOS_PARAM_FLG_TXOP_TYPE_MSK	cpu_to_le32(0x10)
#define AC_NUM                4
struct iwl_qosparam_cmd  __packed;
#define	IWL_AP_ID		0
#define	IWL_STA_ID		2
#define	IWL3945_BROADCAST_ID	24
#define IWL3945_STATION_COUNT	25
#define IWL4965_BROADCAST_ID	31
#define	IWL4965_STATION_COUNT	32
#define	IWL_STATION_COUNT	32
#define	IWL_INVALID_STATION	255
#define STA_FLG_TX_RATE_MSK		cpu_to_le32(1 << 2)
#define STA_FLG_PWR_SAVE_MSK		cpu_to_le32(1 << 8)
#define STA_FLG_RTS_MIMO_PROT_MSK	cpu_to_le32(1 << 17)
#define STA_FLG_AGG_MPDU_8US_MSK	cpu_to_le32(1 << 18)
#define STA_FLG_MAX_AGG_SIZE_POS	(19)
#define STA_FLG_MAX_AGG_SIZE_MSK	cpu_to_le32(3 << 19)
#define STA_FLG_HT40_EN_MSK		cpu_to_le32(1 << 21)
#define STA_FLG_MIMO_DIS_MSK		cpu_to_le32(1 << 22)
#define STA_FLG_AGG_MPDU_DENSITY_POS	(23)
#define STA_FLG_AGG_MPDU_DENSITY_MSK	cpu_to_le32(7 << 23)
#define STA_CONTROL_MODIFY_MSK		0x01
#define STA_KEY_FLG_ENCRYPT_MSK	cpu_to_le16(0x0007)
#define STA_KEY_FLG_NO_ENC	cpu_to_le16(0x0000)
#define STA_KEY_FLG_WEP		cpu_to_le16(0x0001)
#define STA_KEY_FLG_CCMP	cpu_to_le16(0x0002)
#define STA_KEY_FLG_TKIP	cpu_to_le16(0x0003)
#define STA_KEY_FLG_KEYID_POS	8
#define STA_KEY_FLG_INVALID	cpu_to_le16(0x0800)
#define STA_KEY_FLG_MAP_KEY_MSK	cpu_to_le16(0x0008)
#define STA_KEY_FLG_KEY_SIZE_MSK	cpu_to_le16(0x1000)
#define STA_KEY_MULTICAST_MSK		cpu_to_le16(0x4000)
#define STA_KEY_MAX_NUM		8
#define	STA_MODIFY_KEY_MASK		0x01
#define	STA_MODIFY_TID_DISABLE_TX	0x02
#define	STA_MODIFY_TX_RATE_MSK		0x04
#define STA_MODIFY_ADDBA_TID_MSK	0x08
#define STA_MODIFY_DELBA_TID_MSK	0x10
#define STA_MODIFY_SLEEP_TX_COUNT_MSK	0x20
#define BUILD_RAxTID(sta_id, tid)	(((sta_id) << 4) + (tid))
struct iwl4965_keyinfo  __packed;
struct sta_id_modify  __packed;
struct iwl3945_addsta_cmd  __packed;
struct iwl4965_addsta_cmd  __packed;
struct iwl_legacy_addsta_cmd  __packed;
#define ADD_STA_SUCCESS_MSK		0x1
#define ADD_STA_NO_ROOM_IN_TABLE	0x2
#define ADD_STA_NO_BLOCK_ACK_RESOURCE	0x4
#define ADD_STA_MODIFY_NON_EXIST_STA	0x8
struct iwl_add_sta_resp  __packed;
#define REM_STA_SUCCESS_MSK              0x1
struct iwl_rem_sta_resp  __packed;
struct iwl_rem_sta_cmd  __packed;
#define IWL_TX_FIFO_BK_MSK		cpu_to_le32(BIT(0))
#define IWL_TX_FIFO_BE_MSK		cpu_to_le32(BIT(1))
#define IWL_TX_FIFO_VI_MSK		cpu_to_le32(BIT(2))
#define IWL_TX_FIFO_VO_MSK		cpu_to_le32(BIT(3))
#define IWL_AGG_TX_QUEUE_MSK		cpu_to_le32(0xffc00)
#define IWL_DROP_SINGLE		0
#define IWL_DROP_SELECTED	1
#define IWL_DROP_ALL		2
struct iwl_wep_key  __packed;
struct iwl_wep_cmd  __packed;
#define WEP_KEY_WEP_TYPE 1
#define WEP_KEYS_MAX 4
#define WEP_INVALID_OFFSET 0xff
#define WEP_KEY_LEN_64 5
#define WEP_KEY_LEN_128 13
#define RX_RES_STATUS_NO_CRC32_ERROR	cpu_to_le32(1 << 0)
#define RX_RES_STATUS_NO_RXE_OVERFLOW	cpu_to_le32(1 << 1)
#define RX_RES_PHY_FLAGS_BAND_24_MSK	cpu_to_le16(1 << 0)
#define RX_RES_PHY_FLAGS_MOD_CCK_MSK		cpu_to_le16(1 << 1)
#define RX_RES_PHY_FLAGS_SHORT_PREAMBLE_MSK	cpu_to_le16(1 << 2)
#define RX_RES_PHY_FLAGS_NARROW_BAND_MSK	cpu_to_le16(1 << 3)
#define RX_RES_PHY_FLAGS_ANTENNA_MSK		0xf0
#define RX_RES_PHY_FLAGS_ANTENNA_POS		4
#define RX_RES_STATUS_SEC_TYPE_MSK	(0x7 << 8)
#define RX_RES_STATUS_SEC_TYPE_NONE	(0x0 << 8)
#define RX_RES_STATUS_SEC_TYPE_WEP	(0x1 << 8)
#define RX_RES_STATUS_SEC_TYPE_CCMP	(0x2 << 8)
#define RX_RES_STATUS_SEC_TYPE_TKIP	(0x3 << 8)
#define	RX_RES_STATUS_SEC_TYPE_ERR	(0x7 << 8)
#define RX_RES_STATUS_STATION_FOUND	(1<<6)
#define RX_RES_STATUS_NO_STATION_INFO_MISMATCH	(1<<7)
#define RX_RES_STATUS_DECRYPT_TYPE_MSK	(0x3 << 11)
#define RX_RES_STATUS_NOT_DECRYPT	(0x0 << 11)
#define RX_RES_STATUS_DECRYPT_OK	(0x3 << 11)
#define RX_RES_STATUS_BAD_ICV_MIC	(0x1 << 11)
#define RX_RES_STATUS_BAD_KEY_TTAK	(0x2 << 11)
#define RX_MPDU_RES_STATUS_ICV_OK	(0x20)
#define RX_MPDU_RES_STATUS_MIC_OK	(0x40)
#define RX_MPDU_RES_STATUS_TTAK_OK	(1 << 7)
#define RX_MPDU_RES_STATUS_DEC_DONE_MSK	(0x800)
struct iwl3945_rx_frame_stats  __packed;
struct iwl3945_rx_frame_hdr  __packed;
struct iwl3945_rx_frame_end  __packed;
struct iwl3945_rx_frame  __packed;
#define IWL39_RX_FRAME_SIZE	(4 + sizeof(struct iwl3945_rx_frame))
#define IWL49_RX_RES_PHY_CNT 14
#define IWL49_RX_PHY_FLAGS_ANTENNAE_OFFSET	(4)
#define IWL49_RX_PHY_FLAGS_ANTENNAE_MASK	(0x70)
#define IWL49_AGC_DB_MASK			(0x3f80)
#define IWL49_AGC_DB_POS			(7)
struct iwl4965_rx_non_cfg_phy  __packed;
struct iwl_rx_phy_res  __packed;
struct iwl_rx_mpdu_res_start  __packed;
#define TX_CMD_FLG_RTS_MSK cpu_to_le32(1 << 1)
#define TX_CMD_FLG_CTS_MSK cpu_to_le32(1 << 2)
#define TX_CMD_FLG_ACK_MSK cpu_to_le32(1 << 3)
#define TX_CMD_FLG_STA_RATE_MSK cpu_to_le32(1 << 4)
#define TX_CMD_FLG_IMM_BA_RSP_MASK  cpu_to_le32(1 << 6)
#define TX_CMD_FLG_FULL_TXOP_PROT_MSK cpu_to_le32(1 << 7)
#define TX_CMD_FLG_ANT_SEL_MSK cpu_to_le32(0xf00)
#define TX_CMD_FLG_ANT_A_MSK cpu_to_le32(1 << 8)
#define TX_CMD_FLG_ANT_B_MSK cpu_to_le32(1 << 9)
#define TX_CMD_FLG_SEQ_CTL_MSK cpu_to_le32(1 << 13)
#define TX_CMD_FLG_MORE_FRAG_MSK cpu_to_le32(1 << 14)
#define TX_CMD_FLG_TSF_MSK cpu_to_le32(1 << 16)
#define TX_CMD_FLG_MH_PAD_MSK cpu_to_le32(1 << 20)
#define TX_CMD_FLG_AGG_CCMP_MSK cpu_to_le32(1 << 22)
#define TX_CMD_FLG_DUR_MSK cpu_to_le32(1 << 25)
#define TX_CMD_SEC_WEP		0x01
#define TX_CMD_SEC_CCM		0x02
#define TX_CMD_SEC_TKIP		0x03
#define TX_CMD_SEC_MSK		0x03
#define TX_CMD_SEC_SHIFT	6
#define TX_CMD_SEC_KEY128	0x08
#define WEP_IV_LEN 4
#define WEP_ICV_LEN 4
#define CCMP_MIC_LEN 8
#define TKIP_ICV_LEN 4
struct iwl3945_tx_cmd  __packed;
struct iwl3945_tx_resp  __packed;
struct iwl_dram_scratch  __packed;
struct iwl_tx_cmd  __packed;
enum ;
enum ;
#define	TX_PACKET_MODE_REGULAR		0x0000
#define	TX_PACKET_MODE_BURST_SEQ	0x0100
#define	TX_PACKET_MODE_BURST_FIRST	0x0200
enum ;
enum ;
enum ;
#define AGG_TX_STATUS_MSK	0x00000fff
#define AGG_TX_TRY_MSK		0x0000f000
#define AGG_TX_STATE_LAST_SENT_MSK  (AGG_TX_STATE_LAST_SENT_TTL_MSK | \
AGG_TX_STATE_LAST_SENT_TRY_CNT_MSK)
#define AGG_TX_STATE_TRY_CNT_POS 12
#define AGG_TX_STATE_TRY_CNT_MSK 0xf000
#define AGG_TX_STATE_SEQ_NUM_POS 16
#define AGG_TX_STATE_SEQ_NUM_MSK 0xffff0000
struct agg_tx_status  __packed;
struct iwl4965_tx_resp  __packed;
struct iwl_compressed_ba_resp  __packed;
struct iwl3945_txpowertable_cmd  __packed;
struct iwl4965_txpowertable_cmd  __packed;
struct iwl3945_rate_scaling_info  __packed;
struct iwl3945_rate_scaling_cmd  __packed;
#define  LINK_QUAL_FLAGS_SET_STA_TLC_RTS_MSK	(1 << 0)
#define  LINK_QUAL_AC_NUM AC_NUM
#define  LINK_QUAL_MAX_RETRY_NUM 16
#define  LINK_QUAL_ANT_A_MSK (1 << 0)
#define  LINK_QUAL_ANT_B_MSK (1 << 1)
#define  LINK_QUAL_ANT_MSK   (LINK_QUAL_ANT_A_MSK|LINK_QUAL_ANT_B_MSK)
struct iwl_link_qual_general_params  __packed;
#define LINK_QUAL_AGG_TIME_LIMIT_DEF	(4000)
#define LINK_QUAL_AGG_TIME_LIMIT_MAX	(8000)
#define LINK_QUAL_AGG_TIME_LIMIT_MIN	(100)
#define LINK_QUAL_AGG_DISABLE_START_DEF	(3)
#define LINK_QUAL_AGG_DISABLE_START_MAX	(255)
#define LINK_QUAL_AGG_DISABLE_START_MIN	(0)
#define LINK_QUAL_AGG_FRAME_LIMIT_DEF	(31)
#define LINK_QUAL_AGG_FRAME_LIMIT_MAX	(63)
#define LINK_QUAL_AGG_FRAME_LIMIT_MIN	(0)
struct iwl_link_qual_agg_params  __packed;
struct iwl_link_quality_cmd  __packed;
#define BT_COEX_DISABLE (0x0)
#define BT_ENABLE_CHANNEL_ANNOUNCE BIT(0)
#define BT_ENABLE_PRIORITY	   BIT(1)
#define BT_COEX_ENABLE  (BT_ENABLE_CHANNEL_ANNOUNCE | BT_ENABLE_PRIORITY)
#define BT_LEAD_TIME_DEF (0x1E)
#define BT_MAX_KILL_DEF (0x5)
struct iwl_bt_cmd  __packed;
#define MEASUREMENT_FILTER_FLAG (RXON_FILTER_PROMISC_MSK         | \
RXON_FILTER_CTL2HOST_MSK        | \
RXON_FILTER_ACCEPT_GRP_MSK      | \
RXON_FILTER_DIS_DECRYPT_MSK     | \
RXON_FILTER_DIS_GRP_DECRYPT_MSK | \
RXON_FILTER_ASSOC_MSK           | \
RXON_FILTER_BCON_AWARE_MSK)
struct iwl_measure_channel  __packed;
struct iwl_spectrum_cmd  __packed;
struct iwl_spectrum_resp  __packed;
enum iwl_measurement_state ;
enum iwl_measurement_status ;
#define NUM_ELEMENTS_IN_HISTOGRAM 8
struct iwl_measurement_histogram  __packed;
struct iwl_measurement_cca_counters  __packed;
enum iwl_measure_type ;
struct iwl_spectrum_notification  __packed;
#define IWL_POWER_VEC_SIZE 5
#define IWL_POWER_DRIVER_ALLOW_SLEEP_MSK	cpu_to_le16(BIT(0))
#define IWL_POWER_POWER_SAVE_ENA_MSK		cpu_to_le16(BIT(0))
#define IWL_POWER_POWER_MANAGEMENT_ENA_MSK	cpu_to_le16(BIT(1))
#define IWL_POWER_SLEEP_OVER_DTIM_MSK		cpu_to_le16(BIT(2))
#define IWL_POWER_PCI_PM_MSK			cpu_to_le16(BIT(3))
#define IWL_POWER_FAST_PD			cpu_to_le16(BIT(4))
#define IWL_POWER_BEACON_FILTERING		cpu_to_le16(BIT(5))
#define IWL_POWER_SHADOW_REG_ENA		cpu_to_le16(BIT(6))
#define IWL_POWER_CT_KILL_SET			cpu_to_le16(BIT(7))
struct iwl3945_powertable_cmd  __packed;
struct iwl_powertable_cmd  __packed;
struct iwl_sleep_notification  __packed;
enum ;
struct iwl_card_state_notif  __packed;
#define HW_CARD_DISABLED   0x01
#define SW_CARD_DISABLED   0x02
#define CT_CARD_DISABLED   0x04
#define RXON_CARD_DISABLED 0x10
struct iwl_ct_kill_config   __packed;
#define SCAN_CHANNEL_TYPE_PASSIVE cpu_to_le32(0)
#define SCAN_CHANNEL_TYPE_ACTIVE  cpu_to_le32(1)
struct iwl3945_scan_channel  __packed;
#define IWL39_SCAN_PROBE_MASK(n) ((BIT(n) | (BIT(n) - BIT(1))))
struct iwl_scan_channel  __packed;
#define IWL_SCAN_PROBE_MASK(n)	cpu_to_le32((BIT(n) | (BIT(n) - BIT(1))))
struct iwl_ssid_ie  __packed;
#define PROBE_OPTION_MAX_3945		4
#define PROBE_OPTION_MAX		20
#define TX_CMD_LIFE_TIME_INFINITE	cpu_to_le32(0xFFFFFFFF)
#define IWL_GOOD_CRC_TH_DISABLED	0
#define IWL_GOOD_CRC_TH_DEFAULT		cpu_to_le16(1)
#define IWL_GOOD_CRC_TH_NEVER		cpu_to_le16(0xffff)
#define IWL_MAX_SCAN_SIZE 1024
#define IWL_MAX_CMD_SIZE 4096
struct iwl3945_scan_cmd  __packed;
struct iwl_scan_cmd  __packed;
#define CAN_ABORT_STATUS	cpu_to_le32(0x1)
#define ABORT_STATUS            0x2
struct iwl_scanreq_notification  __packed;
struct iwl_scanstart_notification  __packed;
#define  SCAN_OWNER_STATUS 0x1;
#define  MEASURE_OWNER_STATUS 0x2;
#define IWL_PROBE_STATUS_OK		0
#define IWL_PROBE_STATUS_TX_FAILED	BIT(0)
#define IWL_PROBE_STATUS_FAIL_TTL	BIT(1)
#define IWL_PROBE_STATUS_FAIL_BT	BIT(2)
#define NUMBER_OF_STATISTICS 1
struct iwl_scanresults_notification  __packed;
struct iwl_scancomplete_notification  __packed;
enum iwl_ibss_manager ;
struct iwl3945_beacon_notif  __packed;
struct iwl4965_beacon_notif  __packed;
struct iwl3945_tx_beacon_cmd  __packed;
struct iwl_tx_beacon_cmd  __packed;
#define IWL_TEMP_CONVERT 260
#define SUP_RATE_11A_MAX_NUM_CHANNELS  8
#define SUP_RATE_11B_MAX_NUM_CHANNELS  4
#define SUP_RATE_11G_MAX_NUM_CHANNELS  12
struct rate_histogram  __packed;
struct iwl39_statistics_rx_phy  __packed;
struct iwl39_statistics_rx_non_phy  __packed;
struct iwl39_statistics_rx  __packed;
struct iwl39_statistics_tx  __packed;
struct statistics_dbg  __packed;
struct iwl39_statistics_div  __packed;
struct iwl39_statistics_general  __packed;
struct statistics_rx_phy  __packed;
struct statistics_rx_ht_phy  __packed;
#define INTERFERENCE_DATA_AVAILABLE      cpu_to_le32(1)
struct statistics_rx_non_phy  __packed;
struct statistics_rx  __packed;
struct statistics_tx_power  __packed;
struct statistics_tx_non_phy_agg  __packed;
struct statistics_tx  __packed;
struct statistics_div  __packed;
struct statistics_general_common  __packed;
struct statistics_general  __packed;
#define UCODE_STATISTICS_CLEAR_MSK		(0x1 << 0)
#define UCODE_STATISTICS_FREQUENCY_MSK		(0x1 << 1)
#define UCODE_STATISTICS_NARROW_BAND_MSK	(0x1 << 2)
#define IWL_STATS_CONF_CLEAR_STATS cpu_to_le32(0x1)
#define IWL_STATS_CONF_DISABLE_NOTIF cpu_to_le32(0x2)
struct iwl_statistics_cmd  __packed;
#define STATISTICS_REPLY_FLG_BAND_24G_MSK         cpu_to_le32(0x2)
#define STATISTICS_REPLY_FLG_HT40_MODE_MSK        cpu_to_le32(0x8)
struct iwl3945_notif_statistics  __packed;
struct iwl_notif_statistics  __packed;
#define IWL_MISSED_BEACON_THRESHOLD_MIN	(1)
#define IWL_MISSED_BEACON_THRESHOLD_DEF	(5)
#define IWL_MISSED_BEACON_THRESHOLD_MAX	IWL_MISSED_BEACON_THRESHOLD_DEF
struct iwl_missed_beacon_notif  __packed;
#define HD_TABLE_SIZE  (11)
#define HD_MIN_ENERGY_CCK_DET_INDEX                 (0)
#define HD_MIN_ENERGY_OFDM_DET_INDEX                (1)
#define HD_AUTO_CORR32_X1_TH_ADD_MIN_INDEX          (2)
#define HD_AUTO_CORR32_X1_TH_ADD_MIN_MRC_INDEX      (3)
#define HD_AUTO_CORR40_X4_TH_ADD_MIN_MRC_INDEX      (4)
#define HD_AUTO_CORR32_X4_TH_ADD_MIN_INDEX          (5)
#define HD_AUTO_CORR32_X4_TH_ADD_MIN_MRC_INDEX      (6)
#define HD_BARKER_CORR_TH_ADD_MIN_INDEX             (7)
#define HD_BARKER_CORR_TH_ADD_MIN_MRC_INDEX         (8)
#define HD_AUTO_CORR40_X4_TH_ADD_MIN_INDEX          (9)
#define HD_OFDM_ENERGY_TH_IN_INDEX                  (10)
#define SENSITIVITY_CMD_CONTROL_DEFAULT_TABLE	cpu_to_le16(0)
#define SENSITIVITY_CMD_CONTROL_WORK_TABLE	cpu_to_le16(1)
struct iwl_sensitivity_cmd  __packed;
#define IWL_DEFAULT_STANDARD_PHY_CALIBRATE_TBL_SIZE	18
enum ;
#define IWL_MAX_PHY_CALIBRATE_TBL_SIZE		(253)
struct iwl_calib_hdr  __packed;
struct iwl_calib_diff_gain_cmd  __packed;
struct iwl_led_cmd  __packed;
struct iwl_rx_packet  __packed;
