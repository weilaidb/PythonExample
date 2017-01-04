static void write_rtl8225(struct net_device *dev, u8 adr, u16 data)
static const u16 rtl8225bcd_rxgain[] = ;
static const u8 rtl8225_agc[] = ;
static const u8 rtl8225_gain[] = ;
static const u8 rtl8225_tx_gain_cck_ofdm[] = ;
static const u8 rtl8225_tx_power_cck[] = ;
static const u8 rtl8225_tx_power_cck_ch14[] = ;
static const u8 rtl8225_tx_power_ofdm[] = ;
static const u32 rtl8225_chan[] = ;
static void rtl8225_SetTXPowerLevel(struct net_device *dev, short ch)
static const u8 rtl8225z2_threshold[] = ;
static const u8 rtl8225z2_gain_bg[] = ;
static const u8 rtl8225z2_gain_a[] = ;
static const u16 rtl8225z2_rxgain[] = ;
static const u8 ZEBRA2_CCK_OFDM_GAIN_SETTING[] = ;
static const u8 rtl8225z2_tx_power_ofdm[] = ;
static const u8 rtl8225z2_tx_power_cck_ch14[] = ;
static const u8 rtl8225z2_tx_power_cck[] = ;
void rtl8225z2_set_gain(struct net_device *dev, short gain)
static u32 read_rtl8225(struct net_device *dev, u8 adr)
short rtl8225_is_V_z2(struct net_device *dev)
void rtl8225z2_rf_close(struct net_device *dev)
s8 DbmToTxPwrIdx(struct r8180_priv *priv, WIRELESS_MODE WirelessMode,
s32 PowerInDbm)
void rtl8225z2_SetTXPowerLevel(struct net_device *dev, short ch)
void rtl8225z2_rf_set_chan(struct net_device *dev, short ch)
static void rtl8225_host_pci_init(struct net_device *dev)
static void rtl8225_rf_set_chan(struct net_device *dev, short ch)
void rtl8225z2_rf_init(struct net_device *dev)
void rtl8225z2_rf_set_mode(struct net_device *dev)
#define MAX_DOZE_WAITING_TIMES_85B		20
#define MAX_POLLING_24F_TIMES_87SE		10
#define LPS_MAX_SLEEP_WAITING_TIMES_87SE	5
bool SetZebraRFPowerState8185(struct net_device *dev,
RT_RF_POWER_STATE eRFPowerState)
void rtl8225z4_rf_sleep(struct net_device *dev)
void rtl8225z4_rf_wakeup(struct net_device *dev)
