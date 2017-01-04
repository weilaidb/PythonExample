void
qla2x00_vp_stop_timer(scsi_qla_host_t *vha)
static uint32_t
qla24xx_allocate_vp_id(scsi_qla_host_t *vha)
void
qla24xx_deallocate_vp_id(scsi_qla_host_t *vha)
static scsi_qla_host_t *
qla24xx_find_vhost_by_name(struct qla_hw_data *ha, uint8_t *port_name)
static void
qla2x00_mark_vp_devices_dead(scsi_qla_host_t *vha)
int
qla24xx_disable_vp(scsi_qla_host_t *vha)
int
qla24xx_enable_vp(scsi_qla_host_t *vha)
static void
qla24xx_configure_vp(scsi_qla_host_t *vha)
void
qla2x00_alert_all_vps(struct rsp_que *rsp, uint16_t *mb)
int
qla2x00_vp_abort_isp(scsi_qla_host_t *vha)
static int
qla2x00_do_dpc_vp(scsi_qla_host_t *vha)
void
qla2x00_do_dpc_all_vps(scsi_qla_host_t *vha)
int
qla24xx_vport_create_req_sanity_check(struct fc_vport *fc_vport)
scsi_qla_host_t *
qla24xx_create_vhost(struct fc_vport *fc_vport)
static void
qla25xx_free_req_que(struct scsi_qla_host *vha, struct req_que *req)
static void
qla25xx_free_rsp_que(struct scsi_qla_host *vha, struct rsp_que *rsp)
int
qla25xx_delete_req_que(struct scsi_qla_host *vha, struct req_que *req)
static int
qla25xx_delete_rsp_que(struct scsi_qla_host *vha, struct rsp_que *rsp)
int
qla25xx_delete_queues(struct scsi_qla_host *vha)
int
qla25xx_create_req_que(struct qla_hw_data *ha, uint16_t options,
uint8_t vp_idx, uint16_t rid, int rsp_que, uint8_t qos)
static void qla_do_work(struct work_struct *work)
int
qla25xx_create_rsp_que(struct qla_hw_data *ha, uint16_t options,
uint8_t vp_idx, uint16_t rid, int req)
