static u32 RF_CHANNEL_TABLE_ZEBRA[] = ;
#define rtl819XPHY_REG_1T2RArray Rtl8192UsbPHY_REG_1T2RArray
#define rtl819XMACPHY_Array_PG Rtl8192UsbMACPHY_Array_PG
#define rtl819XMACPHY_Array Rtl8192UsbMACPHY_Array
#define rtl819XRadioA_Array  Rtl8192UsbRadioA_Array
#define rtl819XRadioB_Array Rtl8192UsbRadioB_Array
#define rtl819XRadioC_Array Rtl8192UsbRadioC_Array
#define rtl819XRadioD_Array Rtl8192UsbRadioD_Array
#define rtl819XAGCTAB_Array Rtl8192UsbAGCTAB_Array
u32 rtl8192_CalculateBitShift(u32 dwBitMask)
u8 rtl8192_phy_CheckIsLegalRFPath(struct net_device* dev, u32 eRFPath)
void rtl8192_setBBreg(struct net_device* dev, u32 dwRegAddr, u32 dwBitMask, u32 dwData)
u32 rtl8192_QueryBBReg(struct net_device* dev, u32 dwRegAddr, u32 dwBitMask)
static  u32 phy_FwRFSerialRead( struct net_device* dev, RF90_RADIO_PATH_E       eRFPath, u32 Offset  );
static void phy_FwRFSerialWrite( struct net_device* dev, RF90_RADIO_PATH_E       eRFPath, u32  Offset, u32  Data);
u32 rtl8192_phy_RFSerialRead(struct net_device* dev, RF90_RADIO_PATH_E eRFPath, u32 Offset)
void rtl8192_phy_RFSerialWrite(struct net_device* dev, RF90_RADIO_PATH_E eRFPath, u32 Offset, u32 Data)
void rtl8192_phy_SetRFReg(struct net_device* dev, RF90_RADIO_PATH_E eRFPath, u32 RegAddr, u32 BitMask, u32 Data)
u32 rtl8192_phy_QueryRFReg(struct net_device* dev, RF90_RADIO_PATH_E eRFPath, u32 RegAddr, u32 BitMask)
static	u32
phy_FwRFSerialRead(
struct net_device* dev,
RF90_RADIO_PATH_E	eRFPath,
u32				Offset	)
static void
phy_FwRFSerialWrite(
struct net_device* dev,
RF90_RADIO_PATH_E	eRFPath,
u32				Offset,
u32				Data	)
void rtl8192_phy_configmac(struct net_device* dev)
void rtl8192_phyConfigBB(struct net_device* dev, u8 ConfigType)
void rtl8192_InitBBRFRegDef(struct net_device* dev)
u8 rtl8192_phy_checkBBAndRF(struct net_device* dev, HW90_BLOCK_E CheckBlock, RF90_RADIO_PATH_E eRFPath)
void rtl8192_BB_Config_ParaFile(struct net_device* dev)
void rtl8192_BBConfig(struct net_device* dev)
void rtl8192_phy_getTxPower(struct net_device* dev)
void rtl8192_phy_setTxPower(struct net_device* dev, u8 channel)
void rtl8192_phy_RFConfig(struct net_device* dev)
void rtl8192_phy_updateInitGain(struct net_device* dev)
u8 rtl8192_phy_ConfigRFWithHeaderFile(struct net_device* dev, RF90_RADIO_PATH_E	eRFPath)
void rtl8192_SetTxPowerLevel(struct net_device *dev, u8 channel)
bool rtl8192_SetRFPowerState(struct net_device *dev, RT_RF_POWER_STATE eRFPowerState)
u8 rtl8192_phy_SetSwChnlCmdArray(
SwChnlCmd*		CmdTable,
u32			CmdTableIdx,
u32			CmdTableSz,
SwChnlCmdID		CmdID,
u32			Para1,
u32			Para2,
u32			msDelay
)
u8 rtl8192_phy_SwChnlStepByStep(struct net_device *dev, u8 channel, u8* stage, u8* step, u32* delay)
void rtl8192_phy_FinishSwChnlNow(struct net_device *dev, u8 channel)
void rtl8192_SwChnl_WorkItem(struct net_device *dev)
u8 rtl8192_phy_SwChnl(struct net_device* dev, u8 channel)
void rtl8192_SetBWModeWorkItem(struct net_device *dev)
void rtl8192_SetBWMode(struct net_device *dev, HT_CHANNEL_WIDTH	Bandwidth, HT_EXTCHNL_OFFSET Offset)
void InitialGain819xUsb(struct net_device *dev,	u8 Operation)
extern void InitialGainOperateWorkItemCallBack(struct work_struct *work)
