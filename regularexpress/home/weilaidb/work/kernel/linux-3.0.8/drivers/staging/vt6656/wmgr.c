static int          msglevel                =MSG_LEVEL_INFO;
static BOOL ChannelExceedZoneType(
PSDevice pDevice,
BYTE byCurrChannel
);
static
PSTxMgmtPacket
s_MgrMakeAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PBYTE pDAddr,
WORD wCurrCapInfo,
WORD wListenInterval,
PWLAN_IE_SSID pCurrSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
void
s_vMgrRxAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
unsigned int  uNodeIndex
);
static
PSTxMgmtPacket
s_MgrMakeReAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PBYTE pDAddr,
WORD wCurrCapInfo,
WORD wListenInterval,
PWLAN_IE_SSID pCurrSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
void
s_vMgrRxAssocResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
BOOL bReAssocType
);
static
void
s_vMgrRxDisassociation(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
);
static
void
s_vMgrRxAuthenSequence_1(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
);
static
void
s_vMgrRxAuthenSequence_2(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
);
static
void
s_vMgrRxAuthenSequence_3(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
);
static
void
s_vMgrRxAuthenSequence_4(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
);
static
void
s_vMgrRxAuthentication(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
);
static
void
s_vMgrRxDeauthentication(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
);
static
void
s_vMgrRxProbeRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
);
static
void
s_vMgrRxProbeResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
);
static
void
s_vMgrRxBeacon(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
BOOL bInScan
);
static
void
s_vMgrFormatTIM(
PSMgmtObject pMgmt,
PWLAN_IE_TIM pTIM
);
static
PSTxMgmtPacket
s_MgrMakeBeacon(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wCurrBeaconPeriod,
unsigned int uCurrChannel,
WORD wCurrATIMWinodw,
PWLAN_IE_SSID pCurrSSID,
PBYTE pCurrBSSID,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
PSTxMgmtPacket
s_MgrMakeAssocResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wAssocStatus,
WORD wAssocAID,
PBYTE pDstAddr,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
PSTxMgmtPacket
s_MgrMakeReAssocResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wAssocStatus,
WORD wAssocAID,
PBYTE pDstAddr,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
PSTxMgmtPacket
s_MgrMakeProbeResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wCurrBeaconPeriod,
unsigned int uCurrChannel,
WORD wCurrATIMWinodw,
PBYTE pDstAddr,
PWLAN_IE_SSID pCurrSSID,
PBYTE pCurrBSSID,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates,
BYTE byPHYType
);
static
void
s_vMgrLogStatus(
PSMgmtObject pMgmt,
WORD wStatus
);
static
void
s_vMgrSynchBSS (
PSDevice      pDevice,
unsigned int          uBSSMode,
PKnownBSS     pCurr,
PCMD_STATUS  pStatus
);
static BOOL
s_bCipherMatch (
PKnownBSS                        pBSSNode,
NDIS_802_11_ENCRYPTION_STATUS    EncStatus,
PBYTE                           pbyCCSPK,
PBYTE                           pbyCCSGK
);
static void  Encyption_Rebuild(
PSDevice pDevice,
PKnownBSS pCurr
);
void vMgrObjectInit(void *hDeviceContext)
void vMgrAssocBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PCMD_STATUS pStatus)
void vMgrReAssocBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PCMD_STATUS pStatus)
void vMgrDisassocBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PBYTE  abyDestAddress,
WORD    wReason,
PCMD_STATUS pStatus)
static
void
s_vMgrRxAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
unsigned int uNodeIndex
)
static
void
s_vMgrRxReAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
unsigned int uNodeIndex
)
static
void
s_vMgrRxAssocResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
BOOL bReAssocType
)
void vMgrAuthenBeginSta(void *hDeviceContext,
PSMgmtObject  pMgmt,
PCMD_STATUS pStatus)
void vMgrDeAuthenBeginSta(void *hDeviceContext,
PSMgmtObject pMgmt,
PBYTE abyDestAddress,
WORD wReason,
PCMD_STATUS pStatus)
static
void
s_vMgrRxAuthentication(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
)
static
void
s_vMgrRxAuthenSequence_1(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
)
static
void
s_vMgrRxAuthenSequence_2(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
)
static
void
s_vMgrRxAuthenSequence_3(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
)
static
void
s_vMgrRxAuthenSequence_4(
PSDevice pDevice,
PSMgmtObject pMgmt,
PWLAN_FR_AUTHEN pFrame
)
static
void
s_vMgrRxDisassociation(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
)
static
void
s_vMgrRxDeauthentication(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
)
static BOOL
ChannelExceedZoneType(
PSDevice pDevice,
BYTE byCurrChannel
)
static
void
s_vMgrRxBeacon(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket,
BOOL bInScan
)
void vMgrCreateOwnIBSS(void *hDeviceContext,
PCMD_STATUS pStatus)
void vMgrJoinBSSBegin(void *hDeviceContext, PCMD_STATUS pStatus)
static
void
s_vMgrSynchBSS (
PSDevice      pDevice,
unsigned int          uBSSMode,
PKnownBSS     pCurr,
PCMD_STATUS  pStatus
)
;
static void  Encyption_Rebuild(
PSDevice pDevice,
PKnownBSS pCurr
)
static
void
s_vMgrFormatTIM(
PSMgmtObject pMgmt,
PWLAN_IE_TIM pTIM
)
static
PSTxMgmtPacket
s_MgrMakeBeacon(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wCurrBeaconPeriod,
unsigned int uCurrChannel,
WORD wCurrATIMWinodw,
PWLAN_IE_SSID pCurrSSID,
PBYTE pCurrBSSID,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
PSTxMgmtPacket
s_MgrMakeProbeResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wCurrBeaconPeriod,
unsigned int uCurrChannel,
WORD wCurrATIMWinodw,
PBYTE pDstAddr,
PWLAN_IE_SSID pCurrSSID,
PBYTE pCurrBSSID,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates,
BYTE byPHYType
)
PSTxMgmtPacket
s_MgrMakeAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PBYTE pDAddr,
WORD wCurrCapInfo,
WORD wListenInterval,
PWLAN_IE_SSID pCurrSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
PSTxMgmtPacket
s_MgrMakeReAssocRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PBYTE pDAddr,
WORD wCurrCapInfo,
WORD wListenInterval,
PWLAN_IE_SSID pCurrSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
PSTxMgmtPacket
s_MgrMakeAssocResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wAssocStatus,
WORD wAssocAID,
PBYTE pDstAddr,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
PSTxMgmtPacket
s_MgrMakeReAssocResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
WORD wCurrCapInfo,
WORD wAssocStatus,
WORD wAssocAID,
PBYTE pDstAddr,
PWLAN_IE_SUPP_RATES pCurrSuppRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
static
void
s_vMgrRxProbeResponse(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
)
static
void
s_vMgrRxProbeRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket
)
void vMgrRxManagePacket(void *hDeviceContext,
PSMgmtObject pMgmt,
PSRxMgmtPacket pRxPacket)
BOOL bMgrPrepareBeaconToSend(void *hDeviceContext, PSMgmtObject pMgmt)
static
void
s_vMgrLogStatus(
PSMgmtObject pMgmt,
WORD  wStatus
)
BOOL bAdd_PMKID_Candidate(void *hDeviceContext,
PBYTE pbyBSSID,
PSRSNCapObject psRSNCapObj)
void vFlush_PMKID_Candidate(void *hDeviceContext)
static BOOL
s_bCipherMatch (
PKnownBSS                        pBSSNode,
NDIS_802_11_ENCRYPTION_STATUS    EncStatus,
PBYTE                           pbyCCSPK,
PBYTE                           pbyCCSGK
)
