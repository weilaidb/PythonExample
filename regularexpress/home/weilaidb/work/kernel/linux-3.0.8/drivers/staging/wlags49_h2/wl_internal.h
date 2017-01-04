#define __WAVELAN2_H__
#if WIRELESS_EXT > 13
#define USE_DBM
#define RETURN_CURRENT_NETWORKNAME
#define USE_FREQUENCY
#define p_u8    __u8
#define p_s8    __s8
#define p_u16   __u16
#define p_s16   __s16
#define p_u32   __u32
#define p_s32   __s32
#define p_char  char
#define MAX_KEY_LEN         (2 + (13 * 2))
#define MB_SIZE             1024
#define MAX_ENC_LEN         104
#define MAX_SCAN_TIME_SEC   8
#define MAX_NAPS            32
#define CFG_MB_INFO         0x0820
#define NUM_WDS_PORTS       6
#define WVLAN_MAX_LOOKAHEAD (HCF_MAX_MSG+46)
#define PARM_MIN_NAME_LEN                       1
#define PARM_MAX_NAME_LEN                       32
#define PARM_AUTHENTICATION                     Authentication
#define PARM_NAME_AUTHENTICATION				TEXT("Authentication")
#define PARM_MIN_AUTHENTICATION                 1
#define PARM_MAX_AUTHENTICATION                 2
#define PARM_DEFAULT_AUTHENTICATION             1
#define PARM_AUTH_KEY_MGMT_SUITE                AuthKeyMgmtSuite
#define PARM_NAME_AUTH_KEY_MGMT_SUITE           TEXT("AuthKeyMgmtSuite")
#define PARM_MIN_AUTH_KEY_MGMT_SUITE            0
#define PARM_MAX_AUTH_KEY_MGMT_SUITE            4
#define PARM_DEFAULT_AUTH_KEY_MGMT_SUITE        0
#define PARM_BRSC_2GHZ                          BRSC2GHz
#define PARM_NAME_BRSC_2GHZ                     TEXT("BRSC2GHz")
#define PARM_MIN_BRSC                           0x0000
#define PARM_MAX_BRSC                           0x0FFF
#define PARM_DEFAULT_BRSC_2GHZ                  0x000F
#define PARM_BRSC_5GHZ                          BRSC5GHz
#define PARM_NAME_BRSC_5GHZ                     TEXT("BRSC5GHz")
#define PARM_DEFAULT_BRSC_5GHZ                  0x0150
#define PARM_COEXISTENCE                        Coexistence
#define PARM_NAME_COEXISTENCE                   TEXT("Coexistence")
#define PARM_MIN_COEXISTENCE                    0x0000
#define PARM_MAX_COEXISTENCE                    0x0007
#define PARM_DEFAULT_COEXISTENCE                0x0000
#define PARM_CONFIGURED                         Configured
#define PARM_NAME_CONFIGURED					TEXT("Configured")
#define PARM_CONNECTION_CONTROL                 ConnectionControl
#define PARM_NAME_CONNECTION_CONTROL            TEXT("ConnectionControl")
#define PARM_MIN_CONNECTION_CONTROL             0
#define PARM_MAX_CONNECTION_CONTROL             3
#define PARM_DEFAULT_CONNECTION_CONTROL         2
#define PARM_CREATE_IBSS                        CreateIBSS
#define PARM_NAME_CREATE_IBSS                   TEXT("CreateIBSS")
#define PARM_DEFAULT_CREATE_IBSS                FALSE
#define PARM_DEFAULT_CREATE_IBSS_STR            "N"
#define PARM_DEBUG_FLAG             	    	DebugFlag
#define PARM_NAME_DEBUG_FLAG            		TEXT("DebugFlag")
#define PARM_MIN_DEBUG_FLAG             		0
#define PARM_MAX_DEBUG_FLAG             		0xFFFF
#define PARM_DEFAULT_DEBUG_FLAG         		0xFFFF
#define PARM_DESIRED_SSID                       DesiredSSID
#define PARM_NAME_DESIRED_SSID                  TEXT("DesiredSSID")
#define PARM_DOWNLOAD_FIRMWARE                  DownloadFirmware
#define PARM_NAME_DOWNLOAD_FIRMWARE             TEXT("DownloadFirmware")
#define PARM_DRIVER_ENABLE                      DriverEnable
#define PARM_NAME_DRIVER_ENABLE					TEXT("DriverEnable")
#define PARM_DEFAULT_DRIVER_ENABLE				TRUE
#define PARM_ENABLE_ENCRYPTION                  EnableEncryption
#define PARM_NAME_ENABLE_ENCRYPTION             TEXT("EnableEncryption")
#define PARM_MIN_ENABLE_ENCRYPTION              0
#define PARM_MAX_ENABLE_ENCRYPTION              7
#define PARM_DEFAULT_ENABLE_ENCRYPTION          0
#define PARM_ENCRYPTION                         Encryption
#define PARM_NAME_ENCRYPTION                    TEXT("Encryption")
#define PARM_EXCLUDE_UNENCRYPTED                ExcludeUnencrypted
#define PARM_NAME_EXCLUDE_UNENCRYPTED           TEXT("ExcludeUnencrypted")
#define PARM_DEFAULT_EXCLUDE_UNENCRYPTED        TRUE
#define PARM_DEFAULT_EXCLUDE_UNENCRYPTED_STR    "N"
#define PARM_INTRA_BSS_RELAY                    IntraBSSRelay
#define PARM_NAME_INTRA_BSS_RELAY               TEXT("IntraBSSRelay")
#define PARM_DEFAULT_INTRA_BSS_RELAY            TRUE
#define PARM_DEFAULT_INTRA_BSS_RELAY_STR        "Y"
#define PARM_KEY1                               Key1
#define PARM_NAME_KEY1                          TEXT("Key1")
#define PARM_KEY2                               Key2
#define PARM_NAME_KEY2                          TEXT("Key2")
#define PARM_KEY3                               Key3
#define PARM_NAME_KEY3                          TEXT("Key3")
#define PARM_KEY4                               Key4
#define PARM_NAME_KEY4                          TEXT("Key4")
#define PARM_LOAD_BALANCING                     LoadBalancing
#define PARM_NAME_LOAD_BALANCING                TEXT("LoadBalancing")
#define PARM_DEFAULT_LOAD_BALANCING             TRUE
#define PARM_DEFAULT_LOAD_BALANCING_STR         "Y"
#define PARM_MAX_DATA_LENGTH                    MaxDataLength
#define PARM_NAME_MAX_DATA_LENGTH				TEXT("MaxDataLength")
#define PARM_MAX_SLEEP                          MaxSleepDuration
#define PARM_NAME_MAX_SLEEP                     TEXT("MaxSleepDuration")
#define PARM_MIN_MAX_PM_SLEEP                   1
#define PARM_MAX_MAX_PM_SLEEP                   65535
#define PARM_DEFAULT_MAX_PM_SLEEP               100
#define PARM_MEDIUM_DISTRIBUTION                MediumDistribution
#define PARM_NAME_MEDIUM_DISTRIBUTION           TEXT("MediumDistribution")
#define PARM_DEFAULT_MEDIUM_DISTRIBUTION        TRUE
#define PARM_DEFAULT_MEDIUM_DISTRIBUTION_STR    "Y"
#define PARM_MICROWAVE_ROBUSTNESS               MicroWaveRobustness
#define PARM_NAME_MICROWAVE_ROBUSTNESS          TEXT("MicroWaveRobustness")
#define PARM_DEFAULT_MICROWAVE_ROBUSTNESS       FALSE
#define PARM_DEFAULT_MICROWAVE_ROBUSTNESS_STR   "N"
#define PARM_MULTICAST_PM_BUFFERING             MulticastPMBuffering
#define PARM_NAME_MULTICAST_PM_BUFFERING	    TEXT("MulticastPMBuffering")
#define PARM_DEFAULT_MULTICAST_PM_BUFFERING     TRUE
#define PARM_DEFAULT_MULTICAST_PM_BUFFERING_STR "Y"
#define PARM_MULTICAST_RATE                     MulticastRate
#define PARM_NAME_MULTICAST_RATE                TEXT("MulticastRate")
#define PARM_MIN_MULTICAST_RATE                 0x0001
#define PARM_MAX_MULTICAST_RATE                 0x0fff
#define PARM_DEFAULT_MULTICAST_RATE_2GHZ        0x0004
#define PARM_DEFAULT_MULTICAST_RATE_5GHZ        0x0010
#define PARM_MIN_MULTICAST_RATE                 0x0001
#define PARM_MAX_MULTICAST_RATE                 0x0004
#define PARM_DEFAULT_MULTICAST_RATE_2GHZ        0x0002
#define PARM_DEFAULT_MULTICAST_RATE_5GHZ        0x0000
#define PARM_MULTICAST_RX                       MulticastReceive
#define PARM_NAME_MULTICAST_RX                  TEXT("MulticastReceive")
#define PARM_DEFAULT_MULTICAST_RX               TRUE
#define PARM_DEFAULT_MULTICAST_RX_STR           "Y"
#define PARM_NETWORK_ADDR                       NetworkAddress
#define PARM_NAME_NETWORK_ADDR                  TEXT("NetworkAddress")
#define PARM_DEFAULT_NETWORK_ADDR
#define PARM_NETWORK_TYPE                       NetworkType
#define PARM_NAME_NETWORK_TYPE					TEXT("NetworkType")
#define PARM_DEFAULT_NETWORK_TYPE   			0
#define PARM_OWN_ATIM_WINDOW                    OwnATIMWindow
#define PARM_NAME_OWN_ATIM_WINDOW				TEXT("OwnATIMWindow")
#define PARM_MIN_OWN_ATIM_WINDOW                0
#define PARM_MAX_OWN_ATIM_WINDOW                100
#define PARM_DEFAULT_OWN_ATIM_WINDOW            0
#define PARM_OWN_BEACON_INTERVAL                OwnBeaconInterval
#define PARM_NAME_OWN_BEACON_INTERVAL           TEXT("OwnBeaconInterval")
#define PARM_MIN_OWN_BEACON_INTERVAL            20
#define PARM_MAX_OWN_BEACON_INTERVAL            200
#define PARM_DEFAULT_OWN_BEACON_INTERVAL        100
#define PARM_OWN_CHANNEL                        OwnChannel
#define PARM_NAME_OWN_CHANNEL                   TEXT("OwnChannel")
#define PARM_MIN_OWN_CHANNEL                    1
#define PARM_MAX_OWN_CHANNEL                    161
#define PARM_DEFAULT_OWN_CHANNEL                10
#define PARM_OWN_DTIM_PERIOD                    OwnDTIMPeriod
#define PARM_NAME_OWN_DTIM_PERIOD	            TEXT("OwnDTIMPeriod")
#define PARM_MIN_OWN_DTIM_PERIOD                1
#define PARM_MAX_OWN_DTIM_PERIOD                65535
#define PARM_DEFAULT_OWN_DTIM_PERIOD            1
#define PARM_OWN_NAME                           OwnName
#define PARM_NAME_OWN_NAME                      TEXT("OwnName")
#define PARM_DEFAULT_OWN_NAME                   "Linux"
#define PARM_OWN_SSID                           OwnSSID
#define PARM_NAME_OWN_SSID                      TEXT("OwnSSID")
#define PARM_PM_ENABLED                         PMEnabled
#define PARM_NAME_PM_ENABLED                    TEXT("PMEnabled")
#define PARM_MAX_PM_ENABLED						3
#define PARM_PMEPS                              PMEPS
#define PARM_NAME_PMEPS                         TEXT("PMEPS")
#define PARM_PM_HOLDOVER_DURATION               PMHoldoverDuration
#define PARM_NAME_PM_HOLDOVER_DURATION          TEXT("PMHoldoverDuration")
#define PARM_MIN_PM_HOLDOVER_DURATION           1
#define PARM_MAX_PM_HOLDOVER_DURATION           1000
#define PARM_DEFAULT_PM_HOLDOVER_DURATION       100
#define PARM_PM_MODE                            PowerMode
#define PARM_NAME_PM_MODE                       TEXT("PowerMode")
#define PARM_PORT_TYPE                          PortType
#define PARM_NAME_PORT_TYPE                     TEXT("PortType")
#define PARM_MIN_PORT_TYPE                      1
#define PARM_MAX_PORT_TYPE                      3
#define PARM_DEFAULT_PORT_TYPE                  1
#define PARM_PROMISCUOUS_MODE                   PromiscuousMode
#define PARM_NAME_PROMISCUOUS_MODE              TEXT("PromiscuousMode")
#define PARM_DEFAULT_PROMISCUOUS_MODE           FALSE
#define PARM_DEFAULT_PROMISCUOUS_MODE_STR       "N"
#define PARM_REJECT_ANY                         RejectANY
#define PARM_NAME_REJECT_ANY				    TEXT("RejectANY")
#define PARM_DEFAULT_REJECT_ANY                 FALSE
#define PARM_DEFAULT_REJECT_ANY_STR             "N"
#define PARM_RTS_THRESHOLD                      RTSThreshold
#define PARM_NAME_RTS_THRESHOLD                 TEXT("RTSThreshold")
#define PARM_MIN_RTS_THRESHOLD                  0
#define PARM_MAX_RTS_THRESHOLD                  2347
#define PARM_DEFAULT_RTS_THRESHOLD              2347
#define PARM_RTS_THRESHOLD1                     RTSThreshold1
#define PARM_NAME_RTS_THRESHOLD1                TEXT("RTSThreshold1")
#define PARM_RTS_THRESHOLD2                     RTSThreshold2
#define PARM_NAME_RTS_THRESHOLD2                TEXT("RTSThreshold2")
#define PARM_RTS_THRESHOLD3                     RTSThreshold3
#define PARM_NAME_RTS_THRESHOLD3                TEXT("RTSThreshold3")
#define PARM_RTS_THRESHOLD4                     RTSThreshold4
#define PARM_NAME_RTS_THRESHOLD4                TEXT("RTSThreshold4")
#define PARM_RTS_THRESHOLD5                     RTSThreshold5
#define PARM_NAME_RTS_THRESHOLD5                TEXT("RTSThreshold5")
#define PARM_RTS_THRESHOLD6                     RTSThreshold6
#define PARM_NAME_RTS_THRESHOLD6                TEXT("RTSThreshold6")
#define PARM_SRSC_2GHZ                          SRSC2GHz
#define PARM_NAME_SRSC_2GHZ                     TEXT("SRSC2GHz")
#define PARM_MIN_SRSC                           0x0000
#define PARM_MAX_SRSC                           0x0FFF
#define PARM_DEFAULT_SRSC_2GHZ                  0x0FFF
#define PARM_SRSC_5GHZ                          SRSC5GHz
#define PARM_NAME_SRSC_5GHZ                     TEXT("SRSC5GHz")
#define PARM_DEFAULT_SRSC_5GHZ                  0x0FF0
#define PARM_SYSTEM_SCALE                       SystemScale
#define PARM_NAME_SYSTEM_SCALE                  TEXT("SystemScale")
#define PARM_MIN_SYSTEM_SCALE                   1
#define PARM_MAX_SYSTEM_SCALE                   5
#define PARM_DEFAULT_SYSTEM_SCALE               1
#define PARM_TX_KEY                             TxKey
#define PARM_NAME_TX_KEY                        TEXT("TxKey")
#define PARM_MIN_TX_KEY                         1
#define PARM_MAX_TX_KEY                         4
#define PARM_DEFAULT_TX_KEY                     1
#define PARM_TX_POW_LEVEL                       TxPowLevel
#define PARM_NAME_TX_POW_LEVEL                  TEXT("TxPowLevel")
#define PARM_MIN_TX_POW_LEVEL                   1
#define PARM_MAX_TX_POW_LEVEL                   6
#define PARM_DEFAULT_TX_POW_LEVEL               3
#define PARM_TX_RATE                            TxRateControl
#define PARM_NAME_TX_RATE                       TEXT("TxRateControl")
#define PARM_MIN_TX_RATE                        0x0001
#define PARM_MAX_TX_RATE                        0x0FFF
#define PARM_DEFAULT_TX_RATE_2GHZ               0x0FFF
#define PARM_DEFAULT_TX_RATE_5GHZ               0x0FF0
#define PARM_MAX_TX_RATE                        0x0007
#define PARM_DEFAULT_TX_RATE_2GHZ               0x0003
#define PARM_DEFAULT_TX_RATE_5GHZ               0x0000
#define PARM_TX_RATE1                           TxRateControl1
#define PARM_NAME_TX_RATE1                      TEXT("TxRateControl1")
#define PARM_TX_RATE2                           TxRateControl2
#define PARM_NAME_TX_RATE2                      TEXT("TxRateControl2")
#define PARM_TX_RATE3                           TxRateControl3
#define PARM_NAME_TX_RATE3                      TEXT("TxRateControl3")
#define PARM_TX_RATE4                           TxRateControl4
#define PARM_NAME_TX_RATE4                      TEXT("TxRateControl4")
#define PARM_TX_RATE5                           TxRateControl5
#define PARM_NAME_TX_RATE5                      TEXT("TxRateControl5")
#define PARM_TX_RATE6                           TxRateControl6
#define PARM_NAME_TX_RATE6                      TEXT("TxRateControl6")
#define PARM_VENDORDESCRIPTION                  VendorDescription
#define PARM_NAME_VENDORDESCRIPTION				TEXT("VendorDescription")
#define PARM_WDS_ADDRESS                        WDSAddress
#define PARM_NAME_WDS_ADDRESS					TEXT("WDSAddress")
#define PARM_WDS_ADDRESS1                       WDSAddress1
#define PARM_NAME_WDS_ADDRESS1					TEXT("WDSAddress1")
#define PARM_WDS_ADDRESS2                       WDSAddress2
#define PARM_NAME_WDS_ADDRESS2					TEXT("WDSAddress2")
#define PARM_WDS_ADDRESS3                       WDSAddress3
#define PARM_NAME_WDS_ADDRESS3					TEXT("WDSAddress3")
#define PARM_WDS_ADDRESS4                       WDSAddress4
#define PARM_NAME_WDS_ADDRESS4					TEXT("WDSAddress4")
#define PARM_WDS_ADDRESS5                       WDSAddress5
#define PARM_NAME_WDS_ADDRESS5					TEXT("WDSAddress5")
#define PARM_WDS_ADDRESS6                       WDSAddress6
#define PARM_NAME_WDS_ADDRESS6					TEXT("WDSAddress6")
#define WL_FRIMWARE_PRESENT     1
#define WL_FRIMWARE_NOT_PRESENT	0
#define WL_HANDLING_INT         1
#define WL_NOT_HANDLING_INT     0
#define NELEM(arr) (sizeof(arr) / sizeof(arr[0]))
#define WVLAN_VALID_MAC_ADDRESS( x ) \
((x[0]!=0xFF) && (x[1]!=0xFF) && (x[2]!=0xFF) && (x[3]!=0xFF) && (x[4]!=0xFF) && (x[5]!=0xFF))
#undef FALSE
#undef TRUE
typedef enum
bool_t;
typedef struct _ScanResult
ScanResult;
typedef struct _LINK_STATUS_STRCT
LINK_STATUS_STRCT;
typedef struct _ASSOC_STATUS_STRCT
ASSOC_STATUS_STRCT;
typedef struct _SECURITY_STATUS_STRCT
SECURITY_STATUS_STRCT;
#define WVLAN_WMP_PDU_TYPE_LT_REQ       0x00
#define WVLAN_WMP_PDU_TYPE_LT_RSP       0x01
#define WVLAN_WMP_PDU_TYPE_APL_REQ      0x02
#define WVLAN_WMP_PDU_TYPE_APL_RSP      0x03
typedef struct wvlan_eth_hdr
WVLAN_ETH_HDR, *PWVLAN_ETH_HDR;
typedef struct wvlan_llc_snap
WVLAN_LLC_SNAP, *PWVLAN_LLC_SNAP;
typedef struct wvlan_lt_hdr
WVLAN_LT_HDR, *PWVLAN_LT_HDR;
typedef struct wvlan_wmp_hdr
WVLAN_WMP_HDR, *PWVLAN_WMP_HDR;
#define FILLER_SIZE             1554
#define TEST_PATTERN_SIZE       54
typedef struct wvlan_lt_req
WVLAN_LT_REQ, *PWVLAN_LT_REQ;
typedef struct wvlan_lt_rsp
WVLAN_LT_RSP, *PWVLAN_LT_RSP;
typedef struct wvlan_rx_wmp_hdr
WVLAN_RX_WMP_HDR, *PWVLAN_RX_WMP_HDR;
typedef struct wvlan_linktest_req_pdu
WVLAN_LINKTEST_REQ_PDU, *PWVLAN_LINKTEST_REQ_PDU;
typedef struct wvlan_linktest_rsp_pdu
WVLAN_LINKTEST_RSP_PDU, *PWVLAN_LINKTEST_RSP_PDU;
typedef struct _LINKTEST_RSP_STRCT
LINKTEST_RSP_STRCT;
typedef struct wvlan_wmp_rsp_pdu
WVLAN_WMP_RSP_PDU, *PWVLAN_WMP_RSP_PDU;
typedef struct _WMP_RSP_STRCT
WMP_RSP_STRCT;
typedef struct _PROBE_RESP
PROBE_RESP, *PPROBE_RESP;
typedef struct _ProbeResult
ProbeResult;
#define CAPABILITY_ESS      0x0001
#define CAPABILITY_IBSS     0x0002
#define CAPABILITY_PRIVACY  0x0010
#define DS_INFO_ELEM                        0x03
#define GENERIC_INFO_ELEM                   0xdd
#define WPA_MAX_IE_LEN                      40
#define WPA_SELECTOR_LEN                    4
#define WPA_OUI_TYPE
#define WPA_VERSION                         1
#define WPA_AUTH_KEY_MGMT_UNSPEC_802_1X
#define WPA_AUTH_KEY_MGMT_PSK_OVER_802_1X
#define WPA_CIPHER_SUITE_NONE
#define WPA_CIPHER_SUITE_WEP40
#define WPA_CIPHER_SUITE_TKIP
#define WPA_CIPHER_SUITE_WRAP
#define WPA_CIPHER_SUITE_CCMP
#define WPA_CIPHER_SUITE_WEP104
typedef enum wvlan_drv_mode
WVLAN_DRV_MODE, *PWVLAN_DRV_MODE;
typedef enum wvlan_port_state
WVLAN_PORT_STATE, *PWVLAN_PORT_STATE;
typedef enum wvlan_pm_state
WVLAN_PM_STATE, *PWVLAN_PM_STATE;
typedef struct wvlan_frame
WVLAN_FRAME, *PWVLAN_FRAME;
typedef struct wvlan_lframe
WVLAN_LFRAME, *PWVLAN_LFRAME;
#define DEFAULT_NUM_TX_FRAMES           48
#define TX_Q_LOW_WATER_MARK             (DEFAULT_NUM_TX_FRAMES/3)
#define WVLAN_MAX_TX_QUEUES             1
typedef struct wvlan_wds_if
WVLAN_WDS_IF, *PWVLAN_WDS_IF;
#define NUM_RX_DESC 5
#define NUM_TX_DESC 5
typedef struct dma_strct
DMA_STRCT;
#define WL_DMA_BUS_ADDR_LE(str, i, mem) \
cpu_to_le32(str##_dma_addr[(i)] + ((hcf_8 *)&str[(i)]->mem - (hcf_8 *)str[(i)]))
struct wl_private
;
#define wl_priv(dev) ((struct wl_private *) netdev_priv(dev))
extern inline struct wl_private *wl_priv(struct net_device *dev)
static inline void wl_lock(struct wl_private *lp,
unsigned long *flags)
static inline void wl_unlock(struct wl_private *lp,
unsigned long *flags)
extern inline void wl_act_int_on(struct wl_private *lp)
extern inline void wl_act_int_off(struct wl_private *lp)
