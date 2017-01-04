static int __rep_egen_init  __P((ENV *, REP *));
static int __rep_gen_init  __P((ENV *, REP *));
static int __rep_view_init  __P((ENV *, REP *));
static int __rep_viewfile_exists  __P((ENV *, int *));
int
__rep_open(env)
ENV *env;
int
__rep_close_diagfiles(env)
ENV *env;
int
__rep_env_refresh(env)
ENV *env;
int
__rep_env_close(env)
ENV *env;
int
__rep_preclose(env)
ENV *env;
int
__rep_closefiles(env)
ENV *env;
static int
__rep_egen_init(env, rep)
ENV *env;
REP *rep;
int
__rep_write_egen(env, rep, egen)
ENV *env;
REP *rep;
u_int32_t egen;
static int
__rep_gen_init(env, rep)
ENV *env;
REP *rep;
int
__rep_write_gen(env, rep, gen)
ENV *env;
REP *rep;
u_int32_t gen;
static int
__rep_view_init(env, rep)
ENV *env;
REP *rep;
int
__rep_check_view(env)
ENV *env;
static int
__rep_viewfile_exists(env, existp)
ENV *env;
int *existp;
