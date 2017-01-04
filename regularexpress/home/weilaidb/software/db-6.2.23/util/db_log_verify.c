#define	MB 1024 * 1024
int main __P((int, char *[]));
int lsn_arg __P((char *, DB_LSN *));
int usage __P((void));
int version_check __P((void));
int db_log_verify_app_record __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
const char *progname;
int
main(argc, argv)
int argc;
char *argv[];
int
usage()
int
version_check()
int
db_log_verify_app_record(dbenv, dbt, lsnp, op)
DB_ENV *dbenv;
DBT *dbt;
DB_LSN *lsnp;
db_recops op;
int
lsn_arg(arg, lsnp)
char *arg;
DB_LSN *lsnp;
