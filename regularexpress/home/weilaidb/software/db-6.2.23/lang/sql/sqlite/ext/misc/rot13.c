SQLITE_EXTENSION_INIT1
static unsigned char rot13(unsigned char c)
static void rot13func(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static int rot13CollFunc(
void *notUsed,
int nKey1, const void *pKey1,
int nKey2, const void *pKey2
)
__declspec(dllexport)
int sqlite3_rot_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
