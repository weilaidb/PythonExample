#define _LIBFC_H_
#define	FC_FC4_PROV_SIZE	(FC_TYPE_FCP + 1)
#define	FC_NO_ERR	0
#define	FC_EX_TIMEOUT	1
#define	FC_EX_CLOSED	2
enum fc_lport_state ;
enum fc_disc_event ;
enum fc_rport_state ;
struct fc_disc_port ;
enum fc_rport_event ;
struct fc_rport_priv;
struct fc_rport_operations ;
struct fc_rport_libfc_priv ;
struct fc_rport_priv ;
struct fcoe_dev_stats ;
struct fc_seq_els_data ;
struct fc_fcp_pkt ;
struct fc_exch_mgr;
struct fc_exch_mgr_anchor;
extern u16 fc_cpu_mask;
struct fc_seq ;
#define FC_EX_DONE		(1 << 0)
#define FC_EX_RST_CLEANUP	(1 << 1)
struct fc_exch ;
#define	fc_seq_exch(sp) container_of(sp, struct fc_exch, seq)
struct libfc_function_template ;
struct fc_disc ;
extern struct blocking_notifier_head fc_lport_notifier_head;
enum fc_lport_event ;
struct fc_lport ;
struct fc4_prov ;
int fc_fc4_register_provider(enum fc_fh_type type, struct fc4_prov *);
void fc_fc4_deregister_provider(enum fc_fh_type type, struct fc4_prov *);
static inline int fc_lport_test_ready(struct fc_lport *lport)
static inline void fc_set_wwnn(struct fc_lport *lport, u64 wwnn)
static inline void fc_set_wwpn(struct fc_lport *lport, u64 wwnn)
static inline void fc_lport_state_enter(struct fc_lport *lport,
enum fc_lport_state state)
static inline int fc_lport_init_stats(struct fc_lport *lport)
static inline void fc_lport_free_stats(struct fc_lport *lport)
static inline void *lport_priv(const struct fc_lport *lport)
static inline struct fc_lport *
libfc_host_alloc(struct scsi_host_template *sht, int priv_size)
static inline bool fc_fcp_is_read(const struct fc_fcp_pkt *fsp)
int fc_lport_init(struct fc_lport *);
int fc_lport_destroy(struct fc_lport *);
int fc_fabric_logoff(struct fc_lport *);
int fc_fabric_login(struct fc_lport *);
void __fc_linkup(struct fc_lport *);
void fc_linkup(struct fc_lport *);
void __fc_linkdown(struct fc_lport *);
void fc_linkdown(struct fc_lport *);
void fc_vport_setlink(struct fc_lport *);
void fc_vports_linkchange(struct fc_lport *);
int fc_lport_config(struct fc_lport *);
int fc_lport_reset(struct fc_lport *);
int fc_set_mfs(struct fc_lport *, u32 mfs);
struct fc_lport *libfc_vport_create(struct fc_vport *, int privsize);
struct fc_lport *fc_vport_id_lookup(struct fc_lport *, u32 port_id);
int fc_lport_bsg_request(struct fc_bsg_job *);
void fc_lport_set_local_id(struct fc_lport *, u32 port_id);
void fc_lport_iterate(void (*func)(struct fc_lport *, void *), void *);
int fc_rport_init(struct fc_lport *);
void fc_rport_terminate_io(struct fc_rport *);
int fc_disc_init(struct fc_lport *);
static inline struct fc_lport *fc_disc_lport(struct fc_disc *disc)
int fc_fcp_init(struct fc_lport *);
void fc_fcp_destroy(struct fc_lport *);
int fc_queuecommand(struct Scsi_Host *, struct scsi_cmnd *);
int fc_eh_abort(struct scsi_cmnd *);
int fc_eh_device_reset(struct scsi_cmnd *);
int fc_eh_host_reset(struct scsi_cmnd *);
int fc_slave_alloc(struct scsi_device *);
int fc_change_queue_depth(struct scsi_device *, int qdepth, int reason);
int fc_change_queue_type(struct scsi_device *, int tag_type);
int fc_elsct_init(struct fc_lport *);
struct fc_seq *fc_elsct_send(struct fc_lport *, u32 did,
struct fc_frame *,
unsigned int op,
void (*resp)(struct fc_seq *,
struct fc_frame *,
void *arg),
void *arg, u32 timer_msec);
void fc_lport_flogi_resp(struct fc_seq *, struct fc_frame *, void *);
void fc_lport_logo_resp(struct fc_seq *, struct fc_frame *, void *);
void fc_fill_reply_hdr(struct fc_frame *, const struct fc_frame *,
enum fc_rctl, u32 parm_offset);
void fc_fill_hdr(struct fc_frame *, const struct fc_frame *,
enum fc_rctl, u32 f_ctl, u16 seq_cnt, u32 parm_offset);
int fc_exch_init(struct fc_lport *);
struct fc_exch_mgr_anchor *fc_exch_mgr_add(struct fc_lport *,
struct fc_exch_mgr *,
bool (*match)(struct fc_frame *));
void fc_exch_mgr_del(struct fc_exch_mgr_anchor *);
int fc_exch_mgr_list_clone(struct fc_lport *src, struct fc_lport *dst);
struct fc_exch_mgr *fc_exch_mgr_alloc(struct fc_lport *, enum fc_class class,
u16 min_xid, u16 max_xid,
bool (*match)(struct fc_frame *));
void fc_exch_mgr_free(struct fc_lport *);
void fc_exch_recv(struct fc_lport *, struct fc_frame *);
void fc_exch_mgr_reset(struct fc_lport *, u32 s_id, u32 d_id);
void fc_get_host_speed(struct Scsi_Host *);
void fc_get_host_port_state(struct Scsi_Host *);
void fc_set_rport_loss_tmo(struct fc_rport *, u32 timeout);
struct fc_host_statistics *fc_get_host_stats(struct Scsi_Host *);
