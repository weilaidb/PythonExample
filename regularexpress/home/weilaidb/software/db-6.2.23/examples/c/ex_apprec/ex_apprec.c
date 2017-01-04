int	apprec_dispatch __P((DB_ENV *, DBT *, DB_LSN *, db_recops));
int	open_env __P((const char *, FILE *, const char *, DB_ENV **));
int	verify_absence __P((DB_ENV *, const char *));
int	verify_presence __P((DB_ENV *, const char *));
int
main(argc, argv)
int argc;
char *argv[];
int
open_env(home, errfp, progname, dbenvp)
const char *home, *progname;
FILE *errfp;
DB_ENV **dbenvp;
int
apprec_dispatch(dbenv, dbt, lsn, op)
DB_ENV *dbenv;
DBT *dbt;
DB_LSN *lsn;
db_recops op;
int
verify_absence(dbenv, dirname)
DB_ENV *dbenv;
const char *dirname;
int
verify_presence(dbenv, dirname)
DB_ENV *dbenv;
const char *dirname;
