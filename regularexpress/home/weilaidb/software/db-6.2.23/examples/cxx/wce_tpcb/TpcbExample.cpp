#define	HISTORY_LEN	    100
#define	RECLEN		    100
#define	BEGID		1000000
struct Defrec ;
struct Histrec ;
const char *progname = "wce_tpcb";
TpcbExample::TpcbExample()
:	dbenv(0), accounts(ACCOUNTS), branches(BRANCHES),
tellers(TELLERS), history(HISTORY), fast_mode(1), verbose(0),
cachesize(0)
int TpcbExample::createEnv(int flags)
void TpcbExample::closeEnv()
int
TpcbExample::populate()
int
TpcbExample::populateTable(DB *dbp,
u_int32_t start_id, u_int32_t balance,
int nrecs, const char *msg)
int
TpcbExample::populateHistory(DB *dbp, int nrecs, u_int32_t accounts,
u_int32_t branches, u_int32_t tellers)
int
TpcbExample::run(int n)
int
TpcbExample::txn(DB *adb, DB *bdb, DB *tdb, DB *hdb,
int accounts, int branches, int tellers)
u_int32_t
TpcbExample::randomInt(u_int32_t lo, u_int32_t hi)
u_int32_t
TpcbExample::randomId(FTYPE type, u_int32_t accounts,
u_int32_t branches, u_int32_t tellers)
char *
TpcbExample::getHomeDir(char *path, int max)
wchar_t *
TpcbExample::getHomeDirW(wchar_t *path, int max)
void
TpcbExample::setHomeDir(char *path)
void
TpcbExample::setHomeDirW(wchar_t *path)
