#define MPT2SAS_BASE_H_INCLUDED
#define MPT2SAS_DRIVER_NAME		"mpt2sas"
#define MPT2SAS_AUTHOR	"LSI Corporation <DL-MPTFusionLinux@lsi.com>"
#define MPT2SAS_DESCRIPTION	"LSI MPT Fusion SAS 2.0 Device Driver"
#define MPT2SAS_DRIVER_VERSION		"08.100.00.02"
#define MPT2SAS_MAJOR_VERSION		08
#define MPT2SAS_MINOR_VERSION		100
#define MPT2SAS_BUILD_VERSION		00
#define MPT2SAS_RELEASE_VERSION		02
#if     CONFIG_SCSI_MPT2SAS_MAX_SGE  < 16
#define MPT2SAS_SG_DEPTH       16
#elif CONFIG_SCSI_MPT2SAS_MAX_SGE  > 128
#define MPT2SAS_SG_DEPTH       128
#define MPT2SAS_SG_DEPTH       CONFIG_SCSI_MPT2SAS_MAX_SGE
#define MPT2SAS_SG_DEPTH       128
#define MPT2SAS_SATA_QUEUE_DEPTH	32
#define MPT2SAS_SAS_QUEUE_DEPTH		254
#define MPT2SAS_RAID_QUEUE_DEPTH	128
#define MPT_NAME_LENGTH			32
#define MPT_STRING_LENGTH		64
#define MPT_MAX_CALLBACKS		16
#define	 CAN_SLEEP			1
#define  NO_SLEEP			0
#define INTERNAL_CMDS_COUNT		10
#define MPI2_HIM_MASK			0xFFFFFFFF
#define MPT2SAS_INVALID_DEVICE_HANDLE	0xFFFF
#define MPT2_IOC_PRE_RESET		1
#define MPT2_IOC_AFTER_RESET		2
#define MPT2_IOC_DONE_RESET		3
#define MPT2SAS_FMT			"%s: "
#define MPT2SAS_INFO_FMT		KERN_INFO MPT2SAS_FMT
#define MPT2SAS_NOTE_FMT		KERN_NOTICE MPT2SAS_FMT
#define MPT2SAS_WARN_FMT		KERN_WARNING MPT2SAS_FMT
#define MPT2SAS_ERR_FMT			KERN_ERR MPT2SAS_FMT
#define MPT2SAS_DELL_BRANDING_SIZE                 32
#define MPT2SAS_DELL_6GBPS_SAS_HBA_BRANDING        "Dell 6Gbps SAS HBA"
#define MPT2SAS_DELL_PERC_H200_ADAPTER_BRANDING    "Dell PERC H200 Adapter"
#define MPT2SAS_DELL_PERC_H200_INTEGRATED_BRANDING "Dell PERC H200 Integrated"
#define MPT2SAS_DELL_PERC_H200_MODULAR_BRANDING    "Dell PERC H200 Modular"
#define MPT2SAS_DELL_PERC_H200_EMBEDDED_BRANDING   "Dell PERC H200 Embedded"
#define MPT2SAS_DELL_PERC_H200_BRANDING            "Dell PERC H200"
#define MPT2SAS_DELL_6GBPS_SAS_BRANDING            "Dell 6Gbps SAS"
#define MPT2SAS_DELL_6GBPS_SAS_HBA_SSDID           0x1F1C
#define MPT2SAS_DELL_PERC_H200_ADAPTER_SSDID       0x1F1D
#define MPT2SAS_DELL_PERC_H200_INTEGRATED_SSDID    0x1F1E
#define MPT2SAS_DELL_PERC_H200_MODULAR_SSDID       0x1F1F
#define MPT2SAS_DELL_PERC_H200_EMBEDDED_SSDID      0x1F20
#define MPT2SAS_DELL_PERC_H200_SSDID               0x1F21
#define MPT2SAS_DELL_6GBPS_SAS_SSDID               0x1F22
#define MPT2SAS_INTEL_RMS2LL080_BRANDING	\
"Intel Integrated RAID Module RMS2LL080"
#define MPT2SAS_INTEL_RMS2LL040_BRANDING	\
"Intel Integrated RAID Module RMS2LL040"
#define MPT2SAS_INTEL_RS25GB008_BRANDING       \
"Intel(R) RAID Controller RS25GB008"
#define MPT2SAS_INTEL_RMS2LL080_SSDID          0x350E
#define MPT2SAS_INTEL_RMS2LL040_SSDID          0x350F
#define MPT2SAS_INTEL_RS25GB008_SSDID          0x3000
#define MPT2SAS_HP_3PAR_SSVID                0x1590
#define MPT2SAS_HP_2_4_INTERNAL_BRANDING        "HP H220 Host Bus Adapter"
#define MPT2SAS_HP_2_4_EXTERNAL_BRANDING        "HP H221 Host Bus Adapter"
#define MPT2SAS_HP_1_4_INTERNAL_1_4_EXTERNAL_BRANDING "HP H222 Host Bus Adapter"
#define MPT2SAS_HP_EMBEDDED_2_4_INTERNAL_BRANDING    "HP H220i Host Bus Adapter"
#define MPT2SAS_HP_DAUGHTER_2_4_INTERNAL_BRANDING    "HP H210i Host Bus Adapter"
#define MPT2SAS_HP_2_4_INTERNAL_SSDID            0x0041
#define MPT2SAS_HP_2_4_EXTERNAL_SSDID            0x0042
#define MPT2SAS_HP_1_4_INTERNAL_1_4_EXTERNAL_SSDID    0x0043
#define MPT2SAS_HP_EMBEDDED_2_4_INTERNAL_SSDID        0x0044
#define MPT2SAS_HP_DAUGHTER_2_4_INTERNAL_SSDID        0x0046
#define MPT2_WARPDRIVE_LOGENTRY		(0x8002)
#define MPT2_WARPDRIVE_LC_SSDT		(0x41)
#define MPT2_WARPDRIVE_LC_SSDLW		(0x43)
#define MPT2_WARPDRIVE_LC_SSDLF		(0x44)
#define MPT2_WARPDRIVE_LC_BRMF		(0x4D)
#define MPT_TARGET_FLAGS_RAID_COMPONENT	0x01
#define MPT_TARGET_FLAGS_VOLUME		0x02
#define MPT_TARGET_FLAGS_DELETED	0x04
struct MPT2SAS_TARGET ;
#define MPT_DEVICE_FLAGS_INIT		0x01
#define MPT_DEVICE_TLR_ON		0x02
#define MFG10_OEM_ID_INVALID                   (0x00000000)
#define MFG10_OEM_ID_DELL                      (0x00000001)
#define MFG10_OEM_ID_FSC                       (0x00000002)
#define MFG10_OEM_ID_SUN                       (0x00000003)
#define MFG10_OEM_ID_IBM                       (0x00000004)
#define MFG10_GF0_OCE_DISABLED                 (0x00000001)
#define MFG10_GF0_R1E_DRIVE_COUNT              (0x00000002)
#define MFG10_GF0_R10_DISPLAY                  (0x00000004)
#define MFG10_GF0_SSD_DATA_SCRUB_DISABLE       (0x00000008)
#define MFG10_GF0_SINGLE_DRIVE_R0              (0x00000010)
typedef struct _MPI2_CONFIG_PAGE_MAN_10  MPI2_CONFIG_PAGE_MAN_10,
MPI2_POINTER PTR_MPI2_CONFIG_PAGE_MAN_10,
Mpi2ManufacturingPage10_t, MPI2_POINTER pMpi2ManufacturingPage10_t;
#define MFG_PAGE10_HIDE_SSDS_MASK	(0x00000003)
#define MFG_PAGE10_HIDE_ALL_DISKS	(0x00)
#define MFG_PAGE10_EXPOSE_ALL_DISKS	(0x01)
#define MFG_PAGE10_HIDE_IF_VOL_PRESENT	(0x02)
struct MPT2SAS_DEVICE ;
#define MPT2_CMD_NOT_USED	0x8000
#define MPT2_CMD_COMPLETE	0x0001
#define MPT2_CMD_PENDING	0x0002
#define MPT2_CMD_REPLY_VALID	0x0004
#define MPT2_CMD_RESET		0x0008
struct _internal_cmd ;
struct _sas_device ;
#define MPT_MAX_WARPDRIVE_PDS		8
struct _raid_device ;
struct _boot_device ;
struct _sas_port ;
struct _sas_phy ;
struct _sas_node ;
enum reset_type ;
struct chain_tracker ;
struct scsiio_tracker ;
struct request_tracker ;
struct _tr_list ;
typedef void (*MPT_ADD_SGE)(void *paddr, u32 flags_length, dma_addr_t dma_addr);
union mpi2_version_union ;
struct mpt2sas_facts ;
struct mpt2sas_port_facts ;
struct MPT2SAS_ADAPTER ;
typedef u8 (*MPT_CALLBACK)(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply);
extern struct list_head mpt2sas_ioc_list;
void mpt2sas_base_start_watchdog(struct MPT2SAS_ADAPTER *ioc);
void mpt2sas_base_stop_watchdog(struct MPT2SAS_ADAPTER *ioc);
int mpt2sas_base_attach(struct MPT2SAS_ADAPTER *ioc);
void mpt2sas_base_detach(struct MPT2SAS_ADAPTER *ioc);
int mpt2sas_base_map_resources(struct MPT2SAS_ADAPTER *ioc);
void mpt2sas_base_free_resources(struct MPT2SAS_ADAPTER *ioc);
int mpt2sas_base_hard_reset_handler(struct MPT2SAS_ADAPTER *ioc, int sleep_flag,
enum reset_type type);
void *mpt2sas_base_get_msg_frame(struct MPT2SAS_ADAPTER *ioc, u16 smid);
void *mpt2sas_base_get_sense_buffer(struct MPT2SAS_ADAPTER *ioc, u16 smid);
void mpt2sas_base_build_zero_len_sge(struct MPT2SAS_ADAPTER *ioc, void *paddr);
__le32 mpt2sas_base_get_sense_buffer_dma(struct MPT2SAS_ADAPTER *ioc,
u16 smid);
u16 mpt2sas_base_get_smid_hpr(struct MPT2SAS_ADAPTER *ioc, u8 cb_idx);
u16 mpt2sas_base_get_smid_scsiio(struct MPT2SAS_ADAPTER *ioc, u8 cb_idx,
struct scsi_cmnd *scmd);
u16 mpt2sas_base_get_smid(struct MPT2SAS_ADAPTER *ioc, u8 cb_idx);
void mpt2sas_base_free_smid(struct MPT2SAS_ADAPTER *ioc, u16 smid);
void mpt2sas_base_put_smid_scsi_io(struct MPT2SAS_ADAPTER *ioc, u16 smid,
u16 handle);
void mpt2sas_base_put_smid_hi_priority(struct MPT2SAS_ADAPTER *ioc, u16 smid);
void mpt2sas_base_put_smid_target_assist(struct MPT2SAS_ADAPTER *ioc, u16 smid,
u16 io_index);
void mpt2sas_base_put_smid_default(struct MPT2SAS_ADAPTER *ioc, u16 smid);
void mpt2sas_base_initialize_callback_handler(void);
u8 mpt2sas_base_register_callback_handler(MPT_CALLBACK cb_func);
void mpt2sas_base_release_callback_handler(u8 cb_idx);
u8 mpt2sas_base_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply);
void *mpt2sas_base_get_reply_virt_addr(struct MPT2SAS_ADAPTER *ioc, u32 phys_addr);
u32 mpt2sas_base_get_iocstate(struct MPT2SAS_ADAPTER *ioc, int cooked);
void mpt2sas_base_fault_info(struct MPT2SAS_ADAPTER *ioc , u16 fault_code);
int mpt2sas_base_sas_iounit_control(struct MPT2SAS_ADAPTER *ioc,
Mpi2SasIoUnitControlReply_t *mpi_reply, Mpi2SasIoUnitControlRequest_t
*mpi_request);
int mpt2sas_base_scsi_enclosure_processor(struct MPT2SAS_ADAPTER *ioc,
Mpi2SepReply_t *mpi_reply, Mpi2SepRequest_t *mpi_request);
void mpt2sas_base_validate_event_type(struct MPT2SAS_ADAPTER *ioc, u32 *event_type);
void mpt2sas_halt_firmware(struct MPT2SAS_ADAPTER *ioc);
u8 mpt2sas_scsih_event_callback(struct MPT2SAS_ADAPTER *ioc, u8 msix_index,
u32 reply);
int mpt2sas_scsih_issue_tm(struct MPT2SAS_ADAPTER *ioc, u16 handle,
uint channel, uint id, uint lun, u8 type, u16 smid_task,
ulong timeout, struct scsi_cmnd *scmd);
void mpt2sas_scsih_set_tm_flag(struct MPT2SAS_ADAPTER *ioc, u16 handle);
void mpt2sas_scsih_clear_tm_flag(struct MPT2SAS_ADAPTER *ioc, u16 handle);
void mpt2sas_expander_remove(struct MPT2SAS_ADAPTER *ioc, u64 sas_address);
void mpt2sas_device_remove(struct MPT2SAS_ADAPTER *ioc, u64 sas_address);
struct _sas_node *mpt2sas_scsih_expander_find_by_handle(struct MPT2SAS_ADAPTER *ioc,
u16 handle);
struct _sas_node *mpt2sas_scsih_expander_find_by_sas_address(struct MPT2SAS_ADAPTER
*ioc, u64 sas_address);
struct _sas_device *mpt2sas_scsih_sas_device_find_by_sas_address(
struct MPT2SAS_ADAPTER *ioc, u64 sas_address);
void mpt2sas_scsih_reset_handler(struct MPT2SAS_ADAPTER *ioc, int reset_phase);
u8 mpt2sas_config_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply);
int mpt2sas_config_get_number_hba_phys(struct MPT2SAS_ADAPTER *ioc, u8 *num_phys);
int mpt2sas_config_get_manufacturing_pg0(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2ManufacturingPage0_t *config_page);
int mpt2sas_config_get_manufacturing_pg10(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2ManufacturingPage10_t *config_page);
int mpt2sas_config_get_bios_pg2(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2BiosPage2_t *config_page);
int mpt2sas_config_get_bios_pg3(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2BiosPage3_t *config_page);
int mpt2sas_config_get_iounit_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2IOUnitPage0_t *config_page);
int mpt2sas_config_get_sas_device_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasDevicePage0_t *config_page, u32 form, u32 handle);
int mpt2sas_config_get_sas_device_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasDevicePage1_t *config_page, u32 form, u32 handle);
int mpt2sas_config_get_sas_iounit_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasIOUnitPage0_t *config_page, u16 sz);
int mpt2sas_config_get_iounit_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2IOUnitPage1_t *config_page);
int mpt2sas_config_set_iounit_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2IOUnitPage1_t *config_page);
int mpt2sas_config_get_sas_iounit_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasIOUnitPage1_t *config_page, u16 sz);
int mpt2sas_config_set_sas_iounit_pg1(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2SasIOUnitPage1_t *config_page, u16 sz);
int mpt2sas_config_get_ioc_pg8(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2IOCPage8_t *config_page);
int mpt2sas_config_get_expander_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2ExpanderPage0_t *config_page, u32 form, u32 handle);
int mpt2sas_config_get_expander_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2ExpanderPage1_t *config_page, u32 phy_number, u16 handle);
int mpt2sas_config_get_enclosure_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasEnclosurePage0_t *config_page, u32 form, u32 handle);
int mpt2sas_config_get_phy_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasPhyPage0_t *config_page, u32 phy_number);
int mpt2sas_config_get_phy_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasPhyPage1_t *config_page, u32 phy_number);
int mpt2sas_config_get_raid_volume_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2RaidVolPage1_t *config_page, u32 form, u32 handle);
int mpt2sas_config_get_number_pds(struct MPT2SAS_ADAPTER *ioc, u16 handle, u8 *num_pds);
int mpt2sas_config_get_raid_volume_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2RaidVolPage0_t *config_page, u32 form, u32 handle, u16 sz);
int mpt2sas_config_get_phys_disk_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2RaidPhysDiskPage0_t *config_page, u32 form,
u32 form_specific);
int mpt2sas_config_get_volume_handle(struct MPT2SAS_ADAPTER *ioc, u16 pd_handle,
u16 *volume_handle);
int mpt2sas_config_get_volume_wwid(struct MPT2SAS_ADAPTER *ioc, u16 volume_handle,
u64 *wwid);
extern struct device_attribute *mpt2sas_host_attrs[];
extern struct device_attribute *mpt2sas_dev_attrs[];
void mpt2sas_ctl_init(void);
void mpt2sas_ctl_exit(void);
u8 mpt2sas_ctl_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply);
void mpt2sas_ctl_reset_handler(struct MPT2SAS_ADAPTER *ioc, int reset_phase);
u8 mpt2sas_ctl_event_callback(struct MPT2SAS_ADAPTER *ioc, u8 msix_index,
u32 reply);
void mpt2sas_ctl_add_to_event_log(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventNotificationReply_t *mpi_reply);
void mpt2sas_enable_diag_buffer(struct MPT2SAS_ADAPTER *ioc,
u8 bits_to_regsiter);
u8 mpt2sas_transport_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply);
struct _sas_port *mpt2sas_transport_port_add(struct MPT2SAS_ADAPTER *ioc,
u16 handle, u64 sas_address);
void mpt2sas_transport_port_remove(struct MPT2SAS_ADAPTER *ioc, u64 sas_address,
u64 sas_address_parent);
int mpt2sas_transport_add_host_phy(struct MPT2SAS_ADAPTER *ioc, struct _sas_phy
*mpt2sas_phy, Mpi2SasPhyPage0_t phy_pg0, struct device *parent_dev);
int mpt2sas_transport_add_expander_phy(struct MPT2SAS_ADAPTER *ioc, struct _sas_phy
*mpt2sas_phy, Mpi2ExpanderPage1_t expander_pg1, struct device *parent_dev);
void mpt2sas_transport_update_links(struct MPT2SAS_ADAPTER *ioc,
u64 sas_address, u16 handle, u8 phy_number, u8 link_rate);
extern struct sas_function_template mpt2sas_transport_functions;
extern struct scsi_transport_template *mpt2sas_transport_template;
extern int scsi_internal_device_block(struct scsi_device *sdev);
extern u8 mpt2sas_stm_zero_smid_handler(struct MPT2SAS_ADAPTER *ioc,
u8 msix_index, u32 reply);
extern int scsi_internal_device_unblock(struct scsi_device *sdev);
