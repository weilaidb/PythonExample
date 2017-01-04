#define _ASM_POWERPC_ISERIES_HV_CALL_XM_H
#define HvCallXmGetTceTableParms	HvCallXm +  0
#define HvCallXmTestBus			HvCallXm +  1
#define HvCallXmConnectBusUnit		HvCallXm +  2
#define HvCallXmLoadTod			HvCallXm +  8
#define HvCallXmTestBusUnit		HvCallXm +  9
#define HvCallXmSetTce			HvCallXm + 11
#define HvCallXmSetTces			HvCallXm + 13
static inline void HvCallXm_getTceTableParms(u64 cb)
static inline u64 HvCallXm_setTce(u64 tceTableToken, u64 tceOffset, u64 tce)
static inline u64 HvCallXm_setTces(u64 tceTableToken, u64 tceOffset,
u64 numTces, u64 tce1, u64 tce2, u64 tce3, u64 tce4)
static inline u64 HvCallXm_testBus(u16 busNumber)
static inline u64 HvCallXm_testBusUnit(u16 busNumber, u8 subBusNumber,
u8 deviceId)
static inline u64 HvCallXm_connectBusUnit(u16 busNumber, u8 subBusNumber,
u8 deviceId, u64 interruptToken)
static inline u64 HvCallXm_loadTod(void)
