#define BusLogic_DriverVersion		"2.1.16"
#define BusLogic_DriverDate		"18 July 2002"
#define FAILURE (-1)
static struct scsi_host_template Bus_Logic_template;
static int BusLogic_DriverOptionsCount;
static struct BusLogic_DriverOptions BusLogic_DriverOptions[BusLogic_MaxHostAdapters];
MODULE_LICENSE("GPL");
static char *BusLogic;
module_param(BusLogic, charp, 0);
static struct BusLogic_ProbeOptions BusLogic_ProbeOptions;
static struct BusLogic_GlobalOptions BusLogic_GlobalOptions;
static LIST_HEAD(BusLogic_host_list);
static int BusLogic_ProbeInfoCount;
static struct BusLogic_ProbeInfo *BusLogic_ProbeInfoList;
static char *BusLogic_CommandFailureReason;
static void BusLogic_AnnounceDriver(struct BusLogic_HostAdapter *HostAdapter)
static const char *BusLogic_DriverInfo(struct Scsi_Host *Host)
static void BusLogic_InitializeCCBs(struct BusLogic_HostAdapter *HostAdapter, void *BlockPointer, int BlockSize, dma_addr_t BlockPointerHandle)
static bool __init BusLogic_CreateInitialCCBs(struct BusLogic_HostAdapter *HostAdapter)
static void BusLogic_DestroyCCBs(struct BusLogic_HostAdapter *HostAdapter)
static void BusLogic_CreateAdditionalCCBs(struct BusLogic_HostAdapter *HostAdapter, int AdditionalCCBs, bool SuccessMessageP)
static struct BusLogic_CCB *BusLogic_AllocateCCB(struct BusLogic_HostAdapter
*HostAdapter)
static void BusLogic_DeallocateCCB(struct BusLogic_CCB *CCB)
static int BusLogic_Command(struct BusLogic_HostAdapter *HostAdapter, enum BusLogic_OperationCode OperationCode, void *ParameterData, int ParameterLength, void *ReplyData, int ReplyLength)
static void __init BusLogic_AppendProbeAddressISA(unsigned long IO_Address)
static void __init BusLogic_InitializeProbeInfoListISA(struct BusLogic_HostAdapter
*PrototypeHostAdapter)
static void __init BusLogic_SortProbeInfo(struct BusLogic_ProbeInfo *ProbeInfoList, int ProbeInfoCount)
static int __init BusLogic_InitializeMultiMasterProbeInfo(struct BusLogic_HostAdapter
*PrototypeHostAdapter)
static int __init BusLogic_InitializeFlashPointProbeInfo(struct BusLogic_HostAdapter
*PrototypeHostAdapter)
static void __init BusLogic_InitializeProbeInfoList(struct BusLogic_HostAdapter
*PrototypeHostAdapter)
#define BusLogic_InitializeProbeInfoList(adapter) \
BusLogic_InitializeProbeInfoListISA(adapter)
static bool BusLogic_Failure(struct BusLogic_HostAdapter *HostAdapter, char *ErrorMessage)
static bool __init BusLogic_ProbeHostAdapter(struct BusLogic_HostAdapter *HostAdapter)
static bool BusLogic_HardwareResetHostAdapter(struct BusLogic_HostAdapter
*HostAdapter, bool HardReset)
static bool __init BusLogic_CheckHostAdapter(struct BusLogic_HostAdapter *HostAdapter)
static bool __init BusLogic_ReadHostAdapterConfiguration(struct BusLogic_HostAdapter
*HostAdapter)
static bool __init BusLogic_ReportHostAdapterConfiguration(struct BusLogic_HostAdapter
*HostAdapter)
static bool __init BusLogic_AcquireResources(struct BusLogic_HostAdapter *HostAdapter)
static void BusLogic_ReleaseResources(struct BusLogic_HostAdapter *HostAdapter)
static bool BusLogic_InitializeHostAdapter(struct BusLogic_HostAdapter
*HostAdapter)
static bool __init BusLogic_TargetDeviceInquiry(struct BusLogic_HostAdapter
*HostAdapter)
static void __init BusLogic_InitializeHostStructure(struct BusLogic_HostAdapter
*HostAdapter, struct Scsi_Host *Host)
static int BusLogic_SlaveConfigure(struct scsi_device *Device)
static int __init BusLogic_init(void)
static int __exit BusLogic_ReleaseHostAdapter(struct BusLogic_HostAdapter *HostAdapter)
static void BusLogic_QueueCompletedCCB(struct BusLogic_CCB *CCB)
static int BusLogic_ComputeResultCode(struct BusLogic_HostAdapter *HostAdapter, enum BusLogic_HostAdapterStatus HostAdapterStatus, enum BusLogic_TargetDeviceStatus TargetDeviceStatus)
static void BusLogic_ScanIncomingMailboxes(struct BusLogic_HostAdapter *HostAdapter)
static void BusLogic_ProcessCompletedCCBs(struct BusLogic_HostAdapter *HostAdapter)
static irqreturn_t BusLogic_InterruptHandler(int IRQ_Channel, void *DeviceIdentifier)
static bool BusLogic_WriteOutgoingMailbox(struct BusLogic_HostAdapter
*HostAdapter, enum BusLogic_ActionCode ActionCode, struct BusLogic_CCB *CCB)
static int BusLogic_host_reset(struct scsi_cmnd * SCpnt)
static int BusLogic_QueueCommand_lck(struct scsi_cmnd *Command, void (*CompletionRoutine) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(BusLogic_QueueCommand)
static int BusLogic_ResetHostAdapter(struct BusLogic_HostAdapter *HostAdapter, bool HardReset)
static int BusLogic_BIOSDiskParameters(struct scsi_device *sdev, struct block_device *Device, sector_t capacity, int *Parameters)
static int BusLogic_ProcDirectoryInfo(struct Scsi_Host *shost, char *ProcBuffer, char **StartPointer, off_t Offset, int BytesAvailable, int WriteFlag)
static void BusLogic_Message(enum BusLogic_MessageLevel MessageLevel, char *Format, struct BusLogic_HostAdapter *HostAdapter, ...)
static bool __init BusLogic_ParseKeyword(char **StringPointer, char *Keyword)
static int __init BusLogic_ParseDriverOptions(char *OptionsString)
static struct scsi_host_template Bus_Logic_template = ;
static int __init BusLogic_Setup(char *str)
static void __exit BusLogic_exit(void)
__setup("BusLogic=", BusLogic_Setup);
static struct pci_device_id BusLogic_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, BusLogic_pci_tbl);
module_init(BusLogic_init);
module_exit(BusLogic_exit);
