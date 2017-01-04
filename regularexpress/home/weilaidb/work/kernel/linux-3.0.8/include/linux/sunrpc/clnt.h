#define _LINUX_SUNRPC_CLNT_H
struct rpc_inode;
struct rpc_clnt ;
#define RPC_MAXVERSION		4
struct rpc_program ;
struct rpc_version ;
struct rpc_procinfo ;
struct rpc_create_args ;
#define RPC_CLNT_CREATE_HARDRTRY	(1UL << 0)
#define RPC_CLNT_CREATE_AUTOBIND	(1UL << 2)
#define RPC_CLNT_CREATE_NONPRIVPORT	(1UL << 3)
#define RPC_CLNT_CREATE_NOPING		(1UL << 4)
#define RPC_CLNT_CREATE_DISCRTRY	(1UL << 5)
#define RPC_CLNT_CREATE_QUIET		(1UL << 6)
struct rpc_clnt *rpc_create(struct rpc_create_args *args);
struct rpc_clnt	*rpc_bind_new_program(struct rpc_clnt *,
struct rpc_program *, u32);
void rpc_task_reset_client(struct rpc_task *task, struct rpc_clnt *clnt);
struct rpc_clnt *rpc_clone_client(struct rpc_clnt *);
void		rpc_shutdown_client(struct rpc_clnt *);
void		rpc_release_client(struct rpc_clnt *);
void		rpc_task_release_client(struct rpc_task *);
int		rpcb_register(u32, u32, int, unsigned short);
int		rpcb_v4_register(const u32 program, const u32 version,
const struct sockaddr *address,
const char *netid);
void		rpcb_getport_async(struct rpc_task *);
void		rpc_call_start(struct rpc_task *);
int		rpc_call_async(struct rpc_clnt *clnt,
const struct rpc_message *msg, int flags,
const struct rpc_call_ops *tk_ops,
void *calldata);
int		rpc_call_sync(struct rpc_clnt *clnt,
const struct rpc_message *msg, int flags);
struct rpc_task *rpc_call_null(struct rpc_clnt *clnt, struct rpc_cred *cred,
int flags);
int		rpc_restart_call_prepare(struct rpc_task *);
int		rpc_restart_call(struct rpc_task *);
void		rpc_setbufsize(struct rpc_clnt *, unsigned int, unsigned int);
size_t		rpc_max_payload(struct rpc_clnt *);
void		rpc_force_rebind(struct rpc_clnt *);
size_t		rpc_peeraddr(struct rpc_clnt *, struct sockaddr *, size_t);
const char	*rpc_peeraddr2str(struct rpc_clnt *, enum rpc_display_format_t);
size_t		rpc_ntop(const struct sockaddr *, char *, const size_t);
size_t		rpc_pton(const char *, const size_t,
struct sockaddr *, const size_t);
char *		rpc_sockaddr2uaddr(const struct sockaddr *);
size_t		rpc_uaddr2sockaddr(const char *, const size_t,
struct sockaddr *, const size_t);
static inline unsigned short rpc_get_port(const struct sockaddr *sap)
static inline void rpc_set_port(struct sockaddr *sap,
const unsigned short port)
#define IPV6_SCOPE_DELIMITER		'%'
#define IPV6_SCOPE_ID_LEN		sizeof("%nnnnnnnnnn")
static inline bool __rpc_cmp_addr4(const struct sockaddr *sap1,
const struct sockaddr *sap2)
static inline bool __rpc_copy_addr4(struct sockaddr *dst,
const struct sockaddr *src)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline bool __rpc_cmp_addr6(const struct sockaddr *sap1,
const struct sockaddr *sap2)
static inline bool __rpc_copy_addr6(struct sockaddr *dst,
const struct sockaddr *src)
static inline bool __rpc_cmp_addr6(const struct sockaddr *sap1,
const struct sockaddr *sap2)
static inline bool __rpc_copy_addr6(struct sockaddr *dst,
const struct sockaddr *src)
static inline bool rpc_cmp_addr(const struct sockaddr *sap1,
const struct sockaddr *sap2)
static inline bool rpc_copy_addr(struct sockaddr *dst,
const struct sockaddr *src)
static inline u32 rpc_get_scope_id(const struct sockaddr *sa)
