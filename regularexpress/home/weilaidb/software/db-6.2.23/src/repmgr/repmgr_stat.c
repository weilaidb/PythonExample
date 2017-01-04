static int __repmgr_print_all __P((ENV *, u_int32_t));
static int __repmgr_print_sites __P((ENV *));
static int __repmgr_print_stats __P((ENV *, u_int32_t));
static int __repmgr_stat __P((ENV *, DB_REPMGR_STAT **, u_int32_t));
int
__repmgr_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_REPMGR_STAT **statp;
u_int32_t flags;
static int
__repmgr_stat(env, statp, flags)
ENV *env;
DB_REPMGR_STAT **statp;
u_int32_t flags;
int
__repmgr_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__repmgr_stat_print(env, flags)
ENV *env;
u_int32_t flags;
static int
__repmgr_print_stats(env, flags)
ENV *env;
u_int32_t flags;
static int
__repmgr_print_sites(env)
ENV *env;
static int
__repmgr_print_all(env, flags)
ENV *env;
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
__repmgr_site_list_pp(dbenv, countp, listp)
DB_ENV *dbenv;
u_int *countp;
DB_REPMGR_SITE **listp;
int
__repmgr_site_list_int(env, countp, listp)
ENV *env;
u_int *countp;
DB_REPMGR_SITE **listp;
