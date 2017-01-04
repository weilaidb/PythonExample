#define _INIT_H_
#undef SIS_CP
static const unsigned short ModeIndex_320x200[]      = ;
static const unsigned short ModeIndex_320x240[]      = ;
static const unsigned short ModeIndex_320x240_FSTN[] = ;
static const unsigned short ModeIndex_400x300[]      = ;
static const unsigned short ModeIndex_512x384[]      = ;
static const unsigned short ModeIndex_640x400[]      = ;
static const unsigned short ModeIndex_640x480[]      = ;
static const unsigned short ModeIndex_720x480[]      = ;
static const unsigned short ModeIndex_720x576[]      = ;
static const unsigned short ModeIndex_768x576[]      = ;
static const unsigned short ModeIndex_800x480[]      = ;
static const unsigned short ModeIndex_800x600[]      = ;
static const unsigned short ModeIndex_848x480[]      = ;
static const unsigned short ModeIndex_856x480[]      = ;
static const unsigned short ModeIndex_960x540[]      = ;
static const unsigned short ModeIndex_960x600[]      = ;
static const unsigned short ModeIndex_1024x768[]     = ;
static const unsigned short ModeIndex_1024x576[]     = ;
static const unsigned short ModeIndex_1024x600[]     = ;
static const unsigned short ModeIndex_1280x1024[]    = ;
static const unsigned short ModeIndex_1280x960[]     = ;
static const unsigned short ModeIndex_1152x768[]     = ;
static const unsigned short ModeIndex_1152x864[]     = ;
static const unsigned short ModeIndex_300_1280x768[] = ;
static const unsigned short ModeIndex_310_1280x768[] = ;
static const unsigned short ModeIndex_1280x720[]     = ;
static const unsigned short ModeIndex_1280x800[]     = ;
static const unsigned short ModeIndex_1280x854[]     = ;
static const unsigned short ModeIndex_1360x768[]     = ;
static const unsigned short ModeIndex_300_1360x1024[]= ;
static const unsigned short ModeIndex_1400x1050[]    = ;
static const unsigned short ModeIndex_1680x1050[]    = ;
static const unsigned short ModeIndex_1600x1200[]    = ;
static const unsigned short ModeIndex_1920x1080[]    = ;
static const unsigned short ModeIndex_1920x1440[]    = ;
static const unsigned short ModeIndex_300_2048x1536[]= ;
static const unsigned short ModeIndex_310_2048x1536[]= ;
static const unsigned short SiS_DRAMType[17][5]=;
static const unsigned short SiS_SDRDRAM_TYPE[13][5] =
;
static const unsigned short SiS_DDRDRAM_TYPE[4][5] =
;
static const unsigned char SiS_MDA_DAC[] =
;
static const unsigned char SiS_CGA_DAC[] =
;
static const unsigned char SiS_EGA_DAC[] =
;
static const unsigned char SiS_VGA_DAC[] =
;
static const struct SiS_St SiS_SModeIDTable[] =
;
static const struct SiS_StResInfo_S SiS_StResInfo[]=
;
static const struct SiS_ModeResInfo_S SiS_ModeResInfo[] =
;
#if defined(CONFIG_FB_SIS_300) || defined(CONFIG_FB_SIS_315)
static const struct SiS_StandTable_S SiS_StandTable[]=
;
static const unsigned char SiS_SoftSetting  = 0x30;
static const unsigned char SiS_OutputSelect = 0x40;
static const unsigned char SiS_NTSCTiming[] = ;
static const unsigned char SiS_PALTiming[] = ;
static const unsigned char SiS_HiTVExtTiming[] = ;
static const unsigned char SiS_HiTVSt1Timing[] = ;
static const unsigned char SiS_HiTVSt2Timing[] = ;
static const unsigned char SiS_HiTVGroup3Data[] = ;
static const unsigned char SiS_HiTVGroup3Simu[] = ;
static const struct SiS_TVData SiS_StPALData[] =
;
static const struct SiS_TVData SiS_ExtPALData[] =
;
static const struct SiS_TVData SiS_StNTSCData[] =
;
static const struct SiS_TVData SiS_ExtNTSCData[] =
;
static const struct SiS_TVData SiS_StHiTVData[] =
;
static const struct SiS_TVData SiS_St2HiTVData[] =
;
static const struct SiS_TVData SiS_ExtHiTVData[] =
;
static const struct SiS_TVData SiS_St525pData[] =
;
static const struct SiS_TVData SiS_St750pData[] =
;
static const struct SiS_TVData SiS_Ext750pData[] =
;
static const struct SiS_LCDData SiS_LCD1280x720Data[] =
;
static const struct SiS_LCDData SiS_StLCD1280x768_2Data[] =
;
static const struct SiS_LCDData SiS_ExtLCD1280x768_2Data[] =
;
static const struct SiS_LCDData SiS_LCD1280x800Data[] =
;
static const struct SiS_LCDData SiS_LCD1280x800_2Data[] =
;
static const struct SiS_LCDData SiS_LCD1280x854Data[] =
;
static const struct SiS_LCDData SiS_LCD1280x960Data[] =
;
static const struct SiS_LCDData SiS_StLCD1400x1050Data[] =
;
static const struct SiS_LCDData SiS_ExtLCD1400x1050Data[] =
;
static const struct SiS_LCDData SiS_LCD1680x1050Data[] =
;
static const struct SiS_LCDData SiS_StLCD1600x1200Data[] =
;
static const struct SiS_LCDData SiS_ExtLCD1600x1200Data[] =
;
static const struct SiS_LCDData SiS_NoScaleData[] =
;
static const struct SiS_LVDSData SiS_LVDS320x240Data_1[]=
;
static const struct SiS_LVDSData SiS_LVDS320x240Data_2[]=
;
static const struct SiS_LVDSData SiS_LVDS640x480Data_1[]=
;
static const struct SiS_LVDSData SiS_LVDS800x600Data_1[]=
;
static const struct SiS_LVDSData SiS_LVDS1024x600Data_1[] =
;
static const struct SiS_LVDSData SiS_LVDS1024x768Data_1[]=
;
static const struct SiS_LVDSData SiS_CHTVUNTSCData[]=
;
static const struct SiS_LVDSData SiS_CHTVONTSCData[]=
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1320x240_1[] =
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1320x240_2[] =
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1320x240_2_H[] =
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1320x240_3[] =
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1320x240_3_H[] =
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1640x480_1[] =
;
static const struct SiS_LVDSCRT1Data SiS_LVDSCRT1640x480_1_H[] =
;
bool		SiSInitPtr(struct SiS_Private *SiS_Pr);
unsigned short	SiS_GetModeID_LCD(int VGAEngine, unsigned int VBFlags, int HDisplay,
int VDisplay, int Depth, bool FSTN,
unsigned short CustomT, int LCDwith, int LCDheight,
unsigned int VBFlags2);
unsigned short	SiS_GetModeID_TV(int VGAEngine, unsigned int VBFlags, int HDisplay,
int VDisplay, int Depth, unsigned int VBFlags2);
unsigned short	SiS_GetModeID_VGA2(int VGAEngine, unsigned int VBFlags, int HDisplay,
int VDisplay, int Depth, unsigned int VBFlags2);
void		SiS_DisplayOn(struct SiS_Private *SiS_Pr);
void		SiS_DisplayOff(struct SiS_Private *SiS_Pr);
void		SiSRegInit(struct SiS_Private *SiS_Pr, SISIOADDRESS BaseAddr);
void		SiS_SetEnableDstn(struct SiS_Private *SiS_Pr, int enable);
void		SiS_SetEnableFstn(struct SiS_Private *SiS_Pr, int enable);
unsigned short	SiS_GetModeFlag(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
bool		SiSDetermineROMLayout661(struct SiS_Private *SiS_Pr);
bool		SiS_SearchModeID(struct SiS_Private *SiS_Pr, unsigned short *ModeNo,
unsigned short *ModeIdIndex);
unsigned short	SiS_GetModePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
unsigned short  SiS_GetRefCRTVCLK(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide);
unsigned short  SiS_GetRefCRT1CRTC(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide);
unsigned short	SiS_GetColorDepth(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
unsigned short	SiS_GetOffset(struct SiS_Private *SiS_Pr,unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI);
void		SiS_GetFIFOThresholdIndex300(struct SiS_Private *SiS_Pr, unsigned short *idx1,
unsigned short *idx2);
unsigned short	SiS_GetFIFOThresholdB300(unsigned short idx1, unsigned short idx2);
unsigned short	SiS_GetLatencyFactor630(struct SiS_Private *SiS_Pr, unsigned short index);
void		SiS_LoadDAC(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex);
bool		SiSSetMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo);
void		SiS_CalcCRRegisters(struct SiS_Private *SiS_Pr, int depth);
void		SiS_CalcLCDACRT1Timing(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
void		SiS_Generic_ConvertCRData(struct SiS_Private *SiS_Pr, unsigned char *crdata, int xres,
int yres, struct fb_var_screeninfo *var, bool writeres);
extern void		SiS_GetVBInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, int chkcrt2mode);
extern void		SiS_GetLCDResInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern void		SiS_SetYPbPr(struct SiS_Private *SiS_Pr);
extern void		SiS_SetTVMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern void		SiS_UnLockCRT2(struct SiS_Private *SiS_Pr);
extern void		SiS_DisableBridge(struct SiS_Private *);
extern bool		SiS_SetCRT2Group(struct SiS_Private *, unsigned short);
extern unsigned short	SiS_GetRatePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern void		SiS_WaitRetrace1(struct SiS_Private *SiS_Pr);
extern unsigned short	SiS_GetResInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern unsigned short	SiS_GetCH700x(struct SiS_Private *SiS_Pr, unsigned short tempax);
extern unsigned short	SiS_GetVCLK2Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short RRTI);
extern bool		SiS_IsVAMode(struct SiS_Private *);
extern bool		SiS_IsDualEdge(struct SiS_Private *);
extern unsigned int	sisfb_read_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg);
extern void		sisfb_write_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg,
unsigned int val);
extern void		sisfb_write_nbridge_pci_byte(struct SiS_Private *SiS_Pr, int reg,
unsigned char val);
extern unsigned int	sisfb_read_mio_pci_word(struct SiS_Private *SiS_Pr, int reg);
