static int qla2x00_isp_firmware(scsi_qla_host_t *);
static int qla2x00_setup_chip(scsi_qla_host_t *);
static int qla2x00_init_rings(scsi_qla_host_t *);
static int qla2x00_fw_ready(scsi_qla_host_t *);
static int qla2x00_configure_hba(scsi_qla_host_t *);
static int qla2x00_configure_loop(scsi_qla_host_t *);
static int qla2x00_configure_local_loop(scsi_qla_host_t *);
static int qla2x00_configure_fabric(scsi_qla_host_t *);
static int qla2x00_find_all_fabric_devs(scsi_qla_host_t *, struct list_head *);
static int qla2x00_device_resync(scsi_qla_host_t *);
static int qla2x00_fabric_dev_login(scsi_qla_host_t *, fc_port_t *,
uint16_t *);
static int qla2x00_restart_isp(scsi_qla_host_t *);
static struct qla_chip_state_84xx *qla84xx_get_chip(struct scsi_qla_host *);
static int qla84xx_init_chip(scsi_qla_host_t *);
static int qla25xx_init_queues(struct qla_hw_data *);
static void
qla2x00_ctx_sp_timeout(unsigned long __data)
static void
qla2x00_ctx_sp_free(srb_t *sp)
inline srb_t *
qla2x00_get_ctx_sp(scsi_qla_host_t *vha, fc_port_t *fcport, size_t size,
unsigned long tmo)
static inline unsigned long
qla2x00_get_async_timeout(struct scsi_qla_host *vha)
static void
qla2x00_async_iocb_timeout(srb_t *sp)
static void
qla2x00_async_login_ctx_done(srb_t *sp)
int
qla2x00_async_login(struct scsi_qla_host *vha, fc_port_t *fcport,
uint16_t *data)
static void
qla2x00_async_logout_ctx_done(srb_t *sp)
int
qla2x00_async_logout(struct scsi_qla_host *vha, fc_port_t *fcport)
static void
qla2x00_async_adisc_ctx_done(srb_t *sp)
int
qla2x00_async_adisc(struct scsi_qla_host *vha, fc_port_t *fcport,
uint16_t *data)
static void
qla2x00_async_tm_cmd_ctx_done(srb_t *sp)
int
qla2x00_async_tm_cmd(fc_port_t *fcport, uint32_t flags, uint32_t lun,
uint32_t tag)
void
qla2x00_async_login_done(struct scsi_qla_host *vha, fc_port_t *fcport,
uint16_t *data)
void
qla2x00_async_logout_done(struct scsi_qla_host *vha, fc_port_t *fcport,
uint16_t *data)
void
qla2x00_async_adisc_done(struct scsi_qla_host *vha, fc_port_t *fcport,
uint16_t *data)
void
qla2x00_async_tm_cmd_done(struct scsi_qla_host *vha, fc_port_t *fcport,
struct srb_iocb *iocb)
int
qla2x00_initialize_adapter(scsi_qla_host_t *vha)
int
qla2100_pci_config(scsi_qla_host_t *vha)
int
qla2300_pci_config(scsi_qla_host_t *vha)
int
qla24xx_pci_config(scsi_qla_host_t *vha)
int
qla25xx_pci_config(scsi_qla_host_t *vha)
static int
qla2x00_isp_firmware(scsi_qla_host_t *vha)
void
qla2x00_reset_chip(scsi_qla_host_t *vha)
int
qla81xx_reset_mpi(scsi_qla_host_t *vha)
static inline void
qla24xx_reset_risc(scsi_qla_host_t *vha)
void
qla24xx_reset_chip(scsi_qla_host_t *vha)
int
qla2x00_chip_diag(scsi_qla_host_t *vha)
int
qla24xx_chip_diag(scsi_qla_host_t *vha)
void
qla2x00_alloc_fw_dump(scsi_qla_host_t *vha)
static int
qla81xx_mpi_sync(scsi_qla_host_t *vha)
static int
qla2x00_setup_chip(scsi_qla_host_t *vha)
void
qla2x00_init_response_q_entries(struct rsp_que *rsp)
void
qla2x00_update_fw_options(scsi_qla_host_t *vha)
void
qla24xx_update_fw_options(scsi_qla_host_t *vha)
void
qla2x00_config_rings(struct scsi_qla_host *vha)
void
qla24xx_config_rings(struct scsi_qla_host *vha)
static int
qla2x00_init_rings(scsi_qla_host_t *vha)
static int
qla2x00_fw_ready(scsi_qla_host_t *vha)
static int
qla2x00_configure_hba(scsi_qla_host_t *vha)
inline void
qla2x00_set_model_info(scsi_qla_host_t *vha, uint8_t *model, size_t len,
char *def)
static void qla2xxx_nvram_wwn_from_ofw(scsi_qla_host_t *vha, nvram_t *nv)
int
qla2x00_nvram_config(scsi_qla_host_t *vha)
static void
qla2x00_rport_del(void *data)
fc_port_t *
qla2x00_alloc_fcport(scsi_qla_host_t *vha, gfp_t flags)
static int
qla2x00_configure_loop(scsi_qla_host_t *vha)
static int
qla2x00_configure_local_loop(scsi_qla_host_t *vha)
static void
qla2x00_iidma_fcport(scsi_qla_host_t *vha, fc_port_t *fcport)
static void
qla2x00_reg_remote_port(scsi_qla_host_t *vha, fc_port_t *fcport)
void
qla2x00_update_fcport(scsi_qla_host_t *vha, fc_port_t *fcport)
static int
qla2x00_configure_fabric(scsi_qla_host_t *vha)
static int
qla2x00_find_all_fabric_devs(scsi_qla_host_t *vha,
struct list_head *new_fcports)
int
qla2x00_find_new_loop_id(scsi_qla_host_t *vha, fc_port_t *dev)
static int
qla2x00_device_resync(scsi_qla_host_t *vha)
static int
qla2x00_fabric_dev_login(scsi_qla_host_t *vha, fc_port_t *fcport,
uint16_t *next_loopid)
int
qla2x00_fabric_login(scsi_qla_host_t *vha, fc_port_t *fcport,
uint16_t *next_loopid)
int
qla2x00_local_device_login(scsi_qla_host_t *vha, fc_port_t *fcport)
int
qla2x00_loop_resync(scsi_qla_host_t *vha)
int qla2x00_perform_loop_resync(scsi_qla_host_t *ha)
void
qla2x00_update_fcports(scsi_qla_host_t *base_vha)
void
qla82xx_quiescent_state_cleanup(scsi_qla_host_t *vha)
void
qla2x00_abort_isp_cleanup(scsi_qla_host_t *vha)
int
qla2x00_abort_isp(scsi_qla_host_t *vha)
static int
qla2x00_restart_isp(scsi_qla_host_t *vha)
static int
qla25xx_init_queues(struct qla_hw_data *ha)
void
qla2x00_reset_adapter(scsi_qla_host_t *vha)
void
qla24xx_reset_adapter(scsi_qla_host_t *vha)
static void qla24xx_nvram_wwn_from_ofw(scsi_qla_host_t *vha,
struct nvram_24xx *nv)
int
qla24xx_nvram_config(scsi_qla_host_t *vha)
static int
qla24xx_load_risc_flash(scsi_qla_host_t *vha, uint32_t *srisc_addr,
uint32_t faddr)
#define QLA_FW_URL "ftp:
int
qla2x00_load_risc(scsi_qla_host_t *vha, uint32_t *srisc_addr)
static int
qla24xx_load_risc_blob(scsi_qla_host_t *vha, uint32_t *srisc_addr)
int
qla24xx_load_risc(scsi_qla_host_t *vha, uint32_t *srisc_addr)
int
qla81xx_load_risc(scsi_qla_host_t *vha, uint32_t *srisc_addr)
void
qla2x00_try_to_stop_firmware(scsi_qla_host_t *vha)
int
qla24xx_configure_vhba(scsi_qla_host_t *vha)
static LIST_HEAD(qla_cs84xx_list);
static DEFINE_MUTEX(qla_cs84xx_mutex);
static struct qla_chip_state_84xx *
qla84xx_get_chip(struct scsi_qla_host *vha)
static void
__qla84xx_chip_release(struct kref *kref)
void
qla84xx_put_chip(struct scsi_qla_host *vha)
static int
qla84xx_init_chip(scsi_qla_host_t *vha)
int
qla81xx_nvram_config(scsi_qla_host_t *vha)
int
qla82xx_restart_isp(scsi_qla_host_t *vha)
void
qla81xx_update_fw_options(scsi_qla_host_t *vha)
static int
qla24xx_get_fcp_prio(scsi_qla_host_t *vha, fc_port_t *fcport)
int
qla24xx_update_fcport_fcp_prio(scsi_qla_host_t *vha, fc_port_t *fcport)
int
qla24xx_update_all_fcp_prio(scsi_qla_host_t *vha)
