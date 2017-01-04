static int          msglevel                =MSG_LEVEL_INFO;
#define C_SIFS_A        16
#define C_SIFS_BG       10
#define C_EIFS          80
#define C_SLOT_SHORT    9
#define C_SLOT_LONG     20
#define C_CWMIN_A       15
#define C_CWMIN_B       31
#define C_CWMAX         1023
#define WAIT_BEACON_TX_DOWN_TMO         3
static unsigned char abyDefaultSuppRatesG[] = ;
static unsigned char abyDefaultExtSuppRatesG[] = ;
static unsigned char abyDefaultSuppRatesA[] = ;
static unsigned char abyDefaultSuppRatesB[] = ;
const unsigned short cwRXBCNTSFOff[MAX_RATE] =
;
static
void
s_vCaculateOFDMRParameter(
unsigned char byRate,
CARD_PHY_TYPE ePHYType,
unsigned char *pbyTxRate,
unsigned char *pbyRsvTime
);
static
void
s_vCaculateOFDMRParameter (
unsigned char byRate,
CARD_PHY_TYPE ePHYType,
unsigned char *pbyTxRate,
unsigned char *pbyRsvTime
)
static
void
s_vSetRSPINF (PSDevice pDevice, CARD_PHY_TYPE ePHYType, void *pvSupportRateIEs, void *pvExtSupportRateIEs)
bool CARDbIsShortPreamble (void *pDeviceHandler)
bool CARDbIsShorSlotTime (void *pDeviceHandler)
bool CARDbSetPhyParameter (void *pDeviceHandler, CARD_PHY_TYPE ePHYType, unsigned short wCapInfo, unsigned char byERPField, void *pvSupportRateIEs, void *pvExtSupportRateIEs)
bool CARDbUpdateTSF (void *pDeviceHandler, unsigned char byRxRate, QWORD qwBSSTimestamp, QWORD qwLocalTSF)
bool CARDbSetBeaconPeriod (void *pDeviceHandler, unsigned short wBeaconInterval)
bool CARDbStopTxPacket (void *pDeviceHandler, CARD_PKT_TYPE ePktType)
bool CARDbStartTxPacket (void *pDeviceHandler, CARD_PKT_TYPE ePktType)
bool CARDbSetBSSID(void *pDeviceHandler, unsigned char *pbyBSSID, CARD_OP_MODE eOPMode)
bool CARDbSetTxDataRate(
void *pDeviceHandler,
unsigned short wDataRate
)
bool
CARDbPowerDown(
void *pDeviceHandler
)
bool CARDbRadioPowerOff (void *pDeviceHandler)
bool CARDbRadioPowerOn (void *pDeviceHandler)
bool CARDbRemoveKey (void *pDeviceHandler, unsigned char *pbyBSSID)
bool
CARDbAdd_PMKID_Candidate (
void *pDeviceHandler,
unsigned char *pbyBSSID,
bool bRSNCapExist,
unsigned short wRSNCap
)
void *
CARDpGetCurrentAddress (
void *pDeviceHandler
)
bool
CARDbStartMeasure (
void *pDeviceHandler,
void *pvMeasureEIDs,
unsigned int uNumOfMeasureEIDs
)
bool
CARDbChannelSwitch (
void *pDeviceHandler,
unsigned char byMode,
unsigned char byNewChannel,
unsigned char byCount
)
bool
CARDbSetQuiet (
void *pDeviceHandler,
bool bResetQuiet,
unsigned char byQuietCount,
unsigned char byQuietPeriod,
unsigned short wQuietDuration,
unsigned short wQuietOffset
)
bool
CARDbStartQuiet (
void *pDeviceHandler
)
void
CARDvSetPowerConstraint (
void *pDeviceHandler,
unsigned char byChannel,
char byPower
)
void
CARDvGetPowerCapability (
void *pDeviceHandler,
unsigned char *pbyMinPower,
unsigned char *pbyMaxPower
)
char
CARDbyGetTransmitPower (
void *pDeviceHandler
)
void
CARDvSafeResetTx (
void *pDeviceHandler
)
void
CARDvSafeResetRx (
void *pDeviceHandler
)
unsigned short CARDwGetCCKControlRate(void *pDeviceHandler, unsigned short wRateIdx)
unsigned short CARDwGetOFDMControlRate (void *pDeviceHandler, unsigned short wRateIdx)
void CARDvSetRSPINF (void *pDeviceHandler, CARD_PHY_TYPE ePHYType)
void vUpdateIFS (void *pDeviceHandler)
void CARDvUpdateBasicTopRate (void *pDeviceHandler)
bool CARDbAddBasicRate (void *pDeviceHandler, unsigned short wRateIdx)
bool CARDbIsOFDMinBasicRate (void *pDeviceHandler)
unsigned char CARDbyGetPktType (void *pDeviceHandler)
void CARDvSetLoopbackMode (unsigned long dwIoBase, unsigned short wLoopbackMode)
bool CARDbSoftwareReset (void *pDeviceHandler)
QWORD CARDqGetTSFOffset (unsigned char byRxRate, QWORD qwTSF1, QWORD qwTSF2)
bool CARDbGetCurrentTSF (unsigned long dwIoBase, PQWORD pqwCurrTSF)
QWORD CARDqGetNextTBTT (QWORD qwTSF, unsigned short wBeaconInterval)
void CARDvSetFirstNextTBTT (unsigned long dwIoBase, unsigned short wBeaconInterval)
void CARDvUpdateNextTBTT (unsigned long dwIoBase, QWORD qwTSF, unsigned short wBeaconInterval)
