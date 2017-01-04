#define FC_DISC_RETRY_LIMIT	3
#define FC_DISC_RETRY_DELAY	500UL
static void fc_disc_gpn_ft_req(struct fc_disc *);
static void fc_disc_gpn_ft_resp(struct fc_seq *, struct fc_frame *, void *);
static void fc_disc_done(struct fc_disc *, enum fc_disc_event);
static void fc_disc_timeout(struct work_struct *);
static int fc_disc_single(struct fc_lport *, struct fc_disc_port *);
static void fc_disc_restart(struct fc_disc *);
void fc_disc_stop_rports(struct fc_disc *disc)
static void fc_disc_recv_rscn_req(struct fc_disc *disc, struct fc_frame *fp)
static void fc_disc_recv_req(struct fc_lport *lport, struct fc_frame *fp)
static void fc_disc_restart(struct fc_disc *disc)
static void fc_disc_start(void (*disc_callback)(struct fc_lport *,
enum fc_disc_event),
struct fc_lport *lport)
static void fc_disc_done(struct fc_disc *disc, enum fc_disc_event event)
static void fc_disc_error(struct fc_disc *disc, struct fc_frame *fp)
static void fc_disc_gpn_ft_req(struct fc_disc *disc)
static int fc_disc_gpn_ft_parse(struct fc_disc *disc, void *buf, size_t len)
static void fc_disc_timeout(struct work_struct *work)
static void fc_disc_gpn_ft_resp(struct fc_seq *sp, struct fc_frame *fp,
void *disc_arg)
static void fc_disc_gpn_id_resp(struct fc_seq *sp, struct fc_frame *fp,
void *rdata_arg)
static int fc_disc_gpn_id_req(struct fc_lport *lport,
struct fc_rport_priv *rdata)
static int fc_disc_single(struct fc_lport *lport, struct fc_disc_port *dp)
void fc_disc_stop(struct fc_lport *lport)
void fc_disc_stop_final(struct fc_lport *lport)
int fc_disc_init(struct fc_lport *lport)
EXPORT_SYMBOL(fc_disc_init);
