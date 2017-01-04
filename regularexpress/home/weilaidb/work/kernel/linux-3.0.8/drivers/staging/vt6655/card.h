#define __CARD_H__
#define CARD_LB_NONE            MAKEWORD(MAC_LB_NONE, 0)
#define CARD_LB_MAC             MAKEWORD(MAC_LB_INTERNAL, 0)
#define CARD_LB_PHY             MAKEWORD(MAC_LB_EXT, 0)
#define DEFAULT_MSDU_LIFETIME           512
#define DEFAULT_MSDU_LIFETIME_RES_64us  8000
#define DEFAULT_MGN_LIFETIME            8
#define DEFAULT_MGN_LIFETIME_RES_64us   125
#define CB_MAX_CHANNEL_24G      14
#define CB_MAX_CHANNEL_5G       42
#define CB_MAX_CHANNEL          (CB_MAX_CHANNEL_24G+CB_MAX_CHANNEL_5G)
typedef enum _CARD_PHY_TYPE  CARD_PHY_TYPE, *PCARD_PHY_TYPE;
typedef enum _CARD_PKT_TYPE  CARD_PKT_TYPE, *PCARD_PKT_TYPE;
typedef enum _CARD_STATUS_TYPE  CARD_STATUS_TYPE, *PCARD_STATUS_TYPE;
typedef enum _CARD_OP_MODE  CARD_OP_MODE, *PCARD_OP_MODE;
void CARDvSetRSPINF(void *pDeviceHandler, CARD_PHY_TYPE ePHYType);
void vUpdateIFS(void *pDeviceHandler);
void CARDvUpdateBasicTopRate(void *pDeviceHandler);
bool CARDbAddBasicRate(void *pDeviceHandler, unsigned short wRateIdx);
bool CARDbIsOFDMinBasicRate(void *pDeviceHandler);
void CARDvSetLoopbackMode(unsigned long dwIoBase, unsigned short wLoopbackMode);
bool CARDbSoftwareReset(void *pDeviceHandler);
void CARDvSetFirstNextTBTT(unsigned long dwIoBase, unsigned short wBeaconInterval);
void CARDvUpdateNextTBTT(unsigned long dwIoBase, QWORD qwTSF, unsigned short wBeaconInterval);
bool CARDbGetCurrentTSF(unsigned long dwIoBase, PQWORD pqwCurrTSF);
QWORD CARDqGetNextTBTT(QWORD qwTSF, unsigned short wBeaconInterval);
QWORD CARDqGetTSFOffset(unsigned char byRxRate, QWORD qwTSF1, QWORD qwTSF2);
bool CARDbSetTxPower(void *pDeviceHandler, unsigned long ulTxPower);
unsigned char CARDbyGetPktType(void *pDeviceHandler);
void CARDvSafeResetTx(void *pDeviceHandler);
void CARDvSafeResetRx(void *pDeviceHandler);
bool CARDbRadioPowerOff(void *pDeviceHandler);
bool CARDbRadioPowerOn(void *pDeviceHandler);
bool CARDbIsShortPreamble(void *pDeviceHandler);
bool CARDbIsShorSlotTime(void *pDeviceHandler);
bool CARDbSetPhyParameter(void *pDeviceHandler, CARD_PHY_TYPE ePHYType, unsigned short wCapInfo, unsigned char byERPField, void *pvSupportRateIEs, void *pvExtSupportRateIEs);
bool CARDbUpdateTSF(void *pDeviceHandler, unsigned char byRxRate, QWORD qwBSSTimestamp, QWORD qwLocalTSF);
bool CARDbStopTxPacket(void *pDeviceHandler, CARD_PKT_TYPE ePktType);
bool CARDbStartTxPacket(void *pDeviceHandler, CARD_PKT_TYPE ePktType);
bool CARDbSetBeaconPeriod(void *pDeviceHandler, unsigned short wBeaconInterval);
bool CARDbSetBSSID(void *pDeviceHandler, unsigned char *pbyBSSID, CARD_OP_MODE eOPMode);
bool
CARDbPowerDown(
void *pDeviceHandler
);
bool CARDbSetTxDataRate(
void *pDeviceHandler,
unsigned short wDataRate
);
bool CARDbRemoveKey (void *pDeviceHandler, unsigned char *pbyBSSID);
bool
CARDbAdd_PMKID_Candidate (
void *pDeviceHandler,
unsigned char *pbyBSSID,
bool bRSNCapExist,
unsigned short wRSNCap
);
void *
CARDpGetCurrentAddress (
void *pDeviceHandler
);
bool
CARDbStartMeasure (
void *pDeviceHandler,
void *pvMeasureEIDs,
unsigned int uNumOfMeasureEIDs
);
bool
CARDbChannelSwitch (
void *pDeviceHandler,
unsigned char byMode,
unsigned char byNewChannel,
unsigned char byCount
);
bool
CARDbSetQuiet (
void *pDeviceHandler,
bool bResetQuiet,
unsigned char byQuietCount,
unsigned char byQuietPeriod,
unsigned short wQuietDuration,
unsigned short wQuietOffset
);
bool
CARDbStartQuiet (
void *pDeviceHandler
);
void
CARDvSetPowerConstraint (
void *pDeviceHandler,
unsigned char byChannel,
char byPower
);
void
CARDvGetPowerCapability (
void *pDeviceHandler,
unsigned char *pbyMinPower,
unsigned char *pbyMaxPower
);
char
CARDbyGetTransmitPower (
void *pDeviceHandler
);
