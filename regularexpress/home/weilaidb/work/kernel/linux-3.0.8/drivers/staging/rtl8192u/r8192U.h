#define R819xU_H
#define RTL8192U
#define RTL819xU_MODULE_NAME "rtl819xU"
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
#define DMESG(x,a...)
#define DMESGW(x,a...)
#define DMESGE(x,a...)
extern u32 rt_global_debug_component;
#define RT_TRACE(component, x, args...) \
do while(0);
#define COMP_TRACE				BIT0
#define COMP_DBG				BIT1
#define COMP_INIT				BIT2
#define COMP_RECV				BIT3
#define COMP_SEND				BIT4
#define COMP_IO					BIT5
#define COMP_POWER				BIT6
#define COMP_EPROM				BIT7
#define COMP_SWBW				BIT8
#define COMP_POWER_TRACKING			BIT9
#define COMP_TURBO				BIT10
#define COMP_QOS				BIT11
#define COMP_RATE				BIT12
#define COMP_RM					BIT13
#define COMP_DIG				BIT14
#define COMP_PHY	 			BIT15
#define COMP_CH					BIT16
#define COMP_TXAGC				BIT17
#define COMP_HIPWR				BIT18
#define COMP_HALDM				BIT19
#define COMP_SEC			        BIT20
#define COMP_LED				BIT21
#define COMP_RF					BIT22
#define COMP_RXDESC				BIT23
#define COMP_FIRMWARE				BIT24
#define COMP_HT					BIT25
#define COMP_AMSDU				BIT26
#define COMP_SCAN				BIT27
#define COMP_DOWN				BIT29
#define COMP_RESET				BIT30
#define COMP_ERR				BIT31
#define RTL819x_DEBUG
#define assert(expr) \
if (!(expr))
#define RT_DEBUG_DATA(level, data, datalen)      \
do while (0)
#define assert(expr) do  while (0)
#define RT_DEBUG_DATA(level, data, datalen) do  while(0)
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
#define IEEE80211_WATCH_DOG_TIME    2000
#define		PHY_Beacon_RSSI_SLID_WIN_MAX		10
#define 	OFDM_Table_Length	19
#define	CCK_Table_length	12
typedef struct _tx_desc_819x_usb tx_desc_819x_usb, *ptx_desc_819x_usb;
typedef struct _tx_desc_819x_usb_aggr_subframe tx_desc_819x_usb_aggr_subframe, *ptx_desc_819x_usb_aggr_subframe;
typedef struct _tx_desc_cmd_819x_usb tx_desc_cmd_819x_usb, *ptx_desc_cmd_819x_usb;
typedef struct _tx_fwinfo_819x_usb tx_fwinfo_819x_usb, *ptx_fwinfo_819x_usb;
typedef struct rtl8192_rx_info rtl8192_rx_info ;
typedef struct rx_desc_819x_usbrx_desc_819x_usb, *prx_desc_819x_usb;
typedef struct _rx_desc_819x_usb_aggr_subframerx_desc_819x_usb_aggr_subframe, *prx_desc_819x_usb_aggr_subframe;
typedef struct rx_drvinfo_819x_usbrx_drvinfo_819x_usb, *prx_drvinfo_819x_usb;
#define MAX_DEV_ADDR_SIZE		8
#define MAX_FIRMWARE_INFORMATION_SIZE   32
#define MAX_802_11_HEADER_LENGTH        (40 + MAX_FIRMWARE_INFORMATION_SIZE)
#define ENCRYPTION_MAX_OVERHEAD		128
#define	USB_HWDESC_HEADER_LEN		sizeof(tx_desc_819x_usb)
#define TX_PACKET_SHIFT_BYTES 	  	(USB_HWDESC_HEADER_LEN + sizeof(tx_fwinfo_819x_usb))
#define MAX_FRAGMENT_COUNT		8
#define MAX_TRANSMIT_BUFFER_SIZE			32000
#define MAX_TRANSMIT_BUFFER_SIZE			8000
#define MAX_TRANSMIT_BUFFER_SIZE  	(1600+(MAX_802_11_HEADER_LENGTH+ENCRYPTION_MAX_OVERHEAD)*MAX_FRAGMENT_COUNT)
#define TX_PACKET_DRVAGGR_SUBFRAME_SHIFT_BYTES (sizeof(tx_desc_819x_usb_aggr_subframe) + sizeof(tx_fwinfo_819x_usb))
#define scrclng					4
typedef enum rf_optype
rf_op_type;
typedef enum _rtl819xUsb_loopbackrtl819xUsb_loopback_e;
typedef enum _desc_packet_type_edesc_packet_type_e;
typedef enum _firmware_statusfirmware_status_e;
typedef struct _rt_firmare_seg_container fw_seg_container, *pfw_seg_container;
typedef struct _rt_firmwarert_firmware, *prt_firmware;
#define MAX_RECEIVE_BUFFER_SIZE	9100
typedef struct _rt_firmware_info_819xUsbrt_firmware_info_819xUsb, *prt_firmware_info_819xUsb;
#define NUM_OF_FIRMWARE_QUEUE		10
#define NUM_OF_PAGES_IN_FW		0x100
#define NUM_OF_PAGE_IN_FW_QUEUE_BE	0x000
#define NUM_OF_PAGE_IN_FW_QUEUE_BK	0x000
#define NUM_OF_PAGE_IN_FW_QUEUE_VI	0x0ff
#define NUM_OF_PAGE_IN_FW_QUEUE_VO	0x000
#define NUM_OF_PAGE_IN_FW_QUEUE_HCCA	0
#define NUM_OF_PAGE_IN_FW_QUEUE_CMD	0x0
#define NUM_OF_PAGE_IN_FW_QUEUE_MGNT	0x00
#define NUM_OF_PAGE_IN_FW_QUEUE_HIGH	0
#define NUM_OF_PAGE_IN_FW_QUEUE_BCN	0x0
#define NUM_OF_PAGE_IN_FW_QUEUE_PUB	0x00
#define NUM_OF_PAGE_IN_FW_QUEUE_BE	0x020
#define NUM_OF_PAGE_IN_FW_QUEUE_BK	0x020
#define NUM_OF_PAGE_IN_FW_QUEUE_VI	0x040
#define NUM_OF_PAGE_IN_FW_QUEUE_VO	0x040
#define NUM_OF_PAGE_IN_FW_QUEUE_HCCA	0
#define NUM_OF_PAGE_IN_FW_QUEUE_CMD	0x4
#define NUM_OF_PAGE_IN_FW_QUEUE_MGNT	0x20
#define NUM_OF_PAGE_IN_FW_QUEUE_HIGH	0
#define NUM_OF_PAGE_IN_FW_QUEUE_BCN	0x4
#define NUM_OF_PAGE_IN_FW_QUEUE_PUB	0x18
#define APPLIED_RESERVED_QUEUE_IN_FW	0x80000000
#define RSVD_FW_QUEUE_PAGE_BK_SHIFT	0x00
#define RSVD_FW_QUEUE_PAGE_BE_SHIFT	0x08
#define RSVD_FW_QUEUE_PAGE_VI_SHIFT	0x10
#define RSVD_FW_QUEUE_PAGE_VO_SHIFT	0x18
#define RSVD_FW_QUEUE_PAGE_MGNT_SHIFT	0x10
#define RSVD_FW_QUEUE_PAGE_CMD_SHIFT	0x08
#define RSVD_FW_QUEUE_PAGE_BCN_SHIFT	0x00
#define RSVD_FW_QUEUE_PAGE_PUB_SHIFT	0x08
#define EPROM_93c46 0
#define EPROM_93c56 1
#define DEFAULT_FRAG_THRESHOLD 2342U
#define MIN_FRAG_THRESHOLD     256U
#define DEFAULT_BEACONINTERVAL 0x64U
#define DEFAULT_BEACON_ESSID "Rtl819xU"
#define DEFAULT_SSID ""
#define DEFAULT_RETRY_RTS 7
#define DEFAULT_RETRY_DATA 7
#define PRISM_HDR_SIZE 64
#define		PHY_RSSI_SLID_WIN_MAX				100
typedef enum _WIRELESS_MODE  WIRELESS_MODE;
#define RTL_IOCTL_WPA_SUPPLICANT		SIOCIWFIRSTPRIV+30
typedef struct buffer
buffer;
typedef struct rtl_reg_debugrtl_reg_debug;
typedef struct _rt_9x_tx_rate_history rt_tx_rahis_t, *prt_tx_rahis_t;
typedef struct _RT_SMOOTH_DATA_4RF RT_SMOOTH_DATA_4RF, *PRT_SMOOTH_DATA_4RF;
#define MAX_8192U_RX_SIZE			8192
typedef struct Stats
Stats;
#define HAL_PRIME_CHNL_OFFSET_DONT_CARE		0
#define HAL_PRIME_CHNL_OFFSET_LOWER			1
#define HAL_PRIME_CHNL_OFFSET_UPPER			2
typedef struct 	ChnlAccessSetting *PCHANNEL_ACCESS_SETTING,CHANNEL_ACCESS_SETTING;
typedef struct _BB_REGISTER_DEFINITIONBB_REGISTER_DEFINITION_T, *PBB_REGISTER_DEFINITION_T;
typedef enum _RT_RF_TYPE_819xURT_RF_TYPE_819xU, *PRT_RF_TYPE_819xU;
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
typedef struct _phy_ofdm_rx_status_report_819xusb
phy_sts_ofdm_819xusb_t;
typedef struct _phy_cck_rx_status_report_819xusb
phy_sts_cck_819xusb_t;
typedef struct _phy_ofdm_rx_status_rxsc_sgien_exintfflagphy_ofdm_rx_status_rxsc_sgien_exintfflag;
typedef enum _RT_CUSTOMER_ID
RT_CUSTOMER_ID, *PRT_CUSTOMER_ID;
typedef	enum _LED_STRATEGY_8190LED_STRATEGY_8190, *PLED_STRATEGY_8190;
typedef enum _RESET_TYPE  RESET_TYPE;
typedef enum _tag_TxCmd_Config_IndexDCMD_TXCMD_OP;
typedef struct r8192_priv
r8192_priv;
typedef enum priority_t;
typedef enum nic_t;
struct ssid_thread ;
bool init_firmware(struct net_device *dev);
short rtl819xU_tx_cmd(struct net_device *dev, struct sk_buff *skb);
short rtl8192_tx(struct net_device *dev, struct sk_buff* skb);
u32 read_cam(struct net_device *dev, u8 addr);
void write_cam(struct net_device *dev, u8 addr, u32 data);
u8 read_nic_byte(struct net_device *dev, int x);
u8 read_nic_byte_E(struct net_device *dev, int x);
u32 read_nic_dword(struct net_device *dev, int x);
u16 read_nic_word(struct net_device *dev, int x) ;
void write_nic_byte(struct net_device *dev, int x,u8 y);
void write_nic_byte_E(struct net_device *dev, int x,u8 y);
void write_nic_word(struct net_device *dev, int x,u16 y);
void write_nic_dword(struct net_device *dev, int x,u32 y);
void force_pci_posting(struct net_device *dev);
void rtl8192_rtx_disable(struct net_device *);
void rtl8192_rx_enable(struct net_device *);
void rtl8192_tx_enable(struct net_device *);
void rtl8192_disassociate(struct net_device *dev);
void rtl8185_set_rf_pins_enable(struct net_device *dev,u32 a);
void rtl8192_set_anaparam(struct net_device *dev,u32 a);
void rtl8185_set_anaparam2(struct net_device *dev,u32 a);
void rtl8192_update_msr(struct net_device *dev);
int rtl8192_down(struct net_device *dev);
int rtl8192_up(struct net_device *dev);
void rtl8192_commit(struct net_device *dev);
void rtl8192_set_chan(struct net_device *dev,short ch);
void write_phy(struct net_device *dev, u8 adr, u8 data);
void write_phy_cck(struct net_device *dev, u8 adr, u32 data);
void write_phy_ofdm(struct net_device *dev, u8 adr, u32 data);
void rtl8185_tx_antenna(struct net_device *dev, u8 ant);
void rtl8192_set_rxconf(struct net_device *dev);
extern void rtl819xusb_beacon_tx(struct net_device *dev,u16  tx_rate);
void EnableHWSecurityConfig8192(struct net_device *dev);
void setKey(struct net_device *dev, u8 EntryNo, u8 KeyIndex, u16 KeyType, u8 *MacAddr, u8 DefaultKey, u32 *KeyContent );
