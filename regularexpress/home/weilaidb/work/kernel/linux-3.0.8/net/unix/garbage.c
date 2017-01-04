static LIST_HEAD(gc_inflight_list);
static LIST_HEAD(gc_candidates);
static DEFINE_SPINLOCK(unix_gc_lock);
static DECLARE_WAIT_QUEUE_HEAD(unix_gc_wait);
unsigned int unix_tot_inflight;
struct sock *unix_get_socket(struct file *filp)
void unix_inflight(struct file *fp)
void unix_notinflight(struct file *fp)
static void scan_inflight(struct sock *x, void (*func)(struct unix_sock *),
struct sk_buff_head *hitlist)
static void scan_children(struct sock *x, void (*func)(struct unix_sock *),
struct sk_buff_head *hitlist)
static void dec_inflight(struct unix_sock *usk)
static void inc_inflight(struct unix_sock *usk)
static void inc_inflight_move_tail(struct unix_sock *u)
static bool gc_in_progress = false;
#define UNIX_INFLIGHT_TRIGGER_GC 16000
void wait_for_unix_gc(void)
void unix_gc(void)
