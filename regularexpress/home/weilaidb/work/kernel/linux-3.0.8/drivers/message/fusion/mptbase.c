#define my_NAME		"Fusion MPT base driver"
#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptbase"
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(my_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
static int mpt_msi_enable_spi;
module_param(mpt_msi_enable_spi, int, 0);
MODULE_PARM_DESC(mpt_msi_enable_spi,
" Enable MSI Support for SPI controllers (default=0)");
static int mpt_msi_enable_fc;
module_param(mpt_msi_enable_fc, int, 0);
MODULE_PARM_DESC(mpt_msi_enable_fc,
" Enable MSI Support for FC controllers (default=0)");
static int mpt_msi_enable_sas;
module_param(mpt_msi_enable_sas, int, 0);
MODULE_PARM_DESC(mpt_msi_enable_sas,
" Enable MSI Support for SAS controllers (default=0)");
static int mpt_channel_mapping;
module_param(mpt_channel_mapping, int, 0);
MODULE_PARM_DESC(mpt_channel_mapping, " Mapping id's to channels (default=0)");
static int mpt_debug_level;
static int mpt_set_debug_level(const char *val, struct kernel_param *kp);
module_param_call(mpt_debug_level, mpt_set_debug_level, param_get_int,
&mpt_debug_level, 0600);
MODULE_PARM_DESC(mpt_debug_level,
" debug level - refer to mptdebug.h - (default=0)");
int mpt_fwfault_debug;
EXPORT_SYMBOL(mpt_fwfault_debug);
module_param(mpt_fwfault_debug, int, 0600);
MODULE_PARM_DESC(mpt_fwfault_debug,
"Enable detection of Firmware fault and halt Firmware on fault - (default=0)");
static char	MptCallbacksName[MPT_MAX_PROTOCOL_DRIVERS][50];
static int mfcounter = 0;
#define PRINT_MF_COUNT 20000
#define WHOINIT_UNKNOWN		0xAA
LIST_HEAD(ioc_list);
static MPT_CALLBACK		 MptCallbacks[MPT_MAX_PROTOCOL_DRIVERS];
static int			 MptDriverClass[MPT_MAX_PROTOCOL_DRIVERS];
static MPT_EVHANDLER		 MptEvHandlers[MPT_MAX_PROTOCOL_DRIVERS];
static MPT_RESETHANDLER		 MptResetHandlers[MPT_MAX_PROTOCOL_DRIVERS];
static struct mpt_pci_driver 	*MptDeviceDriverHandlers[MPT_MAX_PROTOCOL_DRIVERS];
static struct proc_dir_entry 	*mpt_proc_root_dir;
static u8 mpt_base_index = MPT_MAX_PROTOCOL_DRIVERS;
static u8 last_drv_idx;
static irqreturn_t mpt_interrupt(int irq, void *bus_id);
static int	mptbase_reply(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req,
MPT_FRAME_HDR *reply);
static int	mpt_handshake_req_reply_wait(MPT_ADAPTER *ioc, int reqBytes,
u32 *req, int replyBytes, u16 *u16reply, int maxwait,
int sleepFlag);
static int	mpt_do_ioc_recovery(MPT_ADAPTER *ioc, u32 reason, int sleepFlag);
static void	mpt_detect_bound_ports(MPT_ADAPTER *ioc, struct pci_dev *pdev);
static void	mpt_adapter_disable(MPT_ADAPTER *ioc);
static void	mpt_adapter_dispose(MPT_ADAPTER *ioc);
static void	MptDisplayIocCapabilities(MPT_ADAPTER *ioc);
static int	MakeIocReady(MPT_ADAPTER *ioc, int force, int sleepFlag);
static int	GetIocFacts(MPT_ADAPTER *ioc, int sleepFlag, int reason);
static int	GetPortFacts(MPT_ADAPTER *ioc, int portnum, int sleepFlag);
static int	SendIocInit(MPT_ADAPTER *ioc, int sleepFlag);
static int	SendPortEnable(MPT_ADAPTER *ioc, int portnum, int sleepFlag);
static int	mpt_do_upload(MPT_ADAPTER *ioc, int sleepFlag);
static int	mpt_downloadboot(MPT_ADAPTER *ioc, MpiFwHeader_t *pFwHeader, int sleepFlag);
static int	mpt_diag_reset(MPT_ADAPTER *ioc, int ignore, int sleepFlag);
static int	KickStart(MPT_ADAPTER *ioc, int ignore, int sleepFlag);
static int	SendIocReset(MPT_ADAPTER *ioc, u8 reset_type, int sleepFlag);
static int	PrimeIocFifos(MPT_ADAPTER *ioc);
static int	WaitForDoorbellAck(MPT_ADAPTER *ioc, int howlong, int sleepFlag);
static int	WaitForDoorbellInt(MPT_ADAPTER *ioc, int howlong, int sleepFlag);
static int	WaitForDoorbellReply(MPT_ADAPTER *ioc, int howlong, int sleepFlag);
static int	GetLanConfigPages(MPT_ADAPTER *ioc);
static int	GetIoUnitPage2(MPT_ADAPTER *ioc);
int		mptbase_sas_persist_operation(MPT_ADAPTER *ioc, u8 persist_opcode);
static int	mpt_GetScsiPortSettings(MPT_ADAPTER *ioc, int portnum);
static int	mpt_readScsiDevicePageHeaders(MPT_ADAPTER *ioc, int portnum);
static void 	mpt_read_ioc_pg_1(MPT_ADAPTER *ioc);
static void 	mpt_read_ioc_pg_4(MPT_ADAPTER *ioc);
static void	mpt_get_manufacturing_pg_0(MPT_ADAPTER *ioc);
static int	SendEventNotification(MPT_ADAPTER *ioc, u8 EvSwitch,
int sleepFlag);
static int	SendEventAck(MPT_ADAPTER *ioc, EventNotificationReply_t *evnp);
static int	mpt_host_page_access_control(MPT_ADAPTER *ioc, u8 access_control_value, int sleepFlag);
static int	mpt_host_page_alloc(MPT_ADAPTER *ioc, pIOCInit_t ioc_init);
static const struct file_operations mpt_summary_proc_fops;
static const struct file_operations mpt_version_proc_fops;
static const struct file_operations mpt_iocinfo_proc_fops;
static void	mpt_get_fw_exp_ver(char *buf, MPT_ADAPTER *ioc);
static int	ProcessEventNotification(MPT_ADAPTER *ioc,
EventNotificationReply_t *evReply, int *evHandlers);
static void	mpt_iocstatus_info(MPT_ADAPTER *ioc, u32 ioc_status, MPT_FRAME_HDR *mf);
static void	mpt_fc_log_info(MPT_ADAPTER *ioc, u32 log_info);
static void	mpt_spi_log_info(MPT_ADAPTER *ioc, u32 log_info);
static void	mpt_sas_log_info(MPT_ADAPTER *ioc, u32 log_info , u8 cb_idx);
static int	mpt_read_ioc_pg_3(MPT_ADAPTER *ioc);
static void	mpt_inactive_raid_list_free(MPT_ADAPTER *ioc);
static int  __init    fusion_init  (void);
static void __exit    fusion_exit  (void);
#define CHIPREG_READ32(addr) 		readl_relaxed(addr)
#define CHIPREG_READ32_dmasync(addr)	readl(addr)
#define CHIPREG_WRITE32(addr,val) 	writel(val, addr)
#define CHIPREG_PIO_WRITE32(addr,val)	outl(val, (unsigned long)addr)
#define CHIPREG_PIO_READ32(addr) 	inl((unsigned long)addr)
static void
pci_disable_io_access(struct pci_dev *pdev)
static void
pci_enable_io_access(struct pci_dev *pdev)
static int mpt_set_debug_level(const char *val, struct kernel_param *kp)
static u8
mpt_get_cb_idx(MPT_DRIVER_CLASS dclass)
static int
mpt_is_discovery_complete(MPT_ADAPTER *ioc)
static void
mpt_fault_reset_work(struct work_struct *work)
static void
mpt_turbo_reply(MPT_ADAPTER *ioc, u32 pa)
static void
mpt_reply(MPT_ADAPTER *ioc, u32 pa)
static irqreturn_t
mpt_interrupt(int irq, void *bus_id)
static int
mptbase_reply(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req, MPT_FRAME_HDR *reply)
u8
mpt_register(MPT_CALLBACK cbfunc, MPT_DRIVER_CLASS dclass, char *func_name)
void
mpt_deregister(u8 cb_idx)
int
mpt_event_register(u8 cb_idx, MPT_EVHANDLER ev_cbfunc)
void
mpt_event_deregister(u8 cb_idx)
int
mpt_reset_register(u8 cb_idx, MPT_RESETHANDLER reset_func)
void
mpt_reset_deregister(u8 cb_idx)
int
mpt_device_driver_register(struct mpt_pci_driver * dd_cbfunc, u8 cb_idx)
void
mpt_device_driver_deregister(u8 cb_idx)
MPT_FRAME_HDR*
mpt_get_msg_frame(u8 cb_idx, MPT_ADAPTER *ioc)
void
mpt_put_msg_frame(u8 cb_idx, MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf)
void
mpt_put_msg_frame_hi_pri(u8 cb_idx, MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf)
void
mpt_free_msg_frame(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf)
static void
mpt_add_sge(void *pAddr, u32 flagslength, dma_addr_t dma_addr)
static void
mpt_add_sge_64bit(void *pAddr, u32 flagslength, dma_addr_t dma_addr)
static void
mpt_add_sge_64bit_1078(void *pAddr, u32 flagslength, dma_addr_t dma_addr)
static void
mpt_add_chain(void *pAddr, u8 next, u16 length, dma_addr_t dma_addr)
static void
mpt_add_chain_64bit(void *pAddr, u8 next, u16 length, dma_addr_t dma_addr)
int
mpt_send_handshake_request(u8 cb_idx, MPT_ADAPTER *ioc, int reqBytes, u32 *req, int sleepFlag)
static int
mpt_host_page_access_control(MPT_ADAPTER *ioc, u8 access_control_value, int sleepFlag)
static int
mpt_host_page_alloc(MPT_ADAPTER *ioc, pIOCInit_t ioc_init)
int
mpt_verify_adapter(int iocid, MPT_ADAPTER **iocpp)
static void
mpt_get_product_name(u16 vendor, u16 device, u8 revision, char *prod_name)
static int
mpt_mapresources(MPT_ADAPTER *ioc)
int
mpt_attach(struct pci_dev *pdev, const struct pci_device_id *id)
void
mpt_detach(struct pci_dev *pdev)
int
mpt_suspend(struct pci_dev *pdev, pm_message_t state)
int
mpt_resume(struct pci_dev *pdev)
static int
mpt_signal_reset(u8 index, MPT_ADAPTER *ioc, int reset_phase)
static int
mpt_do_ioc_recovery(MPT_ADAPTER *ioc, u32 reason, int sleepFlag)
static void
mpt_detect_bound_ports(MPT_ADAPTER *ioc, struct pci_dev *pdev)
static void
mpt_adapter_disable(MPT_ADAPTER *ioc)
static void
mpt_adapter_dispose(MPT_ADAPTER *ioc)
static void
MptDisplayIocCapabilities(MPT_ADAPTER *ioc)
static int
MakeIocReady(MPT_ADAPTER *ioc, int force, int sleepFlag)
u32
mpt_GetIocState(MPT_ADAPTER *ioc, int cooked)
static int
GetIocFacts(MPT_ADAPTER *ioc, int sleepFlag, int reason)
static int
GetPortFacts(MPT_ADAPTER *ioc, int portnum, int sleepFlag)
static int
SendIocInit(MPT_ADAPTER *ioc, int sleepFlag)
static int
SendPortEnable(MPT_ADAPTER *ioc, int portnum, int sleepFlag)
int
mpt_alloc_fw_memory(MPT_ADAPTER *ioc, int size)
void
mpt_free_fw_memory(MPT_ADAPTER *ioc)
static int
mpt_do_upload(MPT_ADAPTER *ioc, int sleepFlag)
static int
mpt_downloadboot(MPT_ADAPTER *ioc, MpiFwHeader_t *pFwHeader, int sleepFlag)
static int
KickStart(MPT_ADAPTER *ioc, int force, int sleepFlag)
static int
mpt_diag_reset(MPT_ADAPTER *ioc, int ignore, int sleepFlag)
static int
SendIocReset(MPT_ADAPTER *ioc, u8 reset_type, int sleepFlag)
static int
initChainBuffers(MPT_ADAPTER *ioc)
static int
PrimeIocFifos(MPT_ADAPTER *ioc)
static int
mpt_handshake_req_reply_wait(MPT_ADAPTER *ioc, int reqBytes, u32 *req,
int replyBytes, u16 *u16reply, int maxwait, int sleepFlag)
static int
WaitForDoorbellAck(MPT_ADAPTER *ioc, int howlong, int sleepFlag)
static int
WaitForDoorbellInt(MPT_ADAPTER *ioc, int howlong, int sleepFlag)
static int
WaitForDoorbellReply(MPT_ADAPTER *ioc, int howlong, int sleepFlag)
static int
GetLanConfigPages(MPT_ADAPTER *ioc)
int
mptbase_sas_persist_operation(MPT_ADAPTER *ioc, u8 persist_opcode)
static void
mptbase_raid_process_event_data(MPT_ADAPTER *ioc,
MpiEventDataRaid_t * pRaidEventData)
static int
GetIoUnitPage2(MPT_ADAPTER *ioc)
static int
mpt_GetScsiPortSettings(MPT_ADAPTER *ioc, int portnum)
static int
mpt_readScsiDevicePageHeaders(MPT_ADAPTER *ioc, int portnum)
static void
mpt_inactive_raid_list_free(MPT_ADAPTER *ioc)
static void
mpt_inactive_raid_volumes(MPT_ADAPTER *ioc, u8 channel, u8 id)
int
mpt_raid_phys_disk_pg0(MPT_ADAPTER *ioc, u8 phys_disk_num,
RaidPhysDiskPage0_t *phys_disk)
int
mpt_raid_phys_disk_get_num_paths(MPT_ADAPTER *ioc, u8 phys_disk_num)
EXPORT_SYMBOL(mpt_raid_phys_disk_get_num_paths);
int
mpt_raid_phys_disk_pg1(MPT_ADAPTER *ioc, u8 phys_disk_num,
RaidPhysDiskPage1_t *phys_disk)
EXPORT_SYMBOL(mpt_raid_phys_disk_pg1);
int
mpt_findImVolumes(MPT_ADAPTER *ioc)
static int
mpt_read_ioc_pg_3(MPT_ADAPTER *ioc)
static void
mpt_read_ioc_pg_4(MPT_ADAPTER *ioc)
static void
mpt_read_ioc_pg_1(MPT_ADAPTER *ioc)
static void
mpt_get_manufacturing_pg_0(MPT_ADAPTER *ioc)
static int
SendEventNotification(MPT_ADAPTER *ioc, u8 EvSwitch, int sleepFlag)
static int
SendEventAck(MPT_ADAPTER *ioc, EventNotificationReply_t *evnp)
int
mpt_config(MPT_ADAPTER *ioc, CONFIGPARMS *pCfg)
static int
mpt_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
static int
procmpt_create(void)
static void
procmpt_destroy(void)
static void seq_mpt_print_ioc_summary(MPT_ADAPTER *ioc, struct seq_file *m, int showlan);
static int mpt_summary_proc_show(struct seq_file *m, void *v)
static int mpt_summary_proc_open(struct inode *inode, struct file *file)
static const struct file_operations mpt_summary_proc_fops = ;
static int mpt_version_proc_show(struct seq_file *m, void *v)
static int mpt_version_proc_open(struct inode *inode, struct file *file)
static const struct file_operations mpt_version_proc_fops = ;
static int mpt_iocinfo_proc_show(struct seq_file *m, void *v)
static int mpt_iocinfo_proc_open(struct inode *inode, struct file *file)
static const struct file_operations mpt_iocinfo_proc_fops = ;
static void
mpt_get_fw_exp_ver(char *buf, MPT_ADAPTER *ioc)
void
mpt_print_ioc_summary(MPT_ADAPTER *ioc, char *buffer, int *size, int len, int showlan)
static void seq_mpt_print_ioc_summary(MPT_ADAPTER *ioc, struct seq_file *m, int showlan)
int
mpt_set_taskmgmt_in_progress_flag(MPT_ADAPTER *ioc)
EXPORT_SYMBOL(mpt_set_taskmgmt_in_progress_flag);
void
mpt_clear_taskmgmt_in_progress_flag(MPT_ADAPTER *ioc)
EXPORT_SYMBOL(mpt_clear_taskmgmt_in_progress_flag);
void
mpt_halt_firmware(MPT_ADAPTER *ioc)
EXPORT_SYMBOL(mpt_halt_firmware);
int
mpt_SoftResetHandler(MPT_ADAPTER *ioc, int sleepFlag)
int
mpt_Soft_Hard_ResetHandler(MPT_ADAPTER *ioc, int sleepFlag)
EXPORT_SYMBOL(mpt_Soft_Hard_ResetHandler);
int
mpt_HardResetHandler(MPT_ADAPTER *ioc, int sleepFlag)
static void
mpt_display_event_info(MPT_ADAPTER *ioc, EventNotificationReply_t *pEventReply)
static int
ProcessEventNotification(MPT_ADAPTER *ioc, EventNotificationReply_t *pEventReply, int *evHandlers)
static void
mpt_fc_log_info(MPT_ADAPTER *ioc, u32 log_info)
static void
mpt_spi_log_info(MPT_ADAPTER *ioc, u32 log_info)
static char *originator_str[] = ;
static char *iop_code_str[] = ;
static char *pl_code_str[] = ;
static char *ir_code_str[] = ;
static char *raid_sub_code_str[] = ;
static void
mpt_sas_log_info(MPT_ADAPTER *ioc, u32 log_info, u8 cb_idx)
static void
mpt_iocstatus_info_config(MPT_ADAPTER *ioc, u32 ioc_status, MPT_FRAME_HDR *mf)
static void
mpt_iocstatus_info(MPT_ADAPTER *ioc, u32 ioc_status, MPT_FRAME_HDR *mf)
EXPORT_SYMBOL(mpt_attach);
EXPORT_SYMBOL(mpt_detach);
EXPORT_SYMBOL(mpt_resume);
EXPORT_SYMBOL(mpt_suspend);
EXPORT_SYMBOL(ioc_list);
EXPORT_SYMBOL(mpt_register);
EXPORT_SYMBOL(mpt_deregister);
EXPORT_SYMBOL(mpt_event_register);
EXPORT_SYMBOL(mpt_event_deregister);
EXPORT_SYMBOL(mpt_reset_register);
EXPORT_SYMBOL(mpt_reset_deregister);
EXPORT_SYMBOL(mpt_device_driver_register);
EXPORT_SYMBOL(mpt_device_driver_deregister);
EXPORT_SYMBOL(mpt_get_msg_frame);
EXPORT_SYMBOL(mpt_put_msg_frame);
EXPORT_SYMBOL(mpt_put_msg_frame_hi_pri);
EXPORT_SYMBOL(mpt_free_msg_frame);
EXPORT_SYMBOL(mpt_send_handshake_request);
EXPORT_SYMBOL(mpt_verify_adapter);
EXPORT_SYMBOL(mpt_GetIocState);
EXPORT_SYMBOL(mpt_print_ioc_summary);
EXPORT_SYMBOL(mpt_HardResetHandler);
EXPORT_SYMBOL(mpt_config);
EXPORT_SYMBOL(mpt_findImVolumes);
EXPORT_SYMBOL(mpt_alloc_fw_memory);
EXPORT_SYMBOL(mpt_free_fw_memory);
EXPORT_SYMBOL(mptbase_sas_persist_operation);
EXPORT_SYMBOL(mpt_raid_phys_disk_pg0);
static int __init
fusion_init(void)
static void __exit
fusion_exit(void)
module_init(fusion_init);
module_exit(fusion_exit);
