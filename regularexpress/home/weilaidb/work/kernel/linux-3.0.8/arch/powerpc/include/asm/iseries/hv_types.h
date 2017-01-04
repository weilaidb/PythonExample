#define _ASM_POWERPC_ISERIES_HV_TYPES_H
typedef u8	HvLpIndex;
typedef u16	HvLpInstanceId;
typedef u64	HvLpTOD;
typedef u64	HvLpSystemSerialNum;
typedef u8	HvLpDeviceSerialNum[12];
typedef u16	HvLpSanHwSet;
typedef u16	HvLpBus;
typedef u16	HvLpBoard;
typedef u16	HvLpCard;
typedef u8	HvLpDeviceType[4];
typedef u8	HvLpDeviceModel[3];
typedef u64	HvIoToken;
typedef u8	HvLpName[8];
typedef u32	HvIoId;
typedef u64	HvRealMemoryIndex;
typedef u32	HvLpIndexMap;
typedef u16	HvLpVrmIndex;
typedef u32	HvXmGenerationId;
typedef u8	HvLpBusPool;
typedef u8	HvLpSharedPoolIndex;
typedef u16	HvLpSharedProcUnitsX100;
typedef u8	HvLpVirtualLanIndex;
typedef u16	HvLpVirtualLanIndexMap;
typedef u16	HvBusNumber;
typedef u8	HvSubBusNumber;
typedef u8	HvAgentId;
#define HVMAXARCHITECTEDLPS		32
#define HVMAXARCHITECTEDVIRTUALLANS	16
#define HVMAXARCHITECTEDVIRTUALDISKS	32
#define HVMAXARCHITECTEDVIRTUALCDROMS	8
#define HVMAXARCHITECTEDVIRTUALTAPES	8
#define HVCHUNKSIZE			(256 * 1024)
#define HVPAGESIZE			(4 * 1024)
#define HVLPMINMEGSPRIMARY		256
#define HVLPMINMEGSSECONDARY		64
#define HVCHUNKSPERMEG			4
#define HVPAGESPERMEG			256
#define HVPAGESPERCHUNK			64
#define HvLpIndexInvalid		((HvLpIndex)0xff)
enum ;
struct HvLpBufferList ;
