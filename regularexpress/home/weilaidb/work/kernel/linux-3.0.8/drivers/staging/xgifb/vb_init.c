static unsigned char XGINew_ChannelAB, XGINew_DataBusWidth;
static unsigned short XGINew_DDRDRAM_TYPE340[4][5] = ;
static unsigned short XGINew_DDRDRAM_TYPE20[12][5] = ;
static int XGINew_RAMType;
static unsigned char
XGINew_GetXG20DRAMType(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGINew_DDR1x_MRS_340(unsigned long P3c4,
struct vb_device_info *pVBInfo)
static void XGINew_SetMemoryClock(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGINew_DDRII_Bootup_XG27(
struct xgi_hw_device_info *HwDeviceExtension,
unsigned long P3c4, struct vb_device_info *pVBInfo)
static void XGINew_DDR2_MRS_XG20(struct xgi_hw_device_info *HwDeviceExtension,
unsigned long P3c4, struct vb_device_info *pVBInfo)
static void XGINew_DDR1x_MRS_XG20(unsigned long P3c4,
struct vb_device_info *pVBInfo)
static void XGINew_DDR1x_DefaultRegister(
struct xgi_hw_device_info *HwDeviceExtension,
unsigned long Port, struct vb_device_info *pVBInfo)
static void XGINew_DDR2_DefaultRegister(
struct xgi_hw_device_info *HwDeviceExtension,
unsigned long Port, struct vb_device_info *pVBInfo)
static void XGINew_SetDRAMDefaultRegister340(
struct xgi_hw_device_info *HwDeviceExtension,
unsigned long Port, struct vb_device_info *pVBInfo)
static void XGINew_SetDRAMSizingType(int index,
unsigned short DRAMTYPE_TABLE[][5],
struct vb_device_info *pVBInfo)
static unsigned short XGINew_SetDRAMSizeReg(int index,
unsigned short DRAMTYPE_TABLE[][5],
struct vb_device_info *pVBInfo)
static unsigned short XGINew_SetDRAMSize20Reg(int index,
unsigned short DRAMTYPE_TABLE[][5],
struct vb_device_info *pVBInfo)
static int XGINew_ReadWriteRest(unsigned short StopAddr,
unsigned short StartAddr, struct vb_device_info *pVBInfo)
static unsigned char XGINew_CheckFrequence(struct vb_device_info *pVBInfo)
static void XGINew_CheckChannel(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static int XGINew_DDRSizing340(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGINew_SetDRAMSize_340(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void ReadVBIOSTablData(unsigned char ChipType,
struct vb_device_info *pVBInfo)
static void XGINew_ChkSenseStatus(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGINew_SetModeScratch(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGINew_GetXG21Sense(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static void XGINew_GetXG27Sense(struct xgi_hw_device_info *HwDeviceExtension,
struct vb_device_info *pVBInfo)
static unsigned char GetXG21FPBits(struct vb_device_info *pVBInfo)
static unsigned char GetXG27FPBits(struct vb_device_info *pVBInfo)
unsigned char XGIInitNew(struct xgi_hw_device_info *HwDeviceExtension)
