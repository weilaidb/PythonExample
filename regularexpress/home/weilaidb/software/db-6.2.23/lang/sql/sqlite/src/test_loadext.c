SQLITE_EXTENSION_INIT1
static void halfFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void statusFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
__declspec(dllexport)
int testloadext_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
__declspec(dllexport)
int testbrokenext_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
