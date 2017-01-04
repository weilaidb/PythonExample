#define LINUX_NFSD_STATS_H
#define	NFSD_USAGE_WRAP	(HZ*1000000)
struct nfsd_stats ;
extern struct nfsd_stats	nfsdstats;
extern struct svc_stat		nfsd_svcstats;
void	nfsd_stat_init(void);
void	nfsd_stat_shutdown(void);
