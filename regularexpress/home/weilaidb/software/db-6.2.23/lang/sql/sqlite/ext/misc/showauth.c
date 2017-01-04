SQLITE_EXTENSION_INIT1
static int authCallback(
void *pClientData,
int op,
const char *z1,
const char *z2,
const char *z3,
const char *z4
)
__declspec(dllexport)
int sqlite3_showauth_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
