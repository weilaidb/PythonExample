#define	MB 1024 * 1024
int db_log_verify_main __P((int, char *[]));
int db_log_verify_lsn_arg __P((char *, DB_LSN *));
int db_log_verify_usage __P((void));
int db_log_verify_version_check __P((void));
int db_log_verify_app_record __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
const char *progname;
int
db_log_verify(args)
char *args;
#define	ERROR_RETURN	ERROR
int
db_log_verify_main(argc, argv)
int argc;
char *argv[];
int
db_log_verify_usage()
int
db_log_verify_version_check()
int
db_log_verify_app_record(dbenv, dbt, lsnp, op)
DB_ENV *dbenv;
DBT *dbt;
DB_LSN *lsnp;
db_recops op;
int
db_log_verify_lsn_arg(arg, lsnp)
char *arg;
DB_LSN *lsnp;
