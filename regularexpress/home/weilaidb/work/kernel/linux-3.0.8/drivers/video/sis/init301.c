#if 1
#define SET_EMI
#if 1
#define SET_PWD
#define COMPAL_HACK
#define COMPAQ_HACK
#define ASUS_HACK
#define SiS_I2CDELAY      1000
#define SiS_I2CDELAYSHORT  150
static unsigned short	SiS_GetBIOSLCDResInfo(struct SiS_Private *SiS_Pr);
static void		SiS_SetCH70xx(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val);
void
SiS_UnLockCRT2(struct SiS_Private *SiS_Pr)
static
void
SiS_LockCRT2(struct SiS_Private *SiS_Pr)
static void
SiS_SetRegSR11ANDOR(struct SiS_Private *SiS_Pr, unsigned short DataAND, unsigned short DataOR)
static unsigned char *
GetLCDStructPtr661(struct SiS_Private *SiS_Pr)
static unsigned short
GetLCDStructPtr661_2(struct SiS_Private *SiS_Pr)
static bool
SiS_AdjustCRT2Rate(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RRTI, unsigned short *i)
unsigned short
SiS_GetRatePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_SaveCRT2Info(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static bool
SiS_CR36BIOSWord23b(struct SiS_Private *SiS_Pr)
static bool
SiS_CR36BIOSWord23d(struct SiS_Private *SiS_Pr)
void
SiS_DDC2Delay(struct SiS_Private *SiS_Pr, unsigned int delaytime)
#if defined(CONFIG_FB_SIS_300) || defined(CONFIG_FB_SIS_315)
static void
SiS_GenericDelay(struct SiS_Private *SiS_Pr, unsigned short delay)
static void
SiS_LongDelay(struct SiS_Private *SiS_Pr, unsigned short delay)
#if defined(CONFIG_FB_SIS_300) || defined(CONFIG_FB_SIS_315)
static void
SiS_ShortDelay(struct SiS_Private *SiS_Pr, unsigned short delay)
static void
SiS_PanelDelay(struct SiS_Private *SiS_Pr, unsigned short DelayTime)
static void
SiS_PanelDelayLoop(struct SiS_Private *SiS_Pr, unsigned short DelayTime, unsigned short DelayLoop)
void
SiS_WaitRetrace1(struct SiS_Private *SiS_Pr)
#if defined(CONFIG_FB_SIS_300) || defined(CONFIG_FB_SIS_315)
static void
SiS_WaitRetrace2(struct SiS_Private *SiS_Pr, unsigned short reg)
static void
SiS_WaitVBRetrace(struct SiS_Private *SiS_Pr)
static void
SiS_VBWait(struct SiS_Private *SiS_Pr)
static void
SiS_VBLongWait(struct SiS_Private *SiS_Pr)
static bool
SiS_Is301B(struct SiS_Private *SiS_Pr)
static bool
SiS_CRT2IsLCD(struct SiS_Private *SiS_Pr)
bool
SiS_IsDualEdge(struct SiS_Private *SiS_Pr)
bool
SiS_IsVAMode(struct SiS_Private *SiS_Pr)
static bool
SiS_IsVAorLCD(struct SiS_Private *SiS_Pr)
static bool
SiS_IsDualLink(struct SiS_Private *SiS_Pr)
static bool
SiS_TVEnabled(struct SiS_Private *SiS_Pr)
static bool
SiS_LCDAEnabled(struct SiS_Private *SiS_Pr)
static bool
SiS_WeHaveBacklightCtrl(struct SiS_Private *SiS_Pr)
static bool
SiS_IsNotM650orLater(struct SiS_Private *SiS_Pr)
static bool
SiS_IsYPbPr(struct SiS_Private *SiS_Pr)
static bool
SiS_IsChScart(struct SiS_Private *SiS_Pr)
static bool
SiS_IsTVOrYPbPrOrScart(struct SiS_Private *SiS_Pr)
static bool
SiS_IsLCDOrLCDA(struct SiS_Private *SiS_Pr)
static bool
SiS_HaveBridge(struct SiS_Private *SiS_Pr)
static bool
SiS_BridgeIsEnabled(struct SiS_Private *SiS_Pr)
static bool
SiS_BridgeInSlavemode(struct SiS_Private *SiS_Pr)
void
SiS_SetChrontelGPIO(struct SiS_Private *SiS_Pr, unsigned short myvbinfo)
void
SiS_GetVBInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, int checkcrt2mode)
void
SiS_SetYPbPr(struct SiS_Private *SiS_Pr)
void
SiS_SetTVMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static unsigned short
SiS_GetBIOSLCDResInfo(struct SiS_Private *SiS_Pr)
static void
SiS_GetLCDInfoBIOS(struct SiS_Private *SiS_Pr)
static void
SiS_CheckScaling(struct SiS_Private *SiS_Pr, unsigned short resinfo,
const unsigned char *nonscalingmodes)
void
SiS_GetLCDResInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
unsigned short
SiS_GetVCLK2Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetCRT2ModeRegs(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
unsigned short
SiS_GetResInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_GetCRT2ResInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_GetCRT2Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex, unsigned short *CRT2Index,
unsigned short *ResIndex)
static void
SiS_GetRAMDAC2DATA(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_CalcPanelLinkTiming(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RefreshRateTableIndex)
static void
SiS_GetCRT2DataLVDS(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_GetCRT2Data301(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_GetCRT2Data(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static const struct SiS_LVDSDes *
SiS_GetLVDSDesPtr(struct SiS_Private *SiS_Pr)
static void
SiS_GetLVDSDesData(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static int
SiS_HandlePWD(struct SiS_Private *SiS_Pr)
void
SiS_DisableBridge(struct SiS_Private *SiS_Pr)
static
void
SiS_EnableBridge(struct SiS_Private *SiS_Pr)
static void
SiS_SetCRT2Offset(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RRTI)
static void
SiS_SetCRT2Sync(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short RefreshRateTableIndex)
static void
SiS_SetCRT2FIFO_300(struct SiS_Private *SiS_Pr,unsigned short ModeNo)
static void
SiS_SetCRT2FIFO_310(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_GetVGAHT2(struct SiS_Private *SiS_Pr)
static void
SiS_SetGroup1_301(struct SiS_Private *SiS_Pr, unsigned short ModeNo,unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetGroup1_LVDS(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetGroup1(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static unsigned char *
SiS_GetGroup2CLVXPtr(struct SiS_Private *SiS_Pr, int tabletype)
static void
SiS_SetGroup2_C_ELV(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static bool
SiS_GetCRT2Part2Ptr(struct SiS_Private *SiS_Pr,unsigned short ModeNo,unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,unsigned short *CRT2Index,
unsigned short *ResIndex)
static void
SiS_Group2LCDSpecial(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short crt2crtc)
static void
SiS_Set300Part2Regs(struct SiS_Private *SiS_Pr, unsigned short ModeIdIndex, unsigned short RefreshRateTableIndex,
unsigned short ModeNo)
static void
SiS_SetTVSpecial(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SiS_SetGroup2_Tail(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SiS_SetGroup2(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetGroup3(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_SetGroup4_C_ELV(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_SetCRT2VCLK(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetDualLinkEtc(struct SiS_Private *SiS_Pr)
static void
SiS_SetGroup4(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetGroup5(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static bool
SiS_GetLVDSCRT1Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex, unsigned short *ResIndex,
unsigned short *DisplayType)
static void
SiS_ModCRT1CRTC(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetCRT2ECLK(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
static void
SiS_SetCHTVReg(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex)
void
SiS_Chrontel701xBLOn(struct SiS_Private *SiS_Pr)
void
SiS_Chrontel701xBLOff(struct SiS_Private *SiS_Pr)
static void
SiS_ChrontelPowerSequencing(struct SiS_Private *SiS_Pr)
static void
SiS_SetCH701xForLCD(struct SiS_Private *SiS_Pr)
static void
SiS_ChrontelResetVSync(struct SiS_Private *SiS_Pr)
static void
SiS_Chrontel701xOn(struct SiS_Private *SiS_Pr)
static void
SiS_Chrontel701xOff(struct SiS_Private *SiS_Pr)
static void
SiS_ChrontelResetDB(struct SiS_Private *SiS_Pr)
static void
SiS_ChrontelInitTVVSync(struct SiS_Private *SiS_Pr)
static void
SiS_ChrontelDoSomething3(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SiS_ChrontelDoSomething2(struct SiS_Private *SiS_Pr)
static void
SiS_ChrontelDoSomething1(struct SiS_Private *SiS_Pr)
bool
SiS_SetCRT2Group(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
void
SiS_SiS30xBLOn(struct SiS_Private *SiS_Pr)
void
SiS_SiS30xBLOff(struct SiS_Private *SiS_Pr)
static void
SiS_SetupDDCN(struct SiS_Private *SiS_Pr)
static unsigned char *
SiS_SetTrumpBlockLoop(struct SiS_Private *SiS_Pr, unsigned char *dataptr)
static bool
SiS_SetTrumpionBlock(struct SiS_Private *SiS_Pr, unsigned char *dataptr)
static bool
SiS_SetChReg(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val, unsigned short myor)
void
SiS_SetCH700x(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val)
void
SiS_SetCH701x(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val)
static
void
SiS_SetCH70xx(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val)
static unsigned short
SiS_GetChReg(struct SiS_Private *SiS_Pr, unsigned short myor)
unsigned short
SiS_GetCH700x(struct SiS_Private *SiS_Pr, unsigned short tempbx)
unsigned short
SiS_GetCH701x(struct SiS_Private *SiS_Pr, unsigned short tempbx)
static
unsigned short
SiS_GetCH70xx(struct SiS_Private *SiS_Pr, unsigned short tempbx)
void
SiS_SetCH70xxANDOR(struct SiS_Private *SiS_Pr, unsigned short reg,
unsigned char myor, unsigned short myand)
static
unsigned short
SiS_InitDDCRegs(struct SiS_Private *SiS_Pr, unsigned int VBFlags, int VGAEngine,
unsigned short adaptnum, unsigned short DDCdatatype, bool checkcr32,
unsigned int VBFlags2)
static unsigned short
SiS_WriteDABDDC(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_PrepareReadDDC(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_PrepareDDC(struct SiS_Private *SiS_Pr)
static void
SiS_SendACK(struct SiS_Private *SiS_Pr, unsigned short yesno)
static unsigned short
SiS_DoProbeDDC(struct SiS_Private *SiS_Pr)
static
unsigned short
SiS_ProbeDDC(struct SiS_Private *SiS_Pr)
static
unsigned short
SiS_ReadDDC(struct SiS_Private *SiS_Pr, unsigned short DDCdatatype, unsigned char *buffer)
unsigned short
SiS_HandleDDC(struct SiS_Private *SiS_Pr, unsigned int VBFlags, int VGAEngine,
unsigned short adaptnum, unsigned short DDCdatatype, unsigned char *buffer,
unsigned int VBFlags2)
static void
SiS_SetSwitchDDC2(struct SiS_Private *SiS_Pr)
unsigned short
SiS_ReadDDC1Bit(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_SetStart(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_SetStop(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_WriteDDC2Data(struct SiS_Private *SiS_Pr, unsigned short tempax)
static unsigned short
SiS_ReadDDC2Data(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_SetSCLKLow(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_SetSCLKHigh(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_CheckACK(struct SiS_Private *SiS_Pr)
static unsigned short
GetRAMDACromptr(struct SiS_Private *SiS_Pr)
static unsigned short
GetLCDromptr(struct SiS_Private *SiS_Pr)
static unsigned short
GetTVromptr(struct SiS_Private *SiS_Pr)
static unsigned short
GetLCDPtrIndexBIOS(struct SiS_Private *SiS_Pr)
static unsigned short
GetLCDPtrIndex(struct SiS_Private *SiS_Pr)
static unsigned short
GetTVPtrIndex(struct SiS_Private *SiS_Pr)
static unsigned int
GetOEMTVPtr661_2_GEN(struct SiS_Private *SiS_Pr, int addme)
static unsigned int
GetOEMTVPtr661_2_OLD(struct SiS_Private *SiS_Pr)
static int
GetOEMTVPtr661(struct SiS_Private *SiS_Pr)
static void
SetDelayComp(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SetAntiFlicker(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SetEdgeEnhance(struct SiS_Private *SiS_Pr, unsigned short ModeNo,unsigned short ModeIdIndex)
static void
SetYFilter(struct SiS_Private *SiS_Pr, unsigned short ModeNo,unsigned short ModeIdIndex)
static void
SetPhaseIncr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SetDelayComp661(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RTI)
static void
SetCRT2SyncDither661(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short RTI)
static void
SetPanelParms661(struct SiS_Private *SiS_Pr)
static void
SiS_OEM310Setting(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex, unsigned short RRTI)
static void
SiS_OEM661Setting(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
static void
SiS_FinalizeLCD(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SetOEMLCDData2(struct SiS_Private *SiS_Pr, unsigned short ModeNo,unsigned short ModeIdIndex,
unsigned short RefTabIndex)
static unsigned short
GetOEMLCDPtr(struct SiS_Private *SiS_Pr, int Flag)
static void
SetOEMLCDDelay(struct SiS_Private *SiS_Pr, unsigned short ModeNo,unsigned short ModeIdIndex)
static void
SetOEMLCDData(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static unsigned short
GetOEMTVPtr(struct SiS_Private *SiS_Pr)
static void
SetOEMTVDelay(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SetOEMAntiFlicker(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SetOEMPhaseIncr(struct SiS_Private *SiS_Pr, unsigned short ModeNo,unsigned short ModeIdIndex)
static void
SetOEMYFilter(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static unsigned short
SiS_SearchVBModeID(struct SiS_Private *SiS_Pr, unsigned short *ModeNo)
static void
SiS_OEM300Setting(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefTableIndex)
