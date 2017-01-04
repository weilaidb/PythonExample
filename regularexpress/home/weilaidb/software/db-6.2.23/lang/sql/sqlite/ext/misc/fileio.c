SQLITE_EXTENSION_INIT1
static void readfileFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void writefileFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
__declspec(dllexport)
int sqlite3_fileio_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
