#define _ASM_POWERPC_ISERIES_HV_CALL_EVENT_H
struct HvLpEvent;
typedef u8 HvLpEvent_Type;
typedef u8 HvLpEvent_AckInd;
typedef u8 HvLpEvent_AckType;
typedef u8 HvLpDma_Direction;
typedef u8 HvLpDma_AddressType;
typedef u64 HvLpEvent_Rc;
typedef u64 HvLpDma_Rc;
#define HvCallEventAckLpEvent				HvCallEvent +  0
#define HvCallEventCancelLpEvent			HvCallEvent +  1
#define HvCallEventCloseLpEventPath			HvCallEvent +  2
#define HvCallEventDmaBufList				HvCallEvent +  3
#define HvCallEventDmaSingle				HvCallEvent +  4
#define HvCallEventDmaToSp				HvCallEvent +  5
#define HvCallEventGetOverflowLpEvents			HvCallEvent +  6
#define HvCallEventGetSourceLpInstanceId		HvCallEvent +  7
#define HvCallEventGetTargetLpInstanceId		HvCallEvent +  8
#define HvCallEventOpenLpEventPath			HvCallEvent +  9
#define HvCallEventSetLpEventStack			HvCallEvent + 10
#define HvCallEventSignalLpEvent			HvCallEvent + 11
#define HvCallEventSignalLpEventParms			HvCallEvent + 12
#define HvCallEventSetInterLpQueueIndex			HvCallEvent + 13
#define HvCallEventSetLpEventQueueInterruptProc		HvCallEvent + 14
#define HvCallEventRouter15				HvCallEvent + 15
static inline void HvCallEvent_getOverflowLpEvents(u8 queueIndex)
static inline void HvCallEvent_setInterLpQueueIndex(u8 queueIndex)
static inline void HvCallEvent_setLpEventStack(u8 queueIndex,
char *eventStackAddr, u32 eventStackSize)
static inline void HvCallEvent_setLpEventQueueInterruptProc(u8 queueIndex,
u16 lpLogicalProcIndex)
static inline HvLpEvent_Rc HvCallEvent_signalLpEvent(struct HvLpEvent *event)
static inline HvLpEvent_Rc HvCallEvent_signalLpEventFast(HvLpIndex targetLp,
HvLpEvent_Type type, u16 subtype, HvLpEvent_AckInd ackInd,
HvLpEvent_AckType ackType, HvLpInstanceId sourceInstanceId,
HvLpInstanceId targetInstanceId, u64 correlationToken,
u64 eventData1, u64 eventData2, u64 eventData3,
u64 eventData4, u64 eventData5)
extern void *iseries_hv_alloc(size_t size, dma_addr_t *dma_handle, gfp_t flag);
extern void iseries_hv_free(size_t size, void *vaddr, dma_addr_t dma_handle);
extern dma_addr_t iseries_hv_map(void *vaddr, size_t size,
enum dma_data_direction direction);
extern void iseries_hv_unmap(dma_addr_t dma_handle, size_t size,
enum dma_data_direction direction);
static inline HvLpEvent_Rc HvCallEvent_ackLpEvent(struct HvLpEvent *event)
static inline HvLpEvent_Rc HvCallEvent_cancelLpEvent(struct HvLpEvent *event)
static inline HvLpInstanceId HvCallEvent_getSourceLpInstanceId(
HvLpIndex targetLp, HvLpEvent_Type type)
static inline HvLpInstanceId HvCallEvent_getTargetLpInstanceId(
HvLpIndex targetLp, HvLpEvent_Type type)
static inline void HvCallEvent_openLpEventPath(HvLpIndex targetLp,
HvLpEvent_Type type)
static inline void HvCallEvent_closeLpEventPath(HvLpIndex targetLp,
HvLpEvent_Type type)
static inline HvLpDma_Rc HvCallEvent_dmaBufList(HvLpEvent_Type type,
HvLpIndex remoteLp, HvLpDma_Direction direction,
HvLpInstanceId localInstanceId,
HvLpInstanceId remoteInstanceId,
HvLpDma_AddressType localAddressType,
HvLpDma_AddressType remoteAddressType,
u64 localBufList, u64 remoteBufList, u32 transferLength)
static inline HvLpDma_Rc HvCallEvent_dmaToSp(void *local, u32 remote,
u32 length, HvLpDma_Direction dir)
