static int send_request(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int send_convert(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int send_unlock(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int send_cancel(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int send_grant(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int send_bast(struct dlm_rsb *r, struct dlm_lkb *lkb, int mode);
static int send_lookup(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int send_remove(struct dlm_rsb *r);
static int _request_lock(struct dlm_rsb *r, struct dlm_lkb *lkb);
static int _cancel_lock(struct dlm_rsb *r, struct dlm_lkb *lkb);
static void __receive_convert_reply(struct dlm_rsb *r, struct dlm_lkb *lkb,
struct dlm_message *ms);
static int receive_extralen(struct dlm_message *ms);
static void do_purge(struct dlm_ls *ls, int nodeid, int pid);
static void del_timeout(struct dlm_lkb *lkb);
static const int __dlm_compat_matrix[8][8] = ;
const int dlm_lvb_operations[8][8] = ;
#define modes_compat(gr, rq) \
__dlm_compat_matrix[(gr)->lkb_grmode + 1][(rq)->lkb_rqmode + 1]
int dlm_modes_compat(int mode1, int mode2)
static const int __quecvt_compat_matrix[8][8] = ;
void dlm_print_lkb(struct dlm_lkb *lkb)
static void dlm_print_rsb(struct dlm_rsb *r)
void dlm_dump_rsb(struct dlm_rsb *r)
static inline void dlm_lock_recovery(struct dlm_ls *ls)
void dlm_unlock_recovery(struct dlm_ls *ls)
int dlm_lock_recovery_try(struct dlm_ls *ls)
static inline int can_be_queued(struct dlm_lkb *lkb)
static inline int force_blocking_asts(struct dlm_lkb *lkb)
static inline int is_demoted(struct dlm_lkb *lkb)
static inline int is_altmode(struct dlm_lkb *lkb)
static inline int is_granted(struct dlm_lkb *lkb)
static inline int is_remote(struct dlm_rsb *r)
static inline int is_process_copy(struct dlm_lkb *lkb)
static inline int is_master_copy(struct dlm_lkb *lkb)
static inline int middle_conversion(struct dlm_lkb *lkb)
static inline int down_conversion(struct dlm_lkb *lkb)
static inline int is_overlap_unlock(struct dlm_lkb *lkb)
static inline int is_overlap_cancel(struct dlm_lkb *lkb)
static inline int is_overlap(struct dlm_lkb *lkb)
static void queue_cast(struct dlm_rsb *r, struct dlm_lkb *lkb, int rv)
static inline void queue_cast_overlap(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void queue_bast(struct dlm_rsb *r, struct dlm_lkb *lkb, int rqmode)
static struct dlm_rsb *create_rsb(struct dlm_ls *ls, char *name, int len)
static int search_rsb_list(struct list_head *head, char *name, int len,
unsigned int flags, struct dlm_rsb **r_ret)
static int _search_rsb(struct dlm_ls *ls, char *name, int len, int b,
unsigned int flags, struct dlm_rsb **r_ret)
static int search_rsb(struct dlm_ls *ls, char *name, int len, int b,
unsigned int flags, struct dlm_rsb **r_ret)
static int find_rsb(struct dlm_ls *ls, char *name, int namelen,
unsigned int flags, struct dlm_rsb **r_ret)
static inline void hold_rsb(struct dlm_rsb *r)
void dlm_hold_rsb(struct dlm_rsb *r)
static void toss_rsb(struct kref *kref)
static void put_rsb(struct dlm_rsb *r)
void dlm_put_rsb(struct dlm_rsb *r)
static void unhold_rsb(struct dlm_rsb *r)
static void kill_rsb(struct kref *kref)
static void attach_lkb(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void detach_lkb(struct dlm_lkb *lkb)
static int create_lkb(struct dlm_ls *ls, struct dlm_lkb **lkb_ret)
static struct dlm_lkb *__find_lkb(struct dlm_ls *ls, uint32_t lkid)
static int find_lkb(struct dlm_ls *ls, uint32_t lkid, struct dlm_lkb **lkb_ret)
static void kill_lkb(struct kref *kref)
static int __put_lkb(struct dlm_ls *ls, struct dlm_lkb *lkb)
int dlm_put_lkb(struct dlm_lkb *lkb)
static inline void hold_lkb(struct dlm_lkb *lkb)
static inline void unhold_lkb(struct dlm_lkb *lkb)
static void lkb_add_ordered(struct list_head *new, struct list_head *head,
int mode)
static void add_lkb(struct dlm_rsb *r, struct dlm_lkb *lkb, int status)
static void del_lkb(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void move_lkb(struct dlm_rsb *r, struct dlm_lkb *lkb, int sts)
static int msg_reply_type(int mstype)
static int nodeid_warned(int nodeid, int num_nodes, int *warned)
void dlm_scan_waiters(struct dlm_ls *ls)
static int add_to_waiters(struct dlm_lkb *lkb, int mstype, int to_nodeid)
static int _remove_from_waiters(struct dlm_lkb *lkb, int mstype,
struct dlm_message *ms)
static int remove_from_waiters(struct dlm_lkb *lkb, int mstype)
static int remove_from_waiters_ms(struct dlm_lkb *lkb, struct dlm_message *ms)
static void dir_remove(struct dlm_rsb *r)
static int shrink_bucket(struct dlm_ls *ls, int b)
void dlm_scan_rsbs(struct dlm_ls *ls)
static void add_timeout(struct dlm_lkb *lkb)
static void del_timeout(struct dlm_lkb *lkb)
void dlm_scan_timeout(struct dlm_ls *ls)
void dlm_adjust_timeouts(struct dlm_ls *ls)
static void set_lvb_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void set_lvb_unlock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void set_lvb_lock_pc(struct dlm_rsb *r, struct dlm_lkb *lkb,
struct dlm_message *ms)
static void _remove_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void remove_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void remove_lock_pc(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int revert_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int revert_lock_pc(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void _grant_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void grant_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void grant_lock_pc(struct dlm_rsb *r, struct dlm_lkb *lkb,
struct dlm_message *ms)
static void grant_lock_pending(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void munge_demoted(struct dlm_lkb *lkb)
static void munge_altmode(struct dlm_lkb *lkb, struct dlm_message *ms)
static inline int first_in_list(struct dlm_lkb *lkb, struct list_head *head)
static int queue_conflict(struct list_head *head, struct dlm_lkb *lkb)
static int conversion_deadlock_detect(struct dlm_rsb *r, struct dlm_lkb *lkb2)
static int _can_be_granted(struct dlm_rsb *r, struct dlm_lkb *lkb, int now)
static int can_be_granted(struct dlm_rsb *r, struct dlm_lkb *lkb, int now,
int *err)
static int grant_pending_convert(struct dlm_rsb *r, int high, int *cw)
static int grant_pending_wait(struct dlm_rsb *r, int high, int *cw)
static int lock_requires_bast(struct dlm_lkb *gr, int high, int cw)
static void grant_pending_locks(struct dlm_rsb *r)
static int modes_require_bast(struct dlm_lkb *gr, struct dlm_lkb *rq)
static void send_bast_queue(struct dlm_rsb *r, struct list_head *head,
struct dlm_lkb *lkb)
static void send_blocking_asts(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void send_blocking_asts_all(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int set_master(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void process_lookup_list(struct dlm_rsb *r)
static void confirm_master(struct dlm_rsb *r, int error)
static int set_lock_args(int mode, struct dlm_lksb *lksb, uint32_t flags,
int namelen, unsigned long timeout_cs,
void (*ast) (void *astparam),
void *astparam,
void (*bast) (void *astparam, int mode),
struct dlm_args *args)
static int set_unlock_args(uint32_t flags, void *astarg, struct dlm_args *args)
static int validate_lock_args(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_args *args)
static int validate_unlock_args(struct dlm_lkb *lkb, struct dlm_args *args)
static int do_request(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void do_request_effects(struct dlm_rsb *r, struct dlm_lkb *lkb,
int error)
static int do_convert(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void do_convert_effects(struct dlm_rsb *r, struct dlm_lkb *lkb,
int error)
static int do_unlock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void do_unlock_effects(struct dlm_rsb *r, struct dlm_lkb *lkb,
int error)
static int do_cancel(struct dlm_rsb *r, struct dlm_lkb *lkb)
static void do_cancel_effects(struct dlm_rsb *r, struct dlm_lkb *lkb,
int error)
static int _request_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int _convert_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int _unlock_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int _cancel_lock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int request_lock(struct dlm_ls *ls, struct dlm_lkb *lkb, char *name,
int len, struct dlm_args *args)
static int convert_lock(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_args *args)
static int unlock_lock(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_args *args)
static int cancel_lock(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_args *args)
int dlm_lock(dlm_lockspace_t *lockspace,
int mode,
struct dlm_lksb *lksb,
uint32_t flags,
void *name,
unsigned int namelen,
uint32_t parent_lkid,
void (*ast) (void *astarg),
void *astarg,
void (*bast) (void *astarg, int mode))
int dlm_unlock(dlm_lockspace_t *lockspace,
uint32_t lkid,
uint32_t flags,
struct dlm_lksb *lksb,
void *astarg)
static int _create_message(struct dlm_ls *ls, int mb_len,
int to_nodeid, int mstype,
struct dlm_message **ms_ret,
struct dlm_mhandle **mh_ret)
static int create_message(struct dlm_rsb *r, struct dlm_lkb *lkb,
int to_nodeid, int mstype,
struct dlm_message **ms_ret,
struct dlm_mhandle **mh_ret)
static int send_message(struct dlm_mhandle *mh, struct dlm_message *ms)
static void send_args(struct dlm_rsb *r, struct dlm_lkb *lkb,
struct dlm_message *ms)
static int send_common(struct dlm_rsb *r, struct dlm_lkb *lkb, int mstype)
static int send_request(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int send_convert(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int send_unlock(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int send_cancel(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int send_grant(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int send_bast(struct dlm_rsb *r, struct dlm_lkb *lkb, int mode)
static int send_lookup(struct dlm_rsb *r, struct dlm_lkb *lkb)
static int send_remove(struct dlm_rsb *r)
static int send_common_reply(struct dlm_rsb *r, struct dlm_lkb *lkb,
int mstype, int rv)
static int send_request_reply(struct dlm_rsb *r, struct dlm_lkb *lkb, int rv)
static int send_convert_reply(struct dlm_rsb *r, struct dlm_lkb *lkb, int rv)
static int send_unlock_reply(struct dlm_rsb *r, struct dlm_lkb *lkb, int rv)
static int send_cancel_reply(struct dlm_rsb *r, struct dlm_lkb *lkb, int rv)
static int send_lookup_reply(struct dlm_ls *ls, struct dlm_message *ms_in,
int ret_nodeid, int rv)
static void receive_flags(struct dlm_lkb *lkb, struct dlm_message *ms)
static void receive_flags_reply(struct dlm_lkb *lkb, struct dlm_message *ms)
static int receive_extralen(struct dlm_message *ms)
static int receive_lvb(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_message *ms)
static void fake_bastfn(void *astparam, int mode)
static void fake_astfn(void *astparam)
static int receive_request_args(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_message *ms)
static int receive_convert_args(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_message *ms)
static int receive_unlock_args(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_message *ms)
static void setup_stub_lkb(struct dlm_ls *ls, struct dlm_message *ms)
static int validate_message(struct dlm_lkb *lkb, struct dlm_message *ms)
static void receive_request(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_convert(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_unlock(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_cancel(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_grant(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_bast(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_lookup(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_remove(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_purge(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_request_reply(struct dlm_ls *ls, struct dlm_message *ms)
static void __receive_convert_reply(struct dlm_rsb *r, struct dlm_lkb *lkb,
struct dlm_message *ms)
static void _receive_convert_reply(struct dlm_lkb *lkb, struct dlm_message *ms)
static void receive_convert_reply(struct dlm_ls *ls, struct dlm_message *ms)
static void _receive_unlock_reply(struct dlm_lkb *lkb, struct dlm_message *ms)
static void receive_unlock_reply(struct dlm_ls *ls, struct dlm_message *ms)
static void _receive_cancel_reply(struct dlm_lkb *lkb, struct dlm_message *ms)
static void receive_cancel_reply(struct dlm_ls *ls, struct dlm_message *ms)
static void receive_lookup_reply(struct dlm_ls *ls, struct dlm_message *ms)
static void _receive_message(struct dlm_ls *ls, struct dlm_message *ms)
static void dlm_receive_message(struct dlm_ls *ls, struct dlm_message *ms,
int nodeid)
void dlm_receive_message_saved(struct dlm_ls *ls, struct dlm_message *ms)
void dlm_receive_buffer(union dlm_packet *p, int nodeid)
static void recover_convert_waiter(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_message *ms_stub)
static int waiter_needs_recovery(struct dlm_ls *ls, struct dlm_lkb *lkb)
void dlm_recover_waiters_pre(struct dlm_ls *ls)
static struct dlm_lkb *find_resend_waiter(struct dlm_ls *ls)
int dlm_recover_waiters_post(struct dlm_ls *ls)
static void purge_queue(struct dlm_rsb *r, struct list_head *queue,
int (*test)(struct dlm_ls *ls, struct dlm_lkb *lkb))
static int purge_dead_test(struct dlm_ls *ls, struct dlm_lkb *lkb)
static int purge_mstcpy_test(struct dlm_ls *ls, struct dlm_lkb *lkb)
static void purge_dead_locks(struct dlm_rsb *r)
void dlm_purge_mstcpy_locks(struct dlm_rsb *r)
int dlm_purge_locks(struct dlm_ls *ls)
static struct dlm_rsb *find_purged_rsb(struct dlm_ls *ls, int bucket)
void dlm_grant_after_purge(struct dlm_ls *ls)
static struct dlm_lkb *search_remid_list(struct list_head *head, int nodeid,
uint32_t remid)
static struct dlm_lkb *search_remid(struct dlm_rsb *r, int nodeid,
uint32_t remid)
static int receive_rcom_lock_args(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_rsb *r, struct dlm_rcom *rc)
int dlm_recover_master_copy(struct dlm_ls *ls, struct dlm_rcom *rc)
int dlm_recover_process_copy(struct dlm_ls *ls, struct dlm_rcom *rc)
int dlm_user_request(struct dlm_ls *ls, struct dlm_user_args *ua,
int mode, uint32_t flags, void *name, unsigned int namelen,
unsigned long timeout_cs)
int dlm_user_convert(struct dlm_ls *ls, struct dlm_user_args *ua_tmp,
int mode, uint32_t flags, uint32_t lkid, char *lvb_in,
unsigned long timeout_cs)
int dlm_user_unlock(struct dlm_ls *ls, struct dlm_user_args *ua_tmp,
uint32_t flags, uint32_t lkid, char *lvb_in)
int dlm_user_cancel(struct dlm_ls *ls, struct dlm_user_args *ua_tmp,
uint32_t flags, uint32_t lkid)
int dlm_user_deadlock(struct dlm_ls *ls, uint32_t flags, uint32_t lkid)
static int orphan_proc_lock(struct dlm_ls *ls, struct dlm_lkb *lkb)
static int unlock_proc_lock(struct dlm_ls *ls, struct dlm_lkb *lkb)
static struct dlm_lkb *del_proc_lock(struct dlm_ls *ls,
struct dlm_user_proc *proc)
void dlm_clear_proc_locks(struct dlm_ls *ls, struct dlm_user_proc *proc)
static void purge_proc_locks(struct dlm_ls *ls, struct dlm_user_proc *proc)
static void do_purge(struct dlm_ls *ls, int nodeid, int pid)
static int send_purge(struct dlm_ls *ls, int nodeid, int pid)
int dlm_user_purge(struct dlm_ls *ls, struct dlm_user_proc *proc,
int nodeid, int pid)
