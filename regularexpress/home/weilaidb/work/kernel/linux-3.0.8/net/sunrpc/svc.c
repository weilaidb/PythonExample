#define RPCDBG_FACILITY	RPCDBG_SVCDSP
static void svc_unregister(const struct svc_serv *serv);
#define svc_serv_is_pooled(serv)    ((serv)->sv_function)
enum ;
#define SVC_POOL_DEFAULT	SVC_POOL_GLOBAL
static struct svc_pool_map  svc_pool_map = ;
static DEFINE_MUTEX(svc_pool_map_mutex);
static int
param_set_pool_mode(const char *val, struct kernel_param *kp)
static int
param_get_pool_mode(char *buf, struct kernel_param *kp)
module_param_call(pool_mode, param_set_pool_mode, param_get_pool_mode,
&svc_pool_map.mode, 0644);
static int
svc_pool_map_choose_mode(void)
static int
svc_pool_map_alloc_arrays(struct svc_pool_map *m, unsigned int maxpools)
static int
svc_pool_map_init_percpu(struct svc_pool_map *m)
;
static int
svc_pool_map_init_pernode(struct svc_pool_map *m)
static unsigned int
svc_pool_map_get(void)
static void
svc_pool_map_put(void)
static inline void
svc_pool_map_set_cpumask(struct task_struct *task, unsigned int pidx)
struct svc_pool *
svc_pool_for_cpu(struct svc_serv *serv, int cpu)
static struct svc_serv *
__svc_create(struct svc_program *prog, unsigned int bufsize, int npools,
void (*shutdown)(struct svc_serv *serv))
struct svc_serv *
svc_create(struct svc_program *prog, unsigned int bufsize,
void (*shutdown)(struct svc_serv *serv))
EXPORT_SYMBOL_GPL(svc_create);
struct svc_serv *
svc_create_pooled(struct svc_program *prog, unsigned int bufsize,
void (*shutdown)(struct svc_serv *serv),
svc_thread_fn func, struct module *mod)
EXPORT_SYMBOL_GPL(svc_create_pooled);
void
svc_destroy(struct svc_serv *serv)
EXPORT_SYMBOL_GPL(svc_destroy);
static int
svc_init_buffer(struct svc_rqst *rqstp, unsigned int size)
static void
svc_release_buffer(struct svc_rqst *rqstp)
struct svc_rqst *
svc_prepare_thread(struct svc_serv *serv, struct svc_pool *pool)
EXPORT_SYMBOL_GPL(svc_prepare_thread);
static inline struct svc_pool *
choose_pool(struct svc_serv *serv, struct svc_pool *pool, unsigned int *state)
static inline struct task_struct *
choose_victim(struct svc_serv *serv, struct svc_pool *pool, unsigned int *state)
int
svc_set_num_threads(struct svc_serv *serv, struct svc_pool *pool, int nrservs)
EXPORT_SYMBOL_GPL(svc_set_num_threads);
void
svc_exit_thread(struct svc_rqst *rqstp)
EXPORT_SYMBOL_GPL(svc_exit_thread);
static int __svc_rpcb_register4(const u32 program, const u32 version,
const unsigned short protocol,
const unsigned short port)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int __svc_rpcb_register6(const u32 program, const u32 version,
const unsigned short protocol,
const unsigned short port)
static int __svc_register(const char *progname,
const u32 program, const u32 version,
const int family,
const unsigned short protocol,
const unsigned short port)
int svc_register(const struct svc_serv *serv, const int family,
const unsigned short proto, const unsigned short port)
static void __svc_unregister(const u32 program, const u32 version,
const char *progname)
static void svc_unregister(const struct svc_serv *serv)
static int
__attribute__ ((format (printf, 2, 3)))
svc_printk(struct svc_rqst *rqstp, const char *fmt, ...)
static int
svc_process_common(struct svc_rqst *rqstp, struct kvec *argv, struct kvec *resv)
EXPORT_SYMBOL_GPL(svc_process);
int
svc_process(struct svc_rqst *rqstp)
#if defined(CONFIG_NFS_V4_1)
int
bc_svc_process(struct svc_serv *serv, struct rpc_rqst *req,
struct svc_rqst *rqstp)
EXPORT_SYMBOL(bc_svc_process);
u32 svc_max_payload(const struct svc_rqst *rqstp)
EXPORT_SYMBOL_GPL(svc_max_payload);
