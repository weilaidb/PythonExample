#define SUNRPC_SVCSOCK_H
struct svc_sock ;
void		svc_close_all(struct list_head *);
int		svc_recv(struct svc_rqst *, long);
int		svc_send(struct svc_rqst *);
void		svc_drop(struct svc_rqst *);
void		svc_sock_update_bufs(struct svc_serv *serv);
int		svc_sock_names(struct svc_serv *serv, char *buf,
const size_t buflen,
const char *toclose);
int		svc_addsock(struct svc_serv *serv, const int fd,
char *name_return, const size_t len);
void		svc_init_xprt_sock(void);
void		svc_cleanup_xprt_sock(void);
struct svc_xprt *svc_sock_create(struct svc_serv *serv, int prot);
void		svc_sock_destroy(struct svc_xprt *);
#define SVC_SOCK_DEFAULTS	(0U)
#define SVC_SOCK_ANONYMOUS	(1U << 0)
#define SVC_SOCK_TEMPORARY	(1U << 1)
