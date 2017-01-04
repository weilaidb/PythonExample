#define	__repmgr_AUTO_H
#define	DB___repmgr_member	200
typedef struct ___repmgr_member_args  __repmgr_member_args;
extern __DB_IMPORT DB_LOG_RECSPEC __repmgr_member_desc[];
static inline int
__repmgr_member_log(ENV *env, DB_TXN *txnp, DB_LSN *ret_lsnp, u_int32_t flags,
u_int32_t version, u_int32_t prev_status, u_int32_t status, const DBT *host, u_int32_t port)
static inline int __repmgr_member_read(ENV *env,
void *data, __repmgr_member_args **arg)
