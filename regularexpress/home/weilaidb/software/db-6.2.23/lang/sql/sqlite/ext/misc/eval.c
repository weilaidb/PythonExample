SQLITE_EXTENSION_INIT1
struct EvalResult ;
static int callback(void *pCtx, int argc, char **argv, char **colnames)
static void sqlEvalFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
__declspec(dllexport)
int sqlite3_eval_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
