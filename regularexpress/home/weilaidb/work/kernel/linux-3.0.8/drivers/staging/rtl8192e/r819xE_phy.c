static const u32 RF_CHANNEL_TABLE_ZEBRA[] = ;
static u32 Rtl8192PciEMACPHY_Array[] = ;
static u32 Rtl8192PciEMACPHY_Array_PG[] = ;
static u32 Rtl8192PciEAGCTAB_Array[AGCTAB_ArrayLength] = ;
static u32 Rtl8192PciEPHY_REGArray[PHY_REGArrayLength] = ;
static u32 Rtl8192PciEPHY_REG_1T2RArray[PHY_REG_1T2RArrayLength] = ;
static u32 Rtl8192PciERadioA_Array[RadioA_ArrayLength] = ;
static u32 Rtl8192PciERadioB_Array[RadioB_ArrayLength] = ;
static u32 Rtl8192PciERadioC_Array[RadioC_ArrayLength] = ;
static u32 Rtl8192PciERadioD_Array[RadioD_ArrayLength] = ;
static u32 phy_FwRFSerialRead(struct r8192_priv *priv, RF90_RADIO_PATH_E eRFPath, u32 Offset);
static void phy_FwRFSerialWrite(struct r8192_priv *priv, RF90_RADIO_PATH_E eRFPath, u32 Offset, u32 Data);
static u32 rtl8192_CalculateBitShift(u32 dwBitMask)
u8 rtl8192_phy_CheckIsLegalRFPath(struct r8192_priv *priv, u32 eRFPath)
void rtl8192_setBBreg(struct r8192_priv *priv, u32 dwRegAddr, u32 dwBitMask, u32 dwData)
u32 rtl8192_QueryBBReg(struct r8192_priv *priv, u32 dwRegAddr, u32 dwBitMask)
static u32 rtl8192_phy_RFSerialRead(struct r8192_priv *priv,
RF90_RADIO_PATH_E eRFPath, u32 Offset)
static void rtl8192_phy_RFSerialWrite(struct r8192_priv *priv,
RF90_RADIO_PATH_E eRFPath, u32 Offset,
u32 Data)
void rtl8192_phy_SetRFReg(struct r8192_priv *priv, RF90_RADIO_PATH_E eRFPath,
u32 RegAddr, u32 BitMask, u32 Data)
u32 rtl8192_phy_QueryRFReg(struct r8192_priv *priv, RF90_RADIO_PATH_E eRFPath,
u32 RegAddr, u32 BitMask)
static u32 phy_FwRFSerialRead(struct r8192_priv *priv,
RF90_RADIO_PATH_E eRFPath, u32 Offset)
static void phy_FwRFSerialWrite(struct r8192_priv *priv,
RF90_RADIO_PATH_E eRFPath, u32 Offset, u32 Data)
void rtl8192_phy_configmac(struct r8192_priv *priv)
void rtl8192_phyConfigBB(struct r8192_priv *priv, u8 ConfigType)
static void rtl8192_InitBBRFRegDef(struct r8192_priv *priv)
RT_STATUS rtl8192_phy_checkBBAndRF(struct r8192_priv *priv,
HW90_BLOCK_E CheckBlock,
RF90_RADIO_PATH_E eRFPath)
static RT_STATUS rtl8192_BB_Config_ParaFile(struct r8192_priv *priv)
RT_STATUS rtl8192_BBConfig(struct r8192_priv *priv)
void rtl8192_phy_getTxPower(struct r8192_priv *priv)
void rtl8192_phy_setTxPower(struct r8192_priv *priv, u8 channel)
RT_STATUS rtl8192_phy_RFConfig(struct r8192_priv *priv)
void rtl8192_phy_updateInitGain(struct r8192_priv *priv)
u8 rtl8192_phy_ConfigRFWithHeaderFile(struct r8192_priv *priv,
RF90_RADIO_PATH_E eRFPath)
static void rtl8192_SetTxPowerLevel(struct r8192_priv *priv, u8 channel)
static u8 rtl8192_phy_SetSwChnlCmdArray(
SwChnlCmd*		CmdTable,
u32			CmdTableIdx,
u32			CmdTableSz,
SwChnlCmdID		CmdID,
u32			Para1,
u32			Para2,
u32			msDelay
)
static u8 rtl8192_phy_SwChnlStepByStep(struct r8192_priv *priv, u8 channel,
u8* stage, u8* step, u32* delay)
static void rtl8192_phy_FinishSwChnlNow(struct r8192_priv *priv, u8 channel)
void rtl8192_SwChnl_WorkItem(struct r8192_priv *priv)
u8 rtl8192_phy_SwChnl(struct ieee80211_device *ieee80211, u8 channel)
static void CCK_Tx_Power_Track_BW_Switch_TSSI(struct r8192_priv *priv)
static void CCK_Tx_Power_Track_BW_Switch_ThermalMeter(struct r8192_priv *priv)
static void CCK_Tx_Power_Track_BW_Switch(struct r8192_priv *priv)
void rtl8192_SetBWModeWorkItem(struct r8192_priv *priv)
void rtl8192_SetBWMode(struct ieee80211_device *ieee, HT_CHANNEL_WIDTH Bandwidth, HT_EXTCHNL_OFFSET Offset)
void InitialGain819xPci(struct ieee80211_device *ieee, u8 Operation)
