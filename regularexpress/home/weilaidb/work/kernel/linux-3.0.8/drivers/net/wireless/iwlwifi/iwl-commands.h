#define __iwl_commands_h__
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
#define SEQ_RX_FRAME	cpu_to_le16(0x8000)
struct iwl_cmd_header  __packed;
#define RATE_MCS_CODE_MSK 0x7
#define RATE_MCS_SPATIAL_POS 3
#define RATE_MCS_SPATIAL_MSK 0x18
#define RATE_MCS_HT_DUP_POS 5
#define RATE_MCS_HT_DUP_MSK 0x20
#define RATE_MCS_RATE_MSK 0xff
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
struct tx_power_dual_stream  __packed;
#define IWLAGN_TX_POWER_AUTO 0x7f
#define IWLAGN_TX_POWER_NO_CLOSED (0x1 << 6)
struct iwlagn_tx_power_dbm_cmd  __packed;
struct iwl_tx_ant_config_cmd  __packed;
#define UCODE_VALID_OK	cpu_to_le32(0x1)
enum iwlagn_ucode_subtype ;
struct iwl_error_event_table  __packed;
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
#define RXON_FLG_CHANNEL_MODE_LEGACY	cpu_to_le32(CHANNEL_MODE_LEGACY << RXON_FLG_CHANNEL_MODE_POS)
#define RXON_FLG_CHANNEL_MODE_PURE_40	cpu_to_le32(CHANNEL_MODE_PURE_40 << RXON_FLG_CHANNEL_MODE_POS)
#define RXON_FLG_CHANNEL_MODE_MIXED	cpu_to_le32(CHANNEL_MODE_MIXED << RXON_FLG_CHANNEL_MODE_POS)
#define RXON_FLG_SELF_CTS_EN			cpu_to_le32(0x1<<30)
#define RXON_FILTER_PROMISC_MSK         cpu_to_le32(1 << 0)
#define RXON_FILTER_CTL2HOST_MSK        cpu_to_le32(1 << 1)
#define RXON_FILTER_ACCEPT_GRP_MSK      cpu_to_le32(1 << 2)
#define RXON_FILTER_DIS_DECRYPT_MSK     cpu_to_le32(1 << 3)
#define RXON_FILTER_DIS_GRP_DECRYPT_MSK cpu_to_le32(1 << 4)
#define RXON_FILTER_ASSOC_MSK           cpu_to_le32(1 << 5)
#define RXON_FILTER_BCON_AWARE_MSK      cpu_to_le32(1 << 6)
struct iwl_rxon_cmd  __packed;
struct iwl_rxon_assoc_cmd  __packed;
#define IWL_CONN_MAX_LISTEN_INTERVAL	10
#define IWL_MAX_UCODE_BEACON_INTERVAL	4
#define IWL39_MAX_UCODE_BEACON_INTERVAL	1
struct iwl_rxon_time_cmd  __packed;
struct iwl5000_channel_switch_cmd  __packed;
struct iwl6000_channel_switch_cmd  __packed;
struct iwl_csa_notification  __packed;
struct iwl_ac_qos  __packed;
#define QOS_PARAM_FLG_UPDATE_EDCA_MSK	cpu_to_le32(0x01)
#define QOS_PARAM_FLG_TGN_MSK		cpu_to_le32(0x02)
#define QOS_PARAM_FLG_TXOP_TYPE_MSK	cpu_to_le32(0x10)
#define AC_NUM                4
struct iwl_qosparam_cmd  __packed;
#define	IWL_AP_ID		0
#define	IWL_AP_ID_PAN		1
#define	IWL_STA_ID		2
#define IWLAGN_PAN_BCAST_ID	14
#define IWLAGN_BROADCAST_ID	15
#define	IWLAGN_STATION_COUNT	16
#define	IWL_INVALID_STATION 	255
#define STA_FLG_TX_RATE_MSK		cpu_to_le32(1 << 2)
#define STA_FLG_PWR_SAVE_MSK		cpu_to_le32(1 << 8)
#define STA_FLG_PAN_STATION		cpu_to_le32(1 << 13)
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
#define STA_KEY_FLG_INVALID 	cpu_to_le16(0x0800)
#define STA_KEY_FLG_MAP_KEY_MSK	cpu_to_le16(0x0008)
#define STA_KEY_FLG_KEY_SIZE_MSK     cpu_to_le16(0x1000)
#define STA_KEY_MULTICAST_MSK        cpu_to_le16(0x4000)
#define STA_KEY_MAX_NUM		8
#define STA_KEY_MAX_NUM_PAN	16
#define	STA_MODIFY_KEY_MASK		0x01
#define	STA_MODIFY_TID_DISABLE_TX	0x02
#define	STA_MODIFY_TX_RATE_MSK		0x04
#define STA_MODIFY_ADDBA_TID_MSK	0x08
#define STA_MODIFY_DELBA_TID_MSK	0x10
#define STA_MODIFY_SLEEP_TX_COUNT_MSK	0x20
#define BUILD_RAxTID(sta_id, tid)	(((sta_id) << 4) + (tid))
struct iwl_keyinfo  __packed;
struct sta_id_modify  __packed;
struct iwl_addsta_cmd  __packed;
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
struct iwl_txfifo_flush_cmd  __packed;
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
#define IWLAGN_RX_RES_PHY_CNT 8
#define IWLAGN_RX_RES_AGC_IDX     1
#define IWLAGN_RX_RES_RSSI_AB_IDX 2
#define IWLAGN_RX_RES_RSSI_C_IDX  3
#define IWLAGN_OFDM_AGC_MSK 0xfe00
#define IWLAGN_OFDM_AGC_BIT_POS 9
#define IWLAGN_OFDM_RSSI_INBAND_A_BITMSK 0x00ff
#define IWLAGN_OFDM_RSSI_ALLBAND_A_BITMSK 0xff00
#define IWLAGN_OFDM_RSSI_A_BIT_POS 0
#define IWLAGN_OFDM_RSSI_INBAND_B_BITMSK 0xff0000
#define IWLAGN_OFDM_RSSI_ALLBAND_B_BITMSK 0xff000000
#define IWLAGN_OFDM_RSSI_B_BIT_POS 16
#define IWLAGN_OFDM_RSSI_INBAND_C_BITMSK 0x00ff
#define IWLAGN_OFDM_RSSI_ALLBAND_C_BITMSK 0xff00
#define IWLAGN_OFDM_RSSI_C_BIT_POS 0
struct iwlagn_non_cfg_phy  __packed;
struct iwl_rx_phy_res  __packed;
struct iwl_rx_mpdu_res_start  __packed;
#define TX_CMD_FLG_PROT_REQUIRE_MSK cpu_to_le32(1 << 0)
#define TX_CMD_FLG_RTS_MSK cpu_to_le32(1 << 1)
#define TX_CMD_FLG_CTS_MSK cpu_to_le32(1 << 2)
#define TX_CMD_FLG_ACK_MSK cpu_to_le32(1 << 3)
#define TX_CMD_FLG_STA_RATE_MSK cpu_to_le32(1 << 4)
#define TX_CMD_FLG_IMM_BA_RSP_MASK  cpu_to_le32(1 << 6)
#define TX_CMD_FLG_FULL_TXOP_PROT_MSK cpu_to_le32(1 << 7)
#define TX_CMD_FLG_ANT_SEL_MSK cpu_to_le32(0xf00)
#define TX_CMD_FLG_ANT_A_MSK cpu_to_le32(1 << 8)
#define TX_CMD_FLG_ANT_B_MSK cpu_to_le32(1 << 9)
#define TX_CMD_FLG_IGNORE_BT cpu_to_le32(1 << 12)
#define TX_CMD_FLG_SEQ_CTL_MSK cpu_to_le32(1 << 13)
#define TX_CMD_FLG_MORE_FRAG_MSK cpu_to_le32(1 << 14)
#define TX_CMD_FLG_TSF_MSK cpu_to_le32(1 << 16)
#define TX_CMD_FLG_MH_PAD_MSK cpu_to_le32(1 << 20)
#define TX_CMD_FLG_AGG_CCMP_MSK cpu_to_le32(1 << 22)
#define TX_CMD_FLG_DUR_MSK cpu_to_le32(1 << 25)
#define TX_CMD_SEC_WEP  	0x01
#define TX_CMD_SEC_CCM  	0x02
#define TX_CMD_SEC_TKIP		0x03
#define TX_CMD_SEC_MSK		0x03
#define TX_CMD_SEC_SHIFT	6
#define TX_CMD_SEC_KEY128	0x08
#define WEP_IV_LEN 4
#define WEP_ICV_LEN 4
#define CCMP_MIC_LEN 8
#define TKIP_ICV_LEN 4
struct iwl_dram_scratch  __packed;
struct iwl_tx_cmd  __packed;
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
AGG_TX_STATE_LAST_SENT_TRY_CNT_MSK | \
AGG_TX_STATE_LAST_SENT_BT_KILL_MSK)
#define AGG_TX_STATE_TRY_CNT_POS 12
#define AGG_TX_STATE_TRY_CNT_MSK 0xf000
#define AGG_TX_STATE_SEQ_NUM_POS 16
#define AGG_TX_STATE_SEQ_NUM_MSK 0xffff0000
struct agg_tx_status  __packed;
#define IWL50_TX_RES_INIT_RATE_INDEX_POS	0
#define IWL50_TX_RES_INIT_RATE_INDEX_MSK	0x0f
#define IWL50_TX_RES_RATE_TABLE_COLOR_POS	4
#define IWL50_TX_RES_RATE_TABLE_COLOR_MSK	0x70
#define IWL50_TX_RES_INV_RATE_INDEX_MSK	0x80
#define IWLAGN_TX_RES_TID_POS	0
#define IWLAGN_TX_RES_TID_MSK	0x0f
#define IWLAGN_TX_RES_RA_POS	4
#define IWLAGN_TX_RES_RA_MSK	0xf0
struct iwlagn_tx_resp  __packed;
struct iwl_compressed_ba_resp  __packed;
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
#define LINK_QUAL_AGG_FRAME_LIMIT_DEF	(63)
#define LINK_QUAL_AGG_FRAME_LIMIT_MAX	(63)
#define LINK_QUAL_AGG_FRAME_LIMIT_MIN	(0)
struct iwl_link_qual_agg_params  __packed;
struct iwl_link_quality_cmd  __packed;
#define BT_COEX_DISABLE (0x0)
#define BT_ENABLE_CHANNEL_ANNOUNCE BIT(0)
#define BT_ENABLE_PRIORITY	   BIT(1)
#define BT_ENABLE_2_WIRE	   BIT(2)
#define BT_COEX_DISABLE (0x0)
#define BT_COEX_ENABLE  (BT_ENABLE_CHANNEL_ANNOUNCE | BT_ENABLE_PRIORITY)
#define BT_LEAD_TIME_MIN (0x0)
#define BT_LEAD_TIME_DEF (0x1E)
#define BT_LEAD_TIME_MAX (0xFF)
#define BT_MAX_KILL_MIN (0x1)
#define BT_MAX_KILL_DEF (0x5)
#define BT_MAX_KILL_MAX (0xFF)
#define BT_DURATION_LIMIT_DEF	625
#define BT_DURATION_LIMIT_MAX	1250
#define BT_DURATION_LIMIT_MIN	625
#define BT_ON_THRESHOLD_DEF	4
#define BT_ON_THRESHOLD_MAX	1000
#define BT_ON_THRESHOLD_MIN	1
#define BT_FRAG_THRESHOLD_DEF	0
#define BT_FRAG_THRESHOLD_MAX	0
#define BT_FRAG_THRESHOLD_MIN	0
#define BT_AGG_THRESHOLD_DEF	1200
#define BT_AGG_THRESHOLD_MAX	8000
#define BT_AGG_THRESHOLD_MIN	400
struct iwl_bt_cmd  __packed;
#define IWLAGN_BT_FLAG_CHANNEL_INHIBITION	BIT(0)
#define IWLAGN_BT_FLAG_COEX_MODE_MASK		(BIT(3)|BIT(4)|BIT(5))
#define IWLAGN_BT_FLAG_COEX_MODE_SHIFT		3
#define IWLAGN_BT_FLAG_COEX_MODE_DISABLED	0
#define IWLAGN_BT_FLAG_COEX_MODE_LEGACY_2W	1
#define IWLAGN_BT_FLAG_COEX_MODE_3W		2
#define IWLAGN_BT_FLAG_COEX_MODE_4W		3
#define IWLAGN_BT_FLAG_UCODE_DEFAULT		BIT(6)
#define IWLAGN_BT_FLAG_SYNC_2_BT_DISABLE	BIT(7)
#define IWLAGN_BT_PRIO_BOOST_MAX	0xFF
#define IWLAGN_BT_PRIO_BOOST_MIN	0x00
#define IWLAGN_BT_PRIO_BOOST_DEFAULT	0xF0
#define IWLAGN_BT_MAX_KILL_DEFAULT	5
#define IWLAGN_BT3_T7_DEFAULT		1
#define IWLAGN_BT_KILL_ACK_MASK_DEFAULT	cpu_to_le32(0xffff0000)
#define IWLAGN_BT_KILL_CTS_MASK_DEFAULT	cpu_to_le32(0xffff0000)
#define IWLAGN_BT_KILL_ACK_CTS_MASK_SCO	cpu_to_le32(0xffffffff)
#define IWLAGN_BT3_PRIO_SAMPLE_DEFAULT	2
#define IWLAGN_BT3_T2_DEFAULT		0xc
#define IWLAGN_BT_VALID_ENABLE_FLAGS	cpu_to_le16(BIT(0))
#define IWLAGN_BT_VALID_BOOST		cpu_to_le16(BIT(1))
#define IWLAGN_BT_VALID_MAX_KILL	cpu_to_le16(BIT(2))
#define IWLAGN_BT_VALID_3W_TIMERS	cpu_to_le16(BIT(3))
#define IWLAGN_BT_VALID_KILL_ACK_MASK	cpu_to_le16(BIT(4))
#define IWLAGN_BT_VALID_KILL_CTS_MASK	cpu_to_le16(BIT(5))
#define IWLAGN_BT_VALID_BT4_TIMES	cpu_to_le16(BIT(6))
#define IWLAGN_BT_VALID_3W_LUT		cpu_to_le16(BIT(7))
#define IWLAGN_BT_ALL_VALID_MSK		(IWLAGN_BT_VALID_ENABLE_FLAGS | \
IWLAGN_BT_VALID_BOOST | \
IWLAGN_BT_VALID_MAX_KILL | \
IWLAGN_BT_VALID_3W_TIMERS | \
IWLAGN_BT_VALID_KILL_ACK_MASK | \
IWLAGN_BT_VALID_KILL_CTS_MASK | \
IWLAGN_BT_VALID_BT4_TIMES | \
IWLAGN_BT_VALID_3W_LUT)
struct iwl_basic_bt_cmd ;
struct iwl6000_bt_cmd ;
struct iwl2000_bt_cmd ;
#define IWLAGN_BT_SCO_ACTIVE	cpu_to_le32(BIT(0))
struct iwlagn_bt_sco_cmd ;
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
#define IWL_POWER_BT_SCO_ENA			cpu_to_le16(BIT(8))
#define IWL_POWER_ADVANCE_PM_ENA_MSK		cpu_to_le16(BIT(9))
struct iwl_powertable_cmd  __packed;
struct iwl_sleep_notification  __packed;
enum ;
#define CARD_STATE_CMD_DISABLE 0x00
#define CARD_STATE_CMD_ENABLE  0x01
#define CARD_STATE_CMD_HALT    0x02
struct iwl_card_state_cmd  __packed;
struct iwl_card_state_notif  __packed;
#define HW_CARD_DISABLED   0x01
#define SW_CARD_DISABLED   0x02
#define CT_CARD_DISABLED   0x04
#define RXON_CARD_DISABLED 0x10
struct iwl_ct_kill_config   __packed;
struct iwl_ct_kill_throttling_config   __packed;
#define SCAN_CHANNEL_TYPE_PASSIVE cpu_to_le32(0)
#define SCAN_CHANNEL_TYPE_ACTIVE  cpu_to_le32(1)
struct iwl_scan_channel  __packed;
#define IWL_SCAN_PROBE_MASK(n) 	cpu_to_le32((BIT(n) | (BIT(n) - BIT(1))))
struct iwl_ssid_ie  __packed;
#define PROBE_OPTION_MAX_3945		4
#define PROBE_OPTION_MAX		20
#define TX_CMD_LIFE_TIME_INFINITE	cpu_to_le32(0xFFFFFFFF)
#define IWL_GOOD_CRC_TH_DISABLED	0
#define IWL_GOOD_CRC_TH_DEFAULT		cpu_to_le16(1)
#define IWL_GOOD_CRC_TH_NEVER		cpu_to_le16(0xffff)
#define IWL_MAX_SCAN_SIZE 1024
#define IWL_MAX_CMD_SIZE 4096
enum iwl_scan_flags ;
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
struct iwlagn_beacon_notif  __packed;
struct iwl_tx_beacon_cmd  __packed;
#define IWL_TEMP_CONVERT 260
#define SUP_RATE_11A_MAX_NUM_CHANNELS  8
#define SUP_RATE_11B_MAX_NUM_CHANNELS  4
#define SUP_RATE_11G_MAX_NUM_CHANNELS  12
struct rate_histogram  __packed;
struct statistics_dbg  __packed;
struct statistics_rx_phy  __packed;
struct statistics_rx_ht_phy  __packed;
#define INTERFERENCE_DATA_AVAILABLE      cpu_to_le32(1)
struct statistics_rx_non_phy  __packed;
struct statistics_rx_non_phy_bt  __packed;
struct statistics_rx  __packed;
struct statistics_rx_bt  __packed;
struct statistics_tx_power  __packed;
struct statistics_tx_non_phy_agg  __packed;
struct statistics_tx  __packed;
struct statistics_div  __packed;
struct statistics_general_common  __packed;
struct statistics_bt_activity  __packed;
struct statistics_general  __packed;
struct statistics_general_bt  __packed;
#define UCODE_STATISTICS_CLEAR_MSK		(0x1 << 0)
#define UCODE_STATISTICS_FREQUENCY_MSK		(0x1 << 1)
#define UCODE_STATISTICS_NARROW_BAND_MSK	(0x1 << 2)
#define IWL_STATS_CONF_CLEAR_STATS cpu_to_le32(0x1)
#define IWL_STATS_CONF_DISABLE_NOTIF cpu_to_le32(0x2)
struct iwl_statistics_cmd  __packed;
#define STATISTICS_REPLY_FLG_BAND_24G_MSK         cpu_to_le32(0x2)
#define STATISTICS_REPLY_FLG_HT40_MODE_MSK        cpu_to_le32(0x8)
struct iwl_notif_statistics  __packed;
struct iwl_bt_notif_statistics  __packed;
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
#define HD_INA_NON_SQUARE_DET_OFDM_INDEX		(11)
#define HD_INA_NON_SQUARE_DET_CCK_INDEX			(12)
#define HD_CORR_11_INSTEAD_OF_CORR_9_EN_INDEX		(13)
#define HD_OFDM_NON_SQUARE_DET_SLOPE_MRC_INDEX		(14)
#define HD_OFDM_NON_SQUARE_DET_INTERCEPT_MRC_INDEX	(15)
#define HD_OFDM_NON_SQUARE_DET_SLOPE_INDEX		(16)
#define HD_OFDM_NON_SQUARE_DET_INTERCEPT_INDEX		(17)
#define HD_CCK_NON_SQUARE_DET_SLOPE_MRC_INDEX		(18)
#define HD_CCK_NON_SQUARE_DET_INTERCEPT_MRC_INDEX	(19)
#define HD_CCK_NON_SQUARE_DET_SLOPE_INDEX		(20)
#define HD_CCK_NON_SQUARE_DET_INTERCEPT_INDEX		(21)
#define HD_RESERVED					(22)
#define ENHANCE_HD_TABLE_SIZE  (23)
#define ENHANCE_HD_TABLE_ENTRIES  (ENHANCE_HD_TABLE_SIZE - HD_TABLE_SIZE)
#define HD_INA_NON_SQUARE_DET_OFDM_DATA			cpu_to_le16(0)
#define HD_INA_NON_SQUARE_DET_CCK_DATA			cpu_to_le16(0)
#define HD_CORR_11_INSTEAD_OF_CORR_9_EN_DATA		cpu_to_le16(0)
#define HD_OFDM_NON_SQUARE_DET_SLOPE_MRC_DATA		cpu_to_le16(668)
#define HD_OFDM_NON_SQUARE_DET_INTERCEPT_MRC_DATA	cpu_to_le16(4)
#define HD_OFDM_NON_SQUARE_DET_SLOPE_DATA		cpu_to_le16(486)
#define HD_OFDM_NON_SQUARE_DET_INTERCEPT_DATA		cpu_to_le16(37)
#define HD_CCK_NON_SQUARE_DET_SLOPE_MRC_DATA		cpu_to_le16(853)
#define HD_CCK_NON_SQUARE_DET_INTERCEPT_MRC_DATA	cpu_to_le16(4)
#define HD_CCK_NON_SQUARE_DET_SLOPE_DATA		cpu_to_le16(476)
#define HD_CCK_NON_SQUARE_DET_INTERCEPT_DATA		cpu_to_le16(99)
#define SENSITIVITY_CMD_CONTROL_DEFAULT_TABLE	cpu_to_le16(0)
#define SENSITIVITY_CMD_CONTROL_WORK_TABLE	cpu_to_le16(1)
struct iwl_sensitivity_cmd  __packed;
struct iwl_enhance_sensitivity_cmd  __packed;
#define IWL_DEFAULT_STANDARD_PHY_CALIBRATE_TBL_SIZE	18
enum ;
#define IWL_MAX_PHY_CALIBRATE_TBL_SIZE		(253)
#define IWL_CALIB_INIT_CFG_ALL	cpu_to_le32(0xffffffff)
enum iwl_ucode_calib_cfg ;
struct iwl_calib_cfg_elmnt_s  __packed;
struct iwl_calib_cfg_status_s  __packed;
struct iwl_calib_cfg_cmd  __packed;
struct iwl_calib_hdr  __packed;
struct iwl_calib_cmd  __packed;
struct iwl_calib_diff_gain_cmd  __packed;
struct iwl_calib_xtal_freq_cmd  __packed;
#define DEFAULT_RADIO_SENSOR_OFFSET    2700
struct iwl_calib_temperature_offset_cmd  __packed;
struct iwl_calib_chain_noise_reset_cmd ;
struct iwl_calib_chain_noise_gain_cmd  __packed;
struct iwl_led_cmd  __packed;
#define COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG        (0x1)
#define COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG        (0x2)
#define COEX_EVT_FLAG_DELAY_MEDIUM_FREE_NTFY_FLG  (0x4)
#define COEX_CU_UNASSOC_IDLE_RP               4
#define COEX_CU_UNASSOC_MANUAL_SCAN_RP        4
#define COEX_CU_UNASSOC_AUTO_SCAN_RP          4
#define COEX_CU_CALIBRATION_RP                4
#define COEX_CU_PERIODIC_CALIBRATION_RP       4
#define COEX_CU_CONNECTION_ESTAB_RP           4
#define COEX_CU_ASSOCIATED_IDLE_RP            4
#define COEX_CU_ASSOC_MANUAL_SCAN_RP          4
#define COEX_CU_ASSOC_AUTO_SCAN_RP            4
#define COEX_CU_ASSOC_ACTIVE_LEVEL_RP         4
#define COEX_CU_RF_ON_RP                      6
#define COEX_CU_RF_OFF_RP                     4
#define COEX_CU_STAND_ALONE_DEBUG_RP          6
#define COEX_CU_IPAN_ASSOC_LEVEL_RP           4
#define COEX_CU_RSRVD1_RP                     4
#define COEX_CU_RSRVD2_RP                     4
#define COEX_CU_UNASSOC_IDLE_WP               3
#define COEX_CU_UNASSOC_MANUAL_SCAN_WP        3
#define COEX_CU_UNASSOC_AUTO_SCAN_WP          3
#define COEX_CU_CALIBRATION_WP                3
#define COEX_CU_PERIODIC_CALIBRATION_WP       3
#define COEX_CU_CONNECTION_ESTAB_WP           3
#define COEX_CU_ASSOCIATED_IDLE_WP            3
#define COEX_CU_ASSOC_MANUAL_SCAN_WP          3
#define COEX_CU_ASSOC_AUTO_SCAN_WP            3
#define COEX_CU_ASSOC_ACTIVE_LEVEL_WP         3
#define COEX_CU_RF_ON_WP                      3
#define COEX_CU_RF_OFF_WP                     3
#define COEX_CU_STAND_ALONE_DEBUG_WP          6
#define COEX_CU_IPAN_ASSOC_LEVEL_WP           3
#define COEX_CU_RSRVD1_WP                     3
#define COEX_CU_RSRVD2_WP                     3
#define COEX_UNASSOC_IDLE_FLAGS                     0
#define COEX_UNASSOC_MANUAL_SCAN_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG)
#define COEX_UNASSOC_AUTO_SCAN_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG)
#define COEX_CALIBRATION_FLAGS			\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG)
#define COEX_PERIODIC_CALIBRATION_FLAGS             0
#define COEX_CONNECTION_ESTAB_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG |	\
COEX_EVT_FLAG_DELAY_MEDIUM_FREE_NTFY_FLG)
#define COEX_ASSOCIATED_IDLE_FLAGS                  0
#define COEX_ASSOC_MANUAL_SCAN_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG)
#define COEX_ASSOC_AUTO_SCAN_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG)
#define COEX_ASSOC_ACTIVE_LEVEL_FLAGS               0
#define COEX_RF_ON_FLAGS                            0
#define COEX_RF_OFF_FLAGS                           0
#define COEX_STAND_ALONE_DEBUG_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG)
#define COEX_IPAN_ASSOC_LEVEL_FLAGS		\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG |	\
COEX_EVT_FLAG_DELAY_MEDIUM_FREE_NTFY_FLG)
#define COEX_RSRVD1_FLAGS                           0
#define COEX_RSRVD2_FLAGS                           0
#define COEX_CU_RF_ON_FLAGS			\
(COEX_EVT_FLAG_MEDIUM_FREE_NTFY_FLG |	\
COEX_EVT_FLAG_MEDIUM_ACTV_NTFY_FLG |	\
COEX_EVT_FLAG_DELAY_MEDIUM_FREE_NTFY_FLG)
enum ;
struct iwl_wimax_coex_event_entry  __packed;
#define COEX_FLAGS_STA_TABLE_VALID_MSK      (0x1)
#define COEX_FLAGS_UNASSOC_WA_UNMASK_MSK    (0x4)
#define COEX_FLAGS_ASSOC_WA_UNMASK_MSK      (0x8)
#define COEX_FLAGS_COEX_ENABLE_MSK          (0x80)
struct iwl_wimax_coex_cmd  __packed;
#define COEX_MEDIUM_BUSY	(0x0)
#define COEX_MEDIUM_ACTIVE	(0x1)
#define COEX_MEDIUM_PRE_RELEASE	(0x2)
#define COEX_MEDIUM_MSK		(0x7)
#define COEX_MEDIUM_CHANGED	(0x8)
#define COEX_MEDIUM_CHANGED_MSK	(0x8)
#define COEX_MEDIUM_SHIFT	(3)
struct iwl_coex_medium_notification  __packed;
#define COEX_EVENT_REQUEST_MSK	(0x1)
struct iwl_coex_event_cmd  __packed;
struct iwl_coex_event_resp  __packed;
enum iwl_bt_coex_profile_traffic_load ;
#define BT_SESSION_ACTIVITY_1_UART_MSG		0x1
#define BT_SESSION_ACTIVITY_2_UART_MSG		0x2
#define BT_UART_MSG_FRAME1MSGTYPE_POS		(0)
#define BT_UART_MSG_FRAME1MSGTYPE_MSK		\
(0x7 << BT_UART_MSG_FRAME1MSGTYPE_POS)
#define BT_UART_MSG_FRAME1SSN_POS		(3)
#define BT_UART_MSG_FRAME1SSN_MSK		\
(0x3 << BT_UART_MSG_FRAME1SSN_POS)
#define BT_UART_MSG_FRAME1UPDATEREQ_POS		(5)
#define BT_UART_MSG_FRAME1UPDATEREQ_MSK		\
(0x1 << BT_UART_MSG_FRAME1UPDATEREQ_POS)
#define BT_UART_MSG_FRAME1RESERVED_POS		(6)
#define BT_UART_MSG_FRAME1RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME1RESERVED_POS)
#define BT_UART_MSG_FRAME2OPENCONNECTIONS_POS	(0)
#define BT_UART_MSG_FRAME2OPENCONNECTIONS_MSK	\
(0x3 << BT_UART_MSG_FRAME2OPENCONNECTIONS_POS)
#define BT_UART_MSG_FRAME2TRAFFICLOAD_POS	(2)
#define BT_UART_MSG_FRAME2TRAFFICLOAD_MSK	\
(0x3 << BT_UART_MSG_FRAME2TRAFFICLOAD_POS)
#define BT_UART_MSG_FRAME2CHLSEQN_POS		(4)
#define BT_UART_MSG_FRAME2CHLSEQN_MSK		\
(0x1 << BT_UART_MSG_FRAME2CHLSEQN_POS)
#define BT_UART_MSG_FRAME2INBAND_POS		(5)
#define BT_UART_MSG_FRAME2INBAND_MSK		\
(0x1 << BT_UART_MSG_FRAME2INBAND_POS)
#define BT_UART_MSG_FRAME2RESERVED_POS		(6)
#define BT_UART_MSG_FRAME2RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME2RESERVED_POS)
#define BT_UART_MSG_FRAME3SCOESCO_POS		(0)
#define BT_UART_MSG_FRAME3SCOESCO_MSK		\
(0x1 << BT_UART_MSG_FRAME3SCOESCO_POS)
#define BT_UART_MSG_FRAME3SNIFF_POS		(1)
#define BT_UART_MSG_FRAME3SNIFF_MSK		\
(0x1 << BT_UART_MSG_FRAME3SNIFF_POS)
#define BT_UART_MSG_FRAME3A2DP_POS		(2)
#define BT_UART_MSG_FRAME3A2DP_MSK		\
(0x1 << BT_UART_MSG_FRAME3A2DP_POS)
#define BT_UART_MSG_FRAME3ACL_POS		(3)
#define BT_UART_MSG_FRAME3ACL_MSK		\
(0x1 << BT_UART_MSG_FRAME3ACL_POS)
#define BT_UART_MSG_FRAME3MASTER_POS		(4)
#define BT_UART_MSG_FRAME3MASTER_MSK		\
(0x1 << BT_UART_MSG_FRAME3MASTER_POS)
#define BT_UART_MSG_FRAME3OBEX_POS		(5)
#define BT_UART_MSG_FRAME3OBEX_MSK		\
(0x1 << BT_UART_MSG_FRAME3OBEX_POS)
#define BT_UART_MSG_FRAME3RESERVED_POS		(6)
#define BT_UART_MSG_FRAME3RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME3RESERVED_POS)
#define BT_UART_MSG_FRAME4IDLEDURATION_POS	(0)
#define BT_UART_MSG_FRAME4IDLEDURATION_MSK	\
(0x3F << BT_UART_MSG_FRAME4IDLEDURATION_POS)
#define BT_UART_MSG_FRAME4RESERVED_POS		(6)
#define BT_UART_MSG_FRAME4RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME4RESERVED_POS)
#define BT_UART_MSG_FRAME5TXACTIVITY_POS	(0)
#define BT_UART_MSG_FRAME5TXACTIVITY_MSK	\
(0x3 << BT_UART_MSG_FRAME5TXACTIVITY_POS)
#define BT_UART_MSG_FRAME5RXACTIVITY_POS	(2)
#define BT_UART_MSG_FRAME5RXACTIVITY_MSK	\
(0x3 << BT_UART_MSG_FRAME5RXACTIVITY_POS)
#define BT_UART_MSG_FRAME5ESCORETRANSMIT_POS	(4)
#define BT_UART_MSG_FRAME5ESCORETRANSMIT_MSK	\
(0x3 << BT_UART_MSG_FRAME5ESCORETRANSMIT_POS)
#define BT_UART_MSG_FRAME5RESERVED_POS		(6)
#define BT_UART_MSG_FRAME5RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME5RESERVED_POS)
#define BT_UART_MSG_FRAME6SNIFFINTERVAL_POS	(0)
#define BT_UART_MSG_FRAME6SNIFFINTERVAL_MSK	\
(0x1F << BT_UART_MSG_FRAME6SNIFFINTERVAL_POS)
#define BT_UART_MSG_FRAME6DISCOVERABLE_POS	(5)
#define BT_UART_MSG_FRAME6DISCOVERABLE_MSK	\
(0x1 << BT_UART_MSG_FRAME6DISCOVERABLE_POS)
#define BT_UART_MSG_FRAME6RESERVED_POS		(6)
#define BT_UART_MSG_FRAME6RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME6RESERVED_POS)
#define BT_UART_MSG_FRAME7SNIFFACTIVITY_POS	(0)
#define BT_UART_MSG_FRAME7SNIFFACTIVITY_MSK	\
(0x7 << BT_UART_MSG_FRAME7SNIFFACTIVITY_POS)
#define BT_UART_MSG_FRAME7PAGE_POS		(3)
#define BT_UART_MSG_FRAME7PAGE_MSK		\
(0x1 << BT_UART_MSG_FRAME7PAGE_POS)
#define BT_UART_MSG_FRAME7INQUIRY_POS		(4)
#define BT_UART_MSG_FRAME7INQUIRY_MSK		\
(0x1 << BT_UART_MSG_FRAME7INQUIRY_POS)
#define BT_UART_MSG_FRAME7CONNECTABLE_POS	(5)
#define BT_UART_MSG_FRAME7CONNECTABLE_MSK	\
(0x1 << BT_UART_MSG_FRAME7CONNECTABLE_POS)
#define BT_UART_MSG_FRAME7RESERVED_POS		(6)
#define BT_UART_MSG_FRAME7RESERVED_MSK		\
(0x3 << BT_UART_MSG_FRAME7RESERVED_POS)
#define BT_UART_MSG_2_FRAME1RESERVED1_POS	(5)
#define BT_UART_MSG_2_FRAME1RESERVED1_MSK	\
(0x1<<BT_UART_MSG_2_FRAME1RESERVED1_POS)
#define BT_UART_MSG_2_FRAME1RESERVED2_POS	(6)
#define BT_UART_MSG_2_FRAME1RESERVED2_MSK	\
(0x3<<BT_UART_MSG_2_FRAME1RESERVED2_POS)
#define BT_UART_MSG_2_FRAME2AGGTRAFFICLOAD_POS	(0)
#define BT_UART_MSG_2_FRAME2AGGTRAFFICLOAD_MSK	\
(0x3F<<BT_UART_MSG_2_FRAME2AGGTRAFFICLOAD_POS)
#define BT_UART_MSG_2_FRAME2RESERVED_POS	(6)
#define BT_UART_MSG_2_FRAME2RESERVED_MSK	\
(0x3<<BT_UART_MSG_2_FRAME2RESERVED_POS)
#define BT_UART_MSG_2_FRAME3BRLASTTXPOWER_POS	(0)
#define BT_UART_MSG_2_FRAME3BRLASTTXPOWER_MSK	\
(0xF<<BT_UART_MSG_2_FRAME3BRLASTTXPOWER_POS)
#define BT_UART_MSG_2_FRAME3INQPAGESRMODE_POS	(4)
#define BT_UART_MSG_2_FRAME3INQPAGESRMODE_MSK	\
(0x1<<BT_UART_MSG_2_FRAME3INQPAGESRMODE_POS)
#define BT_UART_MSG_2_FRAME3LEMASTER_POS	(5)
#define BT_UART_MSG_2_FRAME3LEMASTER_MSK	\
(0x1<<BT_UART_MSG_2_FRAME3LEMASTER_POS)
#define BT_UART_MSG_2_FRAME3RESERVED_POS	(6)
#define BT_UART_MSG_2_FRAME3RESERVED_MSK	\
(0x3<<BT_UART_MSG_2_FRAME3RESERVED_POS)
#define BT_UART_MSG_2_FRAME4LELASTTXPOWER_POS	(0)
#define BT_UART_MSG_2_FRAME4LELASTTXPOWER_MSK	\
(0xF<<BT_UART_MSG_2_FRAME4LELASTTXPOWER_POS)
#define BT_UART_MSG_2_FRAME4NUMLECONN_POS	(4)
#define BT_UART_MSG_2_FRAME4NUMLECONN_MSK	\
(0x3<<BT_UART_MSG_2_FRAME4NUMLECONN_POS)
#define BT_UART_MSG_2_FRAME4RESERVED_POS	(6)
#define BT_UART_MSG_2_FRAME4RESERVED_MSK	\
(0x3<<BT_UART_MSG_2_FRAME4RESERVED_POS)
#define BT_UART_MSG_2_FRAME5BTMINRSSI_POS	(0)
#define BT_UART_MSG_2_FRAME5BTMINRSSI_MSK	\
(0xF<<BT_UART_MSG_2_FRAME5BTMINRSSI_POS)
#define BT_UART_MSG_2_FRAME5LESCANINITMODE_POS	(4)
#define BT_UART_MSG_2_FRAME5LESCANINITMODE_MSK	\
(0x1<<BT_UART_MSG_2_FRAME5LESCANINITMODE_POS)
#define BT_UART_MSG_2_FRAME5LEADVERMODE_POS	(5)
#define BT_UART_MSG_2_FRAME5LEADVERMODE_MSK	\
(0x1<<BT_UART_MSG_2_FRAME5LEADVERMODE_POS)
#define BT_UART_MSG_2_FRAME5RESERVED_POS	(6)
#define BT_UART_MSG_2_FRAME5RESERVED_MSK	\
(0x3<<BT_UART_MSG_2_FRAME5RESERVED_POS)
#define BT_UART_MSG_2_FRAME6LECONNINTERVAL_POS	(0)
#define BT_UART_MSG_2_FRAME6LECONNINTERVAL_MSK	\
(0x1F<<BT_UART_MSG_2_FRAME6LECONNINTERVAL_POS)
#define BT_UART_MSG_2_FRAME6RFU_POS		(5)
#define BT_UART_MSG_2_FRAME6RFU_MSK		\
(0x1<<BT_UART_MSG_2_FRAME6RFU_POS)
#define BT_UART_MSG_2_FRAME6RESERVED_POS	(6)
#define BT_UART_MSG_2_FRAME6RESERVED_MSK	\
(0x3<<BT_UART_MSG_2_FRAME6RESERVED_POS)
#define BT_UART_MSG_2_FRAME7LECONNSLAVELAT_POS	(0)
#define BT_UART_MSG_2_FRAME7LECONNSLAVELAT_MSK	\
(0x7<<BT_UART_MSG_2_FRAME7LECONNSLAVELAT_POS)
#define BT_UART_MSG_2_FRAME7LEPROFILE1_POS	(3)
#define BT_UART_MSG_2_FRAME7LEPROFILE1_MSK	\
(0x1<<BT_UART_MSG_2_FRAME7LEPROFILE1_POS)
#define BT_UART_MSG_2_FRAME7LEPROFILE2_POS	(4)
#define BT_UART_MSG_2_FRAME7LEPROFILE2_MSK	\
(0x1<<BT_UART_MSG_2_FRAME7LEPROFILE2_POS)
#define BT_UART_MSG_2_FRAME7LEPROFILEOTHER_POS	(5)
#define BT_UART_MSG_2_FRAME7LEPROFILEOTHER_MSK	\
(0x1<<BT_UART_MSG_2_FRAME7LEPROFILEOTHER_POS)
#define BT_UART_MSG_2_FRAME7RESERVED_POS	(6)
#define BT_UART_MSG_2_FRAME7RESERVED_MSK	\
(0x3<<BT_UART_MSG_2_FRAME7RESERVED_POS)
struct iwl_bt_uart_msg  __attribute__((packed));
struct iwl_bt_coex_profile_notif  __attribute__((packed));
#define IWL_BT_COEX_PRIO_TBL_SHARED_ANTENNA_POS	0
#define IWL_BT_COEX_PRIO_TBL_SHARED_ANTENNA_MSK	0x1
#define IWL_BT_COEX_PRIO_TBL_PRIO_POS		1
#define IWL_BT_COEX_PRIO_TBL_PRIO_MASK		0x0e
#define IWL_BT_COEX_PRIO_TBL_RESERVED_POS	4
#define IWL_BT_COEX_PRIO_TBL_RESERVED_MASK	0xf0
#define IWL_BT_COEX_PRIO_TBL_PRIO_SHIFT		1
enum bt_coex_prio_table_events ;
enum bt_coex_prio_table_priorities ;
struct iwl_bt_coex_prio_table_cmd  __attribute__((packed));
#define IWL_BT_COEX_ENV_CLOSE	0
#define IWL_BT_COEX_ENV_OPEN	1
struct iwl_bt_coex_prot_env_cmd  __attribute__((packed));
struct iwl_rx_packet  __packed;
int iwl_agn_check_rxon_cmd(struct iwl_priv *priv);
#define IWL_MIN_SLOT_TIME	20
struct iwl_wipan_slot  __packed;
#define IWL_WIPAN_PARAMS_FLG_LEAVE_CHANNEL_CTS		BIT(1)
#define IWL_WIPAN_PARAMS_FLG_LEAVE_CHANNEL_QUIET	BIT(2)
#define IWL_WIPAN_PARAMS_FLG_SLOTTED_MODE		BIT(3)
#define IWL_WIPAN_PARAMS_FLG_FILTER_BEACON_NOTIF	BIT(4)
#define IWL_WIPAN_PARAMS_FLG_FULL_SLOTTED_MODE		BIT(5)
struct iwl_wipan_params_cmd  __packed;
struct iwl_wipan_p2p_channel_switch_cmd ;
struct iwl_wipan_noa_descriptor  __packed;
struct iwl_wipan_noa_attribute  __packed;
struct iwl_wipan_noa_notification  __packed;
