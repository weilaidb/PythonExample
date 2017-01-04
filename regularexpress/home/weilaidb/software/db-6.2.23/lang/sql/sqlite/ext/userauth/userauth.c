# include "sqliteInt.h"
static sqlite3_stmt *sqlite3UserAuthPrepare(
sqlite3 *db,
const char *zFormat,
...
)
static int userTableExists(sqlite3 *db, const char *zDb)
static int userAuthCheckLogin(
sqlite3 *db,
const char *zDb,
u8 *peAuth
)
int sqlite3UserAuthCheckLogin(
sqlite3 *db,
const char *zDb,
u8 *peAuth
)
void sqlite3UserAuthInit(sqlite3 *db)
void sqlite3CryptFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv
)
int sqlite3_user_authenticate(
sqlite3 *db,
const char *zUsername,
const char *zPW,
int nPW
)
int sqlite3_user_add(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin
)
int sqlite3_user_change(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin
)
int sqlite3_user_delete(
sqlite3 *db,
const char *zUsername
)
