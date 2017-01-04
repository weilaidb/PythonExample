#define NLMDBG_FACILITY		NLMDBG_CLIENT
static __be32
cast_to_nlm(__be32 status, u32 vers)
#define	cast_status(status) (cast_to_nlm(status, rqstp->rq_vers))
#define cast_status(status) (status)
static __be32
nlmsvc_retrieve_args(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_host **hostp, struct nlm_file **filp)
static __be32
nlmsvc_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static __be32
nlmsvc_proc_test(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_lock(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_cancel(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_unlock(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_granted(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static void nlmsvc_callback_exit(struct rpc_task *task, void *data)
void nlmsvc_release_call(struct nlm_rqst *call)
static void nlmsvc_callback_release(void *data)
static const struct rpc_call_ops nlmsvc_callback_ops = ;
static __be32 nlmsvc_callback(struct svc_rqst *rqstp, u32 proc, struct nlm_args *argp,
__be32 (*func)(struct svc_rqst *, struct nlm_args *, struct nlm_res  *))
static __be32 nlmsvc_proc_test_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void	     *resp)
static __be32 nlmsvc_proc_lock_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void	     *resp)
static __be32 nlmsvc_proc_cancel_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void	       *resp)
static __be32
nlmsvc_proc_unlock_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void            *resp)
static __be32
nlmsvc_proc_granted_msg(struct svc_rqst *rqstp, struct nlm_args *argp,
void            *resp)
static __be32
nlmsvc_proc_share(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_unshare(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_nm_lock(struct svc_rqst *rqstp, struct nlm_args *argp,
struct nlm_res  *resp)
static __be32
nlmsvc_proc_free_all(struct svc_rqst *rqstp, struct nlm_args *argp,
void            *resp)
static __be32
nlmsvc_proc_sm_notify(struct svc_rqst *rqstp, struct nlm_reboot *argp,
void	        *resp)
static __be32
nlmsvc_proc_granted_res(struct svc_rqst *rqstp, struct nlm_res  *argp,
void            *resp)
#define nlmsvc_encode_norep	nlmsvc_encode_void
#define nlmsvc_decode_norep	nlmsvc_decode_void
#define nlmsvc_decode_testres	nlmsvc_decode_void
#define nlmsvc_decode_lockres	nlmsvc_decode_void
#define nlmsvc_decode_unlockres	nlmsvc_decode_void
#define nlmsvc_decode_cancelres	nlmsvc_decode_void
#define nlmsvc_decode_grantedres	nlmsvc_decode_void
#define nlmsvc_proc_none	nlmsvc_proc_null
#define nlmsvc_proc_test_res	nlmsvc_proc_null
#define nlmsvc_proc_lock_res	nlmsvc_proc_null
#define nlmsvc_proc_cancel_res	nlmsvc_proc_null
#define nlmsvc_proc_unlock_res	nlmsvc_proc_null
struct nlm_void			;
#define PROC(name, xargt, xrest, argt, rest, respsize)	\
#define	Ck	(1+XDR_QUADLEN(NLM_MAXCOOKIELEN))
#define	St	1
#define	No	(1+1024/4)
#define	Rg	2
struct svc_procedure		nlmsvc_procedures[] = ;
