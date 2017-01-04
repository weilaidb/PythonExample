static int          msglevel                =MSG_LEVEL_INFO;
#define CB_VT3253_INIT_FOR_RFMD 446
unsigned char byVT3253InitTab_RFMD[CB_VT3253_INIT_FOR_RFMD][2] = ;
#define CB_VT3253B0_INIT_FOR_RFMD 256
unsigned char byVT3253B0_RFMD[CB_VT3253B0_INIT_FOR_RFMD][2] = ;
#define CB_VT3253B0_AGC_FOR_RFMD2959 195
unsigned char byVT3253B0_AGC4_RFMD2959[CB_VT3253B0_AGC_FOR_RFMD2959][2] = ;
#define CB_VT3253B0_INIT_FOR_AIROHA2230 256
unsigned char byVT3253B0_AIROHA2230[CB_VT3253B0_INIT_FOR_AIROHA2230][2] = ;
#define CB_VT3253B0_INIT_FOR_UW2451 256
unsigned char byVT3253B0_UW2451[CB_VT3253B0_INIT_FOR_UW2451][2] = ;
#define CB_VT3253B0_AGC 193
unsigned char byVT3253B0_AGC[CB_VT3253B0_AGC][2] = ;
const unsigned short awcFrameTime[MAX_RATE] =
;
static
unsigned long
s_ulGetRatio(PSDevice pDevice);
static
void
s_vChangeAntenna(
PSDevice pDevice
);
static
void
s_vChangeAntenna (
PSDevice pDevice
)
unsigned int
BBuGetFrameTime (
unsigned char byPreambleType,
unsigned char byPktType,
unsigned int cbFrameLength,
unsigned short wRate
)
void
BBvCaculateParameter (
PSDevice pDevice,
unsigned int cbFrameLength,
unsigned short wRate,
unsigned char byPacketType,
unsigned short *pwPhyLen,
unsigned char *pbyPhySrv,
unsigned char *pbyPhySgn
)
bool BBbReadEmbeded (unsigned long dwIoBase, unsigned char byBBAddr, unsigned char *pbyData)
bool BBbWriteEmbeded (unsigned long dwIoBase, unsigned char byBBAddr, unsigned char byData)
bool BBbIsRegBitsOn (unsigned long dwIoBase, unsigned char byBBAddr, unsigned char byTestBits)
bool BBbIsRegBitsOff (unsigned long dwIoBase, unsigned char byBBAddr, unsigned char byTestBits)
bool BBbVT3253Init (PSDevice pDevice)
void BBvReadAllRegs (unsigned long dwIoBase, unsigned char *pbyBBRegs)
void BBvLoopbackOn (PSDevice pDevice)
void BBvLoopbackOff (PSDevice pDevice)
void
BBvSetShortSlotTime (PSDevice pDevice)
void BBvSetVGAGainOffset(PSDevice pDevice, unsigned char byData)
void
BBvSoftwareReset (unsigned long dwIoBase)
void
BBvPowerSaveModeON (unsigned long dwIoBase)
void
BBvPowerSaveModeOFF (unsigned long dwIoBase)
void
BBvSetTxAntennaMode (unsigned long dwIoBase, unsigned char byAntennaMode)
void
BBvSetRxAntennaMode (unsigned long dwIoBase, unsigned char byAntennaMode)
void
BBvSetDeepSleep (unsigned long dwIoBase, unsigned char byLocalID)
void
BBvExitDeepSleep (unsigned long dwIoBase, unsigned char byLocalID)
static
unsigned long
s_ulGetRatio (PSDevice pDevice)
void
BBvClearAntDivSQ3Value (PSDevice pDevice)
void
BBvAntennaDiversity (PSDevice pDevice, unsigned char byRxRate, unsigned char bySQ3)
void
TimerSQ3CallBack (
void *hDeviceContext
)
void
TimerState1CallBack (
void *hDeviceContext
)
