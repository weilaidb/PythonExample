static int          msglevel                =MSG_LEVEL_INFO;
#define CB_TXPOWER_LEVEL            6
const WORD cwRXBCNTSFOff[MAX_RATE] =
;
BOOL CARDbSetMediaChannel(void *pDeviceHandler, unsigned int uConnectionChannel)
static WORD swGetCCKControlRate(void *pDeviceHandler, WORD wRateIdx)
static WORD swGetOFDMControlRate(void *pDeviceHandler, WORD wRateIdx)
void
CARDvCaculateOFDMRParameter (
WORD wRate,
BYTE byBBType,
PBYTE pbyTxRate,
PBYTE pbyRsvTime
)
void CARDvSetRSPINF(void *pDeviceHandler, BYTE byBBType)
void vUpdateIFS(void *pDeviceHandler)
void CARDvUpdateBasicTopRate(void *pDeviceHandler)
BOOL CARDbAddBasicRate(void *pDeviceHandler, WORD wRateIdx)
BOOL CARDbIsOFDMinBasicRate(void *pDeviceHandler)
BYTE CARDbyGetPktType(void *pDeviceHandler)
QWORD CARDqGetTSFOffset (BYTE byRxRate, QWORD qwTSF1, QWORD qwTSF2)
void CARDvAdjustTSF(void *pDeviceHandler, BYTE byRxRate,
QWORD qwBSSTimestamp, QWORD qwLocalTSF)
BOOL CARDbGetCurrentTSF(void *pDeviceHandler, PQWORD pqwCurrTSF)
BOOL CARDbClearCurrentTSF(void *pDeviceHandler)
QWORD CARDqGetNextTBTT (QWORD qwTSF, WORD wBeaconInterval)
void CARDvSetFirstNextTBTT(void *pDeviceHandler, WORD wBeaconInterval)
void CARDvUpdateNextTBTT(void *pDeviceHandler, QWORD qwTSF,
WORD wBeaconInterval)
BOOL CARDbRadioPowerOff(void *pDeviceHandler)
BOOL CARDbRadioPowerOn(void *pDeviceHandler)
void CARDvSetBSSMode(void *pDeviceHandler)
BOOL
CARDbChannelSwitch (
void *pDeviceHandler,
BYTE             byMode,
BYTE             byNewChannel,
BYTE             byCount
)
