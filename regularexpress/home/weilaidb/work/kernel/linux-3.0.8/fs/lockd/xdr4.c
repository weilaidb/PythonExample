#define NLMDBG_FACILITY		NLMDBG_XDR
static inline loff_t
s64_to_loff_t(__s64 offset)
static inline s64
loff_t_to_s64(loff_t offset)
static __be32 *
nlm4_decode_cookie(__be32 *p, struct nlm_cookie *c)
static __be32 *
nlm4_encode_cookie(__be32 *p, struct nlm_cookie *c)
static __be32 *
nlm4_decode_fh(__be32 *p, struct nfs_fh *f)
static __be32 *
nlm4_decode_oh(__be32 *p, struct xdr_netobj *oh)
static __be32 *
nlm4_decode_lock(__be32 *p, struct nlm_lock *lock)
static __be32 *
nlm4_encode_testres(__be32 *p, struct nlm_res *resp)
int
nlm4svc_decode_testargs(struct svc_rqst *rqstp, __be32 *p, nlm_args *argp)
int
nlm4svc_encode_testres(struct svc_rqst *rqstp, __be32 *p, struct nlm_res *resp)
int
nlm4svc_decode_lockargs(struct svc_rqst *rqstp, __be32 *p, nlm_args *argp)
int
nlm4svc_decode_cancargs(struct svc_rqst *rqstp, __be32 *p, nlm_args *argp)
int
nlm4svc_decode_unlockargs(struct svc_rqst *rqstp, __be32 *p, nlm_args *argp)
int
nlm4svc_decode_shareargs(struct svc_rqst *rqstp, __be32 *p, nlm_args *argp)
int
nlm4svc_encode_shareres(struct svc_rqst *rqstp, __be32 *p, struct nlm_res *resp)
int
nlm4svc_encode_res(struct svc_rqst *rqstp, __be32 *p, struct nlm_res *resp)
int
nlm4svc_decode_notify(struct svc_rqst *rqstp, __be32 *p, struct nlm_args *argp)
int
nlm4svc_decode_reboot(struct svc_rqst *rqstp, __be32 *p, struct nlm_reboot *argp)
int
nlm4svc_decode_res(struct svc_rqst *rqstp, __be32 *p, struct nlm_res *resp)
int
nlm4svc_decode_void(struct svc_rqst *rqstp, __be32 *p, void *dummy)
int
nlm4svc_encode_void(struct svc_rqst *rqstp, __be32 *p, void *dummy)
