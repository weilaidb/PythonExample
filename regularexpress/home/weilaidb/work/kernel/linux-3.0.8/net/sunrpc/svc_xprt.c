#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
static struct svc_deferred_req *svc_deferred_dequeue(struct svc_xprt *xprt);
static int svc_deferred_recv(struct svc_rqst *rqstp);
static struct cache_deferred_req *svc_defer(struct cache_req *req);
static void svc_age_temp_xprts(unsigned long closure);
static int svc_conn_age_period = 6*60;
static DEFINE_SPINLOCK(svc_xprt_class_lock);
static LIST_HEAD(svc_xprt_class_list);
int svc_reg_xprt_class(struct svc_xprt_class *xcl)
EXPORT_SYMBOL_GPL(svc_reg_xprt_class);
void svc_unreg_xprt_class(struct svc_xprt_class *xcl)
EXPORT_SYMBOL_GPL(svc_unreg_xprt_class);
int svc_print_xprts(char *buf, int maxlen)
static void svc_xprt_free(struct kref *kref)
void svc_xprt_put(struct svc_xprt *xprt)
EXPORT_SYMBOL_GPL(svc_xprt_put);
void svc_xprt_init(struct svc_xprt_class *xcl, struct svc_xprt *xprt,
struct svc_serv *serv)
EXPORT_SYMBOL_GPL(svc_xprt_init);
static struct svc_xprt *__svc_xpo_create(struct svc_xprt_class *xcl,
struct svc_serv *serv,
struct net *net,
const int family,
const unsigned short port,
int flags)
int svc_create_xprt(struct svc_serv *serv, const char *xprt_name,
struct net *net, const int family,
const unsigned short port, int flags)
EXPORT_SYMBOL_GPL(svc_create_xprt);
void svc_xprt_copy_addrs(struct svc_rqst *rqstp, struct svc_xprt *xprt)
EXPORT_SYMBOL_GPL(svc_xprt_copy_addrs);
char *svc_print_addr(struct svc_rqst *rqstp, char *buf, size_t len)
EXPORT_SYMBOL_GPL(svc_print_addr);
static void svc_thread_enqueue(struct svc_pool *pool, struct svc_rqst *rqstp)
static void svc_thread_dequeue(struct svc_pool *pool, struct svc_rqst *rqstp)
static bool svc_xprt_has_something_to_do(struct svc_xprt *xprt)
void svc_xprt_enqueue(struct svc_xprt *xprt)
EXPORT_SYMBOL_GPL(svc_xprt_enqueue);
static struct svc_xprt *svc_xprt_dequeue(struct svc_pool *pool)
void svc_xprt_received(struct svc_xprt *xprt)
EXPORT_SYMBOL_GPL(svc_xprt_received);
void svc_reserve(struct svc_rqst *rqstp, int space)
EXPORT_SYMBOL_GPL(svc_reserve);
static void svc_xprt_release(struct svc_rqst *rqstp)
void svc_wake_up(struct svc_serv *serv)
EXPORT_SYMBOL_GPL(svc_wake_up);
int svc_port_is_privileged(struct sockaddr *sin)
static void svc_check_conn_limits(struct svc_serv *serv)
int svc_recv(struct svc_rqst *rqstp, long timeout)
EXPORT_SYMBOL_GPL(svc_recv);
void svc_drop(struct svc_rqst *rqstp)
EXPORT_SYMBOL_GPL(svc_drop);
int svc_send(struct svc_rqst *rqstp)
static void svc_age_temp_xprts(unsigned long closure)
static void call_xpt_users(struct svc_xprt *xprt)
void svc_delete_xprt(struct svc_xprt *xprt)
void svc_close_xprt(struct svc_xprt *xprt)
EXPORT_SYMBOL_GPL(svc_close_xprt);
void svc_close_all(struct list_head *xprt_list)
static void svc_revisit(struct cache_deferred_req *dreq, int too_many)
static struct cache_deferred_req *svc_defer(struct cache_req *req)
static int svc_deferred_recv(struct svc_rqst *rqstp)
static struct svc_deferred_req *svc_deferred_dequeue(struct svc_xprt *xprt)
struct svc_xprt *svc_find_xprt(struct svc_serv *serv, const char *xcl_name,
const sa_family_t af, const unsigned short port)
EXPORT_SYMBOL_GPL(svc_find_xprt);
static int svc_one_xprt_name(const struct svc_xprt *xprt,
char *pos, int remaining)
int svc_xprt_names(struct svc_serv *serv, char *buf, const int buflen)
EXPORT_SYMBOL_GPL(svc_xprt_names);
static void *svc_pool_stats_start(struct seq_file *m, loff_t *pos)
static void *svc_pool_stats_next(struct seq_file *m, void *p, loff_t *pos)
static void svc_pool_stats_stop(struct seq_file *m, void *p)
static int svc_pool_stats_show(struct seq_file *m, void *p)
static const struct seq_operations svc_pool_stats_seq_ops = ;
int svc_pool_stats_open(struct svc_serv *serv, struct file *file)
EXPORT_SYMBOL(svc_pool_stats_open);
