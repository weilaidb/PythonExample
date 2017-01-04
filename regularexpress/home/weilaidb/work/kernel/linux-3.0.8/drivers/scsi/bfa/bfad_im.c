BFA_TRC_FILE(LDRV, IM);
DEFINE_IDR(bfad_im_port_index);
struct scsi_transport_template *bfad_im_scsi_transport_template;
struct scsi_transport_template *bfad_im_scsi_vport_transport_template;
static void bfad_im_itnim_work_handler(struct work_struct *work);
static int bfad_im_queuecommand(struct Scsi_Host *h, struct scsi_cmnd *cmnd);
static int bfad_im_slave_alloc(struct scsi_device *sdev);
static void bfad_im_fc_rport_add(struct bfad_im_port_s  *im_port,
struct bfad_itnim_s *itnim);
void
bfa_cb_ioim_done(void *drv, struct bfad_ioim_s *dio,
enum bfi_ioim_status io_status, u8 scsi_status,
int sns_len, u8 *sns_info, s32 residue)
void
bfa_cb_ioim_good_comp(void *drv, struct bfad_ioim_s *dio)
void
bfa_cb_ioim_abort(void *drv, struct bfad_ioim_s *dio)
void
bfa_cb_tskim_done(void *bfad, struct bfad_tskim_s *dtsk,
enum bfi_tskim_status tsk_status)
static const char *
bfad_im_info(struct Scsi_Host *shost)
static int
bfad_im_abort_handler(struct scsi_cmnd *cmnd)
static bfa_status_t
bfad_im_target_reset_send(struct bfad_s *bfad, struct scsi_cmnd *cmnd,
struct bfad_itnim_s *itnim)
static int
bfad_im_reset_lun_handler(struct scsi_cmnd *cmnd)
static int
bfad_im_reset_bus_handler(struct scsi_cmnd *cmnd)
static void
bfad_im_slave_destroy(struct scsi_device *sdev)
void
bfa_fcb_itnim_alloc(struct bfad_s *bfad, struct bfa_fcs_itnim_s **itnim,
struct bfad_itnim_s **itnim_drv)
void
bfa_fcb_itnim_free(struct bfad_s *bfad, struct bfad_itnim_s *itnim_drv)
void
bfa_fcb_itnim_online(struct bfad_itnim_s *itnim_drv)
void
bfa_fcb_itnim_offline(struct bfad_itnim_s *itnim_drv)
int
bfad_im_scsi_host_alloc(struct bfad_s *bfad, struct bfad_im_port_s *im_port,
struct device *dev)
void
bfad_im_scsi_host_free(struct bfad_s *bfad, struct bfad_im_port_s *im_port)
static void
bfad_im_port_delete_handler(struct work_struct *work)
bfa_status_t
bfad_im_port_new(struct bfad_s *bfad, struct bfad_port_s *port)
void
bfad_im_port_delete(struct bfad_s *bfad, struct bfad_port_s *port)
void
bfad_im_port_clean(struct bfad_im_port_s *im_port)
bfa_status_t
bfad_im_probe(struct bfad_s *bfad)
void
bfad_im_probe_undo(struct bfad_s *bfad)
struct Scsi_Host *
bfad_scsi_host_alloc(struct bfad_im_port_s *im_port, struct bfad_s *bfad)
void
bfad_scsi_host_free(struct bfad_s *bfad, struct bfad_im_port_s *im_port)
void
bfad_destroy_workq(struct bfad_im_s *im)
bfa_status_t
bfad_thread_workq(struct bfad_s *bfad)
static int
bfad_im_slave_configure(struct scsi_device *sdev)
struct scsi_host_template bfad_im_scsi_host_template = ;
struct scsi_host_template bfad_im_vport_template = ;
bfa_status_t
bfad_im_module_init(void)
void
bfad_im_module_exit(void)
void
bfad_ramp_up_qdepth(struct bfad_itnim_s *itnim, struct scsi_device *sdev)
void
bfad_handle_qfull(struct bfad_itnim_s *itnim, struct scsi_device *sdev)
struct bfad_itnim_s *
bfad_get_itnim(struct bfad_im_port_s *im_port, int id)
static int
bfad_im_slave_alloc(struct scsi_device *sdev)
static u32
bfad_im_supported_speeds(struct bfa_s *bfa)
void
bfad_fc_host_init(struct bfad_im_port_s *im_port)
static void
bfad_im_fc_rport_add(struct bfad_im_port_s *im_port, struct bfad_itnim_s *itnim)
static void
bfad_im_itnim_work_handler(struct work_struct *work)
static int
bfad_im_queuecommand_lck(struct scsi_cmnd *cmnd, void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(bfad_im_queuecommand)
void
bfad_rport_online_wait(struct bfad_s *bfad)
int
bfad_get_linkup_delay(struct bfad_s *bfad)
