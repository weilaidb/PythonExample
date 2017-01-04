static int __log_print_dbreg_setup __P((ENV *, DBT *, DB_LOG *));
int
__log_print_record(env, recbuf, lsnp, name, spec, info)
ENV *env;
DBT *recbuf;
DB_LSN *lsnp;
char *name;
DB_LOG_RECSPEC *spec;
void *info;
static int
__log_print_dbreg_setup(env, recbuf, dblp)
ENV *env;
DBT *recbuf;
DB_LOG *dblp;
