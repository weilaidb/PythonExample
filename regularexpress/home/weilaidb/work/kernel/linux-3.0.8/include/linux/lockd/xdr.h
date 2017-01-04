#define LOCKD_XDR_H
#define SM_MAXSTRLEN		1024
#define SM_PRIV_SIZE		16
struct nsm_private ;
struct svc_rqst;
#define NLM_MAXCOOKIELEN    	32
#define NLM_MAXSTRLEN		1024
#define	nlm_granted		cpu_to_be32(NLM_LCK_GRANTED)
#define	nlm_lck_denied		cpu_to_be32(NLM_LCK_DENIED)
#define	nlm_lck_denied_nolocks	cpu_to_be32(NLM_LCK_DENIED_NOLOCKS)
#define	nlm_lck_blocked		cpu_to_be32(NLM_LCK_BLOCKED)
#define	nlm_lck_denied_grace_period	cpu_to_be32(NLM_LCK_DENIED_GRACE_PERIOD)
#define nlm_drop_reply		cpu_to_be32(30000)
struct nlm_lock ;
struct nlm_cookie
;
struct nlm_args ;
typedef struct nlm_args nlm_args;
struct nlm_res ;
struct nlm_reboot ;
#define NLMSVC_XDRSIZE		sizeof(struct nlm_args)
int	nlmsvc_decode_testargs(struct svc_rqst *, __be32 *, struct nlm_args *);
int	nlmsvc_encode_testres(struct svc_rqst *, __be32 *, struct nlm_res *);
int	nlmsvc_decode_lockargs(struct svc_rqst *, __be32 *, struct nlm_args *);
int	nlmsvc_decode_cancargs(struct svc_rqst *, __be32 *, struct nlm_args *);
int	nlmsvc_decode_unlockargs(struct svc_rqst *, __be32 *, struct nlm_args *);
int	nlmsvc_encode_res(struct svc_rqst *, __be32 *, struct nlm_res *);
int	nlmsvc_decode_res(struct svc_rqst *, __be32 *, struct nlm_res *);
int	nlmsvc_encode_void(struct svc_rqst *, __be32 *, void *);
int	nlmsvc_decode_void(struct svc_rqst *, __be32 *, void *);
int	nlmsvc_decode_shareargs(struct svc_rqst *, __be32 *, struct nlm_args *);
int	nlmsvc_encode_shareres(struct svc_rqst *, __be32 *, struct nlm_res *);
int	nlmsvc_decode_notify(struct svc_rqst *, __be32 *, struct nlm_args *);
int	nlmsvc_decode_reboot(struct svc_rqst *, __be32 *, struct nlm_reboot *);
