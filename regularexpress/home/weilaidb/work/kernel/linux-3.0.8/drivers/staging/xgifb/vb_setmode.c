#define  IndexMask 0xff
#define XGI_MASK_DUAL_CHIP	  0x04
static unsigned short XGINew_MDA_DAC[] = ;
static unsigned short XGINew_CGA_DAC[] = ;
static unsigned short XGINew_EGA_DAC[] = ;
static unsigned short XGINew_VGA_DAC[] = ;
void InitTo330Pointer(unsigned char ChipType, struct vb_device_info *pVBInfo)
static unsigned char XGI_GetModePtr(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetSeqRegs(unsigned short ModeNo,
unsigned short StandTableIndex,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetMiscRegs(unsigned short StandTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetCRTCRegs(struct xgi_hw_device_info *HwDeviceExtension,
unsigned short StandTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetATTRegs(unsigned short ModeNo,
unsigned short StandTableIndex,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetGRCRegs(unsigned short StandTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_ClearExt1Regs(struct vb_device_info *pVBInfo)
static unsigned char XGI_SetDefaultVCLK(struct vb_device_info *pVBInfo)
static unsigned char XGI_AjustCRT2Rate(unsigned short ModeNo,
unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex, unsigned short *i,
struct vb_device_info *pVBInfo)
static void XGI_SetSync(unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetCRT1Timing_H(struct vb_device_info *pVBInfo,
struct xgi_hw_device_info *HwDeviceExtension)
static void XGI_SetCRT1Timing_V(unsigned short ModeIdIndex,
unsigned short ModeNo,
struct vb_device_info *pVBInfo)
static void XGI_SetCRT1CRTC(unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo,
struct xgi_hw_device_info *HwDeviceExtension)
static void XGI_SetXG21CRTC(unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetXG27CRTC(unsigned short ModeNo,
unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetXG21LCD(struct vb_device_info *pVBInfo,
unsigned short RefreshRateTableIndex, unsigned short ModeNo)
static void XGI_SetXG27LCD(struct vb_device_info *pVBInfo,
unsigned short RefreshRateTableIndex,
unsigned short ModeNo)
static void XGI_UpdateXG21CRTC(unsigned short ModeNo,
struct vb_device_info *pVBInfo,
unsigned short RefreshRateTableIndex)
static void XGI_SetCRT1DE(struct xgi_hw_device_info *HwDeviceExtension,
unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
unsigned short XGI_GetResInfo(unsigned short ModeNo,
unsigned short ModeIdIndex, struct vb_device_info *pVBInfo)
static void XGI_SetCRT1Offset(unsigned short ModeNo,
unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static unsigned short XGI_GetVCLK2Ptr(unsigned short ModeNo,
unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGI_SetCRT1VCLK(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct xgi_hw_device_info *HwDeviceExtension,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetCRT1FIFO(unsigned short ModeNo,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGI_SetVCLKState(struct xgi_hw_device_info *HwDeviceExtension,
unsigned short ModeNo, unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetCRT1ModeRegs(struct xgi_hw_device_info *HwDeviceExtension,
unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
{
unsigned short data, data2, data3, infoflag = 0, modeflag, resindex,
xres;
if (ModeNo > 0x13)  else
modeflag = pVBInfo->SModeIDTable[ModeIdIndex].St_ModeFlag;
if (xgifb_reg_get(pVBInfo->P3d4, 0x31) & 0x01)
xgifb_reg_and_or(pVBInfo->P3c4, 0x1F, 0x3F, 0x00);
if (ModeNo > 0x13)
data = infoflag;
else
data = 0;
data2 = 0;
if (ModeNo > 0x13)
data &= InterlaceMode;
if (data)
data2 |= 0x20;
xgifb_reg_and_or(pVBInfo->P3c4, 0x06, ~0x3F, data2);
resindex = XGI_GetResInfo(ModeNo, ModeIdIndex, pVBInfo);
if (ModeNo <= 0x13)
xres = pVBInfo->StResInfo[resindex].HTotal;
else
xres = pVBInfo->ModeResInfo[resindex].HTotal;
data = 0x0000;
if (infoflag & InterlaceMode)
data2 = data & 0x00FF;
xgifb_reg_and_or(pVBInfo->P3d4, 0x19, 0xFF, data2);
data2 = (data & 0xFF00) >> 8;
xgifb_reg_and_or(pVBInfo->P3d4, 0x19, 0xFC, data2);
if (modeflag & HalfDCLK)
xgifb_reg_and_or(pVBInfo->P3c4, 0x01, 0xF7, 0x08);
data2 = 0;
if (modeflag & LineCompareOff)
data2 |= 0x08;
if (ModeNo > 0x13)
xgifb_reg_and_or(pVBInfo->P3c4, 0x0F, ~0x48, data2);
data = 0x60;
if (pVBInfo->ModeType != ModeText)
xgifb_reg_and_or(pVBInfo->P3c4, 0x21, 0x1F, data);
XGI_SetVCLKState(HwDeviceExtension, ModeNo, RefreshRateTableIndex,
pVBInfo);
static void XGI_WriteDAC(unsigned short dl,
unsigned short ah,
unsigned short al,
unsigned short dh,
struct vb_device_info *pVBInfo)
static void XGI_LoadDAC(unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_GetLVDSResInfo(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void *XGI_GetLcdPtr(unsigned short BX, unsigned short ModeNo,
unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void *XGI_GetTVPtr(unsigned short BX, unsigned short ModeNo,
unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_GetLVDSData(unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_ModCRT1Regs(unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static unsigned short XGI_GetLCDCapPtr(struct vb_device_info *pVBInfo)
static unsigned short XGI_GetLCDCapPtr1(struct vb_device_info *pVBInfo)
static void XGI_GetLCDSync(unsigned short *HSyncWidth,
unsigned short *VSyncWidth,
struct vb_device_info *pVBInfo)
static void XGI_SetLVDSRegs(unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_GetLCDVCLKPtr(unsigned char *di_0, unsigned char *di_1,
struct vb_device_info *pVBInfo)
static unsigned char XGI_GetVCLKPtr(unsigned short RefreshRateTableIndex,
unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_GetVCLKLen(unsigned char tempal, unsigned char *di_0,
unsigned char *di_1, struct vb_device_info *pVBInfo)
static void XGI_SetCRT2ECLK(unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex,
struct vb_device_info *pVBInfo)
static void XGI_UpdateModeInfo(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_GetVGAType(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_GetVBType(struct vb_device_info *pVBInfo)
void XGI_GetVBInfo(unsigned short ModeNo, unsigned short ModeIdIndex,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_GetTVInfo(unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
unsigned char XGI_GetLCDInfo(unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetXG27LVDSPara(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static unsigned char XGI_IsLCDON(struct vb_device_info *pVBInfo)
static unsigned char XGI_DisableChISLCD(struct vb_device_info *pVBInfo)
static unsigned char XGI_EnableChISLCD(struct vb_device_info *pVBInfo)
void XGI_DisableBridge(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static unsigned short XGI_GetTVPtrIndex(struct vb_device_info *pVBInfo)
static void XGI_GetTVPtrIndex2(unsigned short *tempbx, unsigned char *tempcl,
unsigned char *tempch, struct vb_device_info *pVBInfo)
static void XGI_SetDelayComp(struct vb_device_info *pVBInfo)
static void XGI_SetLCDCap_A(unsigned short tempcx,
struct vb_device_info *pVBInfo)
static void XGI_SetLCDCap_B(unsigned short tempcx,
struct vb_device_info *pVBInfo)
static void SetSpectrum(struct vb_device_info *pVBInfo)
static void XGI_SetLCDCap(struct vb_device_info *pVBInfo)
static void XGI_SetAntiFlicker(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetEdgeEnhance(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetPhaseIncr(struct vb_device_info *pVBInfo)
static void XGI_SetYFilter(unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_OEM310Setting(unsigned short ModeNo,
unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
void XGI_SetCRT2ModeRegs(unsigned short ModeNo,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGI_CloseCRTC(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_OpenCRTC(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_UnLockCRT2(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_LockCRT2(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
unsigned char XGI_BridgeIsOn(struct vb_device_info *pVBInfo)
void XGI_LongWait(struct vb_device_info *pVBInfo)
static void XGI_VBLongWait(struct vb_device_info *pVBInfo)
unsigned short XGI_GetRatePtrCRT2(struct xgi_hw_device_info *pXGIHWDE,
unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
static void XGI_SetLCDAGroup(unsigned short ModeNo, unsigned short ModeIdIndex,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
unsigned char XGI_SetCRT2Group301(unsigned short ModeNo,
struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
void XGI_SenseCRT1(struct vb_device_info *pVBInfo)
void XGI_EnableBridge(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGI_SetCRT1Group(struct xgi_hw_device_info *HwDeviceExtension,
unsigned short ModeNo, unsigned short ModeIdIndex,
struct vb_device_info *pVBInfo)
unsigned char XGISetModeNew(struct xgi_hw_device_info *HwDeviceExtension,
unsigned short ModeNo)
