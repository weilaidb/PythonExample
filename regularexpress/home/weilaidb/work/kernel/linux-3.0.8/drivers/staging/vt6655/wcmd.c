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
unsigned char *pScanBSSID,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
);
static
bool
s_bCommandComplete (
PSDevice pDevice
);
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
unsigned char *pScanBSSID,
PWLAN_IE_SSID pSSID,
PWLAN_IE_SUPP_RATES pCurrRates,
PWLAN_IE_SUPP_RATES pCurrExtSuppRates
)
void
vCommandTimerWait(
void *hDeviceContext,
unsigned int MSecond
)
void
vCommandTimer (
void *hDeviceContext
)
static
bool
s_bCommandComplete (
PSDevice pDevice
)
bool bScheduleCommand (
void *hDeviceContext,
CMD_CODE    eCommand,
unsigned char *pbyItem0
)
bool bClearBSSID_SCAN (
void *hDeviceContext
)
void
vResetCommandTimer(
void *hDeviceContext
)
void
BSSvSecondTxData(
void *hDeviceContext
)
{
PSDevice        pDevice = (PSDevice)hDeviceContext;
PSMgmtObject  pMgmt = &(pDevice->sMgmtObj);
pDevice->nTxDataTimeCout++;
if(pDevice->nTxDataTimeCout<4)
spin_lock_irq(&pDevice->lock);
#if 1
if(((pDevice->bLinkPass ==true)&&(pMgmt->eAuthenMode < WMAC_AUTH_WPA)) ||
(pDevice->fWPA_Authened == true))
