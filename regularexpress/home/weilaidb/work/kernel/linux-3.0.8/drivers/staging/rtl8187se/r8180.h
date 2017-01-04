#define R8180H
#define RTL8180_MODULE_NAME "r8180"
#define DMESG(x,a...) printk(KERN_INFO RTL8180_MODULE_NAME ": " x "\n", ## a)
#define DMESGW(x,a...) printk(KERN_WARNING RTL8180_MODULE_NAME ": WW:" x "\n", ## a)
#define DMESGE(x,a...) printk(KERN_WARNING RTL8180_MODULE_NAME ": EE:" x "\n", ## a)
#define EPROM_93c46 0
#define EPROM_93c56 1
#define RTL_IOCTL_WPA_SUPPLICANT		SIOCIWFIRSTPRIV+30
#define DEFAULT_FRAG_THRESHOLD 2342U
#define MIN_FRAG_THRESHOLD     256U
#define DEFAULT_RTS_THRESHOLD 2342U
#define MIN_RTS_THRESHOLD 0U
#define MAX_RTS_THRESHOLD 2342U
#define DEFAULT_BEACONINTERVAL 0x64U
#define DEFAULT_RETRY_RTS 7
#define DEFAULT_RETRY_DATA 7
#define BEACON_QUEUE					6
#define aSifsTime 	10
#define sCrcLng         4
#define sAckCtsLng	112
#define RATE_ADAPTIVE_TIMER_PERIOD	300
typedef enum _WIRELESS_MODE  WIRELESS_MODE;
typedef struct 	ChnlAccessSetting *PCHANNEL_ACCESS_SETTING,CHANNEL_ACCESS_SETTING;
typedef enum nic_t;
typedef u32 AC_CODING;
#define AC0_BE	0
#define AC1_BK	1
#define AC2_VI	2
#define AC3_VO	3
#define AC_MAX	4
typedef	union _ECWECW, *PECW;
typedef	union _ACI_AIFSNACI_AIFSN, *PACI_AIFSN;
typedef	union _AC_PARAMAC_PARAM, *PAC_PARAM;
typedef	union _ThreeWireThreeWireReg;
typedef struct buffer
buffer;
typedef struct Stats
Stats;
#define MAX_LD_SLOT_NUM 10
#define KEEP_ALIVE_INTERVAL 				20
#define CHECK_FOR_HANG_PERIOD			2
#define DEFAULT_KEEP_ALIVE_LEVEL			1
#define DEFAULT_SLOT_NUM					2
#define POWER_PROFILE_AC					0
#define POWER_PROFILE_BATTERY			1
typedef struct _link_detect_t
link_detect_t, *plink_detect_t;
typedef	enum _LED_STRATEGY_8185LED_STRATEGY_8185, *PLED_STRATEGY_8185;
typedef	enum _LED_CTL_MODELED_CTL_MODE;
typedef	enum _RT_RF_POWER_STATE
RT_RF_POWER_STATE;
enum	_ReasonCode;
typedef	enum _RT_PS_MODE
RT_PS_MODE;
typedef struct r8180_priv
r8180_priv;
#define MANAGE_PRIORITY 0
#define BK_PRIORITY 1
#define BE_PRIORITY 2
#define VI_PRIORITY 3
#define VO_PRIORITY 4
#define HI_PRIORITY 5
#define BEACON_PRIORITY 6
#define LOW_PRIORITY VI_PRIORITY
#define NORM_PRIORITY VO_PRIORITY
#define AC2Q(_ac) (((_ac) == WME_AC_VO) ? VO_PRIORITY : \
((_ac) == WME_AC_VI) ? VI_PRIORITY : \
((_ac) == WME_AC_BK) ? BK_PRIORITY : \
BE_PRIORITY)
short rtl8180_tx(struct net_device *dev,u8* skbuf, int len,int priority,
short morefrag,short fragdesc,int rate);
u8 read_nic_byte(struct net_device *dev, int x);
u32 read_nic_dword(struct net_device *dev, int x);
u16 read_nic_word(struct net_device *dev, int x) ;
void write_nic_byte(struct net_device *dev, int x,u8 y);
void write_nic_word(struct net_device *dev, int x,u16 y);
void write_nic_dword(struct net_device *dev, int x,u32 y);
void force_pci_posting(struct net_device *dev);
void rtl8180_rtx_disable(struct net_device *);
void rtl8180_rx_enable(struct net_device *);
void rtl8180_tx_enable(struct net_device *);
void rtl8180_start_scanning(struct net_device *dev);
void rtl8180_start_scanning_s(struct net_device *dev);
void rtl8180_stop_scanning(struct net_device *dev);
void rtl8180_disassociate(struct net_device *dev);
void rtl8180_set_anaparam(struct net_device *dev,u32 a);
void rtl8185_set_anaparam2(struct net_device *dev,u32 a);
void rtl8180_set_hw_wep(struct net_device *dev);
void rtl8180_no_hw_wep(struct net_device *dev);
void rtl8180_update_msr(struct net_device *dev);
void rtl8180_beacon_tx_disable(struct net_device *dev);
void rtl8180_beacon_rx_disable(struct net_device *dev);
void rtl8180_conttx_enable(struct net_device *dev);
void rtl8180_conttx_disable(struct net_device *dev);
int rtl8180_down(struct net_device *dev);
int rtl8180_up(struct net_device *dev);
void rtl8180_commit(struct net_device *dev);
void rtl8180_set_chan(struct net_device *dev,short ch);
void rtl8180_set_master_essid(struct net_device *dev,char *essid);
void rtl8180_update_beacon_security(struct net_device *dev);
void write_phy(struct net_device *dev, u8 adr, u8 data);
void write_phy_cck(struct net_device *dev, u8 adr, u32 data);
void write_phy_ofdm(struct net_device *dev, u8 adr, u32 data);
void rtl8185_tx_antenna(struct net_device *dev, u8 ant);
void rtl8185_rf_pins_enable(struct net_device *dev);
void IBSS_randomize_cell(struct net_device *dev);
void IPSEnter(struct net_device *dev);
void IPSLeave(struct net_device *dev);
int get_curr_tx_free_desc(struct net_device *dev, int priority);
void UpdateInitialGain(struct net_device *dev);
bool SetAntennaConfig87SE(struct net_device *dev, u8  DefaultAnt, bool bAntDiversity);
void rtl8185b_adapter_start(struct net_device *dev);
void rtl8185b_rx_enable(struct net_device *dev);
void rtl8185b_tx_enable(struct net_device *dev);
void rtl8180_reset(struct net_device *dev);
void rtl8185b_irq_enable(struct net_device *dev);
void fix_rx_fifo(struct net_device *dev);
void fix_tx_fifo(struct net_device *dev);
void rtl8225z2_SetTXPowerLevel(struct net_device *dev, short ch);
void rtl8180_rate_adapter(struct work_struct * work);
bool MgntActSet_RF_State(struct net_device *dev, RT_RF_POWER_STATE StateToSet, u32 ChangeSource);
