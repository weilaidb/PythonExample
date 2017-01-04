#define _PLATFORMS_ISERIES_CALL_PCI_H
struct HvCallPci_DsaAddr ;
union HvDsaMap ;
struct HvCallPci_LoadReturn ;
enum HvCallPci_DeviceType ;
struct HvCallPci_DeviceInfo ;
struct HvCallPci_BusUnitInfo ;
struct HvCallPci_BridgeInfo ;
enum ;
struct HvCallPci_BarParms ;
enum HvCallPci_VpdType ;
#define HvCallPciConfigLoad8		HvCallPci + 0
#define HvCallPciConfigLoad16		HvCallPci + 1
#define HvCallPciConfigLoad32		HvCallPci + 2
#define HvCallPciConfigStore8		HvCallPci + 3
#define HvCallPciConfigStore16		HvCallPci + 4
#define HvCallPciConfigStore32		HvCallPci + 5
#define HvCallPciEoi			HvCallPci + 16
#define HvCallPciGetBarParms		HvCallPci + 18
#define HvCallPciMaskFisr		HvCallPci + 20
#define HvCallPciUnmaskFisr		HvCallPci + 21
#define HvCallPciSetSlotReset		HvCallPci + 25
#define HvCallPciGetDeviceInfo		HvCallPci + 27
#define HvCallPciGetCardVpd		HvCallPci + 28
#define HvCallPciBarLoad8		HvCallPci + 40
#define HvCallPciBarLoad16		HvCallPci + 41
#define HvCallPciBarLoad32		HvCallPci + 42
#define HvCallPciBarLoad64		HvCallPci + 43
#define HvCallPciBarStore8		HvCallPci + 44
#define HvCallPciBarStore16		HvCallPci + 45
#define HvCallPciBarStore32		HvCallPci + 46
#define HvCallPciBarStore64		HvCallPci + 47
#define HvCallPciMaskInterrupts		HvCallPci + 48
#define HvCallPciUnmaskInterrupts	HvCallPci + 49
#define HvCallPciGetBusUnitInfo		HvCallPci + 50
static inline u64 HvCallPci_configLoad16(u16 busNumber, u8 subBusNumber,
u8 deviceId, u32 offset, u16 *value)
static inline u64 HvCallPci_configLoad32(u16 busNumber, u8 subBusNumber,
u8 deviceId, u32 offset, u32 *value)
static inline u64 HvCallPci_configStore8(u16 busNumber, u8 subBusNumber,
u8 deviceId, u32 offset, u8 value)
static inline u64 HvCallPci_eoi(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm)
static inline u64 HvCallPci_getBarParms(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm, u8 barNumberParm, u64 parms, u32 sizeofParms)
static inline u64 HvCallPci_maskFisr(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm, u64 fisrMask)
static inline u64 HvCallPci_unmaskFisr(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm, u64 fisrMask)
static inline u64 HvCallPci_getDeviceInfo(u16 busNumberParm, u8 subBusParm,
u8 deviceNumberParm, u64 parms, u32 sizeofParms)
static inline u64 HvCallPci_maskInterrupts(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm, u64 interruptMask)
static inline u64 HvCallPci_unmaskInterrupts(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm, u64 interruptMask)
static inline u64 HvCallPci_getBusUnitInfo(u16 busNumberParm, u8 subBusParm,
u8 deviceIdParm, u64 parms, u32 sizeofParms)
static inline int HvCallPci_getBusVpd(u16 busNumParm, u64 destParm,
u16 sizeParm)
