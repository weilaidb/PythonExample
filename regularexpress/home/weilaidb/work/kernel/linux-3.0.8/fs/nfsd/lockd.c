#define NFSDDBG_FACILITY		NFSDDBG_LOCKD
#define nlm_stale_fh	nlm4_stale_fh
#define nlm_failed	nlm4_failed
#define nlm_stale_fh	nlm_lck_denied_nolocks
#define nlm_failed	nlm_lck_denied_nolocks
static __be32
nlm_fopen(struct svc_rqst *rqstp, struct nfs_fh *f, struct file **filp)
static void
nlm_fclose(struct file *filp)
static struct nlmsvc_binding	nfsd_nlm_ops = ;
void
nfsd_lockd_init(void)
void
nfsd_lockd_shutdown(void)
