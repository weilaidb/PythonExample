#define DAC960_DriverVersion			"2.5.49"
#define DAC960_DriverDate			"21 Aug 2007"
#define DAC960_GAM_MINOR	252
static DEFINE_MUTEX(DAC960_mutex);
static DAC960_Controller_T *DAC960_Controllers[DAC960_MaxControllers];
static int DAC960_ControllerCount;
static struct proc_dir_entry *DAC960_ProcDirectoryEntry;
static long disk_size(DAC960_Controller_T *p, int drive_nr)
static int DAC960_open(struct block_device *bdev, fmode_t mode)
static int DAC960_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static unsigned int DAC960_check_events(struct gendisk *disk,
unsigned int clearing)
static int DAC960_revalidate_disk(struct gendisk *disk)
static const struct block_device_operations DAC960_BlockDeviceOperations = ;
static void DAC960_AnnounceDriver(DAC960_Controller_T *Controller)
static bool DAC960_Failure(DAC960_Controller_T *Controller,
unsigned char *ErrorMessage)
static bool init_dma_loaf(struct pci_dev *dev, struct dma_loaf *loaf,
size_t len)
static void *slice_dma_loaf(struct dma_loaf *loaf, size_t len,
dma_addr_t *dma_handle)
static void free_dma_loaf(struct pci_dev *dev, struct dma_loaf *loaf_handle)
static bool DAC960_CreateAuxiliaryStructures(DAC960_Controller_T *Controller)
static void DAC960_DestroyAuxiliaryStructures(DAC960_Controller_T *Controller)
static inline void DAC960_V1_ClearCommand(DAC960_Command_T *Command)
static inline void DAC960_V2_ClearCommand(DAC960_Command_T *Command)
static inline DAC960_Command_T *DAC960_AllocateCommand(DAC960_Controller_T
*Controller)
static inline void DAC960_DeallocateCommand(DAC960_Command_T *Command)
static void DAC960_WaitForCommand(DAC960_Controller_T *Controller)
static void DAC960_GEM_QueueCommand(DAC960_Command_T *Command)
static void DAC960_BA_QueueCommand(DAC960_Command_T *Command)
static void DAC960_LP_QueueCommand(DAC960_Command_T *Command)
static void DAC960_LA_QueueCommandDualMode(DAC960_Command_T *Command)
static void DAC960_LA_QueueCommandSingleMode(DAC960_Command_T *Command)
static void DAC960_PG_QueueCommandDualMode(DAC960_Command_T *Command)
static void DAC960_PG_QueueCommandSingleMode(DAC960_Command_T *Command)
static void DAC960_PD_QueueCommand(DAC960_Command_T *Command)
static void DAC960_P_QueueCommand(DAC960_Command_T *Command)
static void DAC960_ExecuteCommand(DAC960_Command_T *Command)
static bool DAC960_V1_ExecuteType3(DAC960_Controller_T *Controller,
DAC960_V1_CommandOpcode_T CommandOpcode,
dma_addr_t DataDMA)
static bool DAC960_V1_ExecuteType3B(DAC960_Controller_T *Controller,
DAC960_V1_CommandOpcode_T CommandOpcode,
unsigned char CommandOpcode2,
dma_addr_t DataDMA)
static bool DAC960_V1_ExecuteType3D(DAC960_Controller_T *Controller,
DAC960_V1_CommandOpcode_T CommandOpcode,
unsigned char Channel,
unsigned char TargetID,
dma_addr_t DataDMA)
static bool DAC960_V2_GeneralInfo(DAC960_Controller_T *Controller)
static bool DAC960_V2_NewControllerInfo(DAC960_Controller_T *Controller)
static bool DAC960_V2_NewLogicalDeviceInfo(DAC960_Controller_T *Controller,
unsigned short LogicalDeviceNumber)
static bool DAC960_V2_NewPhysicalDeviceInfo(DAC960_Controller_T *Controller,
unsigned char Channel,
unsigned char TargetID,
unsigned char LogicalUnit)
static void DAC960_V2_ConstructNewUnitSerialNumber(
DAC960_Controller_T *Controller,
DAC960_V2_CommandMailbox_T *CommandMailbox, int Channel, int TargetID,
int LogicalUnit)
static bool DAC960_V2_NewInquiryUnitSerialNumber(DAC960_Controller_T *Controller,
int Channel, int TargetID, int LogicalUnit)
static bool DAC960_V2_DeviceOperation(DAC960_Controller_T *Controller,
DAC960_V2_IOCTL_Opcode_T IOCTL_Opcode,
DAC960_V2_OperationDevice_T
OperationDevice)
static bool DAC960_V1_EnableMemoryMailboxInterface(DAC960_Controller_T
*Controller)
static bool DAC960_V2_EnableMemoryMailboxInterface(DAC960_Controller_T
*Controller)
static bool DAC960_V1_ReadControllerConfiguration(DAC960_Controller_T
*Controller)
static bool DAC960_V2_ReadControllerConfiguration(DAC960_Controller_T
*Controller)
static bool DAC960_ReportControllerConfiguration(DAC960_Controller_T
*Controller)
static bool DAC960_V1_ReadDeviceConfiguration(DAC960_Controller_T
*Controller)
static bool DAC960_V2_ReadDeviceConfiguration(DAC960_Controller_T
*Controller)
static void DAC960_SanitizeInquiryData(DAC960_SCSI_Inquiry_T
*InquiryStandardData,
DAC960_SCSI_Inquiry_UnitSerialNumber_T
*InquiryUnitSerialNumber,
unsigned char *Vendor,
unsigned char *Model,
unsigned char *Revision,
unsigned char *SerialNumber)
static bool DAC960_V1_ReportDeviceConfiguration(DAC960_Controller_T
*Controller)
static bool DAC960_V2_ReportDeviceConfiguration(DAC960_Controller_T
*Controller)
static bool DAC960_RegisterBlockDevice(DAC960_Controller_T *Controller)
static void DAC960_UnregisterBlockDevice(DAC960_Controller_T *Controller)
static void DAC960_ComputeGenericDiskInfo(DAC960_Controller_T *Controller)
static bool DAC960_ReportErrorStatus(DAC960_Controller_T *Controller,
unsigned char ErrorStatus,
unsigned char Parameter0,
unsigned char Parameter1)
static void DAC960_DetectCleanup(DAC960_Controller_T *Controller)
static DAC960_Controller_T *
DAC960_DetectController(struct pci_dev *PCI_Device,
const struct pci_device_id *entry)
static bool
DAC960_InitializeController(DAC960_Controller_T *Controller)
static void DAC960_FinalizeController(DAC960_Controller_T *Controller)
static int
DAC960_Probe(struct pci_dev *dev, const struct pci_device_id *entry)
static void DAC960_Remove(struct pci_dev *PCI_Device)
static void DAC960_V1_QueueReadWriteCommand(DAC960_Command_T *Command)
static void DAC960_V2_QueueReadWriteCommand(DAC960_Command_T *Command)
static int DAC960_process_queue(DAC960_Controller_T *Controller, struct request_queue *req_q)
static void DAC960_ProcessRequest(DAC960_Controller_T *controller)
static void DAC960_queue_partial_rw(DAC960_Command_T *Command)
static void DAC960_RequestFunction(struct request_queue *RequestQueue)
static inline bool DAC960_ProcessCompletedRequest(DAC960_Command_T *Command,
bool SuccessfulIO)
static void DAC960_V1_ReadWriteError(DAC960_Command_T *Command)
static void DAC960_V1_ProcessCompletedCommand(DAC960_Command_T *Command)
static void DAC960_V2_ReadWriteError(DAC960_Command_T *Command)
static void DAC960_V2_ReportEvent(DAC960_Controller_T *Controller,
DAC960_V2_Event_T *Event)
static void DAC960_V2_ReportProgress(DAC960_Controller_T *Controller,
unsigned char *MessageString,
unsigned int LogicalDeviceNumber,
unsigned long BlocksCompleted,
unsigned long LogicalDeviceSize)
static void DAC960_V2_ProcessCompletedCommand(DAC960_Command_T *Command)
static irqreturn_t DAC960_GEM_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static irqreturn_t DAC960_BA_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static irqreturn_t DAC960_LP_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static irqreturn_t DAC960_LA_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static irqreturn_t DAC960_PG_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static irqreturn_t DAC960_PD_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static irqreturn_t DAC960_P_InterruptHandler(int IRQ_Channel,
void *DeviceIdentifier)
static void DAC960_V1_QueueMonitoringCommand(DAC960_Command_T *Command)
static void DAC960_V2_QueueMonitoringCommand(DAC960_Command_T *Command)
static void DAC960_MonitoringTimerFunction(unsigned long TimerData)
static bool DAC960_CheckStatusBuffer(DAC960_Controller_T *Controller,
unsigned int ByteCount)
static void DAC960_Message(DAC960_MessageLevel_T MessageLevel,
unsigned char *Format,
DAC960_Controller_T *Controller,
...)
static bool DAC960_ParsePhysicalDevice(DAC960_Controller_T *Controller,
char *UserCommandString,
unsigned char *Channel,
unsigned char *TargetID)
static bool DAC960_ParseLogicalDrive(DAC960_Controller_T *Controller,
char *UserCommandString,
unsigned char *LogicalDriveNumber)
static void DAC960_V1_SetDeviceState(DAC960_Controller_T *Controller,
DAC960_Command_T *Command,
unsigned char Channel,
unsigned char TargetID,
DAC960_V1_PhysicalDeviceState_T
DeviceState,
const unsigned char *DeviceStateString)
static bool DAC960_V1_ExecuteUserCommand(DAC960_Controller_T *Controller,
unsigned char *UserCommand)
static bool DAC960_V2_TranslatePhysicalDevice(DAC960_Command_T *Command,
unsigned char Channel,
unsigned char TargetID,
unsigned short
*LogicalDeviceNumber)
static bool DAC960_V2_ExecuteUserCommand(DAC960_Controller_T *Controller,
unsigned char *UserCommand)
static int dac960_proc_show(struct seq_file *m, void *v)
static int dac960_proc_open(struct inode *inode, struct file *file)
static const struct file_operations dac960_proc_fops = ;
static int dac960_initial_status_proc_show(struct seq_file *m, void *v)
static int dac960_initial_status_proc_open(struct inode *inode, struct file *file)
static const struct file_operations dac960_initial_status_proc_fops = ;
static int dac960_current_status_proc_show(struct seq_file *m, void *v)
static int dac960_current_status_proc_open(struct inode *inode, struct file *file)
static const struct file_operations dac960_current_status_proc_fops = ;
static int dac960_user_command_proc_show(struct seq_file *m, void *v)
static int dac960_user_command_proc_open(struct inode *inode, struct file *file)
static ssize_t dac960_user_command_proc_write(struct file *file,
const char __user *Buffer,
size_t Count, loff_t *pos)
static const struct file_operations dac960_user_command_proc_fops = ;
static void DAC960_CreateProcEntries(DAC960_Controller_T *Controller)
static void DAC960_DestroyProcEntries(DAC960_Controller_T *Controller)
static long DAC960_gam_ioctl(struct file *file, unsigned int Request,
unsigned long Argument)
static const struct file_operations DAC960_gam_fops = ;
static struct miscdevice DAC960_gam_dev = ;
static int DAC960_gam_init(void)
static void DAC960_gam_cleanup(void)
static struct DAC960_privdata DAC960_GEM_privdata = ;
static struct DAC960_privdata DAC960_BA_privdata = ;
static struct DAC960_privdata DAC960_LP_privdata = ;
static struct DAC960_privdata DAC960_LA_privdata = ;
static struct DAC960_privdata DAC960_PG_privdata = ;
static struct DAC960_privdata DAC960_PD_privdata = ;
static struct DAC960_privdata DAC960_P_privdata = ;
static const struct pci_device_id DAC960_id_table[] = ;
MODULE_DEVICE_TABLE(pci, DAC960_id_table);
static struct pci_driver DAC960_pci_driver = ;
static int __init DAC960_init_module(void)
static void __exit DAC960_cleanup_module(void)
module_init(DAC960_init_module);
module_exit(DAC960_cleanup_module);
MODULE_LICENSE("GPL");
