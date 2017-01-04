#define __BFAD_IM_H__
#define FCPI_NAME " fcpim"
#define KOBJ_NAME_LEN           20
bfa_status_t bfad_im_module_init(void);
void bfad_im_module_exit(void);
bfa_status_t bfad_im_probe(struct bfad_s *bfad);
void bfad_im_probe_undo(struct bfad_s *bfad);
bfa_status_t bfad_im_port_new(struct bfad_s *bfad, struct bfad_port_s *port);
void bfad_im_port_delete(struct bfad_s *bfad, struct bfad_port_s *port);
void bfad_im_port_clean(struct bfad_im_port_s *im_port);
int  bfad_im_scsi_host_alloc(struct bfad_s *bfad,
struct bfad_im_port_s *im_port, struct device *dev);
void bfad_im_scsi_host_free(struct bfad_s *bfad,
struct bfad_im_port_s *im_port);
#define MAX_FCP_TARGET 1024
#define MAX_FCP_LUN 16384
#define BFAD_TARGET_RESET_TMO 60
#define BFAD_LUN_RESET_TMO 60
#define ScsiResult(host_code, scsi_code) (((host_code) << 16) | scsi_code)
#define BFA_QUEUE_FULL_RAMP_UP_TIME 120
#define IO_DONE_BIT			0
struct bfad_itnim_data_s ;
struct bfad_im_port_s ;
enum bfad_itnim_state ;
struct bfad_itnim_s ;
enum bfad_binding_type ;
struct bfad_fcp_binding ;
struct bfad_im_s ;
struct Scsi_Host *bfad_scsi_host_alloc(struct bfad_im_port_s *im_port,
struct bfad_s *);
bfa_status_t bfad_thread_workq(struct bfad_s *bfad);
void bfad_destroy_workq(struct bfad_im_s *im);
void bfad_fc_host_init(struct bfad_im_port_s *im_port);
void bfad_scsi_host_free(struct bfad_s *bfad,
struct bfad_im_port_s *im_port);
void bfad_ramp_up_qdepth(struct bfad_itnim_s *itnim,
struct scsi_device *sdev);
void bfad_handle_qfull(struct bfad_itnim_s *itnim, struct scsi_device *sdev);
struct bfad_itnim_s *bfad_get_itnim(struct bfad_im_port_s *im_port, int id);
extern struct scsi_host_template bfad_im_scsi_host_template;
extern struct scsi_host_template bfad_im_vport_template;
extern struct fc_function_template bfad_im_fc_function_template;
extern struct fc_function_template bfad_im_vport_fc_function_template;
extern struct scsi_transport_template *bfad_im_scsi_transport_template;
extern struct scsi_transport_template *bfad_im_scsi_vport_transport_template;
extern struct device_attribute *bfad_im_host_attrs[];
extern struct device_attribute *bfad_im_vport_attrs[];
irqreturn_t bfad_intx(int irq, void *dev_id);
