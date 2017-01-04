static int          msglevel                =MSG_LEVEL_INFO;
static
void
s_vProbeChannel(
PSDevice pDevice
);
static
PSTxMgmtPacket
s_MgrMakeProbeRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PBYTE pScanBSSID,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
BOOL
s_bCommandComplete (
PSDevice pDevice
);
static BOOL s_bClearBSSID_SCAN(void *hDeviceContext);
static
void
vAdHocBeaconStop(PSDevice  pDevice)
static
void
vAdHocBeaconRestart(PSDevice pDevice)
static
void
s_vProbeChannel(
PSDevice pDevice
)
PSTxMgmtPacket
s_MgrMakeProbeRequest(
PSDevice pDevice,
PSMgmtObject pMgmt,
PBYTE pScanBSSID,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
void vCommandTimerWait(void *hDeviceContext, unsigned int MSecond)
void vRunCommand(void *hDeviceContext)
static
BOOL
s_bCommandComplete (
PSDevice pDevice
)
BOOL bScheduleCommand(void *hDeviceContext,
CMD_CODE eCommand,
PBYTE pbyItem0)
static BOOL s_bClearBSSID_SCAN(void *hDeviceContext)
void vResetCommandTimer(void *hDeviceContext)
void BSSvSecondTxData(void *hDeviceContext)
