#define _BUSLOGIC_H
#define PACKED __attribute__((packed))
#define BusLogic_MaxHostAdapters		16
#define BusLogic_MaxTargetDevices		16
#define BusLogic_ScatterGatherLimit		128
#define BusLogic_MaxTaggedQueueDepth		64
#define BusLogic_MaxAutomaticTaggedQueueDepth	28
#define BusLogic_MinAutomaticTaggedQueueDepth	7
#define BusLogic_TaggedQueueDepthBB		3
#define BusLogic_UntaggedQueueDepth		3
#define BusLogic_UntaggedQueueDepthBB		2
#define BusLogic_DefaultBusSettleTime		2
#define BusLogic_MaxMailboxes			211
#define BusLogic_CCB_AllocationGroupSize	7
#define BusLogic_LineBufferSize			100
#define BusLogic_MessageBufferSize		9700
enum BusLogic_MessageLevel ;
static char *BusLogic_MessageLevelMap[] = ;
#define BusLogic_Announce(Format, Arguments...) \
BusLogic_Message(BusLogic_AnnounceLevel, Format, ##Arguments)
#define BusLogic_Info(Format, Arguments...) \
BusLogic_Message(BusLogic_InfoLevel, Format, ##Arguments)
#define BusLogic_Notice(Format, Arguments...) \
BusLogic_Message(BusLogic_NoticeLevel, Format, ##Arguments)
#define BusLogic_Warning(Format, Arguments...) \
BusLogic_Message(BusLogic_WarningLevel, Format, ##Arguments)
#define BusLogic_Error(Format, Arguments...) \
BusLogic_Message(BusLogic_ErrorLevel, Format, ##Arguments)
enum BusLogic_HostAdapterType  PACKED;
#define BusLogic_MultiMasterAddressCount	4
#define BusLogic_FlashPointAddressCount		256
static int BusLogic_HostAdapterAddressCount[3] = ;
#define BusLogic_MultiMasterHostAdapterP(HostAdapter) \
(HostAdapter->HostAdapterType == BusLogic_MultiMaster)
#define BusLogic_FlashPointHostAdapterP(HostAdapter) \
(HostAdapter->HostAdapterType == BusLogic_FlashPoint)
#define BusLogic_MultiMasterHostAdapterP(HostAdapter) \
(true)
#define BusLogic_FlashPointHostAdapterP(HostAdapter) \
(false)
enum BusLogic_HostAdapterBusType  PACKED;
static char *BusLogic_HostAdapterBusNames[] = ;
static enum BusLogic_HostAdapterBusType BusLogic_HostAdapterBusTypes[] = ;
enum BusLogic_BIOS_DiskGeometryTranslation  PACKED;
struct BusLogic_ByteCounter ;
struct BusLogic_ProbeInfo ;
struct BusLogic_ProbeOptions ;
struct BusLogic_GlobalOptions ;
struct BusLogic_LocalOptions ;
#define BusLogic_ControlRegisterOffset		0
#define BusLogic_StatusRegisterOffset		0
#define BusLogic_CommandParameterRegisterOffset	1
#define BusLogic_DataInRegisterOffset		1
#define BusLogic_InterruptRegisterOffset	2
#define BusLogic_GeometryRegisterOffset		3
union BusLogic_ControlRegister ;
union BusLogic_StatusRegister ;
union BusLogic_InterruptRegister ;
union BusLogic_GeometryRegister ;
enum BusLogic_OperationCode ;
struct BusLogic_BoardID ;
struct BusLogic_Configuration ;
struct BusLogic_SynchronousValue ;
struct BusLogic_SetupInformation ;
struct BusLogic_ExtendedMailboxRequest  PACKED;
enum BusLogic_ISACompatibleIOPort  PACKED;
struct BusLogic_PCIHostAdapterInformation ;
struct BusLogic_ExtendedSetupInformation  PACKED;
enum BusLogic_RoundRobinModeRequest  PACKED;
#define BusLogic_BIOS_BaseOffset		0
#define BusLogic_AutoSCSI_BaseOffset		64
struct BusLogic_FetchHostAdapterLocalRAMRequest ;
struct BusLogic_AutoSCSIData  PACKED;
struct BusLogic_AutoSCSIByte45 ;
#define BusLogic_BIOS_DriveMapOffset		17
struct BusLogic_BIOSDriveMapByte ;
enum BusLogic_SetCCBFormatRequest  PACKED;
enum BusLogic_ActionCode  PACKED;
enum BusLogic_CompletionCode  PACKED;
enum BusLogic_CCB_Opcode  PACKED;
enum BusLogic_DataDirection ;
enum BusLogic_HostAdapterStatus  PACKED;
enum BusLogic_TargetDeviceStatus  PACKED;
enum BusLogic_QueueTag ;
#define BusLogic_CDB_MaxLength			12
typedef unsigned char SCSI_CDB_T[BusLogic_CDB_MaxLength];
struct BusLogic_ScatterGatherSegment ;
enum BusLogic_CCB_Status  PACKED;
struct BusLogic_CCB ;
struct BusLogic_OutgoingMailbox ;
struct BusLogic_IncomingMailbox ;
struct BusLogic_DriverOptions ;
struct BusLogic_TargetFlags ;
#define BusLogic_SizeBuckets			10
typedef unsigned int BusLogic_CommandSizeBuckets_T[BusLogic_SizeBuckets];
struct BusLogic_TargetStatistics ;
#define FlashPoint_BadCardHandle		0xFFFFFFFF
typedef unsigned int FlashPoint_CardHandle_T;
struct FlashPoint_Info ;
struct BusLogic_HostAdapter ;
struct BIOS_DiskParameters ;
struct SCSI_Inquiry ;
static inline void BusLogic_SCSIBusReset(struct BusLogic_HostAdapter *HostAdapter)
static inline void BusLogic_InterruptReset(struct BusLogic_HostAdapter *HostAdapter)
static inline void BusLogic_SoftReset(struct BusLogic_HostAdapter *HostAdapter)
static inline void BusLogic_HardReset(struct BusLogic_HostAdapter *HostAdapter)
static inline unsigned char BusLogic_ReadStatusRegister(struct BusLogic_HostAdapter *HostAdapter)
static inline void BusLogic_WriteCommandParameterRegister(struct BusLogic_HostAdapter
*HostAdapter, unsigned char Value)
static inline unsigned char BusLogic_ReadDataInRegister(struct BusLogic_HostAdapter *HostAdapter)
static inline unsigned char BusLogic_ReadInterruptRegister(struct BusLogic_HostAdapter *HostAdapter)
static inline unsigned char BusLogic_ReadGeometryRegister(struct BusLogic_HostAdapter *HostAdapter)
static inline void BusLogic_StartMailboxCommand(struct BusLogic_HostAdapter *HostAdapter)
static inline void BusLogic_Delay(int Seconds)
static inline u32 Virtual_to_Bus(void *VirtualAddress)
static inline void *Bus_to_Virtual(u32 BusAddress)
static inline u32 Virtual_to_32Bit_Virtual(void *VirtualAddress)
static inline void BusLogic_IncrementErrorCounter(unsigned short *ErrorCounter)
static inline void BusLogic_IncrementByteCounter(struct BusLogic_ByteCounter
*ByteCounter, unsigned int Amount)
static inline void BusLogic_IncrementSizeBucket(BusLogic_CommandSizeBuckets_T CommandSizeBuckets, unsigned int Amount)
#define FlashPoint_FirmwareVersion		"5.02"
#define FlashPoint_NormalInterrupt		0x00
#define FlashPoint_InternalError		0xFE
#define FlashPoint_ExternalBusReset		0xFF
static const char *BusLogic_DriverInfo(struct Scsi_Host *);
static int BusLogic_QueueCommand(struct Scsi_Host *h, struct scsi_cmnd *);
static int BusLogic_BIOSDiskParameters(struct scsi_device *, struct block_device *, sector_t, int *);
static int BusLogic_ProcDirectoryInfo(struct Scsi_Host *, char *, char **, off_t, int, int);
static int BusLogic_SlaveConfigure(struct scsi_device *);
static void BusLogic_QueueCompletedCCB(struct BusLogic_CCB *);
static irqreturn_t BusLogic_InterruptHandler(int, void *);
static int BusLogic_ResetHostAdapter(struct BusLogic_HostAdapter *, bool HardReset);
static void BusLogic_Message(enum BusLogic_MessageLevel, char *, struct BusLogic_HostAdapter *, ...);
static int __init BusLogic_Setup(char *);
