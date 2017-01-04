#define FC_LOCAL_PTP_FID_LO   0x010101
#define FC_LOCAL_PTP_FID_HI   0x010102
#define	DNS_DELAY	      3
static void fc_lport_error(struct fc_lport *, struct fc_frame *);
static void fc_lport_enter_reset(struct fc_lport *);
static void fc_lport_enter_flogi(struct fc_lport *);
static void fc_lport_enter_dns(struct fc_lport *);
static void fc_lport_enter_ns(struct fc_lport *, enum fc_lport_state);
static void fc_lport_enter_scr(struct fc_lport *);
static void fc_lport_enter_ready(struct fc_lport *);
static void fc_lport_enter_logo(struct fc_lport *);
static const char *fc_lport_state_names[] = ;
struct fc_bsg_info ;
static int fc_frame_drop(struct fc_lport *lport, struct fc_frame *fp)
static void fc_lport_rport_callback(struct fc_lport *lport,
struct fc_rport_priv *rdata,
enum fc_rport_event event)
static const char *fc_lport_state(struct fc_lport *lport)
static void fc_lport_ptp_setup(struct fc_lport *lport,
u32 remote_fid, u64 remote_wwpn,
u64 remote_wwnn)
void fc_get_host_port_state(struct Scsi_Host *shost)
EXPORT_SYMBOL(fc_get_host_port_state);
void fc_get_host_speed(struct Scsi_Host *shost)
EXPORT_SYMBOL(fc_get_host_speed);
struct fc_host_statistics *fc_get_host_stats(struct Scsi_Host *shost)
EXPORT_SYMBOL(fc_get_host_stats);
static void fc_lport_flogi_fill(struct fc_lport *lport,
struct fc_els_flogi *flogi,
unsigned int op)
static void fc_lport_add_fc4_type(struct fc_lport *lport, enum fc_fh_type type)
static void fc_lport_recv_rlir_req(struct fc_lport *lport, struct fc_frame *fp)
static void fc_lport_recv_echo_req(struct fc_lport *lport,
struct fc_frame *in_fp)
static void fc_lport_recv_rnid_req(struct fc_lport *lport,
struct fc_frame *in_fp)
static void fc_lport_recv_logo_req(struct fc_lport *lport, struct fc_frame *fp)
int fc_fabric_login(struct fc_lport *lport)
EXPORT_SYMBOL(fc_fabric_login);
void __fc_linkup(struct fc_lport *lport)
void fc_linkup(struct fc_lport *lport)
EXPORT_SYMBOL(fc_linkup);
void __fc_linkdown(struct fc_lport *lport)
void fc_linkdown(struct fc_lport *lport)
EXPORT_SYMBOL(fc_linkdown);
int fc_fabric_logoff(struct fc_lport *lport)
EXPORT_SYMBOL(fc_fabric_logoff);
int fc_lport_destroy(struct fc_lport *lport)
EXPORT_SYMBOL(fc_lport_destroy);
int fc_set_mfs(struct fc_lport *lport, u32 mfs)
EXPORT_SYMBOL(fc_set_mfs);
void fc_lport_disc_callback(struct fc_lport *lport, enum fc_disc_event event)
static void fc_lport_enter_ready(struct fc_lport *lport)
static void fc_lport_set_port_id(struct fc_lport *lport, u32 port_id,
struct fc_frame *fp)
void fc_lport_set_local_id(struct fc_lport *lport, u32 port_id)
EXPORT_SYMBOL(fc_lport_set_local_id);
static void fc_lport_recv_flogi_req(struct fc_lport *lport,
struct fc_frame *rx_fp)
static void fc_lport_recv_els_req(struct fc_lport *lport,
struct fc_frame *fp)
static int fc_lport_els_prli(struct fc_rport_priv *rdata, u32 spp_len,
const struct fc_els_spp *spp_in,
struct fc_els_spp *spp_out)
struct fc4_prov fc_lport_els_prov = ;
static void fc_lport_recv_req(struct fc_lport *lport,
struct fc_frame *fp)
int fc_lport_reset(struct fc_lport *lport)
EXPORT_SYMBOL(fc_lport_reset);
static void fc_lport_reset_locked(struct fc_lport *lport)
static void fc_lport_enter_reset(struct fc_lport *lport)
static void fc_lport_enter_disabled(struct fc_lport *lport)
static void fc_lport_error(struct fc_lport *lport, struct fc_frame *fp)
static void fc_lport_ns_resp(struct fc_seq *sp, struct fc_frame *fp,
void *lp_arg)
static void fc_lport_scr_resp(struct fc_seq *sp, struct fc_frame *fp,
void *lp_arg)
static void fc_lport_enter_scr(struct fc_lport *lport)
static void fc_lport_enter_ns(struct fc_lport *lport, enum fc_lport_state state)
static struct fc_rport_operations fc_lport_rport_ops = ;
static void fc_lport_enter_dns(struct fc_lport *lport)
static void fc_lport_timeout(struct work_struct *work)
void fc_lport_logo_resp(struct fc_seq *sp, struct fc_frame *fp,
void *lp_arg)
EXPORT_SYMBOL(fc_lport_logo_resp);
static void fc_lport_enter_logo(struct fc_lport *lport)
void fc_lport_flogi_resp(struct fc_seq *sp, struct fc_frame *fp,
void *lp_arg)
EXPORT_SYMBOL(fc_lport_flogi_resp);
void fc_lport_enter_flogi(struct fc_lport *lport)
int fc_lport_config(struct fc_lport *lport)
EXPORT_SYMBOL(fc_lport_config);
int fc_lport_init(struct fc_lport *lport)
EXPORT_SYMBOL(fc_lport_init);
static void fc_lport_bsg_resp(struct fc_seq *sp, struct fc_frame *fp,
void *info_arg)
static int fc_lport_els_request(struct fc_bsg_job *job,
struct fc_lport *lport,
u32 did, u32 tov)
static int fc_lport_ct_request(struct fc_bsg_job *job,
struct fc_lport *lport, u32 did, u32 tov)
int fc_lport_bsg_request(struct fc_bsg_job *job)
EXPORT_SYMBOL(fc_lport_bsg_request);
