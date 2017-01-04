#define __POWER_H__
#define     C_PWBT                   1000
#define     PS_FAST_INTERVAL         1
#define     PS_MAX_INTERVAL          4
bool
PSbConsiderPowerDown(
void *hDeviceContext,
bool bCheckRxDMA,
bool bCheckCountToWakeUp
);
void
PSvDisablePowerSaving(
void *hDeviceContext
);
void
PSvEnablePowerSaving(
void *hDeviceContext,
unsigned short wListenInterval
);
void
PSvSendPSPOLL(
void *hDeviceContext
);
bool
PSbSendNullPacket(
void *hDeviceContext
);
bool
PSbIsNextTBTTWakeUp(
void *hDeviceContext
);
