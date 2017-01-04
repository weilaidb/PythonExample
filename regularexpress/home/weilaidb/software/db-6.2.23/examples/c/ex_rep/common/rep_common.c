#define	CACHESIZE	(10 * 1024 * 1024)
#define	DATABASE	"quote.db"
#define	SLEEPTIME	3
DWORD permfail_key;
pthread_key_t permfail_key;
static int print_stocks __P((DB *));
int
common_rep_setup(dbenv, argc, argv, setup_info)
DB_ENV *dbenv;
int argc;
char *argv[];
SETUP_DATA *setup_info;
static int
print_stocks(dbp)
DB *dbp;
int
start_support_threads(dbenv, sup_args, ckp_thr, lga_thr)
DB_ENV *dbenv;
supthr_args *sup_args;
thread_t *ckp_thr;
thread_t *lga_thr;
int
finish_support_threads(ckp_thr, lga_thr)
thread_t *ckp_thr;
thread_t *lga_thr;
#define	BUFSIZE 1024
int
doloop(dbenv, shared_data)
DB_ENV *dbenv;
SHARED_DATA *shared_data;
int
create_env(progname, dbenvp)
const char *progname;
DB_ENV **dbenvp;
int
env_init(dbenv, home)
DB_ENV *dbenv;
const char *home;
void
usage(is_repmgr, progname)
const int is_repmgr;
const char *progname;
void *
checkpoint_thread(args)
void *args;
void *
log_archive_thread(args)
void *args;
