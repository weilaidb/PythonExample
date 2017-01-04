static void qla2x00_isp_cmd(struct scsi_qla_host *, struct req_que *);
static void qla25xx_set_que(srb_t *, struct rsp_que **);
static inline uint16_t
qla2x00_get_cmd_direction(srb_t *sp)
uint16_t
qla2x00_calc_iocbs_32(uint16_t dsds)
uint16_t
qla2x00_calc_iocbs_64(uint16_t dsds)
static inline cont_entry_t *
qla2x00_prep_cont_type0_iocb(struct scsi_qla_host *vha)
static inline cont_a64_entry_t *
qla2x00_prep_cont_type1_iocb(scsi_qla_host_t *vha)
static inline int
qla24xx_configure_prot_mode(srb_t *sp, uint16_t *fw_prot_opts)
void qla2x00_build_scsi_iocbs_32(srb_t *sp, cmd_entry_t *cmd_pkt,
uint16_t tot_dsds)
void qla2x00_build_scsi_iocbs_64(srb_t *sp, cmd_entry_t *cmd_pkt,
uint16_t tot_dsds)
int
qla2x00_start_scsi(srb_t *sp)
static int
__qla2x00_marker(struct scsi_qla_host *vha, struct req_que *req,
struct rsp_que *rsp, uint16_t loop_id,
uint16_t lun, uint8_t type)
int
qla2x00_marker(struct scsi_qla_host *vha, struct req_que *req,
struct rsp_que *rsp, uint16_t loop_id, uint16_t lun,
uint8_t type)
static void
qla2x00_isp_cmd(struct scsi_qla_host *vha, struct req_que *req)
inline uint16_t
qla24xx_calc_iocbs(uint16_t dsds)
inline void
qla24xx_build_scsi_iocbs(srb_t *sp, struct cmd_type_7 *cmd_pkt,
uint16_t tot_dsds)
struct fw_dif_context ;
static inline void
qla24xx_set_t10dif_tags(struct scsi_cmnd *cmd, struct fw_dif_context *pkt,
unsigned int protcnt)
static int
qla24xx_walk_and_build_sglist(struct qla_hw_data *ha, srb_t *sp, uint32_t *dsd,
uint16_t tot_dsds)
static int
qla24xx_walk_and_build_prot_sglist(struct qla_hw_data *ha, srb_t *sp,
uint32_t *dsd,
uint16_t tot_dsds)
static inline int
qla24xx_build_scsi_crc_2_iocbs(srb_t *sp, struct cmd_type_crc_2 *cmd_pkt,
uint16_t tot_dsds, uint16_t tot_prot_dsds, uint16_t fw_prot_opts)
int
qla24xx_start_scsi(srb_t *sp)
int
qla24xx_dif_start_scsi(srb_t *sp)
static void qla25xx_set_que(srb_t *sp, struct rsp_que **rsp)
void *
qla2x00_alloc_iocbs(scsi_qla_host_t *vha, srb_t *sp)
static void
qla2x00_start_iocbs(srb_t *sp)
static void
qla24xx_login_iocb(srb_t *sp, struct logio_entry_24xx *logio)
static void
qla2x00_login_iocb(srb_t *sp, struct mbx_entry *mbx)
static void
qla24xx_logout_iocb(srb_t *sp, struct logio_entry_24xx *logio)
static void
qla2x00_logout_iocb(srb_t *sp, struct mbx_entry *mbx)
static void
qla24xx_adisc_iocb(srb_t *sp, struct logio_entry_24xx *logio)
static void
qla2x00_adisc_iocb(srb_t *sp, struct mbx_entry *mbx)
static void
qla24xx_tm_iocb(srb_t *sp, struct tsk_mgmt_entry *tsk)
static void
qla24xx_els_iocb(srb_t *sp, struct els_entry_24xx *els_iocb)
static void
qla2x00_ct_iocb(srb_t *sp, ms_iocb_entry_t *ct_iocb)
static void
qla24xx_ct_iocb(srb_t *sp, struct ct_entry_24xx *ct_iocb)
int
qla2x00_start_sp(srb_t *sp)
