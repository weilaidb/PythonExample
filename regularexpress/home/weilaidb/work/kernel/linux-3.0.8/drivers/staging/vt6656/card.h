#define __CARD_H__
typedef enum _CARD_PHY_TYPE  CARD_PHY_TYPE, *PCARD_PHY_TYPE;
typedef enum _CARD_OP_MODE  CARD_OP_MODE, *PCARD_OP_MODE;
#define CB_MAX_CHANNEL_24G  14
#define CB_MAX_CHANNEL_5G       42
#define CB_MAX_CHANNEL      (CB_MAX_CHANNEL_24G+CB_MAX_CHANNEL_5G)
BOOL CARDbSetMediaChannel(void *pDeviceHandler,
unsigned int uConnectionChannel);
void CARDvSetRSPINF(void *pDeviceHandler, BYTE byBBType);
void vUpdateIFS(void *pDeviceHandler);
void CARDvUpdateBasicTopRate(void *pDeviceHandler);
BOOL CARDbAddBasicRate(void *pDeviceHandler, WORD wRateIdx);
BOOL CARDbIsOFDMinBasicRate(void *pDeviceHandler);
void CARDvAdjustTSF(void *pDeviceHandler, BYTE byRxRate,
QWORD qwBSSTimestamp, QWORD qwLocalTSF);
BOOL CARDbGetCurrentTSF(void *pDeviceHandler, PQWORD pqwCurrTSF);
BOOL CARDbClearCurrentTSF(void *pDeviceHandler);
void CARDvSetFirstNextTBTT(void *pDeviceHandler, WORD wBeaconInterval);
void CARDvUpdateNextTBTT(void *pDeviceHandler, QWORD qwTSF,
WORD wBeaconInterval);
QWORD CARDqGetNextTBTT(QWORD qwTSF, WORD wBeaconInterval);
QWORD CARDqGetTSFOffset(BYTE byRxRate, QWORD qwTSF1, QWORD qwTSF2);
BOOL CARDbRadioPowerOff(void *pDeviceHandler);
BOOL CARDbRadioPowerOn(void *pDeviceHandler);
BYTE CARDbyGetPktType(void *pDeviceHandler);
void CARDvSetBSSMode(void *pDeviceHandler);
BOOL CARDbChannelSwitch(void *pDeviceHandler,
BYTE byMode,
BYTE byNewChannel,
BYTE byCount);
