#define _SQLITE3USERAUTH_H_
#undef SQLITE_USER_AUTHENTICATION
#if defined(BDBSQL_USER_AUTHENTICATION) || \
defined(BDBSQL_USER_AUTHENTICATION_KEYSTORE)
#define SQLITE_USER_AUTHENTICATION 1
#if defined(BDBSQL_USER_AUTHENTICATION_KEYSTORE) && !defined(SQLITE_HAS_CODEC)
#undef BDBSQL_USER_AUTHENTICATION_KEYSTORE
int sqlite3_user_authenticate(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW
);
int sqlite3_user_add(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin
);
int sqlite3_user_change(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin
);
int sqlite3_user_delete(
sqlite3 *db,
const char *zUsername
);
