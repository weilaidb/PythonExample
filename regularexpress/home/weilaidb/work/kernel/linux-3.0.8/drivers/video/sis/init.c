#if defined(ALLOC_PRAGMA)
#if defined(CONFIG_FB_SIS_300) || defined(CONFIG_FB_SIS_315)
static void
InitCommonPointer(struct SiS_Private *SiS_Pr)
static void
InitTo300Pointer(struct SiS_Private *SiS_Pr)
static void
InitTo310Pointer(struct SiS_Private *SiS_Pr)
bool
SiSInitPtr(struct SiS_Private *SiS_Pr)
static
unsigned short
SiS_GetModeID(int VGAEngine, unsigned int VBFlags, int HDisplay, int VDisplay,
int Depth, bool FSTN, int LCDwidth, int LCDheight)
unsigned short
SiS_GetModeID_LCD(int VGAEngine, unsigned int VBFlags, int HDisplay, int VDisplay,
int Depth, bool FSTN, unsigned short CustomT, int LCDwidth, int LCDheight,
unsigned int VBFlags2)
unsigned short
SiS_GetModeID_TV(int VGAEngine, unsigned int VBFlags, int HDisplay, int VDisplay, int Depth,
unsigned int VBFlags2)
unsigned short
SiS_GetModeID_VGA2(int VGAEngine, unsigned int VBFlags, int HDisplay, int VDisplay, int Depth,
unsigned int VBFlags2)
void
SiS_SetReg(SISIOADDRESS port, u8 index, u8 data)
void
SiS_SetRegByte(SISIOADDRESS port, u8 data)
void
SiS_SetRegShort(SISIOADDRESS port, u16 data)
void
SiS_SetRegLong(SISIOADDRESS port, u32 data)
u8
SiS_GetReg(SISIOADDRESS port, u8 index)
u8
SiS_GetRegByte(SISIOADDRESS port)
u16
SiS_GetRegShort(SISIOADDRESS port)
u32
SiS_GetRegLong(SISIOADDRESS port)
void
SiS_SetRegANDOR(SISIOADDRESS Port, u8 Index, u8 DataAND, u8 DataOR)
void
SiS_SetRegAND(SISIOADDRESS Port, u8 Index, u8 DataAND)
void
SiS_SetRegOR(SISIOADDRESS Port, u8 Index, u8 DataOR)
void
SiS_DisplayOn(struct SiS_Private *SiS_Pr)
void
SiS_DisplayOff(struct SiS_Private *SiS_Pr)
void
SiSRegInit(struct SiS_Private *SiS_Pr, SISIOADDRESS BaseAddr)
static void
SiS_GetSysFlags(struct SiS_Private *SiS_Pr)
static void
SiSInitPCIetc(struct SiS_Private *SiS_Pr)
static
void
SiSSetLVDSetc(struct SiS_Private *SiS_Pr)
void
SiS_SetEnableDstn(struct SiS_Private *SiS_Pr, int enable)
void
SiS_SetEnableFstn(struct SiS_Private *SiS_Pr, int enable)
unsigned short
SiS_GetModeFlag(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
bool
SiSDetermineROMLayout661(struct SiS_Private *SiS_Pr)
static void
SiSDetermineROMUsage(struct SiS_Private *SiS_Pr)
static void
SiS_SetSegRegLower(struct SiS_Private *SiS_Pr, unsigned short value)
static void
SiS_SetSegRegUpper(struct SiS_Private *SiS_Pr, unsigned short value)
static void
SiS_SetSegmentReg(struct SiS_Private *SiS_Pr, unsigned short value)
static void
SiS_ResetSegmentReg(struct SiS_Private *SiS_Pr)
static void
SiS_SetSegmentRegOver(struct SiS_Private *SiS_Pr, unsigned short value)
static void
SiS_ResetSegmentRegOver(struct SiS_Private *SiS_Pr)
static void
SiS_ResetSegmentRegisters(struct SiS_Private *SiS_Pr)
static
void
SiS_GetVBType(struct SiS_Private *SiS_Pr)
static bool
SiS_CheckMemorySize(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
static unsigned char
SiS_Get310DRAMType(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_GetMCLK(struct SiS_Private *SiS_Pr)
static void
SiS_ClearBuffer(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
bool
SiS_SearchModeID(struct SiS_Private *SiS_Pr, unsigned short *ModeNo,
unsigned short *ModeIdIndex)
unsigned short
SiS_GetModePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
unsigned short
SiS_GetRefCRTVCLK(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide)
unsigned short
SiS_GetRefCRT1CRTC(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide)
static bool
SiS_DoLowModeTest(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SiS_SetLowModeTest(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SiS_OpenCRTC(struct SiS_Private *SiS_Pr)
static void
SiS_CloseCRTC(struct SiS_Private *SiS_Pr)
static void
SiS_HandleCRT1(struct SiS_Private *SiS_Pr)
unsigned short
SiS_GetColorDepth(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
unsigned short
SiS_GetOffset(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
static void
SiS_SetSeqRegs(struct SiS_Private *SiS_Pr, unsigned short StandTableIndex)
static void
SiS_SetMiscRegs(struct SiS_Private *SiS_Pr, unsigned short StandTableIndex)
static void
SiS_SetCRTCRegs(struct SiS_Private *SiS_Pr, unsigned short StandTableIndex)
static void
SiS_SetATTRegs(struct SiS_Private *SiS_Pr, unsigned short StandTableIndex)
static void
SiS_SetGRCRegs(struct SiS_Private *SiS_Pr, unsigned short StandTableIndex)
static void
SiS_ClearExt1Regs(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static void
SiS_ResetCRT1VCLK(struct SiS_Private *SiS_Pr)
static void
SiS_SetCRT1Sync(struct SiS_Private *SiS_Pr, unsigned short RRTI)
static void
SiS_SetCRT1CRTC(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
static void
SiS_SetCRT1Offset(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
static void
SiS_SetCRT1VCLK(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
void
SiS_GetFIFOThresholdIndex300(struct SiS_Private *SiS_Pr, unsigned short *idx1,
unsigned short *idx2)
static unsigned short
SiS_GetFIFOThresholdA300(unsigned short idx1, unsigned short idx2)
unsigned short
SiS_GetFIFOThresholdB300(unsigned short idx1, unsigned short idx2)
static unsigned short
SiS_DoCalcDelay(struct SiS_Private *SiS_Pr, unsigned short MCLK, unsigned short VCLK,
unsigned short colordepth, unsigned short key)
static unsigned short
SiS_CalcDelay(struct SiS_Private *SiS_Pr, unsigned short VCLK,
unsigned short colordepth, unsigned short MCLK)
static void
SiS_SetCRT1FIFO_300(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short RefreshRateTableIndex)
unsigned short
SiS_GetLatencyFactor630(struct SiS_Private *SiS_Pr, unsigned short index)
static unsigned short
SiS_CalcDelay2(struct SiS_Private *SiS_Pr, unsigned char key)
static void
SiS_SetCRT1FIFO_630(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short RefreshRateTableIndex)
static void
SiS_SetCRT1FIFO_310(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_SetVCLKState(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short RefreshRateTableIndex, unsigned short ModeIdIndex)
static void
SiS_SetCRT1ModeRegs(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI)
static void
SiS_SetupDualChip(struct SiS_Private *SiS_Pr)
static void
SiS_WriteDAC(struct SiS_Private *SiS_Pr, SISIOADDRESS DACData, unsigned short shiftflag,
unsigned short dl, unsigned short ah, unsigned short al, unsigned short dh)
void
SiS_LoadDAC(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_SetCRT1Group(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex)
static void
SiS_InitVB(struct SiS_Private *SiS_Pr)
static void
SiS_ResetVB(struct SiS_Private *SiS_Pr)
static void
SiS_StrangeStuff(struct SiS_Private *SiS_Pr)
static void
SiS_Handle760(struct SiS_Private *SiS_Pr)
bool
SiSSetMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
#define BITMASK(h,l)    	(((unsigned)(1U << ((h)-(l)+1))-1)<<(l))
#define GENMASK(mask)   	BITMASK(1?mask,0?mask)
#define GETBITS(var,mask)   	(((var) & GENMASK(mask)) >> (0?mask))
#define GETBITSTR(val,from,to)  ((GETBITS(val,from)) << (0?to))
void
SiS_CalcCRRegisters(struct SiS_Private *SiS_Pr, int depth)
void
SiS_CalcLCDACRT1Timing(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
void
SiS_Generic_ConvertCRData(struct SiS_Private *SiS_Pr, unsigned char *crdata,
int xres, int yres,
struct fb_var_screeninfo *var, bool writeres
)
