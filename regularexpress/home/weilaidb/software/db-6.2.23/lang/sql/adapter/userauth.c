#define AUTH_CLOSE(fhp)							\
__os_closehandle(NULL, fhp)
#define AUTH_EXISTS(filepath)						\
!__os_exists(NULL, filepath, NULL)
#define AUTH_FILESIZE(fhp, mbytes, bytes)				\
__os_ioinfo(NULL, NULL, fhp, mbytes, bytes, NULL)
#define AUTH_IO(fhp, op, offset, addr, len, niop)			\
__os_io(NULL, op, fhp, 0, 0, offset, len,			\
(u_int8_t*)(addr), niop)
#define AUTH_OPEN(filepath, fhpp, mode, perm)				\
__os_open(NULL, filepath, 0, mode, perm, fhpp)
#define AUTH_READ(fhp, addr, len, nrp)					\
__os_read(NULL, fhp, addr, len, nrp)
#define AUTH_REMOVE(filepath)						\
__os_unlink(NULL, filepath, 0)
#define AUTH_RENAME(src, des)						\
__os_rename(NULL, src, des, 0)
#define AUTH_SEEK(fhp, offset) 						\
__os_seek(NULL, fhp, 0, 0, offset)
#define AUTH_WRITE(fhp, addr, len, nwp)					\
__os_write(NULL, fhp, addr, len, nwp)
static int authComputeKsChksum(DB_FH *, u_int8_t *);
static int authCopyFile(const char *, const char *);
static int authCreateKseData(sqlite3 *, const char *, int, u_int8_t *,
KS_ENTRY_DATA **);
static int authCreateKseHeader(sqlite3 *, const char *, KS_ENTRY_DATA *,
KS_ENTRY_HDR **);
static int authCreateOneKsFile(char *, DB_FH **);
static int authDecryptKseData(const char *, int, KS_ENTRY_DATA *);
static void authGetFilePath(sqlite3 *, const char *, char *);
static void authGetKsBakFile(sqlite3 *, char *);
static void authGetKsDelTmpFile(sqlite3 *, char *);
static void authGetKsFile(sqlite3 *, char *);
static void authGetKsLckFile(sqlite3 *, char *);
static void authGetKsTmpFile(sqlite3 *, char *);
static int authGetKsVersion(const char *, u_int32_t *);
static void authGetPwdHash(const char *, int, u_int8_t *, u_int8_t *);
static int authGetSaltFromUserTable(sqlite3 *, const char *, u_int8_t *);
static int authIncreaseKsVersion(const char *);
static int authInitEncryptedTmpEnv(const char *, int, DB_ENV **);
static int authProcessKsFile(sqlite3 *, const char *, const char *, int,
int (*)(KS_CB_ARG *), u_int32_t);
static int authUpdateKsChksum(const char *);
static int authVerifyKsChksum(sqlite3 *);
static int authZeroKsVersion(const char *);
static void auth_keystore_backup(sqlite3 *);
static int auth_keystore_create(sqlite3 *);
static int auth_keystore_lock(sqlite3 *);
static int auth_keystore_remove(sqlite3 *);
static int auth_keystore_unlock(sqlite3 *);
static int auth_useradd_key(sqlite3 *, int);
static int auth_useradd_keystore(sqlite3 *, const char *, const char *, int);
static int auth_useradd_keystore_cb(KS_CB_ARG *);
static int auth_useredit_keystore(sqlite3 *, const char *, const char *, int);
static int auth_useredit_keystore_cb(KS_CB_ARG *);
static int auth_userdelete_keystore(sqlite3 *, const char *);
static int auth_userdelete_keystore_cb(KS_CB_ARG *);
static int auth_userlogin_keystore(sqlite3 *, const char *, const char *, int);
static int auth_userlogin_keystore_cb(KS_CB_ARG *);
static void authGetFilePath(sqlite3 *db, const char *fname, char *filepath)
static void authGetKsFile(sqlite3 *db, char *filepath)
static void authGetKsBakFile(sqlite3 *db, char *filepath)
static void authGetKsLckFile(sqlite3 *db, char *filepath)
static void authGetKsTmpFile(sqlite3 *db, char *filepath)
static void authGetKsDelTmpFile(sqlite3 *db, char *filepath)
static int authCreateOneKsFile(char *filepath, DB_FH **fhpp)
static int authCopyFile(const char *from, const char *to)
static int authZeroKsVersion(const char *filepath)
static int authGetKsVersion(const char *filepath, u_int32_t *version)
static int authIncreaseKsVersion(const char *filepath)
static int authComputeKsChksum(DB_FH *fhp, u_int8_t *chksum)
static int authUpdateKsChksum(const char *ksPath)
static int authVerifyKsChksum(sqlite3 *db)
static int authInitEncryptedTmpEnv(const char *aPW, int nPW, DB_ENV **tEnv)
static int authCreateKseHdr(sqlite3 *db, const char *zUsername,
KS_ENTRY_DATA *data, KS_ENTRY_HDR **hdr)
static void authGetPwdHash(const char *aPW, int nPW, u_int8_t *salt,
u_int8_t *hash)
static int authGetSaltFromUserTable(sqlite3 *db, const char *zUsername,
u_int8_t *salt)
static int authCreateKseData(sqlite3 *db, const char *aPW, int nPW,
u_int8_t *salt, KS_ENTRY_DATA **data)
static int authDecryptKseData(const char *aPW, int nPW, KS_ENTRY_DATA *data)
static int authProcessKsFile(sqlite3 *db, const char *zUsername,
const char *aPW, int nPW, int (*cb)(KS_CB_ARG*), u_int32_t flags)
static int auth_useradd_key(sqlite3 *db, int isAdmin)
static int auth_keystore_create(sqlite3 *db)
static int auth_keystore_remove(sqlite3 *db)
static int auth_keystore_lock(sqlite3 *db)
static int auth_keystore_unlock(sqlite3 *db)
static void auth_keystore_backup(sqlite3 *db)
static int auth_useradd_keystore_cb(KS_CB_ARG *args)
static int auth_useradd_keystore(sqlite3 *db, const char *zUsername,
const char *aPW, int nPW)
static int auth_userlogin_keystore_cb(KS_CB_ARG *arg)
static int auth_userlogin_keystore(sqlite3 *db, const char *zUsername,
const char *aPW, int nPW)
static int auth_useredit_keystore_cb(KS_CB_ARG *arg)
static int auth_useredit_keystore(sqlite3 *db, const char *zUsername,
const char *zPW, int nPW)
static int auth_userdelete_keystore_cb(KS_CB_ARG *arg)
static int auth_userdelete_keystore(sqlite3 *db, const char *zUsername)
# include "sqliteInt.h"
static sqlite3_stmt* sqlite3UserAuthPrepare(sqlite3 *db,
const char *zFormat, ...)
static int userTableExists(sqlite3 *db, const char *zDb, int *res)
static int userAuthCheckLogin(
sqlite3 *db,
const char *zDb,
u8 *peAuth)
int sqlite3UserAuthCheckLogin(
sqlite3 *db,
const char *zDb,
u8 *peAuth)
void sqlite3UserAuthInit(sqlite3 *db)
void sqlite3CryptFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **argv)
static void resetDbAuth(sqlite3 *db)
static int setDbAuth(sqlite3 *db, const char *zUsername, const char *zPW,
int nPW, u8 authLevel)
int sqlite3_user_authenticate(
sqlite3 *db,
const char *zUsername,
const char *zPW,
int nPW)
#define AUTH_DB_EXEC(db, sql)						\
sqlite3_exec(db, sql, 0, 0, 0)
int sqlite3_user_add(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin)
int sqlite3_user_change(
sqlite3 *db,
const char *zUsername,
const char *aPW,
int nPW,
int isAdmin)
int sqlite3_user_delete(
sqlite3 *db,
const char *zUsername)
