static int qla2x00_sns_ga_nxt(scsi_qla_host_t *, fc_port_t *);
static int qla2x00_sns_gid_pt(scsi_qla_host_t *, sw_info_t *);
static int qla2x00_sns_gpn_id(scsi_qla_host_t *, sw_info_t *);
static int qla2x00_sns_gnn_id(scsi_qla_host_t *, sw_info_t *);
static int qla2x00_sns_rft_id(scsi_qla_host_t *);
static int qla2x00_sns_rnn_id(scsi_qla_host_t *);
void *
qla2x00_prep_ms_iocb(scsi_qla_host_t *vha, uint32_t req_size, uint32_t rsp_size)
void *
qla24xx_prep_ms_iocb(scsi_qla_host_t *vha, uint32_t req_size, uint32_t rsp_size)
static inline struct ct_sns_req *
qla2x00_prep_ct_req(struct ct_sns_req *ct_req, uint16_t cmd, uint16_t rsp_size)
static int
qla2x00_chk_ms_status(scsi_qla_host_t *vha, ms_iocb_entry_t *ms_pkt,
struct ct_sns_rsp *ct_rsp, const char *routine)
int
qla2x00_ga_nxt(scsi_qla_host_t *vha, fc_port_t *fcport)
int
qla2x00_gid_pt(scsi_qla_host_t *vha, sw_info_t *list)
int
qla2x00_gpn_id(scsi_qla_host_t *vha, sw_info_t *list)
int
qla2x00_gnn_id(scsi_qla_host_t *vha, sw_info_t *list)
int
qla2x00_rft_id(scsi_qla_host_t *vha)
int
qla2x00_rff_id(scsi_qla_host_t *vha)
int
qla2x00_rnn_id(scsi_qla_host_t *vha)
void
qla2x00_get_sym_node_name(scsi_qla_host_t *vha, uint8_t *snn)
int
qla2x00_rsnn_nn(scsi_qla_host_t *vha)
static inline struct sns_cmd_pkt *
qla2x00_prep_sns_cmd(scsi_qla_host_t *vha, uint16_t cmd, uint16_t scmd_len,
uint16_t data_size)
static int
qla2x00_sns_ga_nxt(scsi_qla_host_t *vha, fc_port_t *fcport)
static int
qla2x00_sns_gid_pt(scsi_qla_host_t *vha, sw_info_t *list)
static int
qla2x00_sns_gpn_id(scsi_qla_host_t *vha, sw_info_t *list)
static int
qla2x00_sns_gnn_id(scsi_qla_host_t *vha, sw_info_t *list)
static int
qla2x00_sns_rft_id(scsi_qla_host_t *vha)
static int
qla2x00_sns_rnn_id(scsi_qla_host_t *vha)
static int
qla2x00_mgmt_svr_login(scsi_qla_host_t *vha)
void *
qla2x00_prep_ms_fdmi_iocb(scsi_qla_host_t *vha, uint32_t req_size,
uint32_t rsp_size)
void *
qla24xx_prep_ms_fdmi_iocb(scsi_qla_host_t *vha, uint32_t req_size,
uint32_t rsp_size)
static inline ms_iocb_entry_t *
qla2x00_update_ms_fdmi_iocb(scsi_qla_host_t *vha, uint32_t req_size)
static inline struct ct_sns_req *
qla2x00_prep_ct_fdmi_req(struct ct_sns_req *ct_req, uint16_t cmd,
uint16_t rsp_size)
static int
qla2x00_fdmi_rhba(scsi_qla_host_t *vha)
static int
qla2x00_fdmi_dhba(scsi_qla_host_t *vha)
static int
qla2x00_fdmi_rpa(scsi_qla_host_t *vha)
int
qla2x00_fdmi_register(scsi_qla_host_t *vha)
int
qla2x00_gfpn_id(scsi_qla_host_t *vha, sw_info_t *list)
static inline void *
qla24xx_prep_ms_fm_iocb(scsi_qla_host_t *vha, uint32_t req_size,
uint32_t rsp_size)
static inline struct ct_sns_req *
qla24xx_prep_ct_fm_req(struct ct_sns_req *ct_req, uint16_t cmd,
uint16_t rsp_size)
int
qla2x00_gpsc(scsi_qla_host_t *vha, sw_info_t *list)
void
qla2x00_gff_id(scsi_qla_host_t *vha, sw_info_t *list)
