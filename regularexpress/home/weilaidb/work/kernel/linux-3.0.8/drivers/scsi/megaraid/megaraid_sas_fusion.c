extern void megasas_free_cmds(struct megasas_instance *instance);
extern struct megasas_cmd *megasas_get_cmd(struct megasas_instance
*instance);
extern void
megasas_complete_cmd(struct megasas_instance *instance,
struct megasas_cmd *cmd, u8 alt_status);
int megasas_is_ldio(struct scsi_cmnd *cmd);
int
wait_and_poll(struct megasas_instance *instance, struct megasas_cmd *cmd);
void
megasas_return_cmd(struct megasas_instance *instance, struct megasas_cmd *cmd);
int megasas_alloc_cmds(struct megasas_instance *instance);
int
megasas_clear_intr_fusion(struct megasas_register_set __iomem *regs);
int
megasas_issue_polled(struct megasas_instance *instance,
struct megasas_cmd *cmd);
u8
MR_BuildRaidContext(struct IO_REQUEST_INFO *io_info,
struct RAID_CONTEXT *pRAID_Context,
struct MR_FW_RAID_MAP_ALL *map);
u16 MR_TargetIdToLdGet(u32 ldTgtId, struct MR_FW_RAID_MAP_ALL *map);
struct MR_LD_RAID *MR_LdRaidGet(u32 ld, struct MR_FW_RAID_MAP_ALL *map);
u16 MR_GetLDTgtId(u32 ld, struct MR_FW_RAID_MAP_ALL *map);
void
megasas_check_and_restore_queue_depth(struct megasas_instance *instance);
u8 MR_ValidateMapInfo(struct MR_FW_RAID_MAP_ALL *map,
struct LD_LOAD_BALANCE_INFO *lbInfo);
u16 get_updated_dev_handle(struct LD_LOAD_BALANCE_INFO *lbInfo,
struct IO_REQUEST_INFO *in_info);
int megasas_transition_to_ready(struct megasas_instance *instance);
void megaraid_sas_kill_hba(struct megasas_instance *instance);
extern u32 megasas_dbg_lvl;
void
megasas_enable_intr_fusion(struct megasas_register_set __iomem *regs)
void
megasas_disable_intr_fusion(struct megasas_register_set __iomem *regs)
int
megasas_clear_intr_fusion(struct megasas_register_set __iomem *regs)
struct megasas_cmd_fusion *megasas_get_cmd_fusion(struct megasas_instance
*instance)
static inline void
megasas_return_cmd_fusion(struct megasas_instance *instance,
struct megasas_cmd_fusion *cmd)
static void megasas_teardown_frame_pool_fusion(
struct megasas_instance *instance)
void
megasas_free_cmds_fusion(struct megasas_instance *instance)
static int megasas_create_frame_pool_fusion(struct megasas_instance *instance)
int
megasas_alloc_cmds_fusion(struct megasas_instance *instance)
int
wait_and_poll(struct megasas_instance *instance, struct megasas_cmd *cmd)
int
megasas_ioc_init_fusion(struct megasas_instance *instance)
static int
megasas_get_ld_map_info(struct megasas_instance *instance)
u8
megasas_get_map_info(struct megasas_instance *instance)
int
megasas_sync_map_info(struct megasas_instance *instance)
u32
megasas_init_adapter_fusion(struct megasas_instance *instance)
void
megasas_fire_cmd_fusion(struct megasas_instance *instance,
dma_addr_t req_desc_lo,
u32 req_desc_hi,
struct megasas_register_set __iomem *regs)
void
map_cmd_status(struct megasas_cmd_fusion *cmd, u8 status, u8 ext_status)
static int
megasas_make_sgl_fusion(struct megasas_instance *instance,
struct scsi_cmnd *scp,
struct MPI25_IEEE_SGE_CHAIN64 *sgl_ptr,
struct megasas_cmd_fusion *cmd)
void
megasas_set_pd_lba(struct MPI2_RAID_SCSI_IO_REQUEST *io_request, u8 cdb_len,
struct IO_REQUEST_INFO *io_info, struct scsi_cmnd *scp,
struct MR_FW_RAID_MAP_ALL *local_map_ptr, u32 ref_tag)
void
megasas_build_ldio_fusion(struct megasas_instance *instance,
struct scsi_cmnd *scp,
struct megasas_cmd_fusion *cmd)
static void
megasas_build_dcdb_fusion(struct megasas_instance *instance,
struct scsi_cmnd *scmd,
struct megasas_cmd_fusion *cmd)
int
megasas_build_io_fusion(struct megasas_instance *instance,
struct scsi_cmnd *scp,
struct megasas_cmd_fusion *cmd)
union MEGASAS_REQUEST_DESCRIPTOR_UNION *
megasas_get_request_descriptor(struct megasas_instance *instance, u16 index)
static u32
megasas_build_and_issue_cmd_fusion(struct megasas_instance *instance,
struct scsi_cmnd *scmd)
int
complete_cmd_fusion(struct megasas_instance *instance)
void
megasas_complete_cmd_dpc_fusion(unsigned long instance_addr)
irqreturn_t megasas_isr_fusion(int irq, void *devp)
u8
build_mpt_mfi_pass_thru(struct megasas_instance *instance,
struct megasas_cmd *mfi_cmd)
union MEGASAS_REQUEST_DESCRIPTOR_UNION *
build_mpt_cmd(struct megasas_instance *instance, struct megasas_cmd *cmd)
void
megasas_issue_dcmd_fusion(struct megasas_instance *instance,
struct megasas_cmd *cmd)
void
megasas_release_fusion(struct megasas_instance *instance)
static u32
megasas_read_fw_status_reg_fusion(struct megasas_register_set __iomem *regs)
static int
megasas_adp_reset_fusion(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
static int
megasas_check_reset_fusion(struct megasas_instance *instance,
struct megasas_register_set __iomem *regs)
int megasas_wait_for_outstanding_fusion(struct megasas_instance *instance)
void  megasas_reset_reply_desc(struct megasas_instance *instance)
int megasas_reset_fusion(struct Scsi_Host *shost)
void megasas_fusion_ocr_wq(struct work_struct *work)
struct megasas_instance_template megasas_instance_template_fusion = ;
