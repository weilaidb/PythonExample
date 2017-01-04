#define RATE_ADAPTIVE_TIMER_PERIOD      300
bool CheckHighPower(struct net_device *dev)
void
DoTxHighPower(
struct net_device *dev
)
void rtl8180_tx_pw_wq (struct work_struct *work)
bool
CheckDig(
struct net_device *dev
)
void
DIG_Zebra(
struct net_device *dev
)
void
DynamicInitGain(struct net_device *dev)
void rtl8180_hw_dig_wq (struct work_struct *work)
int
IncludedInSupportedRates(
struct r8180_priv       *priv,
u8              TxRate  )
u8
GetUpgradeTxRate(
struct net_device *dev,
u8                              rate
)
u8
GetDegradeTxRate(
struct net_device *dev,
u8         rate
)
bool
MgntIsCckRate(
u16     rate
)
void
TxPwrTracking87SE(
struct net_device *dev
)
void
StaRateAdaptive87SE(
struct net_device *dev
)
void rtl8180_rate_adapter(struct work_struct * work)
void timer_rate_adaptive(unsigned long data)
void
SwAntennaDiversityRxOk8185(
struct net_device *dev,
u8 SignalStrength
)
bool
SetAntenna8185(
struct net_device *dev,
u8		u1bAntennaIndex
)
bool
SwitchAntenna(
struct net_device *dev
)
void
SwAntennaDiversity(
struct net_device *dev
)
bool
CheckTxPwrTracking(	struct net_device *dev)
void
SwAntennaDiversityTimerCallback(
struct net_device *dev
)
