#define NLMDBG_FACILITY		NLMDBG_CLIENT
static __be32
nlm4svc_retrieve_args(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_host **hostp, struct nlm_file **filp)
static __be32
nlm4svc_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static __be32
nlm4svc_proc_test(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_lock(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_cancel(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_unlock(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_granted(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static void nlm4svc_callback_exit(struct rpc_task *task, void *data)
static void nlm4svc_callback_release(void *data)
static const struct rpc_call_ops nlm4svc_callback_ops = ;
static __be32 nlm4svc_callback(struct svc_rqst *rqstp, u32 proc, struct nlm_args *argp,
__be32 (*func)(struct svc_rqst *, struct nlm_args *, struct nlm_res  *))
static __be32 nlm4svc_proc_test_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void	     *resp)
static __be32 nlm4svc_proc_lock_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void	     *resp)
static __be32 nlm4svc_proc_cancel_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void	       *resp)
static __be32 nlm4svc_proc_unlock_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void            *resp)
static __be32 nlm4svc_proc_granted_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void            *resp)
static __be32
nlm4svc_proc_share(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_unshare(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_nm_lock(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlm4svc_proc_free_all(struct svc_rqst *rqstp, struct nlm_args *argp,
void            *resp)
static __be32
nlm4svc_proc_sm_notify(struct svc_rqst *rqstp, struct nlm_reboot *argp,
void	        *resp)
static __be32
nlm4svc_proc_granted_res(struct svc_rqst *rqstp, struct nlm_res  *argp,
void            *resp)
#define nlm4svc_encode_norep	nlm4svc_encode_void
#define nlm4svc_decode_norep	nlm4svc_decode_void
#define nlm4svc_decode_testres	nlm4svc_decode_void
#define nlm4svc_decode_lockres	nlm4svc_decode_void
#define nlm4svc_decode_unlockres	nlm4svc_decode_void
#define nlm4svc_decode_cancelres	nlm4svc_decode_void
#define nlm4svc_decode_grantedres	nlm4svc_decode_void
#define nlm4svc_proc_none	nlm4svc_proc_null
#define nlm4svc_proc_test_res	nlm4svc_proc_null
#define nlm4svc_proc_lock_res	nlm4svc_proc_null
#define nlm4svc_proc_cancel_res	nlm4svc_proc_null
#define nlm4svc_proc_unlock_res	nlm4svc_proc_null
struct nlm_void			;
#define PROC(name, xargt, xrest, argt, rest, respsize)	\
#define	Ck	(1+XDR_QUADLEN(NLM_MAXCOOKIELEN))
#define	No	(1+1024/4)
#define	St	1
#define	Rg	4
struct svc_procedure		nlmsvc_procedures4[] = ;
