static int __db_norepmgr __P((DB_ENV *));
static int
__db_norepmgr(dbenv)
DB_ENV *dbenv;
int
__repmgr_close(env)
ENV *env;
int
__repmgr_get_ack_policy(dbenv, policy)
DB_ENV *dbenv;
int *policy;
int
__repmgr_set_ack_policy(dbenv, policy)
DB_ENV *dbenv;
int policy;
int
__repmgr_get_incoming_queue_max(dbenv, messagesp, bulk_messagesp)
DB_ENV *dbenv;
u_int32_t *messagesp;
u_int32_t *bulk_messagesp;
int
__repmgr_set_incoming_queue_max(dbenv, messages, bulk_messages)
DB_ENV *dbenv;
u_int32_t messages;
u_int32_t bulk_messages;
int __repmgr_get_incoming_queue_redzone(dbenv, gbytesp, bytesp)
DB_ENV *dbenv;
u_int32_t *gbytesp, *bytesp;
int __repmgr_get_incoming_queue_fullevent(dbenv, onoffp)
DB_ENV *dbenv;
int *onoffp;
int
__repmgr_site(dbenv, host, port, dbsitep, flags)
DB_ENV *dbenv;
const char *host;
u_int port;
DB_SITE **dbsitep;
u_int32_t flags;
int
__repmgr_site_by_eid(dbenv, eid, dbsitep)
DB_ENV *dbenv;
int eid;
DB_SITE **dbsitep;
int
__repmgr_local_site(dbenv, dbsitep)
DB_ENV *dbenv;
DB_SITE **dbsitep;
int
__repmgr_site_list_pp(dbenv, countp, listp)
DB_ENV *dbenv;
u_int *countp;
DB_REPMGR_SITE **listp;
int
__repmgr_start_pp(dbenv, nthreads, flags)
DB_ENV *dbenv;
int nthreads;
u_int32_t flags;
int
__repmgr_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_REPMGR_STAT **statp;
u_int32_t flags;
int
__repmgr_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__repmgr_handle_event(env, event, info)
ENV *env;
u_int32_t event;
void *info;
int
__repmgr_channel(dbenv, eid, dbchannelp, flags)
DB_ENV *dbenv;
int eid;
DB_CHANNEL **dbchannelp;
u_int32_t flags;
int
__repmgr_set_msg_dispatch(dbenv, dispatch, flags)
DB_ENV *dbenv;
void (*dispatch) __P((DB_ENV *,
DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
u_int32_t flags;
int
__repmgr_init_recover(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
__repmgr_set_socket(dbenv, f_approval)
DB_ENV *dbenv;
int (*f_approval) __P((DB_ENV *, DB_REPMGR_SOCKET, int *, u_int32_t));
