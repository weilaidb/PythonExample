inline srb_t *
qla2x00_get_ctx_bsg_sp(scsi_qla_host_t *vha, fc_port_t *fcport, size_t size)
int
qla24xx_fcp_prio_cfg_valid(struct qla_fcp_prio_cfg *pri_cfg, uint8_t flag)
static int
qla24xx_proc_fcp_prio_cfg_cmd(struct fc_bsg_job *bsg_job)
static int
qla2x00_process_els(struct fc_bsg_job *bsg_job)
static int
qla2x00_process_ct(struct fc_bsg_job *bsg_job)
static inline int
qla81xx_set_internal_loopback(scsi_qla_host_t *vha, uint16_t *config,
uint16_t *new_config)
static inline int
qla81xx_reset_internal_loopback(scsi_qla_host_t *vha, uint16_t *config,
int wait)
static int
qla2x00_process_loopback(struct fc_bsg_job *bsg_job)
static int
qla84xx_reset(struct fc_bsg_job *bsg_job)
static int
qla84xx_updatefw(struct fc_bsg_job *bsg_job)
static int
qla84xx_mgmt_cmd(struct fc_bsg_job *bsg_job)
static int
qla24xx_iidma(struct fc_bsg_job *bsg_job)
static int
qla2x00_optrom_setup(struct fc_bsg_job *bsg_job, struct qla_hw_data *ha,
uint8_t is_update)
static int
qla2x00_read_optrom(struct fc_bsg_job *bsg_job)
static int
qla2x00_update_optrom(struct fc_bsg_job *bsg_job)
static int
qla2x00_process_vendor_specific(struct fc_bsg_job *bsg_job)
int
qla24xx_bsg_request(struct fc_bsg_job *bsg_job)
int
qla24xx_bsg_timeout(struct fc_bsg_job *bsg_job)
