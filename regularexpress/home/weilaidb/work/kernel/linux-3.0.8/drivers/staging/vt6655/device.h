#define __DEVICE_H__
#define DEVICE_ETHTOOL_IOCTL_SUPPORT
#undef DEVICE_ETHTOOL_IOCTL_SUPPORT
#define WPA_SUPPLICANT_DRIVER_WEXT_SUPPORT
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
#define MAXCHECKHANGCNT         4
#define BB_VGA_LEVEL            4
#define BB_VGA_CHANGE_THRESHOLD 16
#define RUN_AT(x)                       (jiffies+(x))
#define RESERV_AC0DMA                   4
#define	AVAIL_TD(p,q)	((p)->sOpts.nTxDescs[(q)]-((p)->iTDUsed[(q)]))
#define	NUM				64
#define PRIVATE_Message                 0
#define DBG_PRT(l, p, args...)
#define PRINT_K(p, args...)
typedef enum _VIA_BB_TYPE
VIA_BB_TYPE, *PVIA_BB_TYPE;
typedef enum _VIA_PKT_TYPE
VIA_PKT_TYPE, *PVIA_PKT_TYPE;
typedef enum __device_msg_level  DEVICE_MSG_LEVEL, *PDEVICE_MSG_LEVEL;
typedef enum __device_init_type  DEVICE_INIT_TYPE, *PDEVICE_INIT_TYPE;
#define MAX_BSSIDINFO_4_PMKID   16
#define MAX_PMKIDLIST           5
#define NDIS_802_11_PMKID_CANDIDATE_PREAUTH_ENABLED	0x01
typedef unsigned char NDIS_802_11_PMKID_VALUE[16];
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
typedef struct __chip_info_tbl CHIP_INFO, *PCHIP_INFO;
typedef enum  DEVICE_OWNER_TYPE, *PDEVICE_OWNER_TYPE;
typedef struct tagSCacheEntry SCacheEntry, *PSCacheEntry;
typedef struct tagSCache SCache, *PSCache;
#define CB_MAX_RX_FRAG                 64
typedef struct tagSDeFragControlBlock
SDeFragControlBlock, *PSDeFragControlBlock;
#define     DEVICE_FLAGS_IP_ALIGN        0x00000001UL
#define     DEVICE_FLAGS_PREAMBLE_TYPE   0x00000002UL
#define     DEVICE_FLAGS_OP_MODE         0x00000004UL
#define     DEVICE_FLAGS_PS_MODE         0x00000008UL
#define		DEVICE_FLAGS_80211h_MODE	 0x00000010UL
#define		DEVICE_FLAGS_DiversityANT	 0x00000020UL
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
typedef	struct _RxManagementQueue
RxManagementQueue,*PSRxManagementQueue;
typedef struct __device_opt  OPTIONS, *POPTIONS;
typedef struct __device_info  DEVICE_INFO, *PSDevice;
inline  static	void   EnQueue (PSDevice pDevice,PSRxMgmtPacket  pRxMgmtPacket)
inline  static  PSRxMgmtPacket DeQueue (PSDevice pDevice)
void	InitRxManagementQueue(PSDevice   pDevice);
inline static bool device_get_ip(PSDevice pInfo)
static inline PDEVICE_RD_INFO alloc_rd_info(void)
static inline PDEVICE_TD_INFO alloc_td_info(void)
bool device_dma0_xmit(PSDevice pDevice, struct sk_buff *skb, unsigned int uNodeIndex);
bool device_alloc_frag_buf(PSDevice pDevice, PSDeFragControlBlock pDeF);
int Config_FileOperation(PSDevice pDevice, bool fwrite, unsigned char *Parameter);
