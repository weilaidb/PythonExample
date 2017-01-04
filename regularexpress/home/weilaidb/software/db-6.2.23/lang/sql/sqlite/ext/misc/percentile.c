SQLITE_EXTENSION_INIT1
typedef struct Percentile Percentile;
struct Percentile ;
static int isInfinity(double r)
static int sameValue(double a, double b)
static void percentStep(sqlite3_context *pCtx, int argc, sqlite3_value **argv)
static int doubleCmp(const void *pA, const void *pB)
static void percentFinal(sqlite3_context *pCtx)
__declspec(dllexport)
int sqlite3_percentile_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
