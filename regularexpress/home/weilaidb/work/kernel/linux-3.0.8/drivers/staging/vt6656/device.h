#define __DEVICE_H__
#define DEVICE_ETHTOOL_IOCTL_SUPPORT
#undef DEVICE_ETHTOOL_IOCTL_SUPPORT
#define WPA_SUPPLICANT_DRIVER_WEXT_SUPPORT
#define RT_INSMOD_EVENT_FLAG                             0x0101
#define RT_UPDEV_EVENT_FLAG                               0x0102
#define RT_DISCONNECTED_EVENT_FLAG               0x0103
#define RT_WPACONNECTED_EVENT_FLAG             0x0104
#define RT_DOWNDEV_EVENT_FLAG                        0x0105
#define RT_RMMOD_EVENT_FLAG                              0x0106
#define VNT_USB_VENDOR_ID                     0x160a
#define VNT_USB_PRODUCT_ID                    0x3184
#define MAC_MAX_CONTEXT_REG     (256+128)
#define MAX_MULTICAST_ADDRESS_NUM       32
#define MULTICAST_ADDRESS_LIST_SIZE     (MAX_MULTICAST_ADDRESS_NUM * ETH_ALEN)
#define DUPLICATE_RX_CACHE_LENGTH       5
#define NUM_KEY_ENTRY                   11
#define TX_WEP_NONE                     0
#define TX_WEP_OTF                      1
#define TX_WEP_SW                       2
#define TX_WEP_SWOTP                    3
#define TX_WEP_OTPSW                    4
#define TX_WEP_SW232                    5
#define KEYSEL_WEP40                    0
#define KEYSEL_WEP104                   1
#define KEYSEL_TKIP                     2
#define KEYSEL_CCMP                     3
#define AUTO_FB_NONE            0
#define AUTO_FB_0               1
#define AUTO_FB_1               2
#define FB_RATE0                0
#define FB_RATE1                1
#define ANT_A                   0
#define ANT_B                   1
#define ANT_DIVERSITY           2
#define ANT_RXD_TXA             3
#define ANT_RXD_TXB             4
#define ANT_UNKNOWN             0xFF
#define ANT_TXA                 0
#define ANT_TXB                 1
#define ANT_RXA                 2
#define ANT_RXB                 3
#define MAXCHECKHANGCNT         4
#define TX_PKT_UNI              0x00
#define TX_PKT_MULTI            0x01
#define TX_PKT_BROAD            0x02
#define BB_VGA_LEVEL            4
#define BB_VGA_CHANGE_THRESHOLD 3
#define RUN_AT(x)                       (jiffies+(x))
#define RESERV_AC0DMA                   4
#define PRIVATE_Message                 0
#define DBG_PRT(l, p, args...)
#define PRINT_K(p, args...)
typedef enum __device_msg_level  DEVICE_MSG_LEVEL, *PDEVICE_MSG_LEVEL;
typedef enum __device_init_type  DEVICE_INIT_TYPE, *PDEVICE_INIT_TYPE;
typedef enum _CONTEXT_TYPE  CONTEXT_TYPE;
typedef struct _RCB
RCB, *PRCB;
typedef struct _USB_SEND_CONTEXT  USB_SEND_CONTEXT, *PUSB_SEND_CONTEXT;
typedef struct _DEFAULT_CONFIG  DEFAULT_CONFIG, *PDEFAULT_CONFIG;
typedef struct  INT_BUFFER, *PINT_BUFFER;
typedef enum _VIA_BB_TYPE
VIA_BB_TYPE, *PVIA_BB_TYPE;
typedef enum _VIA_PKT_TYPE
VIA_PKT_TYPE, *PVIA_PKT_TYPE;
typedef enum __DEVICE_NDIS_STATUS  DEVICE_NDIS_STATUS, *PDEVICE_NDIS_STATUS;
#define MAX_BSSIDINFO_4_PMKID   16
#define MAX_PMKIDLIST           5
#define NDIS_802_11_PMKID_CANDIDATE_PREAUTH_ENABLED	0x01
typedef unsigned char   NDIS_802_11_PMKID_VALUE[16];
typedef enum _NDIS_802_11_WEP_STATUS
NDIS_802_11_WEP_STATUS, *PNDIS_802_11_WEP_STATUS,
NDIS_802_11_ENCRYPTION_STATUS, *PNDIS_802_11_ENCRYPTION_STATUS;
typedef enum _NDIS_802_11_STATUS_TYPE
NDIS_802_11_STATUS_TYPE, *PNDIS_802_11_STATUS_TYPE;
typedef struct _PMKID_CANDIDATE  PMKID_CANDIDATE, *PPMKID_CANDIDATE;
typedef struct _BSSID_INFO
BSSID_INFO, *PBSSID_INFO;
typedef struct tagSPMKID  SPMKID, *PSPMKID;
typedef struct tagSPMKIDCandidateEvent  SPMKIDCandidateEvent, *PSPMKIDCandidateEvent;
#define MAX_QUIET_COUNT     8
typedef struct tagSQuietControl  SQuietControl, *PSQuietControl;
typedef struct tagSCacheEntry SCacheEntry, *PSCacheEntry;
typedef struct tagSCache SCache, *PSCache;
#define CB_MAX_RX_FRAG                 64
typedef struct tagSDeFragControlBlock
SDeFragControlBlock, *PSDeFragControlBlock;
#define     DEVICE_FLAGS_UNPLUG          0x00000001UL
#define     DEVICE_FLAGS_PREAMBLE_TYPE   0x00000002UL
#define     DEVICE_FLAGS_OP_MODE         0x00000004UL
#define     DEVICE_FLAGS_PS_MODE         0x00000008UL
#define		DEVICE_FLAGS_80211h_MODE	 0x00000010UL
#define     DEVICE_FLAGS_OPENED          0x00010000UL
#define     DEVICE_FLAGS_WOL_ENABLED     0x00080000UL
#define     DEVICE_FLAGS_TX_ALIGN        0x01000000UL
#define     DEVICE_FLAGS_HAVE_CAM        0x02000000UL
#define     DEVICE_FLAGS_FLOW_CTRL       0x04000000UL
#define     DEVICE_LINK_FAIL             0x00000001UL
#define     DEVICE_SPEED_10              0x00000002UL
#define     DEVICE_SPEED_100             0x00000004UL
#define     DEVICE_SPEED_1000            0x00000008UL
#define     DEVICE_DUPLEX_FULL           0x00000010UL
#define     DEVICE_AUTONEG_ENABLE        0x00000020UL
#define     DEVICE_FORCED_BY_EEPROM      0x00000040UL
#define     DEVICE_LINK_CHANGE           0x00000001UL
typedef struct __device_opt  OPTIONS, *POPTIONS;
typedef struct __device_info  DEVICE_INFO, *PSDevice;
#define EnqueueRCB(_Head, _Tail, _RCB)                  \
#define DequeueRCB(Head, Tail)                          \
#define ADD_ONE_WITH_WRAP_AROUND(uVar, uModulo)
#define fMP_RESET_IN_PROGRESS               0x00000001
#define fMP_DISCONNECTED                    0x00000002
#define fMP_HALT_IN_PROGRESS                0x00000004
#define fMP_SURPRISE_REMOVED                0x00000008
#define fMP_RECV_LOOKASIDE                  0x00000010
#define fMP_INIT_IN_PROGRESS                0x00000020
#define fMP_SEND_SIDE_RESOURCE_ALLOCATED    0x00000040
#define fMP_RECV_SIDE_RESOURCE_ALLOCATED    0x00000080
#define fMP_POST_READS                      0x00000100
#define fMP_POST_WRITES                     0x00000200
#define fMP_CONTROL_READS                   0x00000400
#define fMP_CONTROL_WRITES                  0x00000800
#define MP_SET_FLAG(_M, _F)             ((_M)->Flags |= (_F))
#define MP_CLEAR_FLAG(_M, _F)            ((_M)->Flags &= ~(_F))
#define MP_TEST_FLAGS(_M, _F)            (((_M)->Flags & (_F)) == (_F))
#define MP_IS_READY(_M)        (((_M)->Flags & \
(fMP_DISCONNECTED | fMP_RESET_IN_PROGRESS | fMP_HALT_IN_PROGRESS | fMP_INIT_IN_PROGRESS | fMP_SURPRISE_REMOVED)) == 0)
BOOL device_alloc_frag_buf(PSDevice pDevice, PSDeFragControlBlock pDeF);
