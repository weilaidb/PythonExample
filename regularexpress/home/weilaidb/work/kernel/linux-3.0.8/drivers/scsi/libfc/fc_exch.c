u16	fc_cpu_mask;
EXPORT_SYMBOL(fc_cpu_mask);
static u16	fc_cpu_order;
static struct kmem_cache *fc_em_cachep;
static struct workqueue_struct *fc_exch_workqueue;
struct fc_exch_pool ;
struct fc_exch_mgr ;
struct fc_exch_mgr_anchor ;
static void fc_exch_rrq(struct fc_exch *);
static void fc_seq_ls_acc(struct fc_frame *);
static void fc_seq_ls_rjt(struct fc_frame *, enum fc_els_rjt_reason,
enum fc_els_rjt_explan);
static void fc_exch_els_rec(struct fc_frame *);
static void fc_exch_els_rrq(struct fc_frame *);
static char *fc_exch_rctl_names[] = FC_RCTL_NAMES_INIT;
static inline const char *fc_exch_name_lookup(unsigned int op, char **table,
unsigned int max_index)
static const char *fc_exch_rctl_name(unsigned int op)
static inline void fc_exch_hold(struct fc_exch *ep)
static void fc_exch_setup_hdr(struct fc_exch *ep, struct fc_frame *fp,
u32 f_ctl)
static void fc_exch_release(struct fc_exch *ep)
static int fc_exch_done_locked(struct fc_exch *ep)
static inline struct fc_exch *fc_exch_ptr_get(struct fc_exch_pool *pool,
u16 index)
static inline void fc_exch_ptr_set(struct fc_exch_pool *pool, u16 index,
struct fc_exch *ep)
static void fc_exch_delete(struct fc_exch *ep)
static inline void fc_exch_timer_set_locked(struct fc_exch *ep,
unsigned int timer_msec)
static void fc_exch_timer_set(struct fc_exch *ep, unsigned int timer_msec)
static int fc_seq_send(struct fc_lport *lport, struct fc_seq *sp,
struct fc_frame *fp)
static struct fc_seq *fc_seq_alloc(struct fc_exch *ep, u8 seq_id)
static struct fc_seq *fc_seq_start_next_locked(struct fc_seq *sp)
static struct fc_seq *fc_seq_start_next(struct fc_seq *sp)
static void fc_seq_set_resp(struct fc_seq *sp,
void (*resp)(struct fc_seq *, struct fc_frame *,
void *),
void *arg)
static int fc_seq_exch_abort(const struct fc_seq *req_sp,
unsigned int timer_msec)
static void fc_exch_timeout(struct work_struct *work)
static struct fc_exch *fc_exch_em_alloc(struct fc_lport *lport,
struct fc_exch_mgr *mp)
static inline struct fc_exch *fc_exch_alloc(struct fc_lport *lport,
struct fc_frame *fp)
static struct fc_exch *fc_exch_find(struct fc_exch_mgr *mp, u16 xid)
static void fc_exch_done(struct fc_seq *sp)
static struct fc_exch *fc_exch_resp(struct fc_lport *lport,
struct fc_exch_mgr *mp,
struct fc_frame *fp)
static enum fc_pf_rjt_reason fc_seq_lookup_recip(struct fc_lport *lport,
struct fc_exch_mgr *mp,
struct fc_frame *fp)
static struct fc_seq *fc_seq_lookup_orig(struct fc_exch_mgr *mp,
struct fc_frame *fp)
static void fc_exch_set_addr(struct fc_exch *ep,
u32 orig_id, u32 resp_id)
static void fc_seq_els_rsp_send(struct fc_frame *fp, enum fc_els_cmd els_cmd,
struct fc_seq_els_data *els_data)
static void fc_seq_send_last(struct fc_seq *sp, struct fc_frame *fp,
enum fc_rctl rctl, enum fc_fh_type fh_type)
static void fc_seq_send_ack(struct fc_seq *sp, const struct fc_frame *rx_fp)
static void fc_exch_send_ba_rjt(struct fc_frame *rx_fp,
enum fc_ba_rjt_reason reason,
enum fc_ba_rjt_explan explan)
static void fc_exch_recv_abts(struct fc_exch *ep, struct fc_frame *rx_fp)
static struct fc_seq *fc_seq_assign(struct fc_lport *lport, struct fc_frame *fp)
static void fc_seq_release(struct fc_seq *sp)
static void fc_exch_recv_req(struct fc_lport *lport, struct fc_exch_mgr *mp,
struct fc_frame *fp)
static void fc_exch_recv_seq_resp(struct fc_exch_mgr *mp, struct fc_frame *fp)
static void fc_exch_recv_resp(struct fc_exch_mgr *mp, struct fc_frame *fp)
static void fc_exch_abts_resp(struct fc_exch *ep, struct fc_frame *fp)
static void fc_exch_recv_bls(struct fc_exch_mgr *mp, struct fc_frame *fp)
static void fc_seq_ls_acc(struct fc_frame *rx_fp)
static void fc_seq_ls_rjt(struct fc_frame *rx_fp, enum fc_els_rjt_reason reason,
enum fc_els_rjt_explan explan)
static void fc_exch_reset(struct fc_exch *ep)
static void fc_exch_pool_reset(struct fc_lport *lport,
struct fc_exch_pool *pool,
u32 sid, u32 did)
void fc_exch_mgr_reset(struct fc_lport *lport, u32 sid, u32 did)
EXPORT_SYMBOL(fc_exch_mgr_reset);
static struct fc_exch *fc_exch_lookup(struct fc_lport *lport, u32 xid)
static void fc_exch_els_rec(struct fc_frame *rfp)
static void fc_exch_rrq_resp(struct fc_seq *sp, struct fc_frame *fp, void *arg)
static struct fc_seq *fc_exch_seq_send(struct fc_lport *lport,
struct fc_frame *fp,
void (*resp)(struct fc_seq *,
struct fc_frame *fp,
void *arg),
void (*destructor)(struct fc_seq *,
void *),
void *arg, u32 timer_msec)
static void fc_exch_rrq(struct fc_exch *ep)
static void fc_exch_els_rrq(struct fc_frame *fp)
struct fc_exch_mgr_anchor *fc_exch_mgr_add(struct fc_lport *lport,
struct fc_exch_mgr *mp,
bool (*match)(struct fc_frame *))
EXPORT_SYMBOL(fc_exch_mgr_add);
static void fc_exch_mgr_destroy(struct kref *kref)
void fc_exch_mgr_del(struct fc_exch_mgr_anchor *ema)
EXPORT_SYMBOL(fc_exch_mgr_del);
int fc_exch_mgr_list_clone(struct fc_lport *src, struct fc_lport *dst)
EXPORT_SYMBOL(fc_exch_mgr_list_clone);
struct fc_exch_mgr *fc_exch_mgr_alloc(struct fc_lport *lport,
enum fc_class class,
u16 min_xid, u16 max_xid,
bool (*match)(struct fc_frame *))
EXPORT_SYMBOL(fc_exch_mgr_alloc);
void fc_exch_mgr_free(struct fc_lport *lport)
EXPORT_SYMBOL(fc_exch_mgr_free);
static struct fc_exch_mgr_anchor *fc_find_ema(u32 f_ctl,
struct fc_lport *lport,
struct fc_frame_header *fh)
void fc_exch_recv(struct fc_lport *lport, struct fc_frame *fp)
EXPORT_SYMBOL(fc_exch_recv);
int fc_exch_init(struct fc_lport *lport)
EXPORT_SYMBOL(fc_exch_init);
int fc_setup_exch_mgr(void)
void fc_destroy_exch_mgr(void)
