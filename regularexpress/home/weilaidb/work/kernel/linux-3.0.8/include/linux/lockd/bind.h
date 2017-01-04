#define LINUX_LOCKD_BIND_H
struct svc_rqst;
struct nlmsvc_binding ;
extern struct nlmsvc_binding *	nlmsvc_ops;
struct nlmclnt_initdata ;
extern struct nlm_host *nlmclnt_init(const struct nlmclnt_initdata *nlm_init);
extern void	nlmclnt_done(struct nlm_host *host);
extern int	nlmclnt_proc(struct nlm_host *host, int cmd,
struct file_lock *fl);
extern int	lockd_up(void);
extern void	lockd_down(void);
