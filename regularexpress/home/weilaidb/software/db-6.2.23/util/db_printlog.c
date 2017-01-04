static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
int db_printlog_print_app_record __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
int env_init_print __P((ENV *, u_int32_t, DB_DISTAB *));
int env_init_print_42 __P((ENV *, DB_DISTAB *));
int env_init_print_43 __P((ENV *, DB_DISTAB *));
int env_init_print_47 __P((ENV *, DB_DISTAB *));
int env_init_print_48 __P((ENV *, DB_DISTAB *));
int env_init_print_53 __P((ENV *, DB_DISTAB *));
int env_init_print_60 __P((ENV *, DB_DISTAB *));
int env_init_print_61 __P((ENV *, DB_DISTAB *));
int lsn_arg __P((char *, DB_LSN *));
int main __P((int, char *[]));
int open_rep_db __P((DB_ENV *, DB **, DBC **));
void usage __P((void));
int version_check __P((void));
const char *progname;
int
main(argc, argv)
int argc;
char *argv[];
int
env_init_print(env, version, dtabp)
ENV *env;
u_int32_t version;
DB_DISTAB *dtabp;
int
env_init_print_42(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
env_init_print_43(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
env_init_print_47(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
env_init_print_48(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
env_init_print_53(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
env_init_print_60(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
int
env_init_print_61(env, dtabp)
ENV *env;
DB_DISTAB *dtabp;
void
usage()
int
version_check()
int
db_printlog_print_app_record(dbenv, dbt, lsnp, op)
DB_ENV *dbenv;
DBT *dbt;
DB_LSN *lsnp;
db_recops op;
int
open_rep_db(dbenv, dbpp, dbcp)
DB_ENV *dbenv;
DB **dbpp;
DBC **dbcp;
int
lsn_arg(arg, lsnp)
char *arg;
DB_LSN *lsnp;
