static int          msglevel                =MSG_LEVEL_INFO;
BYTE abyVT3184_AGC[] = ;
BYTE abyVT3184_AL2230[] = ;
BYTE abyVT3184_VT3226D0[] = ;
const WORD awcFrameTime[MAX_RATE] =
;
unsigned int
BBuGetFrameTime (
BYTE byPreambleType,
BYTE byPktType,
unsigned int cbFrameLength,
WORD wRate
)
void
BBvCaculateParameter (
PSDevice pDevice,
unsigned int cbFrameLength,
WORD wRate,
BYTE byPacketType,
PWORD pwPhyLen,
PBYTE pbyPhySrv,
PBYTE pbyPhySgn
)
void
BBvSetAntennaMode (PSDevice pDevice, BYTE byAntennaMode)
BOOL BBbVT3184Init(PSDevice pDevice)
void BBvLoopbackOn (PSDevice pDevice)
void BBvLoopbackOff (PSDevice pDevice)
void
BBvSetShortSlotTime (PSDevice pDevice)
void BBvSetVGAGainOffset(PSDevice pDevice, BYTE byData)
void
BBvSoftwareReset (PSDevice pDevice)
void
BBvSetDeepSleep (PSDevice pDevice)
void
BBvExitDeepSleep (PSDevice pDevice)
static unsigned long s_ulGetLowSQ3(PSDevice pDevice)
static unsigned long s_ulGetRatio(PSDevice pDevice)
static
void
s_vClearSQ3Value (PSDevice pDevice)
void
BBvAntennaDiversity (PSDevice pDevice, BYTE byRxRate, BYTE bySQ3)
void TimerSQ3CallBack(void *hDeviceContext)
void TimerSQ3Tmax3CallBack(void *hDeviceContext)
void
BBvUpdatePreEDThreshold(
PSDevice    pDevice,
BOOL        bScanning)
