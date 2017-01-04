static struct workqueue_struct *rport_event_queue;
static void fc_rport_enter_flogi(struct fc_rport_priv *);
static void fc_rport_enter_plogi(struct fc_rport_priv *);
static void fc_rport_enter_prli(struct fc_rport_priv *);
static void fc_rport_enter_rtv(struct fc_rport_priv *);
static void fc_rport_enter_ready(struct fc_rport_priv *);
static void fc_rport_enter_logo(struct fc_rport_priv *);
static void fc_rport_enter_adisc(struct fc_rport_priv *);
static void fc_rport_recv_plogi_req(struct fc_lport *, struct fc_frame *);
static void fc_rport_recv_prli_req(struct fc_rport_priv *, struct fc_frame *);
static void fc_rport_recv_prlo_req(struct fc_rport_priv *, struct fc_frame *);
static void fc_rport_recv_logo_req(struct fc_lport *, struct fc_frame *);
static void fc_rport_timeout(struct work_struct *);
static void fc_rport_error(struct fc_rport_priv *, struct fc_frame *);
static void fc_rport_error_retry(struct fc_rport_priv *, struct fc_frame *);
static void fc_rport_work(struct work_struct *);
static const char *fc_rport_state_names[] = ;
static struct fc_rport_priv *fc_rport_lookup(const struct fc_lport *lport,
u32 port_id)
static struct fc_rport_priv *fc_rport_create(struct fc_lport *lport,
u32 port_id)
static void fc_rport_free_rcu(struct rcu_head *rcu)
static void fc_rport_destroy(struct kref *kref)
static const char *fc_rport_state(struct fc_rport_priv *rdata)
void fc_set_rport_loss_tmo(struct fc_rport *rport, u32 timeout)
EXPORT_SYMBOL(fc_set_rport_loss_tmo);
static unsigned int fc_plogi_get_maxframe(struct fc_els_flogi *flp,
unsigned int maxval)
static void fc_rport_state_enter(struct fc_rport_priv *rdata,
enum fc_rport_state new)
static void fc_rport_work(struct work_struct *work)
int fc_rport_login(struct fc_rport_priv *rdata)
static void fc_rport_enter_delete(struct fc_rport_priv *rdata,
enum fc_rport_event event)
int fc_rport_logoff(struct fc_rport_priv *rdata)
static void fc_rport_enter_ready(struct fc_rport_priv *rdata)
static void fc_rport_timeout(struct work_struct *work)
static void fc_rport_error(struct fc_rport_priv *rdata, struct fc_frame *fp)
static void fc_rport_error_retry(struct fc_rport_priv *rdata,
struct fc_frame *fp)
static int fc_rport_login_complete(struct fc_rport_priv *rdata,
struct fc_frame *fp)
void fc_rport_flogi_resp(struct fc_seq *sp, struct fc_frame *fp,
void *rp_arg)
static void fc_rport_enter_flogi(struct fc_rport_priv *rdata)
static void fc_rport_recv_flogi_req(struct fc_lport *lport,
struct fc_frame *rx_fp)
static void fc_rport_plogi_resp(struct fc_seq *sp, struct fc_frame *fp,
void *rdata_arg)
static void fc_rport_enter_plogi(struct fc_rport_priv *rdata)
static void fc_rport_prli_resp(struct fc_seq *sp, struct fc_frame *fp,
void *rdata_arg)
static void fc_rport_enter_prli(struct fc_rport_priv *rdata)
static void fc_rport_rtv_resp(struct fc_seq *sp, struct fc_frame *fp,
void *rdata_arg)
static void fc_rport_enter_rtv(struct fc_rport_priv *rdata)
static void fc_rport_logo_resp(struct fc_seq *sp, struct fc_frame *fp,
void *lport_arg)
static void fc_rport_enter_logo(struct fc_rport_priv *rdata)
static void fc_rport_adisc_resp(struct fc_seq *sp, struct fc_frame *fp,
void *rdata_arg)
static void fc_rport_enter_adisc(struct fc_rport_priv *rdata)
static void fc_rport_recv_adisc_req(struct fc_rport_priv *rdata,
struct fc_frame *in_fp)
static void fc_rport_recv_rls_req(struct fc_rport_priv *rdata,
struct fc_frame *rx_fp)
static void fc_rport_recv_els_req(struct fc_lport *lport, struct fc_frame *fp)
void fc_rport_recv_req(struct fc_lport *lport, struct fc_frame *fp)
static void fc_rport_recv_plogi_req(struct fc_lport *lport,
struct fc_frame *rx_fp)
static void fc_rport_recv_prli_req(struct fc_rport_priv *rdata,
struct fc_frame *rx_fp)
static void fc_rport_recv_prlo_req(struct fc_rport_priv *rdata,
struct fc_frame *rx_fp)
static void fc_rport_recv_logo_req(struct fc_lport *lport, struct fc_frame *fp)
static void fc_rport_flush_queue(void)
int fc_rport_init(struct fc_lport *lport)
EXPORT_SYMBOL(fc_rport_init);
static int fc_rport_fcp_prli(struct fc_rport_priv *rdata, u32 spp_len,
const struct fc_els_spp *rspp,
struct fc_els_spp *spp)
struct fc4_prov fc_rport_fcp_init = ;
static int fc_rport_t0_prli(struct fc_rport_priv *rdata, u32 spp_len,
const struct fc_els_spp *rspp,
struct fc_els_spp *spp)
struct fc4_prov fc_rport_t0_prov = ;
int fc_setup_rport(void)
void fc_destroy_rport(void)
void fc_rport_terminate_io(struct fc_rport *rport)
EXPORT_SYMBOL(fc_rport_terminate_io);
