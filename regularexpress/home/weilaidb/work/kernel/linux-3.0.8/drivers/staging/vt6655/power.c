static int          msglevel                =MSG_LEVEL_INFO;
void
PSvEnablePowerSaving(
void *hDeviceContext,
unsigned short wListenInterval
)
void
PSvDisablePowerSaving(
void *hDeviceContext
)
bool
PSbConsiderPowerDown(
void *hDeviceContext,
bool bCheckRxDMA,
bool bCheckCountToWakeUp
)
void
PSvSendPSPOLL(
void *hDeviceContext
)
bool
PSbSendNullPacket(
void *hDeviceContext
)
bool
PSbIsNextTBTTWakeUp(
void *hDeviceContext
)
