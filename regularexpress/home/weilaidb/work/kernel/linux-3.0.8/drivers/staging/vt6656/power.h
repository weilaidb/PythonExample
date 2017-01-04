#define __POWER_H__
#define     C_PWBT                   1000
#define     PS_FAST_INTERVAL         1
#define     PS_MAX_INTERVAL          4
BOOL PSbConsiderPowerDown(void *hDeviceContext,
BOOL bCheckRxDMA,
BOOL bCheckCountToWakeUp);
void PSvDisablePowerSaving(void *hDeviceContext);
void PSvEnablePowerSaving(void *hDeviceContext, WORD wListenInterval);
void PSvSendPSPOLL(void *hDeviceContext);
BOOL PSbSendNullPacket(void *hDeviceContext);
BOOL PSbIsNextTBTTWakeUp(void *hDeviceContext);
