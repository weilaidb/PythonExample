MODULE_AUTHOR(MPT2SAS_AUTHOR);
MODULE_DESCRIPTION(MPT2SAS_DESCRIPTION);
MODULE_LICENSE("GPL");
MODULE_VERSION(MPT2SAS_DRIVER_VERSION);
#define RAID_CHANNEL 1
static void _scsih_expander_node_remove(struct MPT2SAS_ADAPTER *ioc,
struct _sas_node *sas_expander);
static void _firmware_event_work(struct work_struct *work);
static u8 _scsih_check_for_pending_tm(struct MPT2SAS_ADAPTER *ioc, u16 smid);
LIST_HEAD(mpt2sas_ioc_list);
static u8 scsi_io_cb_idx = -1;
static u8 tm_cb_idx = -1;
static u8 ctl_cb_idx = -1;
static u8 base_cb_idx = -1;
static u8 transport_cb_idx = -1;
static u8 scsih_cb_idx = -1;
static u8 config_cb_idx = -1;
static int mpt_ids;
static u8 tm_tr_cb_idx = -1 ;
static u8 tm_tr_volume_cb_idx = -1 ;
static u8 tm_sas_control_cb_idx = -1;
static u32 logging_level;
MODULE_PARM_DESC(logging_level, " bits for enabling additional logging info "
"(default=0)");
#define MPT2SAS_MAX_LUN (16895)
static int max_lun = MPT2SAS_MAX_LUN;
module_param(max_lun, int, 0);
MODULE_PARM_DESC(max_lun, " max lun, default=16895 ");
struct sense_info ;
#define MPT2SAS_TURN_ON_FAULT_LED (0xFFFC)
#define MPT2SAS_RESCAN_AFTER_HOST_RESET (0xFFFF)
struct fw_event_work ;
static struct raid_template *mpt2sas_raid_template;
struct _scsi_io_transfer ;
static struct pci_device_id scsih_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, scsih_pci_table);
static int
_scsih_set_debug_level(const char *val, struct kernel_param *kp)
module_param_call(logging_level, _scsih_set_debug_level, param_get_int,
&logging_level, 0644);
static inline int
_scsih_srch_boot_sas_address(u64 sas_address,
Mpi2BootDeviceSasWwid_t *boot_device)
static inline int
_scsih_srch_boot_device_name(u64 device_name,
Mpi2BootDeviceDeviceName_t *boot_device)
static inline int
_scsih_srch_boot_encl_slot(u64 enclosure_logical_id, u16 slot_number,
Mpi2BootDeviceEnclosureSlot_t *boot_device)
static int
_scsih_is_boot_device(u64 sas_address, u64 device_name,
u64 enclosure_logical_id, u16 slot, u8 form,
Mpi2BiosPage2BootDevice_t *boot_device)
static int
_scsih_get_sas_address(struct MPT2SAS_ADAPTER *ioc, u16 handle,
u64 *sas_address)
static void
_scsih_determine_boot_device(struct MPT2SAS_ADAPTER *ioc,
void *device, u8 is_raid)
struct _sas_device *
mpt2sas_scsih_sas_device_find_by_sas_address(struct MPT2SAS_ADAPTER *ioc,
u64 sas_address)
static struct _sas_device *
_scsih_sas_device_find_by_handle(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_sas_device_remove(struct MPT2SAS_ADAPTER *ioc,
struct _sas_device *sas_device)
static void
_scsih_sas_device_add(struct MPT2SAS_ADAPTER *ioc,
struct _sas_device *sas_device)
static void
_scsih_sas_device_init_add(struct MPT2SAS_ADAPTER *ioc,
struct _sas_device *sas_device)
static struct _raid_device *
_scsih_raid_device_find_by_id(struct MPT2SAS_ADAPTER *ioc, int id, int channel)
static struct _raid_device *
_scsih_raid_device_find_by_handle(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static struct _raid_device *
_scsih_raid_device_find_by_wwid(struct MPT2SAS_ADAPTER *ioc, u64 wwid)
static void
_scsih_raid_device_add(struct MPT2SAS_ADAPTER *ioc,
struct _raid_device *raid_device)
static void
_scsih_raid_device_remove(struct MPT2SAS_ADAPTER *ioc,
struct _raid_device *raid_device)
struct _sas_node *
mpt2sas_scsih_expander_find_by_handle(struct MPT2SAS_ADAPTER *ioc, u16 handle)
struct _sas_node *
mpt2sas_scsih_expander_find_by_sas_address(struct MPT2SAS_ADAPTER *ioc,
u64 sas_address)
static void
_scsih_expander_node_add(struct MPT2SAS_ADAPTER *ioc,
struct _sas_node *sas_expander)
static int
_scsih_is_end_device(u32 device_info)
static struct scsi_cmnd *
_scsih_scsi_lookup_get(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static inline struct scsi_cmnd *
_scsih_scsi_lookup_get_clear(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static u16
_scsih_scsi_lookup_find_by_scmd(struct MPT2SAS_ADAPTER *ioc, struct scsi_cmnd
*scmd)
static u8
_scsih_scsi_lookup_find_by_target(struct MPT2SAS_ADAPTER *ioc, int id,
int channel)
static u8
_scsih_scsi_lookup_find_by_lun(struct MPT2SAS_ADAPTER *ioc, int id,
unsigned int lun, int channel)
static struct chain_tracker *
_scsih_get_chain_buffer_tracker(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static int
_scsih_build_scatter_gather(struct MPT2SAS_ADAPTER *ioc,
struct scsi_cmnd *scmd, u16 smid)
static void
_scsih_adjust_queue_depth(struct scsi_device *sdev, int qdepth)
static int
_scsih_change_queue_depth(struct scsi_device *sdev, int qdepth, int reason)
static int
_scsih_change_queue_type(struct scsi_device *sdev, int tag_type)
static int
_scsih_target_alloc(struct scsi_target *starget)
static void
_scsih_target_destroy(struct scsi_target *starget)
static int
_scsih_slave_alloc(struct scsi_device *sdev)
static void
_scsih_slave_destroy(struct scsi_device *sdev)
static void
_scsih_display_sata_capabilities(struct MPT2SAS_ADAPTER *ioc,
struct _sas_device *sas_device, struct scsi_device *sdev)
static int
_scsih_is_raid(struct device *dev)
static void
_scsih_get_resync(struct device *dev)
static void
_scsih_get_state(struct device *dev)
static void
_scsih_set_level(struct scsi_device *sdev, struct _raid_device *raid_device)
static void
_scsih_get_volume_capabilities(struct MPT2SAS_ADAPTER *ioc,
struct _raid_device *raid_device)
static void
_scsih_disable_ddio(struct MPT2SAS_ADAPTER *ioc)
static u8
_scsih_get_num_volumes(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_init_warpdrive_properties(struct MPT2SAS_ADAPTER *ioc,
struct _raid_device *raid_device)
static void
_scsih_enable_tlr(struct MPT2SAS_ADAPTER *ioc, struct scsi_device *sdev)
static int
_scsih_slave_configure(struct scsi_device *sdev)
static int
_scsih_bios_param(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int params[])
static void
_scsih_response_code(struct MPT2SAS_ADAPTER *ioc, u8 response_code)
static u8
_scsih_tm_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index, u32 reply)
void
mpt2sas_scsih_set_tm_flag(struct MPT2SAS_ADAPTER *ioc, u16 handle)
void
mpt2sas_scsih_clear_tm_flag(struct MPT2SAS_ADAPTER *ioc, u16 handle)
int
mpt2sas_scsih_issue_tm(struct MPT2SAS_ADAPTER *ioc, u16 handle, uint channel,
uint id, uint lun, u8 type, u16 smid_task, ulong timeout,
struct scsi_cmnd *scmd)
static void
_scsih_tm_display_info(struct MPT2SAS_ADAPTER *ioc, struct scsi_cmnd *scmd)
static int
_scsih_abort(struct scsi_cmnd *scmd)
static int
_scsih_dev_reset(struct scsi_cmnd *scmd)
static int
_scsih_target_reset(struct scsi_cmnd *scmd)
static int
_scsih_host_reset(struct scsi_cmnd *scmd)
static void
_scsih_fw_event_add(struct MPT2SAS_ADAPTER *ioc, struct fw_event_work *fw_event)
static void
_scsih_fw_event_free(struct MPT2SAS_ADAPTER *ioc, struct fw_event_work
*fw_event)
static void
_scsih_queue_rescan(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_fw_event_cleanup_queue(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_ublock_io_device(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_block_io_device(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_block_io_to_children_attached_to_ex(struct MPT2SAS_ADAPTER *ioc,
struct _sas_node *sas_expander)
static void
_scsih_block_io_to_children_attached_directly(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataSasTopologyChangeList_t *event_data)
static void
_scsih_tm_tr_send(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static u8
_scsih_sas_control_complete(struct MPT2SAS_ADAPTER *ioc, u16 smid,
u8 msix_index, u32 reply)
static void
_scsih_tm_tr_volume_send(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static u8
_scsih_tm_volume_tr_complete(struct MPT2SAS_ADAPTER *ioc, u16 smid,
u8 msix_index, u32 reply)
static u8
_scsih_tm_tr_complete(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply)
static u8
_scsih_check_for_pending_tm(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static void
_scsih_check_topo_delete_events(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataSasTopologyChangeList_t *event_data)
static void
_scsih_set_volume_delete_flag(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_set_volume_handle_for_tr(u16 handle, u16 *a, u16 *b)
static void
_scsih_check_ir_config_unhide_events(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataIrConfigChangeList_t *event_data)
static void
_scsih_check_volume_delete_events(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataIrVolume_t *event_data)
static void
_scsih_flush_running_cmds(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_setup_eedp(struct scsi_cmnd *scmd, Mpi2SCSIIORequest_t *mpi_request)
static void
_scsih_eedp_error_handling(struct scsi_cmnd *scmd, u16 ioc_status)
static inline u8
_scsih_scsi_direct_io_get(struct MPT2SAS_ADAPTER *ioc, u16 smid)
static inline void
_scsih_scsi_direct_io_set(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 direct_io)
static void
_scsih_setup_direct_io(struct MPT2SAS_ADAPTER *ioc, struct scsi_cmnd *scmd,
struct _raid_device *raid_device, Mpi2SCSIIORequest_t *mpi_request,
u16 smid)
static int
_scsih_qcmd_lck(struct scsi_cmnd *scmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(_scsih_qcmd)
static void
_scsih_normalize_sense(char *sense_buffer, struct sense_info *data)
static void
_scsih_scsi_ioc_info(struct MPT2SAS_ADAPTER *ioc, struct scsi_cmnd *scmd,
Mpi2SCSIIOReply_t *mpi_reply, u16 smid)
static void
_scsih_turn_on_fault_led(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_send_event_to_turn_on_fault_led(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_smart_predicted_fault(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static u8
_scsih_io_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index, u32 reply)
static void
_scsih_sas_host_refresh(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_sas_host_add(struct MPT2SAS_ADAPTER *ioc)
static int
_scsih_expander_add(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static u8
_scsih_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index, u32 reply)
void
mpt2sas_expander_remove(struct MPT2SAS_ADAPTER *ioc, u64 sas_address)
static u8
_scsih_check_access_status(struct MPT2SAS_ADAPTER *ioc, u64 sas_address,
u16 handle, u8 access_status)
static void
_scsih_check_device(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static int
_scsih_add_device(struct MPT2SAS_ADAPTER *ioc, u16 handle, u8 phy_num, u8 is_pd)
static void
_scsih_remove_device(struct MPT2SAS_ADAPTER *ioc,
struct _sas_device *sas_device)
void
mpt2sas_device_remove(struct MPT2SAS_ADAPTER *ioc, u64 sas_address)
static void
_scsih_sas_topology_change_event_debug(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataSasTopologyChangeList_t *event_data)
static void
_scsih_sas_topology_change_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_device_status_change_event_debug(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataSasDeviceStatusChange_t *event_data)
static void
_scsih_sas_device_status_change_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_enclosure_dev_status_change_event_debug(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataSasEnclDevStatusChange_t *event_data)
static void
_scsih_sas_enclosure_dev_status_change_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_broadcast_primative_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_discovery_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_reprobe_lun(struct scsi_device *sdev, void *no_uld_attach)
static void
_scsih_reprobe_target(struct scsi_target *starget, int no_uld_attach)
static void
_scsih_sas_volume_add(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventIrConfigElement_t *element)
static void
_scsih_sas_volume_delete(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_scsih_sas_pd_expose(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventIrConfigElement_t *element)
static void
_scsih_sas_pd_hide(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventIrConfigElement_t *element)
static void
_scsih_sas_pd_delete(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventIrConfigElement_t *element)
static void
_scsih_sas_pd_add(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventIrConfigElement_t *element)
static void
_scsih_sas_ir_config_change_event_debug(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataIrConfigChangeList_t *event_data)
static void
_scsih_sas_ir_config_change_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_ir_volume_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_ir_physical_disk_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_sas_ir_operation_status_event_debug(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventDataIrOperationStatus_t *event_data)
static void
_scsih_sas_ir_operation_status_event(struct MPT2SAS_ADAPTER *ioc,
struct fw_event_work *fw_event)
static void
_scsih_prep_device_scan(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_mark_responding_sas_device(struct MPT2SAS_ADAPTER *ioc, u64 sas_address,
u16 slot, u16 handle)
static void
_scsih_search_responding_sas_devices(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_mark_responding_raid_device(struct MPT2SAS_ADAPTER *ioc, u64 wwid,
u16 handle)
static void
_scsih_search_responding_raid_devices(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_mark_responding_expander(struct MPT2SAS_ADAPTER *ioc, u64 sas_address,
u16 handle)
static void
_scsih_search_responding_expanders(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_remove_unresponding_sas_devices(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_hide_unhide_sas_devices(struct MPT2SAS_ADAPTER *ioc)
void
mpt2sas_scsih_reset_handler(struct MPT2SAS_ADAPTER *ioc, int reset_phase)
static void
_firmware_event_work(struct work_struct *work)
u8
mpt2sas_scsih_event_callback(struct MPT2SAS_ADAPTER *ioc, u8 msix_index,
u32 reply)
static struct scsi_host_template scsih_driver_template = ;
static void
_scsih_expander_node_remove(struct MPT2SAS_ADAPTER *ioc,
struct _sas_node *sas_expander)
static void
_scsih_ir_shutdown(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_shutdown(struct pci_dev *pdev)
static void __devexit
_scsih_remove(struct pci_dev *pdev)
static void
_scsih_probe_boot_devices(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_probe_raid(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_probe_sas(struct MPT2SAS_ADAPTER *ioc)
static void
_scsih_probe_devices(struct MPT2SAS_ADAPTER *ioc)
static int
_scsih_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static int
_scsih_suspend(struct pci_dev *pdev, pm_message_t state)
static int
_scsih_resume(struct pci_dev *pdev)
static pci_ers_result_t
_scsih_pci_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
_scsih_pci_slot_reset(struct pci_dev *pdev)
static void
_scsih_pci_resume(struct pci_dev *pdev)
static pci_ers_result_t
_scsih_pci_mmio_enabled(struct pci_dev *pdev)
static struct pci_error_handlers _scsih_err_handler = ;
static struct pci_driver scsih_driver = ;
static struct raid_function_template mpt2sas_raid_functions = ;
static int __init
_scsih_init(void)
static void __exit
_scsih_exit(void)
module_init(_scsih_init);
module_exit(_scsih_exit);
