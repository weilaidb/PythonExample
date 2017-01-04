using std::cout;
using std::cerr;
typedef enum  FTYPE;
static int	  invarg(int, char *);
u_int32_t random_id(FTYPE, u_int32_t, u_int32_t, u_int32_t);
u_int32_t random_int(u_int32_t, u_int32_t);
static int	  usage(void);
int verbose;
const char *progname = "TpcbExample";
class TpcbExample : public DbEnv
;
#define	TELLERS_PER_BRANCH      100
#define	ACCOUNTS_PER_TELLER     1000
#define	HISTORY_PER_BRANCH	2592000
#define	ACCOUNTS	 1000000
#define	BRANCHES	      10
#define	TELLERS		     100
#define	HISTORY		25920000
#define	ACCOUNTS	    1000
#define	BRANCHES	      10
#define	TELLERS		     100
#define	HISTORY		   10000
#if !defined(VALID_SCALING) && !defined(TINY)
#define	ACCOUNTS	  100000
#define	BRANCHES	      10
#define	TELLERS		     100
#define	HISTORY		  259200
#define	HISTORY_LEN	    100
#define	RECLEN		    100
#define	BEGID		1000000
struct Defrec ;
struct Histrec ;
int
main(int argc, char *argv[])
static int
invarg(int arg, char *str)
static int
usage()
TpcbExample::TpcbExample(const char *home, int cachesize, int flags)
:	DbEnv((u_int32_t)0)
void
TpcbExample::populate(int accounts, int branches, int history, int tellers)
void
TpcbExample::populateTable(Db *dbp,
u_int32_t start_id, u_int32_t balance,
int nrecs, const char *msg)
void
TpcbExample::populateHistory(Db *dbp, int nrecs, u_int32_t accounts,
u_int32_t branches, u_int32_t tellers)
u_int32_t
random_int(u_int32_t lo, u_int32_t hi)
u_int32_t
random_id(FTYPE type, u_int32_t accounts, u_int32_t branches, u_int32_t tellers)
void
TpcbExample::run(int n, int accounts, int branches, int tellers)
int
TpcbExample::txn(Db *adb, Db *bdb, Db *tdb, Db *hdb,
int accounts, int branches, int tellers)
