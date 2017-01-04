static MPT_CALLBACK	mpt_callbacks[MPT_MAX_CALLBACKS];
#define FAULT_POLLING_INTERVAL 1000
static int max_queue_depth = -1;
module_param(max_queue_depth, int, 0);
MODULE_PARM_DESC(max_queue_depth, " max controller queue depth ");
static int max_sgl_entries = -1;
module_param(max_sgl_entries, int, 0);
MODULE_PARM_DESC(max_sgl_entries, " max sg entries ");
static int msix_disable = -1;
module_param(msix_disable, int, 0);
MODULE_PARM_DESC(msix_disable, " disable msix routed interrupts (default=0)");
static int missing_delay[2] = ;
module_param_array(missing_delay, int, NULL, 0);
MODULE_PARM_DESC(missing_delay, " device missing delay , io missing delay");
static int diag_buffer_enable;
module_param(diag_buffer_enable, int, 0);
MODULE_PARM_DESC(diag_buffer_enable, " post diag buffers "
"(TRACE=1/SNAPSHOT=2/EXTENDED=4/default=0)");
static int mpt2sas_fwfault_debug;
MODULE_PARM_DESC(mpt2sas_fwfault_debug, " enable detection of firmware fault "
"and halt firmware - (default=0)");
static int disable_discovery = -1;
module_param(disable_discovery, int, 0);
MODULE_PARM_DESC(disable_discovery, " disable discovery ");
static int
_scsih_set_fwfault_debug(const char *val, struct kernel_param *kp)
module_param_call(mpt2sas_fwfault_debug, _scsih_set_fwfault_debug,
param_get_int, &mpt2sas_fwfault_debug, 0644);
static void
_base_fault_reset_work(struct work_struct *work)
void
mpt2sas_base_start_watchdog(struct MPT2SAS_ADAPTER *ioc)
void
mpt2sas_base_stop_watchdog(struct MPT2SAS_ADAPTER *ioc)
void
mpt2sas_base_fault_info(struct MPT2SAS_ADAPTER *ioc , u16 fault_code)
void
mpt2sas_halt_firmware(struct MPT2SAS_ADAPTER *ioc)
static void
_base_sas_ioc_info(struct MPT2SAS_ADAPTER *ioc, MPI2DefaultReply_t *mpi_reply,
MPI2RequestHeader_t *request_hdr)
static void
_base_display_event_data(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventNotificationReply_t *mpi_reply)
static void
_base_sas_log_info(struct MPT2SAS_ADAPTER *ioc , u32 log_info)
static void
_base_display_reply_info(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply)
u8
mpt2sas_base_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply)
static u8
_base_async_event(struct MPT2SAS_ADAPTER *ioc, u8 msix_index, u32 reply)
static u8
_base_get_cb_idx(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static void
_base_mask_interrupts(struct MPT2SAS_ADAPTER *ioc)
static void
_base_unmask_interrupts(struct MPT2SAS_ADAPTER *ioc)
union reply_descriptor ;
static irqreturn_t
_base_interrupt(int irq, void *bus_id)
void
mpt2sas_base_release_callback_handler(u8 cb_idx)
u8
mpt2sas_base_register_callback_handler(MPT_CALLBACK cb_func)
void
mpt2sas_base_initialize_callback_handler(void)
void
mpt2sas_base_build_zero_len_sge(struct MPT2SAS_ADAPTER *ioc, void *paddr)
static void
_base_add_sg_single_32(void *paddr, u32 flags_length, dma_addr_t dma_addr)
static void
_base_add_sg_single_64(void *paddr, u32 flags_length, dma_addr_t dma_addr)
#define convert_to_kb(x) ((x) << (PAGE_SHIFT - 10))
static int
_base_config_dma_addressing(struct MPT2SAS_ADAPTER *ioc, struct pci_dev *pdev)
static void
_base_save_msix_table(struct MPT2SAS_ADAPTER *ioc)
static void
_base_restore_msix_table(struct MPT2SAS_ADAPTER *ioc)
static int
_base_check_enable_msix(struct MPT2SAS_ADAPTER *ioc)
static void
_base_disable_msix(struct MPT2SAS_ADAPTER *ioc)
static int
_base_enable_msix(struct MPT2SAS_ADAPTER *ioc)
int
mpt2sas_base_map_resources(struct MPT2SAS_ADAPTER *ioc)
void *
mpt2sas_base_get_msg_frame(struct MPT2SAS_ADAPTER *ioc, u16 smid)
void *
mpt2sas_base_get_sense_buffer(struct MPT2SAS_ADAPTER *ioc, u16 smid)
__le32
mpt2sas_base_get_sense_buffer_dma(struct MPT2SAS_ADAPTER *ioc, u16 smid)
void *
mpt2sas_base_get_reply_virt_addr(struct MPT2SAS_ADAPTER *ioc, u32 phys_addr)
u16
mpt2sas_base_get_smid(struct MPT2SAS_ADAPTER *ioc, u8 cb_idx)
u16
mpt2sas_base_get_smid_scsiio(struct MPT2SAS_ADAPTER *ioc, u8 cb_idx,
struct scsi_cmnd *scmd)
u16
mpt2sas_base_get_smid_hpr(struct MPT2SAS_ADAPTER *ioc, u8 cb_idx)
void
mpt2sas_base_free_smid(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static inline void _base_writeq(__u64 b, volatile void __iomem *addr,
spinlock_t *writeq_lock)
static inline void _base_writeq(__u64 b, volatile void __iomem *addr,
spinlock_t *writeq_lock)
void
mpt2sas_base_put_smid_scsi_io(struct MPT2SAS_ADAPTER *ioc, u16 smid, u16 handle)
void
mpt2sas_base_put_smid_hi_priority(struct MPT2SAS_ADAPTER *ioc, u16 smid)
void
mpt2sas_base_put_smid_default(struct MPT2SAS_ADAPTER *ioc, u16 smid)
void
mpt2sas_base_put_smid_target_assist(struct MPT2SAS_ADAPTER *ioc, u16 smid,
u16 io_index)
static void
_base_display_dell_branding(struct MPT2SAS_ADAPTER *ioc)
static void
_base_display_intel_branding(struct MPT2SAS_ADAPTER *ioc)
static void
_base_display_hp_branding(struct MPT2SAS_ADAPTER *ioc)
static void
_base_display_ioc_capabilities(struct MPT2SAS_ADAPTER *ioc)
static void
_base_update_missing_delay(struct MPT2SAS_ADAPTER *ioc,
u16 device_missing_delay, u8 io_missing_delay)
static void
_base_static_config_pages(struct MPT2SAS_ADAPTER *ioc)
static void
_base_release_memory_pools(struct MPT2SAS_ADAPTER *ioc)
static int
_base_allocate_memory_pools(struct MPT2SAS_ADAPTER *ioc,  int sleep_flag)
u32
mpt2sas_base_get_iocstate(struct MPT2SAS_ADAPTER *ioc, int cooked)
static int
_base_wait_on_iocstate(struct MPT2SAS_ADAPTER *ioc, u32 ioc_state, int timeout,
int sleep_flag)
static int
_base_wait_for_doorbell_int(struct MPT2SAS_ADAPTER *ioc, int timeout,
int sleep_flag)
static int
_base_wait_for_doorbell_ack(struct MPT2SAS_ADAPTER *ioc, int timeout,
int sleep_flag)
static int
_base_wait_for_doorbell_not_used(struct MPT2SAS_ADAPTER *ioc, int timeout,
int sleep_flag)
static int
_base_send_ioc_reset(struct MPT2SAS_ADAPTER *ioc, u8 reset_type, int timeout,
int sleep_flag)
static int
_base_handshake_req_reply_wait(struct MPT2SAS_ADAPTER *ioc, int request_bytes,
u32 *request, int reply_bytes, u16 *reply, int timeout, int sleep_flag)
int
mpt2sas_base_sas_iounit_control(struct MPT2SAS_ADAPTER *ioc,
Mpi2SasIoUnitControlReply_t *mpi_reply,
Mpi2SasIoUnitControlRequest_t *mpi_request)
int
mpt2sas_base_scsi_enclosure_processor(struct MPT2SAS_ADAPTER *ioc,
Mpi2SepReply_t *mpi_reply, Mpi2SepRequest_t *mpi_request)
static int
_base_get_port_facts(struct MPT2SAS_ADAPTER *ioc, int port, int sleep_flag)
static int
_base_get_ioc_facts(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
static int
_base_send_ioc_init(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
static int
_base_send_port_enable(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
static void
_base_unmask_events(struct MPT2SAS_ADAPTER *ioc, u16 event)
static int
_base_event_notification(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
void
mpt2sas_base_validate_event_type(struct MPT2SAS_ADAPTER *ioc, u32 *event_type)
static int
_base_diag_reset(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
static int
_base_make_ioc_ready(struct MPT2SAS_ADAPTER *ioc, int sleep_flag,
enum reset_type type)
static int
_base_make_ioc_operational(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
void
mpt2sas_base_free_resources(struct MPT2SAS_ADAPTER *ioc)
int
mpt2sas_base_attach(struct MPT2SAS_ADAPTER *ioc)
void
mpt2sas_base_detach(struct MPT2SAS_ADAPTER *ioc)
static void
_base_reset_handler(struct MPT2SAS_ADAPTER *ioc, int reset_phase)
static void
_wait_for_commands_to_complete(struct MPT2SAS_ADAPTER *ioc, int sleep_flag)
int
mpt2sas_base_hard_reset_handler(struct MPT2SAS_ADAPTER *ioc, int sleep_flag,
enum reset_type type)
