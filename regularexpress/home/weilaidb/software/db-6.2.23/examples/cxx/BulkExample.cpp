#define	DATABASE	"excxx_bulk.db"
#define	DATALEN		20
#define	NS_PER_MS	1000000
#define	NS_PER_US	1000
#define	STRLEN		DATALEN - sizeof(int)
#define	UPDATES_PER_BULK_PUT	100
extern "C"
int gettimeofday(struct timeval *tv, struct timezone *tz)
#define CLEANUP_CMD "rmdir EXCXX_BULK /q/s"
#define CLEANUP_CMD "rm -rf EXCXX_BULK"
int	compare_int(Db *, const Dbt *, const Dbt *, size_t *);
int	get_first_str(Db *, const Dbt *, const Dbt *, Dbt *);
int	get_string(const char *, char *, int);
static void	usage();
const char	*progname = "BulkExample";
const char	tstring[STRLEN] = "0123456789abcde";
struct data ;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
class BulkExample
;
void BulkExample::throwException(
DbEnv *dbenvp, DbTxn *txn, int ret, const char *msg)
void BulkExample::run(int argc, char *argv[])
void BulkExample::bulkDelete(
int num, int dups, int *countp, int *iterp, int verbose)
void BulkExample::bulkSecondaryDelete(
int num, int pair, int *countp, int *iterp, int verbose)
void BulkExample::bulkUpdate(
int num, int dups, int *countp, int *iterp, int verbose)
void BulkExample::bulkRead(
int num, int dups, int iter, int *countp, int verbose)
void BulkExample::initDb(int dups, int sflag, int pagesize)
void BulkExample::initDbenv(const char *home, u_int32_t cachesize)
BulkExample::BulkExample() : dbenv(NULL), dbp(NULL), sdbp(NULL),
data_val(NULL), dbuf(NULL), kbuf(NULL), dlen(0), klen(0)
BulkExample::~BulkExample()
int
compare_int(Db *dbp, const Dbt *a, const Dbt *b, size_t *locp)
int
get_first_str(Db *sdbp, const Dbt *key, const Dbt *data, Dbt *skey)
int
get_string(const char *src, char *des, int off)
static void
usage()
int
main(int argc, char *argv[])
