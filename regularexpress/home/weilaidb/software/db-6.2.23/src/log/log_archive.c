static int __absname __P((ENV *, char *, char *, char **));
static int __build_data __P((ENV *, char *, char ***));
static int __cmpfunc __P((const void *, const void *));
static int __usermem __P((ENV *, char ***));
int
__log_archive_pp(dbenv, listp, flags)
DB_ENV *dbenv;
char ***listp;
u_int32_t flags;
int
__log_archive(env, listp, flags)
ENV *env;
char ***listp;
u_int32_t flags;
int
__log_get_stable_lsn(env, stable_lsn, group_wide)
ENV *env;
DB_LSN *stable_lsn;
int group_wide;
void
__log_autoremove(env)
ENV *env;
static int
__build_data(env, pref, listp)
ENV *env;
char *pref, ***listp;
static int
__absname(env, pref, name, newnamep)
ENV *env;
char *pref, *name, **newnamep;
static int
__usermem(env, listp)
ENV *env;
char ***listp;
static int
__cmpfunc(p1, p2)
const void *p1, *p2;
