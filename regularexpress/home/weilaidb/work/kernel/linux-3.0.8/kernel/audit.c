#define AUDIT_DISABLED		-1
#define AUDIT_UNINITIALIZED	0
#define AUDIT_INITIALIZED	1
static int	audit_initialized;
#define AUDIT_OFF	0
#define AUDIT_ON	1
#define AUDIT_LOCKED	2
int		audit_enabled;
int		audit_ever_enabled;
EXPORT_SYMBOL_GPL(audit_enabled);
static int	audit_default;
static int	audit_failure = AUDIT_FAIL_PRINTK;
int		audit_pid;
static int	audit_nlk_pid;
static int	audit_rate_limit;
static int	audit_backlog_limit = 64;
static int	audit_backlog_wait_time = 60 * HZ;
static int	audit_backlog_wait_overflow = 0;
uid_t		audit_sig_uid = -1;
pid_t		audit_sig_pid = -1;
u32		audit_sig_sid = 0;
static atomic_t    audit_lost = ATOMIC_INIT(0);
static struct sock *audit_sock;
struct list_head audit_inode_hash[AUDIT_INODE_BUCKETS];
static DEFINE_SPINLOCK(audit_freelist_lock);
static int	   audit_freelist_count;
static LIST_HEAD(audit_freelist);
static struct sk_buff_head audit_skb_queue;
static struct sk_buff_head audit_skb_hold_queue;
static struct task_struct *kauditd_task;
static DECLARE_WAIT_QUEUE_HEAD(kauditd_wait);
static DECLARE_WAIT_QUEUE_HEAD(audit_backlog_wait);
DEFINE_MUTEX(audit_cmd_mutex);
#define AUDIT_BUFSIZ 1024
#define AUDIT_MAXFREE  (2*NR_CPUS)
struct audit_buffer ;
struct audit_reply ;
static void audit_set_pid(struct audit_buffer *ab, pid_t pid)
void audit_panic(const char *message)
static inline int audit_rate_check(void)
void audit_log_lost(const char *message)
static int audit_log_config_change(char *function_name, int new, int old,
uid_t loginuid, u32 sessionid, u32 sid,
int allow_changes)
static int audit_do_config_change(char *function_name, int *to_change,
int new, uid_t loginuid, u32 sessionid,
u32 sid)
static int audit_set_rate_limit(int limit, uid_t loginuid, u32 sessionid,
u32 sid)
static int audit_set_backlog_limit(int limit, uid_t loginuid, u32 sessionid,
u32 sid)
static int audit_set_enabled(int state, uid_t loginuid, u32 sessionid, u32 sid)
static int audit_set_failure(int state, uid_t loginuid, u32 sessionid, u32 sid)
static void audit_hold_skb(struct sk_buff *skb)
static void audit_printk_skb(struct sk_buff *skb)
static void kauditd_send_skb(struct sk_buff *skb)
static int kauditd_thread(void *dummy)
static int audit_prepare_user_tty(pid_t pid, uid_t loginuid, u32 sessionid)
int audit_send_list(void *_dest)
struct sk_buff *audit_make_reply(int pid, int seq, int type, int done,
int multi, const void *payload, int size)
static int audit_send_reply_thread(void *arg)
static void audit_send_reply(int pid, int seq, int type, int done, int multi,
const void *payload, int size)
static int audit_netlink_ok(struct sk_buff *skb, u16 msg_type)
static int audit_log_common_recv_msg(struct audit_buffer **ab, u16 msg_type,
u32 pid, u32 uid, uid_t auid, u32 ses,
u32 sid)
static int audit_receive_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static void audit_receive_skb(struct sk_buff *skb)
static void audit_receive(struct sk_buff  *skb)
static int __init audit_init(void)
__initcall(audit_init);
static int __init audit_enable(char *str)
__setup("audit=", audit_enable);
static void audit_buffer_free(struct audit_buffer *ab)
static struct audit_buffer * audit_buffer_alloc(struct audit_context *ctx,
gfp_t gfp_mask, int type)
unsigned int audit_serial(void)
static inline void audit_get_stamp(struct audit_context *ctx,
struct timespec *t, unsigned int *serial)
struct audit_buffer *audit_log_start(struct audit_context *ctx, gfp_t gfp_mask,
int type)
static inline int audit_expand(struct audit_buffer *ab, int extra)
static void audit_log_vformat(struct audit_buffer *ab, const char *fmt,
va_list args)
void audit_log_format(struct audit_buffer *ab, const char *fmt, ...)
void audit_log_n_hex(struct audit_buffer *ab, const unsigned char *buf,
size_t len)
void audit_log_n_string(struct audit_buffer *ab, const char *string,
size_t slen)
int audit_string_contains_control(const char *string, size_t len)
void audit_log_n_untrustedstring(struct audit_buffer *ab, const char *string,
size_t len)
void audit_log_untrustedstring(struct audit_buffer *ab, const char *string)
void audit_log_d_path(struct audit_buffer *ab, const char *prefix,
struct path *path)
void audit_log_key(struct audit_buffer *ab, char *key)
void audit_log_end(struct audit_buffer *ab)
void audit_log(struct audit_context *ctx, gfp_t gfp_mask, int type,
const char *fmt, ...)
EXPORT_SYMBOL(audit_log_start);
EXPORT_SYMBOL(audit_log_end);
EXPORT_SYMBOL(audit_log_format);
EXPORT_SYMBOL(audit_log);
