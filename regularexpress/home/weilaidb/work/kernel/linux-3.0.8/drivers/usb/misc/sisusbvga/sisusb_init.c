static void SiSUSB_InitPtr(struct SiS_Private *SiS_Pr)
static void
SiS_SetReg(struct SiS_Private *SiS_Pr, unsigned long port,
unsigned short index, unsigned short data)
static void
SiS_SetRegByte(struct SiS_Private *SiS_Pr, unsigned long port,
unsigned short data)
static unsigned char
SiS_GetReg(struct SiS_Private *SiS_Pr, unsigned long port, unsigned short index)
static unsigned char
SiS_GetRegByte(struct SiS_Private *SiS_Pr, unsigned long port)
static void
SiS_SetRegANDOR(struct SiS_Private *SiS_Pr, unsigned long port,
unsigned short index, unsigned short DataAND,
unsigned short DataOR)
static void
SiS_SetRegAND(struct SiS_Private *SiS_Pr, unsigned long port,
unsigned short index, unsigned short DataAND)
static void
SiS_SetRegOR(struct SiS_Private *SiS_Pr, unsigned long port,
unsigned short index, unsigned short DataOR)
static void SiS_DisplayOn(struct SiS_Private *SiS_Pr)
static void SiSUSBRegInit(struct SiS_Private *SiS_Pr, unsigned long BaseAddr)
static void SiS_GetSysFlags(struct SiS_Private *SiS_Pr)
static void SiSInitPCIetc(struct SiS_Private *SiS_Pr)
static void SiS_SetSegRegLower(struct SiS_Private *SiS_Pr, unsigned short value)
static void SiS_SetSegRegUpper(struct SiS_Private *SiS_Pr, unsigned short value)
static void SiS_SetSegmentReg(struct SiS_Private *SiS_Pr, unsigned short value)
static void SiS_ResetSegmentReg(struct SiS_Private *SiS_Pr)
static void
SiS_SetSegmentRegOver(struct SiS_Private *SiS_Pr, unsigned short value)
static void SiS_ResetSegmentRegOver(struct SiS_Private *SiS_Pr)
static void SiS_ResetSegmentRegisters(struct SiS_Private *SiS_Pr)
static int
SiS_SearchModeID(struct SiS_Private *SiS_Pr, unsigned short *ModeNo,
unsigned short *ModeIdIndex)
static void SiS_HandleCRT1(struct SiS_Private *SiS_Pr)
static unsigned short
SiS_GetColorDepth(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
static unsigned short
SiS_GetOffset(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short rrti)
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
static void SiS_ClearExt1Regs(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
static unsigned short
SiS_GetRatePtr(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
static void SiS_SetCRT1Sync(struct SiS_Private *SiS_Pr, unsigned short rrti)
static void
SiS_SetCRT1CRTC(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short rrti)
static void
SiS_SetCRT1Offset(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short rrti)
static void
SiS_SetCRT1VCLK(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short rrti)
static void
SiS_SetCRT1FIFO_310(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short mi)
static void
SiS_SetVCLKState(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short rrti)
static void
SiS_SetCRT1ModeRegs(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex, unsigned short rrti)
static void
SiS_WriteDAC(struct SiS_Private *SiS_Pr, unsigned long DACData,
unsigned short shiftflag, unsigned short dl, unsigned short ah,
unsigned short al, unsigned short dh)
static void
SiS_LoadDAC(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short mi)
static void
SiS_SetCRT1Group(struct SiS_Private *SiS_Pr, unsigned short ModeNo,
unsigned short ModeIdIndex)
int SiSUSBSetMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo)
int SiSUSBSetVESAMode(struct SiS_Private *SiS_Pr, unsigned short VModeNo)
