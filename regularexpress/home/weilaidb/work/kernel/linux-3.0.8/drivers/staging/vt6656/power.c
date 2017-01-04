static int msglevel = MSG_LEVEL_INFO;
void PSvEnablePowerSaving(void *hDeviceContext,
WORD wListenInterval)
void PSvDisablePowerSaving(void *hDeviceContext)
BOOL PSbConsiderPowerDown(void *hDeviceContext,
BOOL bCheckRxDMA,
BOOL bCheckCountToWakeUp)
void PSvSendPSPOLL(void *hDeviceContext)
BOOL PSbSendNullPacket(void *hDeviceContext)
BOOL PSbIsNextTBTTWakeUp(void *hDeviceContext)
