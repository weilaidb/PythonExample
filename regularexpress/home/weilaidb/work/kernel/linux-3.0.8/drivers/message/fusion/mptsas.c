#define my_NAME		"Fusion MPT SAS Host driver"
#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptsas"
#define MPTSAS_RAID_CHANNEL	1
#define SAS_CONFIG_PAGE_TIMEOUT		30
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(my_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
static int mpt_pt_clear;
module_param(mpt_pt_clear, int, 0);
MODULE_PARM_DESC(mpt_pt_clear,
" Clear persistency table: enable=1  "
"(default=MPTSCSIH_PT_CLEAR=0)");
#define MPTSAS_MAX_LUN (16895)
static int max_lun = MPTSAS_MAX_LUN;
module_param(max_lun, int, 0);
MODULE_PARM_DESC(max_lun, " max lun, default=16895 ");
static u8	mptsasDoneCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptsasTaskCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptsasInternalCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptsasMgmtCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptsasDeviceResetCtx = MPT_MAX_PROTOCOL_DRIVERS;
static void mptsas_firmware_event_work(struct work_struct *work);
static void mptsas_send_sas_event(struct fw_event_work *fw_event);
static void mptsas_send_raid_event(struct fw_event_work *fw_event);
static void mptsas_send_ir2_event(struct fw_event_work *fw_event);
static void mptsas_parse_device_info(struct sas_identify *identify,
struct mptsas_devinfo *device_info);
static inline void mptsas_set_rphy(MPT_ADAPTER *ioc,
struct mptsas_phyinfo *phy_info, struct sas_rphy *rphy);
static struct mptsas_phyinfo	*mptsas_find_phyinfo_by_sas_address
(MPT_ADAPTER *ioc, u64 sas_address);
static int mptsas_sas_device_pg0(MPT_ADAPTER *ioc,
struct mptsas_devinfo *device_info, u32 form, u32 form_specific);
static int mptsas_sas_enclosure_pg0(MPT_ADAPTER *ioc,
struct mptsas_enclosure *enclosure, u32 form, u32 form_specific);
static int mptsas_add_end_device(MPT_ADAPTER *ioc,
struct mptsas_phyinfo *phy_info);
static void mptsas_del_end_device(MPT_ADAPTER *ioc,
struct mptsas_phyinfo *phy_info);
static void mptsas_send_link_status_event(struct fw_event_work *fw_event);
static struct mptsas_portinfo	*mptsas_find_portinfo_by_sas_address
(MPT_ADAPTER *ioc, u64 sas_address);
static void mptsas_expander_delete(MPT_ADAPTER *ioc,
struct mptsas_portinfo *port_info, u8 force);
static void mptsas_send_expander_event(struct fw_event_work *fw_event);
static void mptsas_not_responding_devices(MPT_ADAPTER *ioc);
static void mptsas_scan_sas_topology(MPT_ADAPTER *ioc);
static void mptsas_broadcast_primative_work(struct fw_event_work *fw_event);
static void mptsas_handle_queue_full_event(struct fw_event_work *fw_event);
static void mptsas_volume_delete(MPT_ADAPTER *ioc, u8 id);
void	mptsas_schedule_target_reset(void *ioc);
static void mptsas_print_phy_data(MPT_ADAPTER *ioc,
MPI_SAS_IO_UNIT0_PHY_DATA *phy_data)
static void mptsas_print_phy_pg0(MPT_ADAPTER *ioc, SasPhyPage0_t *pg0)
static void mptsas_print_phy_pg1(MPT_ADAPTER *ioc, SasPhyPage1_t *pg1)
static void mptsas_print_device_pg0(MPT_ADAPTER *ioc, SasDevicePage0_t *pg0)
static void mptsas_print_expander_pg1(MPT_ADAPTER *ioc, SasExpanderPage1_t *pg1)
static void
mptsas_fw_event_off(MPT_ADAPTER *ioc)
static void
mptsas_fw_event_on(MPT_ADAPTER *ioc)
static void
mptsas_add_fw_event(MPT_ADAPTER *ioc, struct fw_event_work *fw_event,
unsigned long delay)
static void
mptsas_requeue_fw_event(MPT_ADAPTER *ioc, struct fw_event_work *fw_event,
unsigned long delay)
static void
mptsas_free_fw_event(MPT_ADAPTER *ioc, struct fw_event_work *fw_event)
static void
mptsas_cleanup_fw_event_q(MPT_ADAPTER *ioc)
static inline MPT_ADAPTER *phy_to_ioc(struct sas_phy *phy)
static inline MPT_ADAPTER *rphy_to_ioc(struct sas_rphy *rphy)
static struct mptsas_portinfo *
mptsas_find_portinfo_by_handle(MPT_ADAPTER *ioc, u16 handle)
static struct mptsas_portinfo *
mptsas_find_portinfo_by_sas_address(MPT_ADAPTER *ioc, u64 sas_address)
static inline int
mptsas_is_end_device(struct mptsas_devinfo * attached)
static void
mptsas_port_delete(MPT_ADAPTER *ioc, struct mptsas_portinfo_details * port_details)
static inline struct sas_rphy *
mptsas_get_rphy(struct mptsas_phyinfo *phy_info)
static inline void
mptsas_set_rphy(MPT_ADAPTER *ioc, struct mptsas_phyinfo *phy_info, struct sas_rphy *rphy)
static inline struct sas_port *
mptsas_get_port(struct mptsas_phyinfo *phy_info)
static inline void
mptsas_set_port(MPT_ADAPTER *ioc, struct mptsas_phyinfo *phy_info, struct sas_port *port)
static inline struct scsi_target *
mptsas_get_starget(struct mptsas_phyinfo *phy_info)
static inline void
mptsas_set_starget(struct mptsas_phyinfo *phy_info, struct scsi_target *
starget)
static void
mptsas_add_device_component(MPT_ADAPTER *ioc, u8 channel, u8 id,
u64 sas_address, u32 device_info, u16 slot, u64 enclosure_logical_id)
static void
mptsas_add_device_component_by_fw(MPT_ADAPTER *ioc, u8 channel, u8 id)
static void
mptsas_add_device_component_starget_ir(MPT_ADAPTER *ioc,
struct scsi_target *starget)
static void
mptsas_add_device_component_starget(MPT_ADAPTER *ioc,
struct scsi_target *starget)
static void
mptsas_del_device_component_by_os(MPT_ADAPTER *ioc, u8 channel, u8 id)
static void
mptsas_del_device_components(MPT_ADAPTER *ioc)
static void
mptsas_setup_wide_ports(MPT_ADAPTER *ioc, struct mptsas_portinfo *port_info)
static VirtTarget *
mptsas_find_vtarget(MPT_ADAPTER *ioc, u8 channel, u8 id)
static void
mptsas_queue_device_delete(MPT_ADAPTER *ioc,
MpiEventDataSasDeviceStatusChange_t *sas_event_data)
static void
mptsas_queue_rescan(MPT_ADAPTER *ioc)
static int
mptsas_target_reset(MPT_ADAPTER *ioc, u8 channel, u8 id)
static void
mptsas_block_io_sdev(struct scsi_device *sdev, void *data)
static void
mptsas_block_io_starget(struct scsi_target *starget)
static void
mptsas_target_reset_queue(MPT_ADAPTER *ioc,
EVENT_DATA_SAS_DEVICE_STATUS_CHANGE *sas_event_data)
void
mptsas_schedule_target_reset(void *iocp)
static int
mptsas_taskmgmt_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *mr)
static int
mptsas_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
enum device_state;
static int
mptsas_sas_enclosure_pg0(MPT_ADAPTER *ioc, struct mptsas_enclosure *enclosure,
u32 form, u32 form_specific)
static int
mptsas_add_end_device(MPT_ADAPTER *ioc, struct mptsas_phyinfo *phy_info)
static void
mptsas_del_end_device(MPT_ADAPTER *ioc, struct mptsas_phyinfo *phy_info)
struct mptsas_phyinfo *
mptsas_refreshing_device_handles(MPT_ADAPTER *ioc,
struct mptsas_devinfo *sas_device)
static void
mptsas_firmware_event_work(struct work_struct *work)
static int
mptsas_slave_configure(struct scsi_device *sdev)
static int
mptsas_target_alloc(struct scsi_target *starget)
static void
mptsas_target_destroy(struct scsi_target *starget)
static int
mptsas_slave_alloc(struct scsi_device *sdev)
static int
mptsas_qcmd_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(mptsas_qcmd)
static enum blk_eh_timer_return mptsas_eh_timed_out(struct scsi_cmnd *sc)
static struct scsi_host_template mptsas_driver_template = ;
static int mptsas_get_linkerrors(struct sas_phy *phy)
static int mptsas_mgmt_done(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req,
MPT_FRAME_HDR *reply)
static int mptsas_phy_reset(struct sas_phy *phy, int hard_reset)
static int
mptsas_get_enclosure_identifier(struct sas_rphy *rphy, u64 *identifier)
static int
mptsas_get_bay_identifier(struct sas_rphy *rphy)
static int mptsas_smp_handler(struct Scsi_Host *shost, struct sas_rphy *rphy,
struct request *req)
static struct sas_function_template mptsas_transport_functions = ;
static struct scsi_transport_template *mptsas_transport_template;
static int
mptsas_sas_io_unit_pg0(MPT_ADAPTER *ioc, struct mptsas_portinfo *port_info)
static int
mptsas_sas_io_unit_pg1(MPT_ADAPTER *ioc)
static int
mptsas_sas_phy_pg0(MPT_ADAPTER *ioc, struct mptsas_phyinfo *phy_info,
u32 form, u32 form_specific)
static int
mptsas_sas_device_pg0(MPT_ADAPTER *ioc, struct mptsas_devinfo *device_info,
u32 form, u32 form_specific)
static int
mptsas_sas_expander_pg0(MPT_ADAPTER *ioc, struct mptsas_portinfo *port_info,
u32 form, u32 form_specific)
static int
mptsas_sas_expander_pg1(MPT_ADAPTER *ioc, struct mptsas_phyinfo *phy_info,
u32 form, u32 form_specific)
struct rep_manu_request;
struct rep_manu_reply;
static int
mptsas_exp_repmanufacture_info(MPT_ADAPTER *ioc,
u64 sas_address, struct sas_expander_device *edev)
static void
mptsas_parse_device_info(struct sas_identify *identify,
struct mptsas_devinfo *device_info)
static int mptsas_probe_one_phy(struct device *dev,
struct mptsas_phyinfo *phy_info, int index, int local)
static int
mptsas_probe_hba_phys(MPT_ADAPTER *ioc)
static void
mptsas_expander_refresh(MPT_ADAPTER *ioc, struct mptsas_portinfo *port_info)
static void
mptsas_expander_event_add(MPT_ADAPTER *ioc,
MpiEventDataSasExpanderStatusChange_t *expander_data)
static void
mptsas_delete_expander_siblings(MPT_ADAPTER *ioc, struct mptsas_portinfo
*parent, struct mptsas_portinfo *expander)
static void mptsas_expander_delete(MPT_ADAPTER *ioc,
struct mptsas_portinfo *port_info, u8 force)
static void
mptsas_send_expander_event(struct fw_event_work *fw_event)
struct mptsas_portinfo *
mptsas_expander_add(MPT_ADAPTER *ioc, u16 handle)
static void
mptsas_send_link_status_event(struct fw_event_work *fw_event)
static void
mptsas_not_responding_devices(MPT_ADAPTER *ioc)
static void
mptsas_probe_expanders(MPT_ADAPTER *ioc)
static void
mptsas_probe_devices(MPT_ADAPTER *ioc)
static void
mptsas_scan_sas_topology(MPT_ADAPTER *ioc)
static void
mptsas_handle_queue_full_event(struct fw_event_work *fw_event)
static struct mptsas_phyinfo *
mptsas_find_phyinfo_by_sas_address(MPT_ADAPTER *ioc, u64 sas_address)
static struct mptsas_phyinfo *
mptsas_find_phyinfo_by_phys_disk_num(MPT_ADAPTER *ioc, u8 phys_disk_num,
u8 channel, u8 id)
static void
mptsas_reprobe_lun(struct scsi_device *sdev, void *data)
static void
mptsas_reprobe_target(struct scsi_target *starget, int uld_attach)
static void
mptsas_adding_inactive_raid_components(MPT_ADAPTER *ioc, u8 channel, u8 id)
static void
mptsas_hotplug_work(MPT_ADAPTER *ioc, struct fw_event_work *fw_event,
struct mptsas_hotplug_event *hot_plug_info)
static void
mptsas_send_sas_event(struct fw_event_work *fw_event)
static void
mptsas_send_raid_event(struct fw_event_work *fw_event)
static int
mptsas_issue_tm(MPT_ADAPTER *ioc, u8 type, u8 channel, u8 id, u64 lun,
int task_context, ulong timeout, u8 *issue_reset)
static void
mptsas_broadcast_primative_work(struct fw_event_work *fw_event)
static void
mptsas_send_ir2_event(struct fw_event_work *fw_event)
static int
mptsas_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *reply)
static void mptsas_volume_delete(MPT_ADAPTER *ioc, u8 id)
static int
mptsas_probe(struct pci_dev *pdev, const struct pci_device_id *id)
void
mptsas_shutdown(struct pci_dev *pdev)
static void __devexit mptsas_remove(struct pci_dev *pdev)
static struct pci_device_id mptsas_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, mptsas_pci_table);
static struct pci_driver mptsas_driver = ;
static int __init
mptsas_init(void)
static void __exit
mptsas_exit(void)
module_init(mptsas_init);
module_exit(mptsas_exit);
