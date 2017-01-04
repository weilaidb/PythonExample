#define SUNRPC_SVC_XPRT_H
struct svc_xprt_ops ;
struct svc_xprt_class ;
struct svc_xpt_user ;
struct svc_xprt ;
static inline void unregister_xpt_user(struct svc_xprt *xpt, struct svc_xpt_user *u)
static inline int register_xpt_user(struct svc_xprt *xpt, struct svc_xpt_user *u)
int	svc_reg_xprt_class(struct svc_xprt_class *);
void	svc_unreg_xprt_class(struct svc_xprt_class *);
void	svc_xprt_init(struct svc_xprt_class *, struct svc_xprt *,
struct svc_serv *);
int	svc_create_xprt(struct svc_serv *, const char *, struct net *,
const int, const unsigned short, int);
void	svc_xprt_enqueue(struct svc_xprt *xprt);
void	svc_xprt_received(struct svc_xprt *);
void	svc_xprt_put(struct svc_xprt *xprt);
void	svc_xprt_copy_addrs(struct svc_rqst *rqstp, struct svc_xprt *xprt);
void	svc_close_xprt(struct svc_xprt *xprt);
void	svc_delete_xprt(struct svc_xprt *xprt);
int	svc_port_is_privileged(struct sockaddr *sin);
int	svc_print_xprts(char *buf, int maxlen);
struct	svc_xprt *svc_find_xprt(struct svc_serv *serv, const char *xcl_name,
const sa_family_t af, const unsigned short port);
int	svc_xprt_names(struct svc_serv *serv, char *buf, const int buflen);
static inline void svc_xprt_get(struct svc_xprt *xprt)
static inline void svc_xprt_set_local(struct svc_xprt *xprt,
const struct sockaddr *sa,
const size_t salen)
static inline void svc_xprt_set_remote(struct svc_xprt *xprt,
const struct sockaddr *sa,
const size_t salen)
static inline unsigned short svc_addr_port(const struct sockaddr *sa)
static inline size_t svc_addr_len(const struct sockaddr *sa)
static inline unsigned short svc_xprt_local_port(const struct svc_xprt *xprt)
static inline unsigned short svc_xprt_remote_port(const struct svc_xprt *xprt)
static inline char *__svc_print_addr(const struct sockaddr *addr,
char *buf, const size_t len)
