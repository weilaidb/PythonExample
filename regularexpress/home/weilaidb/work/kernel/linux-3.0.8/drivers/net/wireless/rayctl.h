typedef unsigned char UCHAR;
#define ADDRLEN           6
#define PROTOCOL_VER      0x00
#define DATA_TYPE         0x08
#define ASSOC_REQ_TYPE    0x00
#define ASSOC_RESP_TYPE   0x10
#define REASSOC_REQ_TYPE  0x20
#define REASSOC_RESP_TYPE 0x30
#define NULL_MSG_TYPE     0x48
#define BEACON_TYPE       0x80
#define DISASSOC_TYPE     0xA0
#define PSPOLL_TYPE       0xA4
#define AUTHENTIC_TYPE    0xB0
#define DEAUTHENTIC_TYPE  0xC0
#define FC2_TO_DS         0x01
#define FC2_FROM_DS       0x02
#define FC2_MORE_FRAG     0x04
#define FC2_RETRY         0x08
#define FC2_PSM           0x10
#define FC2_MORE_DATA     0x20
#define FC2_WEP           0x40
#define FC2_ORDER         0x80
#define C_BP_CAPABILITY_ESS             0x01
#define C_BP_CAPABILITY_IBSS            0x02
#define C_BP_CAPABILITY_CF_POLLABLE     0x04
#define C_BP_CAPABILITY_CF_POLL_REQUEST 0x08
#define C_BP_CAPABILITY_PRIVACY         0x10
#define C_ESSID_ELEMENT_ID               0
#define C_ESSID_ELEMENT_MAX_LENGTH       32
#define C_SUPPORTED_RATES_ELEMENT_ID     1
#define C_SUPPORTED_RATES_ELEMENT_LENGTH 2
#define C_FH_PARAM_SET_ELEMENT_ID        2
#define C_FH_PARAM_SET_ELEMENT_LNGTH     5
#define C_CF_PARAM_SET_ELEMENT_ID        4
#define C_CF_PARAM_SET_ELEMENT_LNGTH     6
#define C_TIM_ELEMENT_ID                 5
#define C_TIM_BITMAP_LENGTH            251
#define C_TIM_BMCAST_BIT              0x01
#define C_IBSS_ELEMENT_ID                6
#define C_IBSS_ELEMENT_LENGTH            2
#define C_JAPAN_CALL_SIGN_ELEMENT_ID    51
#define C_JAPAN_CALL_SIGN_ELEMENT_LNGTH 12
#define C_DISASSOC_REASON_CODE_LEN       2
#define C_DISASSOC_REASON_CODE_DEFAULT   8
#define C_CRC_LEN                        4
#define C_NUM_SUPPORTED_RATES            8
struct mac_header {
UCHAR frame_ctl_1;
UCHAR frame_ctl_2;
UCHAR duration_lsb;
UCHAR duration_msb;
UCHAR addr_1[ADDRLEN];
UCHAR addr_2[ADDRLEN];
UCHAR addr_3[ADDRLEN];
UCHAR seq_frag_num[2];
struct essid_element
;
struct rates_element
;
struct freq_hop_element
;
struct tim_element
;
struct ibss_element
;
struct japan_call_sign_element
;
struct infra_beacon
;
struct adhoc_beacon
;
#define TX_HEADER_LENGTH 0x1C
#define RX_MAC_HEADER_LENGTH 0x18
#define TX_AUTHENTICATE_LENGTH (TX_HEADER_LENGTH + 6)
#define TX_AUTHENTICATE_LENGTH_MSB (TX_AUTHENTICATE_LENGTH >> 8)
#define TX_AUTHENTICATE_LENGTH_LSB (TX_AUTHENTICATE_LENGTH & 0xff)
#define TX_DEAUTHENTICATE_LENGTH (TX_HEADER_LENGTH + 2)
#define TX_DEAUTHENTICATE_LENGTH_MSB (TX_AUTHENTICATE_LENGTH >> 8)
#define TX_DEAUTHENTICATE_LENGTH_LSB (TX_AUTHENTICATE_LENGTH & 0xff)
#define FCS_LEN           4
#define ADHOC                 0
#define INFRA                 1
#define TYPE_STA              0
#define TYPE_AP               1
#define PASSIVE_SCAN          1
#define ACTIVE_SCAN           1
#define PSM_CAM               0
#define USA                   1
#define EUROPE                2
#define JAPAN                 3
#define KOREA                 4
#define SPAIN                 5
#define FRANCE                6
#define ISRAEL                7
#define AUSTRALIA             8
#define JAPAN_TEST            9
#define USA_HOP_MOD          79
#define EUROPE_HOP_MOD       79
#define JAPAN_HOP_MOD        23
#define KOREA_HOP_MOD        23
#define SPAIN_HOP_MOD        27
#define FRANCE_HOP_MOD       35
#define ISRAEL_HOP_MOD       35
#define AUSTRALIA_HOP_MOD    47
#define JAPAN_TEST_HOP_MOD   23
#define ESSID_SIZE           32
#define CIS_OFFSET             0x0f00
#define COR_OFFSET             0x00
#define COR_SOFT_RESET         0x80
#define COR_LEVEL_IRQ          0x40
#define COR_CONFIG_NUM         0x01
#define COR_DEFAULT            (COR_LEVEL_IRQ | COR_CONFIG_NUM)
#define CCSR_OFFSET            0x01
#define CCSR_HOST_INTR_PENDING 0x01
#define CCSR_POWER_DOWN        0x04
#define HCS_INTR_OFFSET        0x05
#define HCS_INTR_CLEAR         0x00
#define ECF_INTR_OFFSET        0x06
#define ECF_INTR_SET           0x01
#define AUTH_0_ON              0x57
#define AUTH_1_ON              0x82
#define PC2PM                  0x02
#define PC2CAL                 0x10
#define PC2MLSE                0x20
#define PC_TEST_MODE           0x08
#define SCB_BASE               0x0000
#define STATUS_BASE            0x0100
#define HOST_TO_ECF_BASE       0x0200
#define ECF_TO_HOST_BASE       0x0300
#define CCS_BASE               0x0400
#define RCS_BASE               0x0800
#define INFRA_TIM_BASE         0x0C00
#define SSID_LIST_BASE         0x0D00
#define TX_BUF_BASE            0x1000
#define RX_BUF_BASE            0x8000
#define NUMBER_OF_CCS    64
#define NUMBER_OF_RCS    64
#define NUMBER_OF_TX_CCS 14
#define TX_BUF_SIZE      (2048 - sizeof(struct tx_msg))
#define RX_BUFF_END      0x3FFF
#define CCS_BUFFER_FREE       0
#define CCS_BUFFER_BUSY       1
#define CCS_COMMAND_COMPLETE  2
#define CCS_COMMAND_FAILED    3
#define CCS_DOWNLOAD_STARTUP_PARAMS    1
#define CCS_UPDATE_PARAMS              2
#define CCS_REPORT_PARAMS              3
#define CCS_UPDATE_MULTICAST_LIST      4
#define CCS_UPDATE_POWER_SAVINGS_MODE  5
#define CCS_START_NETWORK              6
#define CCS_JOIN_NETWORK               7
#define CCS_START_ASSOCIATION          8
#define CCS_TX_REQUEST                 9
#define CCS_TEST_MEMORY              0xa
#define CCS_SHUTDOWN                 0xb
#define CCS_DUMP_MEMORY              0xc
#define CCS_START_TIMER              0xe
#define CCS_LAST_CMD                 CCS_START_TIMER
#define CCS_END_LIST                 0xff
#define RCS_BUFFER_FREE       0
#define RCS_BUFFER_BUSY       1
#define RCS_COMPLETE          2
#define RCS_FAILED            3
#define RCS_BUFFER_RELEASE    0xFF
#define PROCESS_RX_PACKET           0x80
#define REJOIN_NET_COMPLETE         0x81
#define ROAMING_INITIATED           0x82
#define JAPAN_CALL_SIGN_RXD         0x83
#define C_MEM_PROG  0
#define C_MEM_XDATA 1
#define C_MEM_SFR   2
#define C_MEM_IDATA 3
#define XMIT_OK        (0)
#define XMIT_MSG_BAD   (-1)
#define XMIT_NO_CCS    (-2)
#define XMIT_NO_INTR   (-3)
#define XMIT_NEED_AUTH (-4)
#define CARD_INSERTED       (0)
#define CARD_AWAITING_PARAM (1)
#define CARD_INIT_ERROR     (11)
#define CARD_DL_PARAM       (2)
#define CARD_DL_PARAM_ERROR (12)
#define CARD_DOING_ACQ      (3)
#define CARD_ACQ_COMPLETE   (4)
#define CARD_ACQ_FAILED     (14)
#define CARD_AUTH_COMPLETE  (5)
#define CARD_AUTH_REFUSED   (15)
#define CARD_ASSOC_COMPLETE (6)
#define CARD_ASSOC_FAILED   (16)
#define UNAUTHENTICATED     (0)
#define AWAITING_RESPONSE   (1)
#define AUTHENTICATED       (2)
#define NEED_TO_AUTH        (3)
#define OPEN_AUTH_REQUEST   (1)
#define OPEN_AUTH_RESPONSE  (2)
#define BROADCAST_DEAUTH    (0xc0)
#define TODO_NOTHING              (0)
#define TODO_VERIFY_DL_START      (-1)
#define TODO_START_NET            (-2)
#define TODO_JOIN_NET             (-3)
#define TODO_AUTHENTICATE_TIMEOUT (-4)
#define TODO_SEND_CCS             (-5)
struct object_id ;
#define OBJID_network_type            0
#define OBJID_acting_as_ap_status     1
#define OBJID_current_ess_id          2
#define OBJID_scanning_mode           3
#define OBJID_power_mgt_state         4
#define OBJID_mac_address             5
#define OBJID_frag_threshold          6
#define OBJID_hop_time                7
#define OBJID_beacon_period           8
#define OBJID_dtim_period             9
#define OBJID_retry_max              10
#define OBJID_ack_timeout            11
#define OBJID_sifs                   12
#define OBJID_difs                   13
#define OBJID_pifs                   14
#define OBJID_rts_threshold          15
#define OBJID_scan_dwell_time        16
#define OBJID_max_scan_dwell_time    17
#define OBJID_assoc_resp_timeout     18
#define OBJID_adhoc_scan_cycle_max   19
#define OBJID_infra_scan_cycle_max   20
#define OBJID_infra_super_cycle_max  21
#define OBJID_promiscuous_mode       22
#define OBJID_unique_word            23
#define OBJID_slot_time              24
#define OBJID_roaming_low_snr        25
#define OBJID_low_snr_count_thresh   26
#define OBJID_infra_missed_bcn       27
#define OBJID_adhoc_missed_bcn       28
#define OBJID_curr_country_code      29
#define OBJID_hop_pattern            30
#define OBJID_reserved               31
#define OBJID_cw_max_msb             32
#define OBJID_cw_min_msb             33
#define OBJID_noise_filter_gain      34
#define OBJID_noise_limit_offset     35
#define OBJID_det_rssi_thresh_offset 36
#define OBJID_med_busy_thresh_offset 37
#define OBJID_det_sync_thresh        38
#define OBJID_test_mode              39
#define OBJID_test_min_chan_num      40
#define OBJID_test_max_chan_num      41
#define OBJID_allow_bcast_ID_prbrsp  42
#define OBJID_privacy_must_start     43
#define OBJID_privacy_can_join       44
#define OBJID_basic_rate_set         45
struct scb ;
struct status ;
struct host_to_ecf_area ;
struct startup_res_518 ;
struct startup_res_6 ;
struct start_join_net_params ;
struct update_param_cmd ;
struct report_param_cmd ;
struct start_network_cmd ;
struct join_network_cmd ;
struct tx_requested_cmd ;
struct tx_requested_cmd_4 ;
struct memory_dump_cmd ;
struct update_association_cmd ;
struct start_timer_cmd ;
struct ccs ;
struct tib_structure ;
struct phy_header ;
struct rx_msg ;
struct tx_msg ;
struct rx_packet_cmd ;
struct rejoin_net_cmplt_cmd ;
struct japan_call_sign_rxd ;
struct rcs ;
struct b4_startup_params ;
struct b5_startup_params ;
#define RAY_IOCG_PARMS (SIOCDEVPRIVATE)
#define RAY_IOCS_PARMS (SIOCDEVPRIVATE + 1)
#define RAY_DO_CMD     (SIOCDEVPRIVATE + 2)
typedef struct snaphdr_t
snaphdr_t;
#define BRIDGE_ENCAP  0xf80000
#define RFC1042_ENCAP 0
#define SNAP_ID       0x0003aaaa
#define RAY_IPX_TYPE  0x8137
#define APPLEARP_TYPE 0x80f3
