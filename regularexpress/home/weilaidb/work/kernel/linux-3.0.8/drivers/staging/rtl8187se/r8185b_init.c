#define TC_3W_POLL_MAX_TRY_CNT 5
static u8 MAC_REG_TABLE[][2] =	;
static u8  ZEBRA_AGC[]	=	;
static u32 ZEBRA_RF_RX_GAIN_TABLE[]	=	;
static u8 OFDM_CONFIG[]	=	;
void
PlatformIOWrite1Byte(
struct net_device *dev,
u32		offset,
u8		data
)
void
PlatformIOWrite2Byte(
struct net_device *dev,
u32		offset,
u16		data
)
u8 PlatformIORead1Byte(struct net_device *dev, u32 offset);
void
PlatformIOWrite4Byte(
struct net_device *dev,
u32		offset,
u32		data
)
u8
PlatformIORead1Byte(
struct net_device *dev,
u32		offset
)
u16
PlatformIORead2Byte(
struct net_device *dev,
u32		offset
)
u32
PlatformIORead4Byte(
struct net_device *dev,
u32		offset
)
void SetOutputEnableOfRfPins(struct net_device *dev)
static int
HwHSSIThreeWire(
struct net_device *dev,
u8			*pDataBuf,
u8			nDataBufBitCnt,
int			bSI,
int			bWrite
)
void
RF_WriteReg(struct net_device *dev, u8 offset, u32 data)
u32 RF_ReadReg(struct net_device *dev, u8 offset)
void
WriteBBPortUchar(
struct net_device *dev,
u32		Data
)
u8
ReadBBPortUchar(
struct net_device *dev,
u32		addr
)
bool
SetAntennaConfig87SE(
struct net_device *dev,
u8			DefaultAnt,
bool		bAntDiversity
)
void
ZEBRA_Config_85BASIC_HardCode(
struct net_device *dev
)
void
UpdateInitialGain(
struct net_device *dev
)
void
InitTxPwrTracking87SE(
struct net_device *dev
)
void
PhyConfig8185(
struct net_device *dev
)
void
HwConfigureRTL8185(
struct net_device *dev
)
static void
MacConfig_85BASIC_HardCode(
struct net_device *dev)
static void
MacConfig_85BASIC(
struct net_device *dev)
u8
GetSupportedWirelessMode8185(
struct net_device *dev
)
void
ActUpdateChannelAccessSetting(
struct net_device *dev,
WIRELESS_MODE			WirelessMode,
PCHANNEL_ACCESS_SETTING	ChnlAccessSetting
)
void
ActSetWirelessMode8185(
struct net_device *dev,
u8				btWirelessMode
)
void rtl8185b_irq_enable(struct net_device *dev)
void
DrvIFIndicateDisassociation(
struct net_device *dev,
u16			reason
)
void
MgntDisconnectIBSS(
struct net_device *dev
)
void
MlmeDisassociateRequest(
struct net_device *dev,
u8 *asSta,
u8	asRsn
)
void
MgntDisconnectAP(
struct net_device *dev,
u8			asRsn
)
bool
MgntDisconnect(
struct net_device *dev,
u8			asRsn
)
bool
SetRFPowerState(
struct net_device *dev,
RT_RF_POWER_STATE	eRFPowerState
)
void
HalEnableRx8185Dummy(
struct net_device *dev
)
void
HalDisableRx8185Dummy(
struct net_device *dev
)
bool
MgntActSet_RF_State(
struct net_device *dev,
RT_RF_POWER_STATE	StateToSet,
u32	ChangeSource
)
void
InactivePowerSave(
struct net_device *dev
)
void
IPSEnter(
struct net_device *dev
)
void
IPSLeave(
struct net_device *dev
)
void rtl8185b_adapter_start(struct net_device *dev)
void rtl8185b_rx_enable(struct net_device *dev)
void rtl8185b_tx_enable(struct net_device *dev)
