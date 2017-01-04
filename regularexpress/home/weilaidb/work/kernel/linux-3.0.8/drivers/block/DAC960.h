#define DAC960_MaxControllers			8
#define DAC960_V1_MaxChannels			3
#define DAC960_V2_MaxChannels			4
#define DAC960_V1_MaxTargets			16
#define DAC960_V2_MaxTargets			128
#define DAC960_MaxLogicalDrives			32
#define DAC960_V1_MaxPhysicalDevices		45
#define DAC960_V2_MaxPhysicalDevices		272
typedef unsigned long DAC960_IO_Address_T;
typedef unsigned long DAC960_PCI_Address_T;
typedef unsigned int DAC960_BusAddress32_T;
typedef unsigned long long DAC960_BusAddress64_T;
typedef unsigned int DAC960_ByteCount32_T;
typedef unsigned long long DAC960_ByteCount64_T;
struct dma_loaf ;
typedef struct DAC960_SCSI_Inquiry
DAC960_SCSI_Inquiry_T;
typedef struct DAC960_SCSI_Inquiry_UnitSerialNumber
DAC960_SCSI_Inquiry_UnitSerialNumber_T;
typedef enum
__attribute__ ((packed))
DAC960_SCSI_RequestSenseKey_T;
typedef struct DAC960_SCSI_RequestSense
DAC960_SCSI_RequestSense_T;
typedef enum
__attribute__ ((packed))
DAC960_V1_CommandOpcode_T;
typedef unsigned char DAC960_V1_CommandIdentifier_T;
#define DAC960_V1_NormalCompletion		0x0000
#define DAC960_V1_CheckConditionReceived	0x0002
#define DAC960_V1_NoDeviceAtAddress		0x0102
#define DAC960_V1_InvalidDeviceAddress		0x0105
#define DAC960_V1_InvalidParameter		0x0105
#define DAC960_V1_IrrecoverableDataError	0x0001
#define DAC960_V1_LogicalDriveNonexistentOrOffline 0x0002
#define DAC960_V1_AccessBeyondEndOfLogicalDrive	0x0105
#define DAC960_V1_BadDataEncountered		0x010C
#define DAC960_V1_DeviceBusy			0x0008
#define DAC960_V1_DeviceNonresponsive		0x000E
#define DAC960_V1_CommandTerminatedAbnormally	0x000F
#define DAC960_V1_UnableToStartDevice		0x0002
#define DAC960_V1_InvalidChannelOrTargetOrModifier 0x0105
#define DAC960_V1_ChannelBusy			0x0106
#define DAC960_V1_ChannelNotStopped		0x0002
#define DAC960_V1_AttemptToRebuildOnlineDrive	0x0002
#define DAC960_V1_RebuildBadBlocksEncountered	0x0003
#define DAC960_V1_NewDiskFailedDuringRebuild	0x0004
#define DAC960_V1_RebuildOrCheckAlreadyInProgress 0x0106
#define DAC960_V1_DependentDiskIsDead		0x0002
#define DAC960_V1_InconsistentBlocksFound	0x0003
#define DAC960_V1_InvalidOrNonredundantLogicalDrive 0x0105
#define DAC960_V1_NoRebuildOrCheckInProgress	0x0105
#define DAC960_V1_RebuildInProgress_DataValid	0x0000
#define DAC960_V1_RebuildFailed_LogicalDriveFailure 0x0002
#define DAC960_V1_RebuildFailed_BadBlocksOnOther 0x0003
#define DAC960_V1_RebuildFailed_NewDriveFailed	0x0004
#define DAC960_V1_RebuildSuccessful		0x0100
#define DAC960_V1_RebuildSuccessfullyTerminated	0x0107
#define DAC960_V1_BackgroundInitSuccessful	0x0100
#define DAC960_V1_BackgroundInitAborted		0x0005
#define DAC960_V1_NoBackgroundInitInProgress	0x0105
#define DAC960_V1_AddCapacityInProgress		0x0004
#define DAC960_V1_AddCapacityFailedOrSuspended	0x00F4
#define DAC960_V1_Config2ChecksumError		0x0002
#define DAC960_V1_ConfigurationSuspended	0x0106
#define DAC960_V1_FailedToConfigureNVRAM	0x0105
#define DAC960_V1_ConfigurationNotSavedStateChange 0x0106
#define DAC960_V1_SubsystemNotInstalled		0x0001
#define DAC960_V1_SubsystemFailed		0x0002
#define DAC960_V1_SubsystemBusy			0x0106
typedef unsigned short DAC960_V1_CommandStatus_T;
typedef struct DAC960_V1_Enquiry
__attribute__ ((packed))
DAC960_V1_Enquiry_T;
typedef struct DAC960_V1_Enquiry2
DAC960_V1_Enquiry2_T;
typedef enum
__attribute__ ((packed))
DAC960_V1_LogicalDriveState_T;
typedef struct DAC960_V1_LogicalDriveInformation
DAC960_V1_LogicalDriveInformation_T;
typedef DAC960_V1_LogicalDriveInformation_T
DAC960_V1_LogicalDriveInformationArray_T[DAC960_MaxLogicalDrives];
typedef enum
__attribute__ ((packed))
DAC960_V1_PerformEventLogOpType_T;
typedef struct DAC960_V1_EventLogEntry
DAC960_V1_EventLogEntry_T;
typedef enum
__attribute__ ((packed))
DAC960_V1_PhysicalDeviceState_T;
typedef struct DAC960_V1_DeviceState
DAC960_V1_DeviceState_T;
typedef struct DAC960_V1_RebuildProgress
DAC960_V1_RebuildProgress_T;
typedef struct DAC960_V1_BackgroundInitializationStatus
DAC960_V1_BackgroundInitializationStatus_T;
typedef struct DAC960_V1_ErrorTableEntry
DAC960_V1_ErrorTableEntry_T;
typedef struct DAC960_V1_ErrorTable
DAC960_V1_ErrorTable_T;
typedef struct DAC960_V1_Config2
DAC960_V1_Config2_T;
typedef struct DAC960_V1_DCDB
DAC960_V1_DCDB_T;
typedef struct DAC960_V1_ScatterGatherSegment
DAC960_V1_ScatterGatherSegment_T;
typedef union DAC960_V1_CommandMailbox
DAC960_V1_CommandMailbox_T;
typedef enum
__attribute__ ((packed))
DAC960_V2_CommandOpcode_T;
typedef enum
__attribute__ ((packed))
DAC960_V2_IOCTL_Opcode_T;
typedef unsigned short DAC960_V2_CommandIdentifier_T;
#define DAC960_V2_NormalCompletion		0x00
#define DAC960_V2_AbormalCompletion		0x02
#define DAC960_V2_DeviceBusy			0x08
#define DAC960_V2_DeviceNonresponsive		0x0E
#define DAC960_V2_DeviceNonresponsive2		0x0F
#define DAC960_V2_DeviceRevervationConflict	0x18
typedef unsigned char DAC960_V2_CommandStatus_T;
typedef struct DAC960_V2_MemoryType
DAC960_V2_MemoryType_T;
typedef enum
__attribute__ ((packed))
DAC960_V2_ProcessorType_T;
typedef struct DAC960_V2_ControllerInfo
DAC960_V2_ControllerInfo_T;
typedef enum
__attribute__ ((packed))
DAC960_V2_LogicalDeviceState_T;
typedef struct DAC960_V2_LogicalDeviceInfo
DAC960_V2_LogicalDeviceInfo_T;
typedef enum
__attribute__ ((packed))
DAC960_V2_PhysicalDeviceState_T;
typedef struct DAC960_V2_PhysicalDeviceInfo
DAC960_V2_PhysicalDeviceInfo_T;
typedef struct DAC960_V2_HealthStatusBuffer
DAC960_V2_HealthStatusBuffer_T;
typedef struct DAC960_V2_Event
DAC960_V2_Event_T;
typedef struct DAC960_V2_CommandControlBits
DAC960_V2_CommandControlBits_T;
typedef struct DAC960_V2_CommandTimeout
DAC960_V2_CommandTimeout_T;
typedef struct DAC960_V2_PhysicalDevice
__attribute__ ((packed))
DAC960_V2_PhysicalDevice_T;
typedef struct DAC960_V2_LogicalDevice
__attribute__ ((packed))
DAC960_V2_LogicalDevice_T;
typedef enum
__attribute__ ((packed))
DAC960_V2_OperationDevice_T;
typedef struct DAC960_V2_PhysicalToLogicalDevice
DAC960_V2_PhysicalToLogicalDevice_T;
typedef struct DAC960_V2_ScatterGatherSegment
DAC960_V2_ScatterGatherSegment_T;
typedef union DAC960_V2_DataTransferMemoryAddress
DAC960_V2_DataTransferMemoryAddress_T;
typedef union DAC960_V2_CommandMailbox
DAC960_V2_CommandMailbox_T;
#define DAC960_IOCTL_GET_CONTROLLER_COUNT	0xDAC001
#define DAC960_IOCTL_GET_CONTROLLER_INFO	0xDAC002
#define DAC960_IOCTL_V1_EXECUTE_COMMAND		0xDAC003
#define DAC960_IOCTL_V2_EXECUTE_COMMAND		0xDAC004
#define DAC960_IOCTL_V2_GET_HEALTH_STATUS	0xDAC005
typedef struct DAC960_ControllerInfo
DAC960_ControllerInfo_T;
typedef struct DAC960_V1_UserCommand
DAC960_V1_UserCommand_T;
typedef struct DAC960_V1_KernelCommand
DAC960_V1_KernelCommand_T;
typedef struct DAC960_V2_UserCommand
DAC960_V2_UserCommand_T;
typedef struct DAC960_V2_KernelCommand
DAC960_V2_KernelCommand_T;
typedef struct DAC960_V2_GetHealthStatus
DAC960_V2_GetHealthStatus_T;
extern int DAC960_KernelIOCTL(unsigned int Request, void *Argument);
#define DAC960_MaxDriverQueueDepth		511
#define DAC960_MaxControllerQueueDepth		512
#define DAC960_V1_ScatterGatherLimit		33
#define DAC960_V2_ScatterGatherLimit		128
#define DAC960_V1_CommandMailboxCount		256
#define DAC960_V1_StatusMailboxCount		1024
#define DAC960_V2_CommandMailboxCount		512
#define DAC960_V2_StatusMailboxCount		512
#define DAC960_MonitoringTimerInterval		(10 * HZ)
#define DAC960_SecondaryMonitoringInterval	(60 * HZ)
#define DAC960_HealthStatusMonitoringInterval	(1 * HZ)
#define DAC960_ProgressReportingInterval	(60 * HZ)
#define DAC960_MaxPartitions			8
#define DAC960_MaxPartitionsBits		3
#define DAC960_BlockSize			512
#define DAC960_BlockSizeBits			9
#define DAC960_V1_CommandAllocationGroupSize	11
#define DAC960_V2_CommandAllocationGroupSize	29
#define DAC960_LineBufferSize			100
#define DAC960_ProgressBufferSize		200
#define DAC960_UserMessageSize			200
#define DAC960_InitialStatusBufferSize		(8192-32)
typedef enum
DAC960_FirmwareType_T;
typedef enum
DAC960_HardwareType_T;
typedef enum DAC960_MessageLevel
DAC960_MessageLevel_T;
static char
*DAC960_MessageLevelMap[] =
;
#define DAC960_Announce(Format, Arguments...) \
DAC960_Message(DAC960_AnnounceLevel, Format, ##Arguments)
#define DAC960_Info(Format, Arguments...) \
DAC960_Message(DAC960_InfoLevel, Format, ##Arguments)
#define DAC960_Notice(Format, Arguments...) \
DAC960_Message(DAC960_NoticeLevel, Format, ##Arguments)
#define DAC960_Warning(Format, Arguments...) \
DAC960_Message(DAC960_WarningLevel, Format, ##Arguments)
#define DAC960_Error(Format, Arguments...) \
DAC960_Message(DAC960_ErrorLevel, Format, ##Arguments)
#define DAC960_Progress(Format, Arguments...) \
DAC960_Message(DAC960_ProgressLevel, Format, ##Arguments)
#define DAC960_Critical(Format, Arguments...) \
DAC960_Message(DAC960_CriticalLevel, Format, ##Arguments)
#define DAC960_UserCritical(Format, Arguments...) \
DAC960_Message(DAC960_UserCriticalLevel, Format, ##Arguments)
struct DAC960_privdata ;
typedef union DAC960_V1_StatusMailbox
DAC960_V1_StatusMailbox_T;
typedef union DAC960_V2_StatusMailbox
DAC960_V2_StatusMailbox_T;
typedef enum
DAC960_CommandType_T;
typedef struct DAC960_Command
DAC960_Command_T;
typedef struct DAC960_Controller
DAC960_Controller_T;
#define V1				FW.V1
#define V2				FW.V2
#define DAC960_QueueCommand(Command) \
(Controller->QueueCommand)(Command)
#define DAC960_ReadControllerConfiguration(Controller) \
(Controller->ReadControllerConfiguration)(Controller)
#define DAC960_ReadDeviceConfiguration(Controller) \
(Controller->ReadDeviceConfiguration)(Controller)
#define DAC960_ReportDeviceConfiguration(Controller) \
(Controller->ReportDeviceConfiguration)(Controller)
#define DAC960_QueueReadWriteCommand(Command) \
(Controller->QueueReadWriteCommand)(Command)
static inline
void dma_addr_writeql(dma_addr_t addr, void __iomem *write_address)
#define DAC960_GEM_RegisterWindowSize	0x600
typedef enum
DAC960_GEM_RegisterOffsets_T;
typedef union DAC960_GEM_InboundDoorBellRegister
DAC960_GEM_InboundDoorBellRegister_T;
typedef union DAC960_GEM_OutboundDoorBellRegister
DAC960_GEM_OutboundDoorBellRegister_T;
typedef union DAC960_GEM_InterruptMaskRegister
DAC960_GEM_InterruptMaskRegister_T;
typedef union DAC960_GEM_ErrorStatusRegister
DAC960_GEM_ErrorStatusRegister_T;
static inline
void DAC960_GEM_HardwareMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_AcknowledgeHardwareMailboxStatus(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_GenerateInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_ControllerReset(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_MemoryMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_GEM_HardwareMailboxFullP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_GEM_InitializationInProgressP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_AcknowledgeHardwareMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_AcknowledgeMemoryMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_AcknowledgeInterrupt(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_GEM_HardwareMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_GEM_MemoryMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_EnableInterrupts(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_DisableInterrupts(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_GEM_InterruptsEnabledP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_GEM_WriteCommandMailbox(DAC960_V2_CommandMailbox_T
*MemoryCommandMailbox,
DAC960_V2_CommandMailbox_T
*CommandMailbox)
static inline
void DAC960_GEM_WriteHardwareMailbox(void __iomem *ControllerBaseAddress,
dma_addr_t CommandMailboxDMA)
static inline DAC960_V2_CommandIdentifier_T
DAC960_GEM_ReadCommandIdentifier(void __iomem *ControllerBaseAddress)
static inline DAC960_V2_CommandStatus_T
DAC960_GEM_ReadCommandStatus(void __iomem *ControllerBaseAddress)
static inline bool
DAC960_GEM_ReadErrorStatus(void __iomem *ControllerBaseAddress,
unsigned char *ErrorStatus,
unsigned char *Parameter0,
unsigned char *Parameter1)
#define DAC960_BA_RegisterWindowSize		0x80
typedef enum
DAC960_BA_RegisterOffsets_T;
typedef union DAC960_BA_InboundDoorBellRegister
DAC960_BA_InboundDoorBellRegister_T;
typedef union DAC960_BA_OutboundDoorBellRegister
DAC960_BA_OutboundDoorBellRegister_T;
typedef union DAC960_BA_InterruptMaskRegister
DAC960_BA_InterruptMaskRegister_T;
typedef union DAC960_BA_ErrorStatusRegister
DAC960_BA_ErrorStatusRegister_T;
static inline
void DAC960_BA_HardwareMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_AcknowledgeHardwareMailboxStatus(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_GenerateInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_ControllerReset(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_MemoryMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_BA_HardwareMailboxFullP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_BA_InitializationInProgressP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_AcknowledgeHardwareMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_AcknowledgeMemoryMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_AcknowledgeInterrupt(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_BA_HardwareMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_BA_MemoryMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_EnableInterrupts(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_DisableInterrupts(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_BA_InterruptsEnabledP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_BA_WriteCommandMailbox(DAC960_V2_CommandMailbox_T
*MemoryCommandMailbox,
DAC960_V2_CommandMailbox_T
*CommandMailbox)
static inline
void DAC960_BA_WriteHardwareMailbox(void __iomem *ControllerBaseAddress,
dma_addr_t CommandMailboxDMA)
static inline DAC960_V2_CommandIdentifier_T
DAC960_BA_ReadCommandIdentifier(void __iomem *ControllerBaseAddress)
static inline DAC960_V2_CommandStatus_T
DAC960_BA_ReadCommandStatus(void __iomem *ControllerBaseAddress)
static inline bool
DAC960_BA_ReadErrorStatus(void __iomem *ControllerBaseAddress,
unsigned char *ErrorStatus,
unsigned char *Parameter0,
unsigned char *Parameter1)
#define DAC960_LP_RegisterWindowSize		0x80
typedef enum
DAC960_LP_RegisterOffsets_T;
typedef union DAC960_LP_InboundDoorBellRegister
DAC960_LP_InboundDoorBellRegister_T;
typedef union DAC960_LP_OutboundDoorBellRegister
DAC960_LP_OutboundDoorBellRegister_T;
typedef union DAC960_LP_InterruptMaskRegister
DAC960_LP_InterruptMaskRegister_T;
typedef union DAC960_LP_ErrorStatusRegister
DAC960_LP_ErrorStatusRegister_T;
static inline
void DAC960_LP_HardwareMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_AcknowledgeHardwareMailboxStatus(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_GenerateInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_ControllerReset(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_MemoryMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LP_HardwareMailboxFullP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LP_InitializationInProgressP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_AcknowledgeHardwareMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_AcknowledgeMemoryMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_AcknowledgeInterrupt(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LP_HardwareMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LP_MemoryMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_EnableInterrupts(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_DisableInterrupts(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LP_InterruptsEnabledP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LP_WriteCommandMailbox(DAC960_V2_CommandMailbox_T
*MemoryCommandMailbox,
DAC960_V2_CommandMailbox_T
*CommandMailbox)
static inline
void DAC960_LP_WriteHardwareMailbox(void __iomem *ControllerBaseAddress,
dma_addr_t CommandMailboxDMA)
static inline DAC960_V2_CommandIdentifier_T
DAC960_LP_ReadCommandIdentifier(void __iomem *ControllerBaseAddress)
static inline DAC960_V2_CommandStatus_T
DAC960_LP_ReadCommandStatus(void __iomem *ControllerBaseAddress)
static inline bool
DAC960_LP_ReadErrorStatus(void __iomem *ControllerBaseAddress,
unsigned char *ErrorStatus,
unsigned char *Parameter0,
unsigned char *Parameter1)
#define DAC960_LA_RegisterWindowSize		0x80
typedef enum
DAC960_LA_RegisterOffsets_T;
typedef union DAC960_LA_InboundDoorBellRegister
DAC960_LA_InboundDoorBellRegister_T;
typedef union DAC960_LA_OutboundDoorBellRegister
DAC960_LA_OutboundDoorBellRegister_T;
typedef union DAC960_LA_InterruptMaskRegister
DAC960_LA_InterruptMaskRegister_T;
typedef union DAC960_LA_ErrorStatusRegister
DAC960_LA_ErrorStatusRegister_T;
static inline
void DAC960_LA_HardwareMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_AcknowledgeHardwareMailboxStatus(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_GenerateInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_ControllerReset(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_MemoryMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LA_HardwareMailboxFullP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LA_InitializationInProgressP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_AcknowledgeHardwareMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_AcknowledgeMemoryMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_AcknowledgeInterrupt(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LA_HardwareMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LA_MemoryMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_EnableInterrupts(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_DisableInterrupts(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_LA_InterruptsEnabledP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_LA_WriteCommandMailbox(DAC960_V1_CommandMailbox_T
*MemoryCommandMailbox,
DAC960_V1_CommandMailbox_T
*CommandMailbox)
static inline
void DAC960_LA_WriteHardwareMailbox(void __iomem *ControllerBaseAddress,
DAC960_V1_CommandMailbox_T *CommandMailbox)
static inline DAC960_V1_CommandIdentifier_T
DAC960_LA_ReadStatusCommandIdentifier(void __iomem *ControllerBaseAddress)
static inline DAC960_V1_CommandStatus_T
DAC960_LA_ReadStatusRegister(void __iomem *ControllerBaseAddress)
static inline bool
DAC960_LA_ReadErrorStatus(void __iomem *ControllerBaseAddress,
unsigned char *ErrorStatus,
unsigned char *Parameter0,
unsigned char *Parameter1)
#define DAC960_PG_RegisterWindowSize		0x2000
typedef enum
DAC960_PG_RegisterOffsets_T;
typedef union DAC960_PG_InboundDoorBellRegister
DAC960_PG_InboundDoorBellRegister_T;
typedef union DAC960_PG_OutboundDoorBellRegister
DAC960_PG_OutboundDoorBellRegister_T;
typedef union DAC960_PG_InterruptMaskRegister
DAC960_PG_InterruptMaskRegister_T;
typedef union DAC960_PG_ErrorStatusRegister
DAC960_PG_ErrorStatusRegister_T;
static inline
void DAC960_PG_HardwareMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_AcknowledgeHardwareMailboxStatus(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_GenerateInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_ControllerReset(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_MemoryMailboxNewCommand(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PG_HardwareMailboxFullP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PG_InitializationInProgressP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_AcknowledgeHardwareMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_AcknowledgeMemoryMailboxInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_AcknowledgeInterrupt(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PG_HardwareMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PG_MemoryMailboxStatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_EnableInterrupts(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_DisableInterrupts(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PG_InterruptsEnabledP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PG_WriteCommandMailbox(DAC960_V1_CommandMailbox_T
*MemoryCommandMailbox,
DAC960_V1_CommandMailbox_T
*CommandMailbox)
static inline
void DAC960_PG_WriteHardwareMailbox(void __iomem *ControllerBaseAddress,
DAC960_V1_CommandMailbox_T *CommandMailbox)
static inline DAC960_V1_CommandIdentifier_T
DAC960_PG_ReadStatusCommandIdentifier(void __iomem *ControllerBaseAddress)
static inline DAC960_V1_CommandStatus_T
DAC960_PG_ReadStatusRegister(void __iomem *ControllerBaseAddress)
static inline bool
DAC960_PG_ReadErrorStatus(void __iomem *ControllerBaseAddress,
unsigned char *ErrorStatus,
unsigned char *Parameter0,
unsigned char *Parameter1)
#define DAC960_PD_RegisterWindowSize		0x80
typedef enum
DAC960_PD_RegisterOffsets_T;
typedef union DAC960_PD_InboundDoorBellRegister
DAC960_PD_InboundDoorBellRegister_T;
typedef union DAC960_PD_OutboundDoorBellRegister
DAC960_PD_OutboundDoorBellRegister_T;
typedef union DAC960_PD_InterruptEnableRegister
DAC960_PD_InterruptEnableRegister_T;
typedef union DAC960_PD_ErrorStatusRegister
DAC960_PD_ErrorStatusRegister_T;
static inline
void DAC960_PD_NewCommand(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_AcknowledgeStatus(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_GenerateInterrupt(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_ControllerReset(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PD_MailboxFullP(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PD_InitializationInProgressP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_AcknowledgeInterrupt(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PD_StatusAvailableP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_EnableInterrupts(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_DisableInterrupts(void __iomem *ControllerBaseAddress)
static inline
bool DAC960_PD_InterruptsEnabledP(void __iomem *ControllerBaseAddress)
static inline
void DAC960_PD_WriteCommandMailbox(void __iomem *ControllerBaseAddress,
DAC960_V1_CommandMailbox_T *CommandMailbox)
static inline DAC960_V1_CommandIdentifier_T
DAC960_PD_ReadStatusCommandIdentifier(void __iomem *ControllerBaseAddress)
static inline DAC960_V1_CommandStatus_T
DAC960_PD_ReadStatusRegister(void __iomem *ControllerBaseAddress)
static inline bool
DAC960_PD_ReadErrorStatus(void __iomem *ControllerBaseAddress,
unsigned char *ErrorStatus,
unsigned char *Parameter0,
unsigned char *Parameter1)
static inline void DAC960_P_To_PD_TranslateEnquiry(void *Enquiry)
static inline void DAC960_P_To_PD_TranslateDeviceState(void *DeviceState)
static inline
void DAC960_PD_To_P_TranslateReadWriteCommand(DAC960_V1_CommandMailbox_T
*CommandMailbox)
static inline
void DAC960_P_To_PD_TranslateReadWriteCommand(DAC960_V1_CommandMailbox_T
*CommandMailbox)
static void DAC960_FinalizeController(DAC960_Controller_T *);
static void DAC960_V1_QueueReadWriteCommand(DAC960_Command_T *);
static void DAC960_V2_QueueReadWriteCommand(DAC960_Command_T *);
static void DAC960_RequestFunction(struct request_queue *);
static irqreturn_t DAC960_BA_InterruptHandler(int, void *);
static irqreturn_t DAC960_LP_InterruptHandler(int, void *);
static irqreturn_t DAC960_LA_InterruptHandler(int, void *);
static irqreturn_t DAC960_PG_InterruptHandler(int, void *);
static irqreturn_t DAC960_PD_InterruptHandler(int, void *);
static irqreturn_t DAC960_P_InterruptHandler(int, void *);
static void DAC960_V1_QueueMonitoringCommand(DAC960_Command_T *);
static void DAC960_V2_QueueMonitoringCommand(DAC960_Command_T *);
static void DAC960_MonitoringTimerFunction(unsigned long);
static void DAC960_Message(DAC960_MessageLevel_T, unsigned char *,
DAC960_Controller_T *, ...);
static void DAC960_CreateProcEntries(DAC960_Controller_T *);
static void DAC960_DestroyProcEntries(DAC960_Controller_T *);
