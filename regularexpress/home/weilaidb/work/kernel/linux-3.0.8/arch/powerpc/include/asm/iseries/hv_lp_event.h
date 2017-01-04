#define _ASM_POWERPC_ISERIES_HV_LP_EVENT_H
struct HvLpEvent ;
typedef void (*LpEventHandler)(struct HvLpEvent *);
extern int HvLpEvent_registerHandler(HvLpEvent_Type eventType,
LpEventHandler hdlr);
extern int HvLpEvent_unregisterHandler(HvLpEvent_Type eventType);
extern int HvLpEvent_openPath(HvLpEvent_Type eventType, HvLpIndex lpIndex);
extern int HvLpEvent_closePath(HvLpEvent_Type eventType, HvLpIndex lpIndex);
#define HvLpEvent_Type_Hypervisor 0
#define HvLpEvent_Type_MachineFac 1
#define HvLpEvent_Type_SessionMgr 2
#define HvLpEvent_Type_SpdIo      3
#define HvLpEvent_Type_VirtualBus 4
#define HvLpEvent_Type_PciIo      5
#define HvLpEvent_Type_RioIo      6
#define HvLpEvent_Type_VirtualLan 7
#define HvLpEvent_Type_VirtualIo  8
#define HvLpEvent_Type_NumTypes   9
#define HvLpEvent_Rc_Good 0
#define HvLpEvent_Rc_BufferNotAvailable 1
#define HvLpEvent_Rc_Cancelled 2
#define HvLpEvent_Rc_GenericError 3
#define HvLpEvent_Rc_InvalidAddress 4
#define HvLpEvent_Rc_InvalidPartition 5
#define HvLpEvent_Rc_InvalidSize 6
#define HvLpEvent_Rc_InvalidSubtype 7
#define HvLpEvent_Rc_InvalidSubtypeData 8
#define HvLpEvent_Rc_InvalidType 9
#define HvLpEvent_Rc_PartitionDead 10
#define HvLpEvent_Rc_PathClosed 11
#define HvLpEvent_Rc_SubtypeError 12
#define HvLpEvent_Function_Ack 0
#define HvLpEvent_Function_Int 1
#define HvLpEvent_AckInd_NoAck 0
#define HvLpEvent_AckInd_DoAck 1
#define HvLpEvent_AckType_ImmediateAck 0
#define HvLpEvent_AckType_DeferredAck 1
#define HV_LP_EVENT_INT			0x01
#define HV_LP_EVENT_DO_ACK		0x02
#define HV_LP_EVENT_DEFERRED_ACK	0x04
#define HV_LP_EVENT_VALID		0x80
#define HvLpDma_Direction_LocalToRemote 0
#define HvLpDma_Direction_RemoteToLocal 1
#define HvLpDma_AddressType_TceIndex 0
#define HvLpDma_AddressType_RealAddress 1
#define HvLpDma_Rc_Good 0
#define HvLpDma_Rc_Error 1
#define HvLpDma_Rc_PartitionDead 2
#define HvLpDma_Rc_PathClosed 3
#define HvLpDma_Rc_InvalidAddress 4
#define HvLpDma_Rc_InvalidLength 5
static inline int hvlpevent_is_valid(struct HvLpEvent *h)
static inline void hvlpevent_invalidate(struct HvLpEvent *h)
static inline int hvlpevent_is_int(struct HvLpEvent *h)
static inline int hvlpevent_is_ack(struct HvLpEvent *h)
static inline int hvlpevent_need_ack(struct HvLpEvent *h)
