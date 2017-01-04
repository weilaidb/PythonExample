extern int getopt(int, char * const *, const char *);
int db_setup __P((const char *, const char *, FILE *, const char *));
int db_teardown __P((const char *, const char *, FILE *, const char *));
static int usage __P((void));
const char *progname = "ex_env";
int EnvFlags =
DB_CREATE |
DB_INIT_LOCK |
DB_INIT_LOG |
DB_INIT_MPOOL |
DB_INIT_TXN;
int
main(argc, argv)
int argc;
char *argv[];
int
db_setup(home, data_dir, errfp, progname)
const char *home, *data_dir, *progname;
FILE *errfp;
int
db_teardown(home, data_dir, errfp, progname)
const char *home, *data_dir, *progname;
FILE *errfp;
static int
usage()
