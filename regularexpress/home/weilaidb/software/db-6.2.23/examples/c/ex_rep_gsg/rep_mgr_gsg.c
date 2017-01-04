#define	sleep(s)		Sleep(1000 * (s))
extern int getopt(int, char * const *, const char *);
#define	CACHESIZE (10 * 1024 * 1024)
#define	DATABASE "quote.db"
#define	SLEEPTIME 3
typedef struct  APP_DATA;
const char *progname = "ex_rep_gsg_repmgr";
int create_env(const char *, DB_ENV **);
int env_init(DB_ENV *, const char *);
int doloop (DB_ENV *);
int print_stocks(DB *);
static void event_callback(DB_ENV *, u_int32_t, void *);
static void
usage()
int
main(int argc, char *argv[])
int
create_env(const char *progname, DB_ENV **dbenvp)
int
env_init(DB_ENV *dbenv, const char *home)
static void
event_callback(DB_ENV *dbenv, u_int32_t which, void *info)
#define	   BUFSIZE 1024
int
doloop(DB_ENV *dbenv)
int
print_stocks(DB *dbp)
