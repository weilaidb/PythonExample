SQLITE_EXTENSION_INIT1
static void compressFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void uncompressFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
__declspec(dllexport)
int sqlite3_compress_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
