#define __ipw2200_h__
#define WEXT_USECHANNELS 1
#define DRV_NAME	"ipw2200"
enum connection_manager_assoc_states ;
#define IPW_WAIT                     (1<<0)
#define IPW_QUIET                    (1<<1)
#define IPW_ROAMING                  (1<<2)
#define IPW_POWER_MODE_CAM           0x00
#define IPW_POWER_INDEX_1            0x01
#define IPW_POWER_INDEX_2            0x02
#define IPW_POWER_INDEX_3            0x03
#define IPW_POWER_INDEX_4            0x04
#define IPW_POWER_INDEX_5            0x05
#define IPW_POWER_AC                 0x06
#define IPW_POWER_BATTERY            0x07
#define IPW_POWER_LIMIT              0x07
#define IPW_POWER_MASK               0x0F
#define IPW_POWER_ENABLED            0x10
#define IPW_POWER_LEVEL(x)           ((x) & IPW_POWER_MASK)
#define IPW_CMD_HOST_COMPLETE                 2
#define IPW_CMD_POWER_DOWN                    4
#define IPW_CMD_SYSTEM_CONFIG                 6
#define IPW_CMD_MULTICAST_ADDRESS             7
#define IPW_CMD_SSID                          8
#define IPW_CMD_ADAPTER_ADDRESS              11
#define IPW_CMD_PORT_TYPE                    12
#define IPW_CMD_RTS_THRESHOLD                15
#define IPW_CMD_FRAG_THRESHOLD               16
#define IPW_CMD_POWER_MODE                   17
#define IPW_CMD_WEP_KEY                      18
#define IPW_CMD_TGI_TX_KEY                   19
#define IPW_CMD_SCAN_REQUEST                 20
#define IPW_CMD_ASSOCIATE                    21
#define IPW_CMD_SUPPORTED_RATES              22
#define IPW_CMD_SCAN_ABORT                   23
#define IPW_CMD_TX_FLUSH                     24
#define IPW_CMD_QOS_PARAMETERS               25
#define IPW_CMD_SCAN_REQUEST_EXT             26
#define IPW_CMD_DINO_CONFIG                  30
#define IPW_CMD_RSN_CAPABILITIES             31
#define IPW_CMD_RX_KEY                       32
#define IPW_CMD_CARD_DISABLE                 33
#define IPW_CMD_SEED_NUMBER                  34
#define IPW_CMD_TX_POWER                     35
#define IPW_CMD_COUNTRY_INFO                 36
#define IPW_CMD_AIRONET_INFO                 37
#define IPW_CMD_AP_TX_POWER                  38
#define IPW_CMD_CCKM_INFO                    39
#define IPW_CMD_CCX_VER_INFO                 40
#define IPW_CMD_SET_CALIBRATION              41
#define IPW_CMD_SENSITIVITY_CALIB            42
#define IPW_CMD_RETRY_LIMIT                  51
#define IPW_CMD_IPW_PRE_POWER_DOWN           58
#define IPW_CMD_VAP_BEACON_TEMPLATE          60
#define IPW_CMD_VAP_DTIM_PERIOD              61
#define IPW_CMD_EXT_SUPPORTED_RATES          62
#define IPW_CMD_VAP_LOCAL_TX_PWR_CONSTRAINT  63
#define IPW_CMD_VAP_QUIET_INTERVALS          64
#define IPW_CMD_VAP_CHANNEL_SWITCH           65
#define IPW_CMD_VAP_MANDATORY_CHANNELS       66
#define IPW_CMD_VAP_CELL_PWR_LIMIT           67
#define IPW_CMD_VAP_CF_PARAM_SET             68
#define IPW_CMD_VAP_SET_BEACONING_STATE      69
#define IPW_CMD_MEASUREMENT                  80
#define IPW_CMD_POWER_CAPABILITY             81
#define IPW_CMD_SUPPORTED_CHANNELS           82
#define IPW_CMD_TPC_REPORT                   83
#define IPW_CMD_WME_INFO                     84
#define IPW_CMD_PRODUCTION_COMMAND	     85
#define IPW_CMD_LINKSYS_EOU_INFO             90
#define RFD_SIZE                              4
#define NUM_TFD_CHUNKS                        6
#define TX_QUEUE_SIZE                        32
#define RX_QUEUE_SIZE                        32
#define DINO_CMD_WEP_KEY                   0x08
#define DINO_CMD_TX                        0x0B
#define DCT_ANTENNA_A                      0x01
#define DCT_ANTENNA_B                      0x02
#define IPW_A_MODE                         0
#define IPW_B_MODE                         1
#define IPW_G_MODE                         2
#define DCT_WEP_KEY_NOT_IMMIDIATE	0x00
#define DCT_WEP_KEY_64Bit		0x40
#define DCT_WEP_KEY_128Bit		0x80
#define DCT_WEP_KEY_128bitIV		0xC0
#define DCT_WEP_KEY_SIZE_MASK		0xC0
#define DCT_WEP_KEY_INDEX_MASK		0x0F
#define DCT_WEP_INDEX_USE_IMMEDIATE	0x20
#define DCT_FLAG_ABORT_MGMT                0x01
#define DCT_FLAG_CTS_REQUIRED              0x02
#define DCT_FLAG_LONG_PREAMBLE             0x00
#define DCT_FLAG_SHORT_PREAMBLE            0x04
#define DCT_FLAG_RTS_REQD                  0x08
#define DCT_FLAG_DUR_SET                   0x10
#define DCT_FLAG_NO_WEP              0x20
#define DCT_FLAG_TSF_REQD                  0x40
#define DCT_FLAG_ACK_REQD                  0x80
#define DCT_FLAG_EXT_MODE_CCK  0x01
#define DCT_FLAG_EXT_MODE_OFDM 0x00
#define DCT_FLAG_EXT_SECURITY_WEP     0x00
#define DCT_FLAG_EXT_SECURITY_NO      DCT_FLAG_EXT_SECURITY_WEP
#define DCT_FLAG_EXT_SECURITY_CKIP    0x04
#define DCT_FLAG_EXT_SECURITY_CCM     0x08
#define DCT_FLAG_EXT_SECURITY_TKIP    0x0C
#define DCT_FLAG_EXT_SECURITY_MASK    0x0C
#define DCT_FLAG_EXT_QOS_ENABLED      0x10
#define DCT_FLAG_EXT_HC_NO_SIFS_PIFS  0x00
#define DCT_FLAG_EXT_HC_SIFS          0x20
#define DCT_FLAG_EXT_HC_PIFS          0x40
#define TX_RX_TYPE_MASK                    0xFF
#define TX_FRAME_TYPE                      0x00
#define TX_HOST_COMMAND_TYPE               0x01
#define RX_FRAME_TYPE                      0x09
#define RX_HOST_NOTIFICATION_TYPE          0x03
#define RX_HOST_CMD_RESPONSE_TYPE          0x04
#define RX_TX_FRAME_RESPONSE_TYPE          0x05
#define TFD_NEED_IRQ_MASK                  0x04
#define HOST_CMD_DINO_CONFIG               30
#define HOST_NOTIFICATION_STATUS_ASSOCIATED             10
#define HOST_NOTIFICATION_STATUS_AUTHENTICATE           11
#define HOST_NOTIFICATION_STATUS_SCAN_CHANNEL_RESULT    12
#define HOST_NOTIFICATION_STATUS_SCAN_COMPLETED         13
#define HOST_NOTIFICATION_STATUS_FRAG_LENGTH            14
#define HOST_NOTIFICATION_STATUS_LINK_DETERIORATION     15
#define HOST_NOTIFICATION_DINO_CONFIG_RESPONSE          16
#define HOST_NOTIFICATION_STATUS_BEACON_STATE           17
#define HOST_NOTIFICATION_STATUS_TGI_TX_KEY             18
#define HOST_NOTIFICATION_TX_STATUS                     19
#define HOST_NOTIFICATION_CALIB_KEEP_RESULTS            20
#define HOST_NOTIFICATION_MEASUREMENT_STARTED           21
#define HOST_NOTIFICATION_MEASUREMENT_ENDED             22
#define HOST_NOTIFICATION_CHANNEL_SWITCHED              23
#define HOST_NOTIFICATION_RX_DURING_QUIET_PERIOD        24
#define HOST_NOTIFICATION_NOISE_STATS			25
#define HOST_NOTIFICATION_S36_MEASUREMENT_ACCEPTED      30
#define HOST_NOTIFICATION_S36_MEASUREMENT_REFUSED       31
#define HOST_NOTIFICATION_STATUS_BEACON_MISSING         1
#define IPW_MB_SCAN_CANCEL_THRESHOLD                    3
#define IPW_MB_ROAMING_THRESHOLD_MIN                    1
#define IPW_MB_ROAMING_THRESHOLD_DEFAULT                8
#define IPW_MB_ROAMING_THRESHOLD_MAX                    30
#define IPW_MB_DISASSOCIATE_THRESHOLD_DEFAULT           3*IPW_MB_ROAMING_THRESHOLD_DEFAULT
#define IPW_REAL_RATE_RX_PACKET_THRESHOLD               300
#define MACADRR_BYTE_LEN                     6
#define DCR_TYPE_AP                       0x01
#define DCR_TYPE_WLAP                     0x02
#define DCR_TYPE_MU_ESS                   0x03
#define DCR_TYPE_MU_IBSS                  0x04
#define DCR_TYPE_MU_PIBSS                 0x05
#define DCR_TYPE_SNIFFER                  0x06
#define DCR_TYPE_MU_BSS        DCR_TYPE_MU_ESS
#define CW_MIN_OFDM          15
#define CW_MAX_OFDM          1023
#define CW_MIN_CCK           31
#define CW_MAX_CCK           1023
#define QOS_TX0_CW_MIN_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define QOS_TX1_CW_MIN_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define QOS_TX2_CW_MIN_OFDM      cpu_to_le16((CW_MIN_OFDM + 1)/2 - 1)
#define QOS_TX3_CW_MIN_OFDM      cpu_to_le16((CW_MIN_OFDM + 1)/4 - 1)
#define QOS_TX0_CW_MIN_CCK       cpu_to_le16(CW_MIN_CCK)
#define QOS_TX1_CW_MIN_CCK       cpu_to_le16(CW_MIN_CCK)
#define QOS_TX2_CW_MIN_CCK       cpu_to_le16((CW_MIN_CCK + 1)/2 - 1)
#define QOS_TX3_CW_MIN_CCK       cpu_to_le16((CW_MIN_CCK + 1)/4 - 1)
#define QOS_TX0_CW_MAX_OFDM      cpu_to_le16(CW_MAX_OFDM)
#define QOS_TX1_CW_MAX_OFDM      cpu_to_le16(CW_MAX_OFDM)
#define QOS_TX2_CW_MAX_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define QOS_TX3_CW_MAX_OFDM      cpu_to_le16((CW_MIN_OFDM + 1)/2 - 1)
#define QOS_TX0_CW_MAX_CCK       cpu_to_le16(CW_MAX_CCK)
#define QOS_TX1_CW_MAX_CCK       cpu_to_le16(CW_MAX_CCK)
#define QOS_TX2_CW_MAX_CCK       cpu_to_le16(CW_MIN_CCK)
#define QOS_TX3_CW_MAX_CCK       cpu_to_le16((CW_MIN_CCK + 1)/2 - 1)
#define QOS_TX0_AIFS            (3 - QOS_AIFSN_MIN_VALUE)
#define QOS_TX1_AIFS            (7 - QOS_AIFSN_MIN_VALUE)
#define QOS_TX2_AIFS            (2 - QOS_AIFSN_MIN_VALUE)
#define QOS_TX3_AIFS            (2 - QOS_AIFSN_MIN_VALUE)
#define QOS_TX0_ACM             0
#define QOS_TX1_ACM             0
#define QOS_TX2_ACM             0
#define QOS_TX3_ACM             0
#define QOS_TX0_TXOP_LIMIT_CCK          0
#define QOS_TX1_TXOP_LIMIT_CCK          0
#define QOS_TX2_TXOP_LIMIT_CCK          cpu_to_le16(6016)
#define QOS_TX3_TXOP_LIMIT_CCK          cpu_to_le16(3264)
#define QOS_TX0_TXOP_LIMIT_OFDM      0
#define QOS_TX1_TXOP_LIMIT_OFDM      0
#define QOS_TX2_TXOP_LIMIT_OFDM      cpu_to_le16(3008)
#define QOS_TX3_TXOP_LIMIT_OFDM      cpu_to_le16(1504)
#define DEF_TX0_CW_MIN_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define DEF_TX1_CW_MIN_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define DEF_TX2_CW_MIN_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define DEF_TX3_CW_MIN_OFDM      cpu_to_le16(CW_MIN_OFDM)
#define DEF_TX0_CW_MIN_CCK       cpu_to_le16(CW_MIN_CCK)
#define DEF_TX1_CW_MIN_CCK       cpu_to_le16(CW_MIN_CCK)
#define DEF_TX2_CW_MIN_CCK       cpu_to_le16(CW_MIN_CCK)
#define DEF_TX3_CW_MIN_CCK       cpu_to_le16(CW_MIN_CCK)
#define DEF_TX0_CW_MAX_OFDM      cpu_to_le16(CW_MAX_OFDM)
#define DEF_TX1_CW_MAX_OFDM      cpu_to_le16(CW_MAX_OFDM)
#define DEF_TX2_CW_MAX_OFDM      cpu_to_le16(CW_MAX_OFDM)
#define DEF_TX3_CW_MAX_OFDM      cpu_to_le16(CW_MAX_OFDM)
#define DEF_TX0_CW_MAX_CCK       cpu_to_le16(CW_MAX_CCK)
#define DEF_TX1_CW_MAX_CCK       cpu_to_le16(CW_MAX_CCK)
#define DEF_TX2_CW_MAX_CCK       cpu_to_le16(CW_MAX_CCK)
#define DEF_TX3_CW_MAX_CCK       cpu_to_le16(CW_MAX_CCK)
#define DEF_TX0_AIFS            0
#define DEF_TX1_AIFS            0
#define DEF_TX2_AIFS            0
#define DEF_TX3_AIFS            0
#define DEF_TX0_ACM             0
#define DEF_TX1_ACM             0
#define DEF_TX2_ACM             0
#define DEF_TX3_ACM             0
#define DEF_TX0_TXOP_LIMIT_CCK        0
#define DEF_TX1_TXOP_LIMIT_CCK        0
#define DEF_TX2_TXOP_LIMIT_CCK        0
#define DEF_TX3_TXOP_LIMIT_CCK        0
#define DEF_TX0_TXOP_LIMIT_OFDM       0
#define DEF_TX1_TXOP_LIMIT_OFDM       0
#define DEF_TX2_TXOP_LIMIT_OFDM       0
#define DEF_TX3_TXOP_LIMIT_OFDM       0
#define QOS_QOS_SETS                  3
#define QOS_PARAM_SET_ACTIVE          0
#define QOS_PARAM_SET_DEF_CCK         1
#define QOS_PARAM_SET_DEF_OFDM        2
#define CTRL_QOS_NO_ACK               (0x0020)
#define IPW_TX_QUEUE_1        1
#define IPW_TX_QUEUE_2        2
#define IPW_TX_QUEUE_3        3
#define IPW_TX_QUEUE_4        4
struct ipw_qos_info ;
struct clx2_queue  __packed;
struct machdr32  __packed;
struct machdr30  __packed;
struct machdr26  __packed;
struct machdr24  __packed;
struct tx_tfd_32  __packed;
struct tx_tfd_30  __packed;
struct tx_tfd_26  __packed;
struct tx_tfd_24  __packed;
#define DCT_WEP_KEY_FIELD_LENGTH 16
struct tfd_command  __packed;
struct tfd_data  __packed;
struct txrx_control_flags  __packed;
#define  TFD_SIZE                           128
#define  TFD_CMD_IMMEDIATE_PAYLOAD_LENGTH   (TFD_SIZE - sizeof(struct txrx_control_flags))
struct tfd_frame  __packed;
typedef void destructor_func(const void *);
struct clx2_tx_queue ;
#define RX_FREE_BUFFERS 32
#define RX_LOW_WATERMARK 8
#define SUP_RATE_11A_MAX_NUM_CHANNELS  8
#define SUP_RATE_11B_MAX_NUM_CHANNELS  4
#define SUP_RATE_11G_MAX_NUM_CHANNELS  12
struct rate_histogram  __packed;
struct ipw_cmd_stats  __packed;
struct notif_channel_result  __packed;
#define SCAN_COMPLETED_STATUS_COMPLETE  1
#define SCAN_COMPLETED_STATUS_ABORTED   2
struct notif_scan_complete  __packed;
struct notif_frag_length  __packed;
struct notif_beacon_state  __packed;
struct notif_tgi_tx_key  __packed;
#define SILENCE_OVER_THRESH (1)
#define SILENCE_UNDER_THRESH (2)
struct notif_link_deterioration  __packed;
struct notif_association  __packed;
struct notif_authenticate  __packed;
struct notif_calibration  __packed;
struct notif_noise  __packed;
struct ipw_rx_notification  __packed;
struct ipw_rx_frame  __packed;
struct ipw_rx_header  __packed;
struct ipw_rx_packet  __packed;
#define IPW_RX_NOTIFICATION_SIZE sizeof(struct ipw_rx_header) + 12
#define IPW_RX_FRAME_SIZE        (unsigned int)(sizeof(struct ipw_rx_header) + \
sizeof(struct ipw_rx_frame))
struct ipw_rx_mem_buffer ;
struct ipw_rx_queue ;
struct alive_command_responce  __packed;
#define IPW_MAX_RATES 12
struct ipw_rates  __packed;
struct command_block  __packed;
#define CB_NUMBER_OF_ELEMENTS_SMALL 64
struct fw_image_desc ;
struct ipw_sys_config  __packed;
struct ipw_multicast_addr  __packed;
#define DCW_WEP_KEY_INDEX_MASK		0x03
#define DCW_WEP_KEY_SEC_TYPE_MASK	0x30
#define DCW_WEP_KEY_SEC_TYPE_WEP	0x00
#define DCW_WEP_KEY_SEC_TYPE_CCM	0x20
#define DCW_WEP_KEY_SEC_TYPE_TKIP	0x30
#define DCW_WEP_KEY_INVALID_SIZE	0x00
#define DCW_WEP_KEY64Bit_SIZE		0x05
#define DCW_WEP_KEY128Bit_SIZE		0x0D
#define DCW_CCM_KEY128Bit_SIZE		0x10
struct ipw_wep_key  __packed;
struct ipw_tgi_tx_key  __packed;
#define IPW_SCAN_CHANNELS 54
struct ipw_scan_request  __packed;
enum ;
struct ipw_scan_request_ext  __packed;
static inline u8 ipw_get_scan_type(struct ipw_scan_request_ext *scan, u8 index)
static inline void ipw_set_scan_type(struct ipw_scan_request_ext *scan,
u8 index, u8 scan_type)
struct ipw_associate  __packed;
struct ipw_supported_rates  __packed;
struct ipw_rts_threshold  __packed;
struct ipw_frag_threshold  __packed;
struct ipw_retry_limit  __packed;
struct ipw_dino_config  __packed;
struct ipw_aironet_info  __packed;
struct ipw_rx_key  __packed;
struct ipw_country_channel_info  __packed;
struct ipw_country_info  __packed;
struct ipw_channel_tx_power  __packed;
#define SCAN_ASSOCIATED_INTERVAL (HZ)
#define SCAN_INTERVAL (HZ / 10)
#define MAX_A_CHANNELS  37
#define MAX_B_CHANNELS  14
struct ipw_tx_power  __packed;
struct ipw_rsn_capabilities  __packed;
struct ipw_sensitivity_calib  __packed;
struct ipw_cmd  __packed;
#define STATUS_HCMD_ACTIVE      (1<<0)
#define STATUS_INT_ENABLED      (1<<1)
#define STATUS_RF_KILL_HW       (1<<2)
#define STATUS_RF_KILL_SW       (1<<3)
#define STATUS_RF_KILL_MASK     (STATUS_RF_KILL_HW | STATUS_RF_KILL_SW)
#define STATUS_INIT             (1<<5)
#define STATUS_AUTH             (1<<6)
#define STATUS_ASSOCIATED       (1<<7)
#define STATUS_STATE_MASK       (STATUS_INIT | STATUS_AUTH | STATUS_ASSOCIATED)
#define STATUS_ASSOCIATING      (1<<8)
#define STATUS_DISASSOCIATING   (1<<9)
#define STATUS_ROAMING          (1<<10)
#define STATUS_EXIT_PENDING     (1<<11)
#define STATUS_DISASSOC_PENDING (1<<12)
#define STATUS_STATE_PENDING    (1<<13)
#define STATUS_DIRECT_SCAN_PENDING (1<<19)
#define STATUS_SCAN_PENDING     (1<<20)
#define STATUS_SCANNING         (1<<21)
#define STATUS_SCAN_ABORTING    (1<<22)
#define STATUS_SCAN_FORCED      (1<<23)
#define STATUS_LED_LINK_ON      (1<<24)
#define STATUS_LED_ACT_ON       (1<<25)
#define STATUS_INDIRECT_BYTE    (1<<28)
#define STATUS_INDIRECT_DWORD   (1<<29)
#define STATUS_DIRECT_DWORD     (1<<30)
#define STATUS_SECURITY_UPDATED (1<<31)
#define CFG_STATIC_CHANNEL      (1<<0)
#define CFG_STATIC_ESSID        (1<<1)
#define CFG_STATIC_BSSID        (1<<2)
#define CFG_CUSTOM_MAC          (1<<3)
#define CFG_PREAMBLE_LONG       (1<<4)
#define CFG_ADHOC_PERSIST       (1<<5)
#define CFG_ASSOCIATE           (1<<6)
#define CFG_FIXED_RATE          (1<<7)
#define CFG_ADHOC_CREATE        (1<<8)
#define CFG_NO_LED              (1<<9)
#define CFG_BACKGROUND_SCAN     (1<<10)
#define CFG_SPEED_SCAN          (1<<11)
#define CFG_NET_STATS           (1<<12)
#define CAP_SHARED_KEY          (1<<0)
#define CAP_PRIVACY_ON          (1<<1)
#define MAX_STATIONS            32
#define IPW_INVALID_STATION     (0xff)
struct ipw_station_entry ;
#define AVG_ENTRIES 8
struct average ;
#define MAX_SPEED_SCAN 100
#define IPW_IBSS_MAC_HASH_SIZE 31
struct ipw_ibss_seq ;
struct ipw_error_elem ;
struct ipw_event  __packed;
struct ipw_fw_error  __packed;
enum ipw_prom_filter ;
struct ipw_priv;
struct ipw_prom_priv ;
#if defined(CONFIG_IPW2200_RADIOTAP) || defined(CONFIG_IPW2200_PROMISCUOUS)
struct ipw_rt_hdr  __packed;
struct ipw_priv ;
#define BIT_FMT8 "%c%c%c%c-%c%c%c%c"
#define BIT_FMT16 BIT_FMT8 ":" BIT_FMT8
#define BIT_FMT32 BIT_FMT16 " " BIT_FMT16
#define BITC(x,y) (((x>>y)&1)?'1':'0')
#define BIT_ARG8(x) \
BITC(x,7),BITC(x,6),BITC(x,5),BITC(x,4),\
BITC(x,3),BITC(x,2),BITC(x,1),BITC(x,0)
#define BIT_ARG16(x) \
BITC(x,15),BITC(x,14),BITC(x,13),BITC(x,12),\
BITC(x,11),BITC(x,10),BITC(x,9),BITC(x,8),\
BIT_ARG8(x)
#define BIT_ARG32(x) \
BITC(x,31),BITC(x,30),BITC(x,29),BITC(x,28),\
BITC(x,27),BITC(x,26),BITC(x,25),BITC(x,24),\
BITC(x,23),BITC(x,22),BITC(x,21),BITC(x,20),\
BITC(x,19),BITC(x,18),BITC(x,17),BITC(x,16),\
BIT_ARG16(x)
#define IPW_DEBUG(level, fmt, args...) \
do  while (0)
#define IPW_LL_DEBUG(level, fmt, args...) \
do  while (0)
#define IPW_LL_DEBUG(level, fmt, args...) do  while (0)
#define IPW_DL_ERROR         (1<<0)
#define IPW_DL_WARNING       (1<<1)
#define IPW_DL_INFO          (1<<2)
#define IPW_DL_WX            (1<<3)
#define IPW_DL_HOST_COMMAND  (1<<5)
#define IPW_DL_STATE         (1<<6)
#define IPW_DL_NOTIF         (1<<10)
#define IPW_DL_SCAN          (1<<11)
#define IPW_DL_ASSOC         (1<<12)
#define IPW_DL_DROP          (1<<13)
#define IPW_DL_IOCTL         (1<<14)
#define IPW_DL_MANAGE        (1<<15)
#define IPW_DL_FW            (1<<16)
#define IPW_DL_RF_KILL       (1<<17)
#define IPW_DL_FW_ERRORS     (1<<18)
#define IPW_DL_LED           (1<<19)
#define IPW_DL_ORD           (1<<20)
#define IPW_DL_FRAG          (1<<21)
#define IPW_DL_WEP           (1<<22)
#define IPW_DL_TX            (1<<23)
#define IPW_DL_RX            (1<<24)
#define IPW_DL_ISR           (1<<25)
#define IPW_DL_FW_INFO       (1<<26)
#define IPW_DL_IO            (1<<27)
#define IPW_DL_TRACE         (1<<28)
#define IPW_DL_STATS         (1<<29)
#define IPW_DL_MERGE         (1<<30)
#define IPW_DL_QOS           (1<<31)
#define IPW_ERROR(f, a...) printk(KERN_ERR DRV_NAME ": " f, ## a)
#define IPW_WARNING(f, a...) printk(KERN_WARNING DRV_NAME ": " f, ## a)
#define IPW_DEBUG_INFO(f, a...)    IPW_DEBUG(IPW_DL_INFO, f, ## a)
#define IPW_DEBUG_WX(f, a...)     IPW_DEBUG(IPW_DL_WX, f, ## a)
#define IPW_DEBUG_SCAN(f, a...)   IPW_DEBUG(IPW_DL_SCAN, f, ## a)
#define IPW_DEBUG_TRACE(f, a...)  IPW_LL_DEBUG(IPW_DL_TRACE, f, ## a)
#define IPW_DEBUG_RX(f, a...)     IPW_LL_DEBUG(IPW_DL_RX, f, ## a)
#define IPW_DEBUG_TX(f, a...)     IPW_LL_DEBUG(IPW_DL_TX, f, ## a)
#define IPW_DEBUG_ISR(f, a...)    IPW_LL_DEBUG(IPW_DL_ISR, f, ## a)
#define IPW_DEBUG_MANAGEMENT(f, a...) IPW_DEBUG(IPW_DL_MANAGE, f, ## a)
#define IPW_DEBUG_LED(f, a...) IPW_LL_DEBUG(IPW_DL_LED, f, ## a)
#define IPW_DEBUG_WEP(f, a...)    IPW_LL_DEBUG(IPW_DL_WEP, f, ## a)
#define IPW_DEBUG_HC(f, a...) IPW_LL_DEBUG(IPW_DL_HOST_COMMAND, f, ## a)
#define IPW_DEBUG_FRAG(f, a...) IPW_LL_DEBUG(IPW_DL_FRAG, f, ## a)
#define IPW_DEBUG_FW(f, a...) IPW_LL_DEBUG(IPW_DL_FW, f, ## a)
#define IPW_DEBUG_RF_KILL(f, a...) IPW_DEBUG(IPW_DL_RF_KILL, f, ## a)
#define IPW_DEBUG_DROP(f, a...) IPW_DEBUG(IPW_DL_DROP, f, ## a)
#define IPW_DEBUG_IO(f, a...) IPW_LL_DEBUG(IPW_DL_IO, f, ## a)
#define IPW_DEBUG_ORD(f, a...) IPW_LL_DEBUG(IPW_DL_ORD, f, ## a)
#define IPW_DEBUG_FW_INFO(f, a...) IPW_LL_DEBUG(IPW_DL_FW_INFO, f, ## a)
#define IPW_DEBUG_NOTIF(f, a...) IPW_DEBUG(IPW_DL_NOTIF, f, ## a)
#define IPW_DEBUG_STATE(f, a...) IPW_DEBUG(IPW_DL_STATE | IPW_DL_ASSOC | IPW_DL_INFO, f, ## a)
#define IPW_DEBUG_ASSOC(f, a...) IPW_DEBUG(IPW_DL_ASSOC | IPW_DL_INFO, f, ## a)
#define IPW_DEBUG_STATS(f, a...) IPW_LL_DEBUG(IPW_DL_STATS, f, ## a)
#define IPW_DEBUG_MERGE(f, a...) IPW_LL_DEBUG(IPW_DL_MERGE, f, ## a)
#define IPW_DEBUG_QOS(f, a...)   IPW_LL_DEBUG(IPW_DL_QOS, f, ## a)
#define IPW_INTA_RW       0x00000008
#define IPW_INTA_MASK_R   0x0000000C
#define IPW_INDIRECT_ADDR 0x00000010
#define IPW_INDIRECT_DATA 0x00000014
#define IPW_AUTOINC_ADDR  0x00000018
#define IPW_AUTOINC_DATA  0x0000001C
#define IPW_RESET_REG     0x00000020
#define IPW_GP_CNTRL_RW   0x00000024
#define IPW_READ_INT_REGISTER 0xFF4
#define IPW_GP_CNTRL_BIT_INIT_DONE	0x00000004
#define IPW_REGISTER_DOMAIN1_END        0x00001000
#define IPW_SRAM_READ_INT_REGISTER 	0x00000ff4
#define IPW_SHARED_LOWER_BOUND          0x00000200
#define IPW_INTERRUPT_AREA_LOWER_BOUND  0x00000f80
#define IPW_NIC_SRAM_LOWER_BOUND        0x00000000
#define IPW_NIC_SRAM_UPPER_BOUND        0x00030000
#define IPW_BIT_INT_HOST_SRAM_READ_INT_REGISTER (1 << 29)
#define IPW_GP_CNTRL_BIT_CLOCK_READY    0x00000001
#define IPW_GP_CNTRL_BIT_HOST_ALLOWS_STANDBY 0x00000002
#define CBD_RESET_REG_PRINCETON_RESET (1<<0)
#define IPW_START_STANDBY             (1<<2)
#define IPW_ACTIVITY_LED              (1<<4)
#define IPW_ASSOCIATED_LED            (1<<5)
#define IPW_OFDM_LED                  (1<<6)
#define IPW_RESET_REG_SW_RESET        (1<<7)
#define IPW_RESET_REG_MASTER_DISABLED (1<<8)
#define IPW_RESET_REG_STOP_MASTER     (1<<9)
#define IPW_GATE_ODMA                 (1<<25)
#define IPW_GATE_IDMA                 (1<<26)
#define IPW_ARC_KESHET_CONFIG         (1<<27)
#define IPW_GATE_ADMA                 (1<<29)
#define IPW_CSR_CIS_UPPER_BOUND	0x00000200
#define IPW_DOMAIN_0_END 0x1000
#define CLX_MEM_BAR_SIZE 0x1000
#define DINO_ENABLE_SYSTEM 0x80
#define DINO_ENABLE_CS     0x40
#define DINO_RXFIFO_DATA   0x01
#define IPW_BASEBAND_CONTROL_STATUS	0X00200000
#define IPW_BASEBAND_TX_FIFO_WRITE	0X00200004
#define IPW_BASEBAND_RX_FIFO_READ	0X00200004
#define IPW_BASEBAND_CONTROL_STORE	0X00200010
#define IPW_INTERNAL_CMD_EVENT 	0X00300004
#define IPW_BASEBAND_POWER_DOWN 0x00000001
#define IPW_MEM_HALT_AND_RESET  0x003000e0
#define IPW_BIT_HALT_RESET_ON	0x80000000
#define IPW_BIT_HALT_RESET_OFF 	0x00000000
#define CB_LAST_VALID     0x20000000
#define CB_INT_ENABLED    0x40000000
#define CB_VALID          0x80000000
#define CB_SRC_LE         0x08000000
#define CB_DEST_LE        0x04000000
#define CB_SRC_AUTOINC    0x00800000
#define CB_SRC_IO_GATED   0x00400000
#define CB_DEST_AUTOINC   0x00080000
#define CB_SRC_SIZE_LONG  0x00200000
#define CB_DEST_SIZE_LONG 0x00020000
#define DMA_CONTROL_SMALL_CB_CONST_VALUE 0x00540000
#define DMA_CB_STOP_AND_ABORT            0x00000C00
#define DMA_CB_START                     0x00000100
#define IPW_SHARED_SRAM_SIZE               0x00030000
#define IPW_SHARED_SRAM_DMA_CONTROL        0x00027000
#define CB_MAX_LENGTH                      0x1FFF
#define IPW_HOST_EEPROM_DATA_SRAM_SIZE 0xA18
#define IPW_EEPROM_IMAGE_SIZE          0x100
#define IPW_DMA_I_CURRENT_CB  0x003000D0
#define IPW_DMA_O_CURRENT_CB  0x003000D4
#define IPW_DMA_I_DMA_CONTROL 0x003000A4
#define IPW_DMA_I_CB_BASE     0x003000A0
#define IPW_TX_CMD_QUEUE_BD_BASE        0x00000200
#define IPW_TX_CMD_QUEUE_BD_SIZE        0x00000204
#define IPW_TX_QUEUE_0_BD_BASE          0x00000208
#define IPW_TX_QUEUE_0_BD_SIZE          (0x0000020C)
#define IPW_TX_QUEUE_1_BD_BASE          0x00000210
#define IPW_TX_QUEUE_1_BD_SIZE          0x00000214
#define IPW_TX_QUEUE_2_BD_BASE          0x00000218
#define IPW_TX_QUEUE_2_BD_SIZE          (0x0000021C)
#define IPW_TX_QUEUE_3_BD_BASE          0x00000220
#define IPW_TX_QUEUE_3_BD_SIZE          0x00000224
#define IPW_RX_BD_BASE                  0x00000240
#define IPW_RX_BD_SIZE                  0x00000244
#define IPW_RFDS_TABLE_LOWER            0x00000500
#define IPW_TX_CMD_QUEUE_READ_INDEX     0x00000280
#define IPW_TX_QUEUE_0_READ_INDEX       0x00000284
#define IPW_TX_QUEUE_1_READ_INDEX       0x00000288
#define IPW_TX_QUEUE_2_READ_INDEX       (0x0000028C)
#define IPW_TX_QUEUE_3_READ_INDEX       0x00000290
#define IPW_RX_READ_INDEX               (0x000002A0)
#define IPW_TX_CMD_QUEUE_WRITE_INDEX    (0x00000F80)
#define IPW_TX_QUEUE_0_WRITE_INDEX      (0x00000F84)
#define IPW_TX_QUEUE_1_WRITE_INDEX      (0x00000F88)
#define IPW_TX_QUEUE_2_WRITE_INDEX      (0x00000F8C)
#define IPW_TX_QUEUE_3_WRITE_INDEX      (0x00000F90)
#define IPW_RX_WRITE_INDEX              (0x00000FA0)
#define IPW_EEPROM_DATA_SRAM_ADDRESS (IPW_SHARED_LOWER_BOUND + 0x814)
#define IPW_EEPROM_DATA_SRAM_SIZE    (IPW_SHARED_LOWER_BOUND + 0x818)
#define IPW_EEPROM_LOAD_DISABLE      (IPW_SHARED_LOWER_BOUND + 0x81C)
#define IPW_EEPROM_DATA              (IPW_SHARED_LOWER_BOUND + 0x820)
#define IPW_EEPROM_UPPER_ADDRESS     (IPW_SHARED_LOWER_BOUND + 0x9E0)
#define IPW_STATION_TABLE_LOWER      (IPW_SHARED_LOWER_BOUND + 0xA0C)
#define IPW_STATION_TABLE_UPPER      (IPW_SHARED_LOWER_BOUND + 0xB0C)
#define IPW_REQUEST_ATIM             (IPW_SHARED_LOWER_BOUND + 0xB0C)
#define IPW_ATIM_SENT                (IPW_SHARED_LOWER_BOUND + 0xB10)
#define IPW_WHO_IS_AWAKE             (IPW_SHARED_LOWER_BOUND + 0xB14)
#define IPW_DURING_ATIM_WINDOW       (IPW_SHARED_LOWER_BOUND + 0xB18)
#define MSB                             1
#define LSB                             0
#define WORD_TO_BYTE(_word)             ((_word) * sizeof(u16))
#define GET_EEPROM_ADDR(_wordoffset,_byteoffset) \
( WORD_TO_BYTE(_wordoffset) + (_byteoffset) )
#define EEPROM_PME_CAPABILITY   (GET_EEPROM_ADDR(0x09,MSB))
#define EEPROM_MAC_ADDRESS      (GET_EEPROM_ADDR(0x21,LSB))
#define EEPROM_VERSION          (GET_EEPROM_ADDR(0x24,MSB))
#define EEPROM_NIC_TYPE         (GET_EEPROM_ADDR(0x25,LSB))
#define EEPROM_SKU_CAPABILITY   (GET_EEPROM_ADDR(0x25,MSB))
#define EEPROM_COUNTRY_CODE     (GET_EEPROM_ADDR(0x26,LSB))
#define EEPROM_IBSS_CHANNELS_BG (GET_EEPROM_ADDR(0x28,LSB))
#define EEPROM_IBSS_CHANNELS_A  (GET_EEPROM_ADDR(0x29,MSB))
#define EEPROM_BSS_CHANNELS_BG  (GET_EEPROM_ADDR(0x2c,LSB))
#define EEPROM_HW_VERSION       (GET_EEPROM_ADDR(0x72,LSB))
#define EEPROM_NIC_TYPE_0 0
#define EEPROM_NIC_TYPE_1 1
#define EEPROM_NIC_TYPE_2 2
#define EEPROM_NIC_TYPE_3 3
#define EEPROM_NIC_TYPE_4 4
#define EEPROM_SKU_CAP_BT_CHANNEL_SIG  0x01
#define EEPROM_SKU_CAP_BT_PRIORITY     0x02
#define EEPROM_SKU_CAP_BT_OOB          0x04
#define FW_MEM_REG_LOWER_BOUND          0x00300000
#define FW_MEM_REG_EEPROM_ACCESS        (FW_MEM_REG_LOWER_BOUND + 0x40)
#define IPW_EVENT_REG                   (FW_MEM_REG_LOWER_BOUND + 0x04)
#define EEPROM_BIT_SK                   (1<<0)
#define EEPROM_BIT_CS                   (1<<1)
#define EEPROM_BIT_DI                   (1<<2)
#define EEPROM_BIT_DO                   (1<<4)
#define EEPROM_CMD_READ                 0x2
#define IPW_INTA_NONE   0x00000000
#define IPW_INTA_BIT_RX_TRANSFER                   0x00000002
#define IPW_INTA_BIT_STATUS_CHANGE                 0x00000010
#define IPW_INTA_BIT_BEACON_PERIOD_EXPIRED         0x00000020
#define IPW_INTA_BIT_TX_CMD_QUEUE                  0x00000800
#define IPW_INTA_BIT_TX_QUEUE_1                    0x00001000
#define IPW_INTA_BIT_TX_QUEUE_2                    0x00002000
#define IPW_INTA_BIT_TX_QUEUE_3                    0x00004000
#define IPW_INTA_BIT_TX_QUEUE_4                    0x00008000
#define IPW_INTA_BIT_SLAVE_MODE_HOST_CMD_DONE      0x00010000
#define IPW_INTA_BIT_PREPARE_FOR_POWER_DOWN        0x00100000
#define IPW_INTA_BIT_POWER_DOWN                    0x00200000
#define IPW_INTA_BIT_FW_INITIALIZATION_DONE        0x01000000
#define IPW_INTA_BIT_FW_CARD_DISABLE_PHY_OFF_DONE  0x02000000
#define IPW_INTA_BIT_RF_KILL_DONE                  0x04000000
#define IPW_INTA_BIT_FATAL_ERROR             0x40000000
#define IPW_INTA_BIT_PARITY_ERROR            0x80000000
#define IPW_INTA_MASK_ALL                        \
(IPW_INTA_BIT_TX_QUEUE_1               | \
IPW_INTA_BIT_TX_QUEUE_2               | \
IPW_INTA_BIT_TX_QUEUE_3               | \
IPW_INTA_BIT_TX_QUEUE_4               | \
IPW_INTA_BIT_TX_CMD_QUEUE             | \
IPW_INTA_BIT_RX_TRANSFER              | \
IPW_INTA_BIT_FATAL_ERROR              | \
IPW_INTA_BIT_PARITY_ERROR             | \
IPW_INTA_BIT_STATUS_CHANGE            | \
IPW_INTA_BIT_FW_INITIALIZATION_DONE   | \
IPW_INTA_BIT_BEACON_PERIOD_EXPIRED    | \
IPW_INTA_BIT_SLAVE_MODE_HOST_CMD_DONE | \
IPW_INTA_BIT_PREPARE_FOR_POWER_DOWN   | \
IPW_INTA_BIT_POWER_DOWN               | \
IPW_INTA_BIT_RF_KILL_DONE )
#define EVENT_ELEM_SIZE     (3 * sizeof(u32))
#define EVENT_START_OFFSET  (1 * sizeof(u32) + 2 * sizeof(u16))
#define ERROR_ELEM_SIZE     (7 * sizeof(u32))
#define ERROR_START_OFFSET  (1 * sizeof(u32))
#define IPW_TX_POWER_MIN	-12
#define IPW_TX_POWER_MAX	20
#define IPW_TX_POWER_DEFAULT	IPW_TX_POWER_MAX
enum ;
#define AUTH_OPEN	0
#define AUTH_SHARED_KEY	1
#define AUTH_LEAP	2
#define AUTH_IGNORE	3
#define HC_ASSOCIATE      0
#define HC_REASSOCIATE    1
#define HC_DISASSOCIATE   2
#define HC_IBSS_START     3
#define HC_IBSS_RECONF    4
#define HC_DISASSOC_QUIET 5
#define HC_QOS_SUPPORT_ASSOC  cpu_to_le16(0x01)
#define IPW_RATE_CAPABILITIES 1
#define IPW_RATE_CONNECT      0
#define IPW_TX_RATE_1MB  0x0A
#define IPW_TX_RATE_2MB  0x14
#define IPW_TX_RATE_5MB  0x37
#define IPW_TX_RATE_6MB  0x0D
#define IPW_TX_RATE_9MB  0x0F
#define IPW_TX_RATE_11MB 0x6E
#define IPW_TX_RATE_12MB 0x05
#define IPW_TX_RATE_18MB 0x07
#define IPW_TX_RATE_24MB 0x09
#define IPW_TX_RATE_36MB 0x0B
#define IPW_TX_RATE_48MB 0x01
#define IPW_TX_RATE_54MB 0x03
#define IPW_ORD_TABLE_ID_MASK             0x0000FF00
#define IPW_ORD_TABLE_VALUE_MASK          0x000000FF
#define IPW_ORD_TABLE_0_MASK              0x0000F000
#define IPW_ORD_TABLE_1_MASK              0x0000F100
#define IPW_ORD_TABLE_2_MASK              0x0000F200
#define IPW_ORD_TABLE_3_MASK              0x0000F300
#define IPW_ORD_TABLE_4_MASK              0x0000F400
#define IPW_ORD_TABLE_5_MASK              0x0000F500
#define IPW_ORD_TABLE_6_MASK              0x0000F600
#define IPW_ORD_TABLE_7_MASK              0x0000F700
enum ;
#define IPW_RSSI_TO_DBM 112
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define IPW_ERROR_LOG     (IPW_SHARED_LOWER_BOUND + 0x410)
#define IPW_EVENT_LOG     (IPW_SHARED_LOWER_BOUND + 0x414)
#define IPW_ORDINALS_TABLE_LOWER        (IPW_SHARED_LOWER_BOUND + 0x500)
#define IPW_ORDINALS_TABLE_0            (IPW_SHARED_LOWER_BOUND + 0x180)
#define IPW_ORDINALS_TABLE_1            (IPW_SHARED_LOWER_BOUND + 0x184)
#define IPW_ORDINALS_TABLE_2            (IPW_SHARED_LOWER_BOUND + 0x188)
#define IPW_MEM_FIXED_OVERRIDE          (IPW_SHARED_LOWER_BOUND + 0x41C)
struct ipw_fixed_rate  __packed;
#define IPW_INDIRECT_ADDR_MASK (~0x3ul)
struct host_cmd  __packed;
struct cmdlog_host_cmd  __packed;
struct ipw_cmd_log ;
#define CFG_BT_COEXISTENCE_SIGNAL_CHNL  0x01
#define CFG_BT_COEXISTENCE_DEFER        0x02
#define CFG_BT_COEXISTENCE_KILL         0x04
#define CFG_BT_COEXISTENCE_WME_OVER_BT  0x08
#define CFG_BT_COEXISTENCE_OOB          0x10
#define CFG_CTS_TO_ITSELF_ENABLED_MIN	0x00
#define CFG_CTS_TO_ITSELF_ENABLED_MAX	0x01
#define CFG_CTS_TO_ITSELF_ENABLED_DEF	CFG_CTS_TO_ITSELF_ENABLED_MIN
#define CFG_SYS_ANTENNA_BOTH            0x00
#define CFG_SYS_ANTENNA_A               0x01
#define CFG_SYS_ANTENNA_B               0x03
#define CFG_SYS_ANTENNA_SLOW_DIV        0x02
#define REG_MIN_CHANNEL             0
#define REG_MAX_CHANNEL             14
#define REG_CHANNEL_MASK            0x00003FFF
#define IPW_IBSS_11B_DEFAULT_MASK   0x87ff
#define IPW_MAX_CONFIG_RETRIES 10
