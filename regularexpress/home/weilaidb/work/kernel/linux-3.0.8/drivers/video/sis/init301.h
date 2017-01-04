#define  _INIT301_H_
#undef SIS_CP
static const unsigned char SiS_YPbPrTable[3][64] = ;
static const unsigned char SiS_TVPhase[] =
;
static const unsigned char SiS_HiTVGroup3_1[] = ;
static const unsigned char SiS_HiTVGroup3_2[] = ;
static const unsigned char SiS_Part2CLVX_1[] = ;
static const unsigned char SiS_Part2CLVX_2[] = ;
static const unsigned char SiS_Part2CLVX_3[] = ;
static const unsigned char SiS_Part2CLVX_4[] = ;
static const unsigned char SiS_Part2CLVX_5[] = ;
static const unsigned char SiS_Part2CLVX_6[] = ;
static const unsigned char SiS_LCDStruct661[] = ;
static unsigned char SiS300_TrumpionData[14][80] = ;
void		SiS_UnLockCRT2(struct SiS_Private *SiS_Pr);
void		SiS_EnableCRT2(struct SiS_Private *SiS_Pr);
unsigned short	SiS_GetRatePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex);
void		SiS_WaitRetrace1(struct SiS_Private *SiS_Pr);
bool		SiS_IsDualEdge(struct SiS_Private *SiS_Pr);
bool		SiS_IsVAMode(struct SiS_Private *SiS_Pr);
void		SiS_GetVBInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, int checkcrt2mode);
void		SiS_SetYPbPr(struct SiS_Private *SiS_Pr);
void    	SiS_SetTVMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
void		SiS_GetLCDResInfo(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
unsigned short	SiS_GetVCLK2Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex);
unsigned short	SiS_GetResInfo(struct SiS_Private *SiS_Pr,unsigned short ModeNo,unsigned short ModeIdIndex);
void		SiS_DisableBridge(struct SiS_Private *SiS_Pr);
bool		SiS_SetCRT2Group(struct SiS_Private *SiS_Pr, unsigned short ModeNo);
void		SiS_SiS30xBLOn(struct SiS_Private *SiS_Pr);
void		SiS_SiS30xBLOff(struct SiS_Private *SiS_Pr);
void		SiS_SetCH700x(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val);
unsigned short	SiS_GetCH700x(struct SiS_Private *SiS_Pr, unsigned short tempax);
void		SiS_SetCH701x(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val);
unsigned short	SiS_GetCH701x(struct SiS_Private *SiS_Pr, unsigned short tempax);
void		SiS_SetCH70xxANDOR(struct SiS_Private *SiS_Pr, unsigned short reg,
unsigned char orval,unsigned short andval);
static void	SiS_Chrontel701xOn(struct SiS_Private *SiS_Pr);
static void	SiS_Chrontel701xOff(struct SiS_Private *SiS_Pr);
static void	SiS_ChrontelInitTVVSync(struct SiS_Private *SiS_Pr);
static void	SiS_ChrontelDoSomething1(struct SiS_Private *SiS_Pr);
void		SiS_Chrontel701xBLOn(struct SiS_Private *SiS_Pr);
void		SiS_Chrontel701xBLOff(struct SiS_Private *SiS_Pr);
static  bool	SiS_SetTrumpionBlock(struct SiS_Private *SiS_Pr, unsigned char *dataptr);
void		SiS_SetChrontelGPIO(struct SiS_Private *SiS_Pr, unsigned short myvbinfo);
void		SiS_DDC2Delay(struct SiS_Private *SiS_Pr, unsigned int delaytime);
unsigned short	SiS_ReadDDC1Bit(struct SiS_Private *SiS_Pr);
unsigned short	SiS_HandleDDC(struct SiS_Private *SiS_Pr, unsigned int VBFlags, int VGAEngine,
unsigned short adaptnum, unsigned short DDCdatatype,
unsigned char *buffer, unsigned int VBFlags2);
static unsigned short	SiS_InitDDCRegs(struct SiS_Private *SiS_Pr, unsigned int VBFlags,
int VGAEngine, unsigned short adaptnum, unsigned short DDCdatatype,
bool checkcr32, unsigned int VBFlags2);
static unsigned short	SiS_ProbeDDC(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_ReadDDC(struct SiS_Private *SiS_Pr, unsigned short DDCdatatype,
unsigned char *buffer);
static void		SiS_SetSwitchDDC2(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_SetStart(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_SetStop(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_SetSCLKLow(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_SetSCLKHigh(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_ReadDDC2Data(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_WriteDDC2Data(struct SiS_Private *SiS_Pr, unsigned short tempax);
static unsigned short	SiS_CheckACK(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_WriteDABDDC(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_PrepareReadDDC(struct SiS_Private *SiS_Pr);
static unsigned short	SiS_PrepareDDC(struct SiS_Private *SiS_Pr);
static void		SiS_SendACK(struct SiS_Private *SiS_Pr, unsigned short yesno);
static unsigned short	SiS_DoProbeDDC(struct SiS_Private *SiS_Pr);
static void		SiS_OEM300Setting(struct SiS_Private *SiS_Pr,
unsigned short ModeNo, unsigned short ModeIdIndex, unsigned short RefTabindex);
static void		SetOEMLCDData2(struct SiS_Private *SiS_Pr,
unsigned short ModeNo, unsigned short ModeIdIndex,unsigned short RefTableIndex);
static void		SiS_OEM310Setting(struct SiS_Private *SiS_Pr,
unsigned short ModeNo,unsigned short ModeIdIndex, unsigned short RRTI);
static void		SiS_OEM661Setting(struct SiS_Private *SiS_Pr,
unsigned short ModeNo,unsigned short ModeIdIndex, unsigned short RRTI);
static void		SiS_FinalizeLCD(struct SiS_Private *, unsigned short, unsigned short);
extern void		SiS_DisplayOff(struct SiS_Private *SiS_Pr);
extern void		SiS_DisplayOn(struct SiS_Private *SiS_Pr);
extern bool		SiS_SearchModeID(struct SiS_Private *, unsigned short *, unsigned short *);
extern unsigned short	SiS_GetModeFlag(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern unsigned short	SiS_GetModePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex);
extern unsigned short	SiS_GetColorDepth(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex);
extern unsigned short	SiS_GetOffset(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
unsigned short RefreshRateTableIndex);
extern void		SiS_LoadDAC(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern void		SiS_CalcLCDACRT1Timing(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex);
extern void		SiS_CalcCRRegisters(struct SiS_Private *SiS_Pr, int depth);
extern unsigned short	SiS_GetRefCRTVCLK(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide);
extern unsigned short	SiS_GetRefCRT1CRTC(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide);
extern void		SiS_GetFIFOThresholdIndex300(struct SiS_Private *SiS_Pr, unsigned short *tempbx,
unsigned short *tempcl);
extern unsigned short	SiS_GetFIFOThresholdB300(unsigned short tempbx, unsigned short tempcl);
extern unsigned short	SiS_GetLatencyFactor630(struct SiS_Private *SiS_Pr, unsigned short index);
extern unsigned int	sisfb_read_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg);
extern unsigned int	sisfb_read_lpc_pci_dword(struct SiS_Private *SiS_Pr, int reg);
