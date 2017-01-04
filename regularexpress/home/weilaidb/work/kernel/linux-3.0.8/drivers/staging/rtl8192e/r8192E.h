#define R819xU_H
#define RTL819xE_MODULE_NAME "rtl819xE"
#define FALSE 0
#define TRUE 1
#define MAX_KEY_LEN     61
#define KEY_BUF_SIZE    5
#define BIT0            0x00000001
#define BIT1            0x00000002
#define BIT2            0x00000004
#define BIT3            0x00000008
#define BIT4            0x00000010
#define BIT5            0x00000020
#define BIT6            0x00000040
#define BIT7            0x00000080
#define BIT8            0x00000100
#define BIT9            0x00000200
#define BIT10           0x00000400
#define BIT11           0x00000800
#define BIT12           0x00001000
#define BIT13           0x00002000
#define BIT14           0x00004000
#define BIT15           0x00008000
#define BIT16           0x00010000
#define BIT17           0x00020000
#define BIT18           0x00040000
#define BIT19           0x00080000
#define BIT20           0x00100000
#define BIT21           0x00200000
#define BIT22           0x00400000
#define BIT23           0x00800000
#define BIT24           0x01000000
#define BIT25           0x02000000
#define BIT26           0x04000000
#define BIT27           0x08000000
#define BIT28           0x10000000
#define BIT29           0x20000000
#define BIT30           0x40000000
#define BIT31           0x80000000
#define	Rx_Smooth_Factor		20
#define		PHY_RSSI_SLID_WIN_MAX				100
#define		PHY_Beacon_RSSI_SLID_WIN_MAX		10
#define IC_VersionCut_D	0x3
#define IC_VersionCut_E	0x4
#define QSLT_BK                                 0x1
#define QSLT_BE                                 0x0
#define QSLT_VI                                 0x4
#define QSLT_VO                                 0x6
#define QSLT_BEACON                             0x10
#define QSLT_HIGH                               0x11
#define QSLT_MGNT                               0x12
#define QSLT_CMD                                0x13
#define DESC90_RATE1M                           0x00
#define DESC90_RATE2M                           0x01
#define DESC90_RATE5_5M                         0x02
#define DESC90_RATE11M                          0x03
#define DESC90_RATE6M                           0x04
#define DESC90_RATE9M                           0x05
#define DESC90_RATE12M                          0x06
#define DESC90_RATE18M                          0x07
#define DESC90_RATE24M                          0x08
#define DESC90_RATE36M                          0x09
#define DESC90_RATE48M                          0x0a
#define DESC90_RATE54M                          0x0b
#define DESC90_RATEMCS0                         0x00
#define DESC90_RATEMCS1                         0x01
#define DESC90_RATEMCS2                         0x02
#define DESC90_RATEMCS3                         0x03
#define DESC90_RATEMCS4                         0x04
#define DESC90_RATEMCS5                         0x05
#define DESC90_RATEMCS6                         0x06
#define DESC90_RATEMCS7                         0x07
#define DESC90_RATEMCS8                         0x08
#define DESC90_RATEMCS9                         0x09
#define DESC90_RATEMCS10                        0x0a
#define DESC90_RATEMCS11                        0x0b
#define DESC90_RATEMCS12                        0x0c
#define DESC90_RATEMCS13                        0x0d
#define DESC90_RATEMCS14                        0x0e
#define DESC90_RATEMCS15                        0x0f
#define DESC90_RATEMCS32                        0x20
#define RTL819X_DEFAULT_RF_TYPE RF_1T2R
#define EEPROM_Default_LegacyHTTxPowerDiff	0x4
#define IEEE80211_WATCH_DOG_TIME    2000
typedef u32 RT_RF_CHANGE_SOURCE;
#define RF_CHANGE_BY_SW BIT31
#define RF_CHANGE_BY_HW BIT30
#define RF_CHANGE_BY_PS BIT29
#define RF_CHANGE_BY_IPS BIT28
#define RF_CHANGE_BY_INIT	0
typedef	enum _RT_RF_POWER_STATE  RT_RF_POWER_STATE;
typedef enum _RT_JOIN_ACTION  RT_JOIN_ACTION;
typedef enum _IPS_CALLBACK_FUNCION  IPS_CALLBACK_FUNCION;
typedef struct _RT_POWER_SAVE_CONTROL  RT_POWER_SAVE_CONTROL, *PRT_POWER_SAVE_CONTROL;
typedef struct _tx_desc_819x_pci tx_desc_819x_pci, *ptx_desc_819x_pci;
typedef struct _tx_desc_cmd_819x_pci tx_desc_cmd_819x_pci, *ptx_desc_cmd_819x_pci;
typedef struct _tx_fwinfo_819x_pci tx_fwinfo_819x_pci, *ptx_fwinfo_819x_pci;
typedef struct _rx_desc_819x_pcirx_desc_819x_pci, *prx_desc_819x_pci;
typedef struct _rx_fwinfo_819x_pcirx_fwinfo_819x_pci, *prx_fwinfo_819x_pci;
#define MAX_DEV_ADDR_SIZE		8
#define MAX_FIRMWARE_INFORMATION_SIZE   32
#define MAX_802_11_HEADER_LENGTH        (40 + MAX_FIRMWARE_INFORMATION_SIZE)
#define ENCRYPTION_MAX_OVERHEAD		128
#define MAX_FRAGMENT_COUNT		8
#define MAX_TRANSMIT_BUFFER_SIZE  	(1600+(MAX_802_11_HEADER_LENGTH+ENCRYPTION_MAX_OVERHEAD)*MAX_FRAGMENT_COUNT)
#define scrclng					4
typedef enum _rtl819x_loopbackrtl819x_loopback_e;
typedef enum _desc_packet_type_edesc_packet_type_e;
typedef enum _firmware_statusfirmware_status_e;
typedef struct _rt_firmwarert_firmware, *prt_firmware;
#define MAX_RECEIVE_BUFFER_SIZE	9100
#define NUM_OF_FIRMWARE_QUEUE		10
#define NUM_OF_PAGES_IN_FW		0x100
#define NUM_OF_PAGE_IN_FW_QUEUE_BE	0x0aa
#define NUM_OF_PAGE_IN_FW_QUEUE_BK	0x007
#define NUM_OF_PAGE_IN_FW_QUEUE_VI	0x024
#define NUM_OF_PAGE_IN_FW_QUEUE_VO	0x007
#define NUM_OF_PAGE_IN_FW_QUEUE_HCCA	0
#define NUM_OF_PAGE_IN_FW_QUEUE_CMD	0x2
#define NUM_OF_PAGE_IN_FW_QUEUE_MGNT	0x10
#define NUM_OF_PAGE_IN_FW_QUEUE_HIGH	0
#define NUM_OF_PAGE_IN_FW_QUEUE_BCN	0x4
#define NUM_OF_PAGE_IN_FW_QUEUE_PUB	0xd
#define APPLIED_RESERVED_QUEUE_IN_FW	0x80000000
#define RSVD_FW_QUEUE_PAGE_BK_SHIFT	0x00
#define RSVD_FW_QUEUE_PAGE_BE_SHIFT	0x08
#define RSVD_FW_QUEUE_PAGE_VI_SHIFT	0x10
#define RSVD_FW_QUEUE_PAGE_VO_SHIFT	0x18
#define RSVD_FW_QUEUE_PAGE_MGNT_SHIFT	0x10
#define RSVD_FW_QUEUE_PAGE_CMD_SHIFT	0x08
#define RSVD_FW_QUEUE_PAGE_BCN_SHIFT	0x00
#define RSVD_FW_QUEUE_PAGE_PUB_SHIFT	0x08
#define DCAM                    0xAC
#define AESMSK_FC               0xB2
#define CAM_CONTENT_COUNT       8
#define CFG_VALID               BIT15
#define EPROM_93c46 0
#define EPROM_93c56 1
#define DEFAULT_FRAG_THRESHOLD 2342U
#define MIN_FRAG_THRESHOLD     256U
#define DEFAULT_BEACONINTERVAL 0x64U
#define DEFAULT_RETRY_RTS 7
#define DEFAULT_RETRY_DATA 7
#define		PHY_RSSI_SLID_WIN_MAX				100
typedef enum _WIRELESS_MODE  WIRELESS_MODE;
#define RTL_IOCTL_WPA_SUPPLICANT		SIOCIWFIRSTPRIV+30
typedef struct buffer
buffer;
typedef struct _rt_9x_tx_rate_history rt_tx_rahis_t, *prt_tx_rahis_t;
typedef	struct _RT_SMOOTH_DATA_4RF RT_SMOOTH_DATA_4RF, *PRT_SMOOTH_DATA_4RF;
typedef enum _tag_TxCmd_Config_IndexDCMD_TXCMD_OP;
typedef struct Stats
Stats;
#define HAL_PRIME_CHNL_OFFSET_DONT_CARE		0
#define HAL_PRIME_CHNL_OFFSET_LOWER			1
#define HAL_PRIME_CHNL_OFFSET_UPPER			2
typedef struct 	ChnlAccessSetting *PCHANNEL_ACCESS_SETTING,CHANNEL_ACCESS_SETTING;
typedef struct _BB_REGISTER_DEFINITIONBB_REGISTER_DEFINITION_T, *PBB_REGISTER_DEFINITION_T;
typedef struct _rate_adaptive
rate_adaptive, *prate_adaptive;
#define TxBBGainTableLength 37
#define	CCKTxBBGainTableLength 23
typedef struct _txbbgain_struct
txbbgain_struct, *ptxbbgain_struct;
typedef struct _ccktxbbgain_struct
ccktxbbgain_struct,*pccktxbbgain_struct;
typedef struct _init_gain
init_gain, *pinit_gain;
typedef enum tag_Rf_Operatetion_State
RF_STEP_E;
typedef enum _RT_STATUSRT_STATUS,*PRT_STATUS;
typedef enum _RT_CUSTOMER_ID
RT_CUSTOMER_ID, *PRT_CUSTOMER_ID;
typedef	enum _LED_STRATEGY_8190LED_STRATEGY_8190, *PLED_STRATEGY_8190;
#define CHANNEL_PLAN_LEN				10
#define sCrcLng 		4
typedef struct _TX_FWINFO_STRUCUTRETX_FWINFO_T;
typedef struct _TX_FWINFO_8190PCITX_FWINFO_8190PCI, *PTX_FWINFO_8190PCI;
typedef struct _phy_ofdm_rx_status_report_819xpci
phy_sts_ofdm_819xpci_t;
typedef struct _phy_cck_rx_status_report_819xpci
phy_sts_cck_819xpci_t;
typedef struct _phy_ofdm_rx_status_rxsc_sgien_exintfflagphy_ofdm_rx_status_rxsc_sgien_exintfflag;
typedef enum _RT_OP_MODERT_OP_MODE, *PRT_OP_MODE;
typedef enum tag_Rf_OpType
RF_OpType_E;
typedef enum _RESET_TYPE  RESET_TYPE;
typedef struct _tx_ring__attribute__ ((packed)) tx_ring, * ptx_ring;
struct rtl8192_tx_ring ;
#define NIC_SEND_HANG_THRESHOLD_NORMAL		4
#define NIC_SEND_HANG_THRESHOLD_POWERSAVE 	8
#define MAX_TX_QUEUE				9
#define MAX_RX_COUNT                            64
#define MAX_TX_QUEUE_COUNT                      9
typedef struct r8192_priv
r8192_priv;
bool init_firmware(struct r8192_priv *priv);
u32 read_cam(struct r8192_priv *priv, u8 addr);
void write_cam(struct r8192_priv *priv, u8 addr, u32 data);
u8 read_nic_byte(struct r8192_priv *priv, int x);
u32 read_nic_dword(struct r8192_priv *priv, int x);
u16 read_nic_word(struct r8192_priv *priv, int x) ;
void write_nic_byte(struct r8192_priv *priv, int x,u8 y);
void write_nic_word(struct r8192_priv *priv, int x,u16 y);
void write_nic_dword(struct r8192_priv *priv, int x,u32 y);
int rtl8192_down(struct net_device *dev);
int rtl8192_up(struct net_device *dev);
void rtl8192_commit(struct r8192_priv *priv);
void write_phy(struct net_device *dev, u8 adr, u8 data);
void CamResetAllEntry(struct r8192_priv *priv);
void EnableHWSecurityConfig8192(struct r8192_priv *priv);
void setKey(struct r8192_priv *priv, u8 EntryNo, u8 KeyIndex, u16 KeyType,
const u8 *MacAddr, u8 DefaultKey, u32 *KeyContent);
void firmware_init_param(struct r8192_priv *priv);
RT_STATUS cmpk_message_handle_tx(struct r8192_priv *priv, u8 *codevirtualaddress, u32 packettype, u32 buffer_len);
void IPSEnter(struct r8192_priv *priv);
void IPSLeave(struct r8192_priv *priv);
void IPSLeave_wq(struct work_struct *work);
void ieee80211_ips_leave_wq(struct ieee80211_device *ieee80211);
void ieee80211_ips_leave(struct ieee80211_device *ieee80211);
void LeisurePSEnter(struct ieee80211_device *ieee80211);
void LeisurePSLeave(struct ieee80211_device *ieee80211);
bool NicIFEnableNIC(struct r8192_priv *priv);
bool NicIFDisableNIC(struct r8192_priv *priv);
void PHY_SetRtl8192eRfOff(struct r8192_priv *priv);
