using std::cout;
using std::cerr;
typedef enum  FTYPE;
static int	  invarg(int, char *);
u_int32_t random_id(FTYPE, u_int32_t, u_int32_t, u_int32_t);
u_int32_t random_int(u_int32_t, u_int32_t);
static int	  usage(void);
int verbose;
const char *progname = "StlTpcbExample";
class Defrec;
class Histrec;
typedef dbstl::db_map<u_int32_t, Defrec > DefrecMap;
typedef dbstl::db_vector<Histrec > HistrecVector;
class StlTpcbExample : public DbEnv
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
class Defrec ;
class Histrec ;
int
main(int argc, char *argv[])
static int
invarg(int arg, char *str)
static int
usage()
StlTpcbExample::StlTpcbExample(const char *home, int cachesize, int flags)
:	DbEnv(DB_CXX_NO_EXCEPTIONS)
void
StlTpcbExample::populate(int accounts, int branches, int history, int tellers)
void
StlTpcbExample::populateTable(DefrecMap *drm, u_int32_t start_id,
u_int32_t balance, int nrecs, const char *msg)
void
StlTpcbExample::populateHistory(HistrecVector *hrm, int nrecs,
u_int32_t accounts, u_int32_t branches,
u_int32_t tellers)
u_int32_t
random_int(u_int32_t lo, u_int32_t hi)
u_int32_t
random_id(FTYPE type, u_int32_t accounts, u_int32_t branches, u_int32_t tellers)
void
StlTpcbExample::run(int n, int accounts, int branches, int tellers)
int
StlTpcbExample::txn(DefrecMap *accounts_map, DefrecMap *branches_map,
DefrecMap *tellers_map, HistrecVector *history_vector,
int accounts, int branches, int tellers)
