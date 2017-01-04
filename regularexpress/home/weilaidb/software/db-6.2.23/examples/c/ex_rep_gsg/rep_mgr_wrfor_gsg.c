#define	sleep(s)		Sleep(1000 * (s))
extern int getopt(int, char * const *, const char *);
#define	CACHESIZE   (10 * 1024 * 1024)
#define	DATABASE    "quote.db"
#define SLEEPTIME   3
const char *progname = "ex_rep_gsg_wrfor";
int create_env(const char *, DB_ENV **);
int env_init(DB_ENV *, const char *);
int doloop (DB_ENV *, int);
int print_stocks(DB *);
static void
usage()
int
main(int argc, char *argv[])
int
create_env(const char *progname, DB_ENV **dbenvp)
int
env_init(DB_ENV *dbenv, const char *home)
#define	BUFSIZE 1024
int
doloop(DB_ENV *dbenv, int is_group_creator)
int
print_stocks(DB *dbp)
