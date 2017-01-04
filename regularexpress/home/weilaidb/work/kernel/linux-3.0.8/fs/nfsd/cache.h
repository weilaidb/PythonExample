#define NFSCACHE_H
struct svc_cacherep ;
#define c_replvec		c_u.u_vec
#define c_replstat		c_u.u_status
enum ;
enum ;
enum ;
#define RC_DELAY		(HZ/5)
int	nfsd_reply_cache_init(void);
void	nfsd_reply_cache_shutdown(void);
int	nfsd_cache_lookup(struct svc_rqst *, int);
void	nfsd_cache_update(struct svc_rqst *, int, __be32 *);
void	nfsd4_set_statp(struct svc_rqst *rqstp, __be32 *statp);
static inline void nfsd4_set_statp(struct svc_rqst *rqstp, __be32 *statp)
