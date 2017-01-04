void sqlite3CodecGetKey(sqlite3*, int, void**, int*);
#define	pDbEnv		(pBt->dbenv)
int sqlite3_key(sqlite3 *db, const void *key, int nkey)
int sqlite3_key_v2(
sqlite3 *db, const char *zDbName, const void *key, int nkey)
int sqlite3_rekey(sqlite3 *db, const void *key, int nkey)
int sqlite3_rekey_v2(
sqlite3 *db, const char *zDbName, const void *key, int nkey)
void sqlite3_activate_see(const char *zPassPhrase)
int sqlite3CodecAttach(sqlite3 *db, int backend, const void *key, int nkey)
void sqlite3CodecGetKey(sqlite3 *db, int backend, void **keyp, int *nkeyp)
