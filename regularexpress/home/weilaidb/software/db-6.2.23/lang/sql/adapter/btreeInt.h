extern int __db_check_chksum(ENV *, void *, DB_CIPHER *, u_int8_t *, void *,
size_t, int);
extern void __db_chksum(void *, u_int8_t *, size_t, u_int8_t *, u_int8_t *);
extern int __env_encrypt(DB_ENV *, u_int8_t *, u_int8_t *, size_t);
extern int __env_encrypt_adj_size(DB_ENV *, size_t, size_t *);
extern int __env_decrypt(DB_ENV *, u_int8_t *, u_int8_t *, size_t);
extern int __env_ref_get(DB_ENV *, u_int32_t *);
extern int __os_closehandle(ENV *, DB_FH *);
extern int __os_dirlist(ENV *, const char *, int, char ***, int *);
extern void __os_dirfree(ENV *, char **, int);
extern int __os_exists(ENV *, const char *, int *);
extern int __os_fileid(ENV *, const char *, int, u_int8_t *);
extern int __os_io(ENV *, int, DB_FH *, db_pgno_t, u_int32_t, u_int32_t,
u_int32_t, u_int8_t *, size_t *);
extern int __os_ioinfo(ENV *, const char *, DB_FH *, u_int32_t *, u_int32_t *,
u_int32_t *);
extern int __os_mkdir(ENV *, const char *, int);
extern int __os_open(ENV *, const char *, u_int32_t, u_int32_t, int, DB_FH **);
extern int __os_read(ENV *, DB_FH *, void *, size_t, size_t *);
extern int __os_rename(ENV *, const char *, const char *, u_int32_t);
extern int __os_seek(ENV *, DB_FH *, db_pgno_t, u_int32_t, off_t);
extern int __os_unlink(ENV *, const char *, int);
extern int __os_write(ENV *, DB_FH *, void *, size_t, size_t *);
extern void __os_yield(ENV *, u_long, u_long);
#define	BDBSQL_SINGLE_PROCESS
#define	INTKEY_BUFSIZE	(sizeof(i64) + 2)
#define	MULTI_BUFSIZE	SQLITE_MAX_PAGE_SIZE
#define	DBNAME_SIZE	20
#define	NUMMETA		16
#define	NUM_DB_PRAGMA	30
#define	CURSOR_BUFSIZE	32
#define	BT_MAX_PATH 512
#define BT_MAX_SEQ_NAME 128
# define BDBSQL_LARGE_RECORD_OPTIMIZATION 0
# define BDBSQL_LOG_REGIONMAX (300 * 1024)
# define BDBSQL_TXN_BULK_DEFAULT 0
# define BDBSQL_INCR_VACUUM_PAGES 128
# define BDBSQL_VACUUM_FILLPERCENT 85
#define	UINT32_MAX      4294967295U
#define	INT64_MAX ((((i64)0x7fffffff) << 32) | 0xffffffff)
#define	GIGABYTE 1073741824
#define	MAP_ERR(rc, ret, p)					\
((rc != SQLITE_OK) ? rc : (ret == 0) ? SQLITE_OK :	\
dberr2sqlite(ret, p))
#define	MAP_ERR_LOCKED(rc, ret, p)					\
((rc != SQLITE_OK) ? rc : (ret == 0) ? SQLITE_OK :	\
dberr2sqlitelocked(ret, p))
int add_sequence_functions(sqlite3 *db);
typedef int (*compareFunc)(void*,int,const void*,int,const void*);
typedef struct  CACHED_DB;
typedef struct  SEQ_COOKIE;
typedef struct  CACHED_META;
typedef struct  CACHED_PRAGMA;
typedef struct DELETED_TABLE DELETED_TABLE;
struct DELETED_TABLE ;
typedef struct  TableInfo;
typedef struct  LockFileInfo;
typedef enum  cleanup_mode_t;
typedef enum  storage_mode_t;
typedef enum  txn_mode_t;
typedef enum  lock_mode_t;
typedef enum  lsn_reset_t;
typedef enum  rep_site_type_t;
int btreeBeginTransInternal(Btree *p, int wrflag);
void *btreeCreateIndexKey(BtCursor *pCur);
void btreeGetErrorFile(const BtShared *pBt, char *fname);
Index *btreeGetIndex(Btree *p, int iTable);
int btreeGetPageCount(Btree *p, int **tables, u32 *pageCount, DB_TXN *txn);
int btreeGetUserTable(Btree *p, DB_TXN *pTxn, DB **pDb, int iTable);
int btreeGetTables(Btree *, int **, DB_TXN *);
int btreeLockSchema(Btree *p, lock_mode_t lockMode);
int btreeOpenEnvironment(Btree *p, int needLock);
int btreeOpenMetaTables(Btree *p, int *pCreating);
int btreeReopenEnvironment(Btree *p, int removingRep);
int btreeUpdateBtShared(Btree *p, int needLock);
int btreeIncrVacuum(Btree *p, u_int32_t *truncatedPages);
int btreeVacuum(Btree *p, char **pzErrMsg);
void btreeFreeVacuumInfo(Btree *p);
int dberr2sqlite(int, Btree *p);
int closeDB(Btree *p, DB *dbp, u_int32_t flags);
void *allocateCursorIndex(BtCursor *pCur, u_int32_t amount);
int splitIndexKey(BtCursor *pCur);
int isDupIndex(int flags, int storage, KeyInfo *keyInfo, DB *db);
int btreeScopedFileLock(Btree *p, int iswrite, int dontreopen);
int btreeScopedFileUnlock(Btree *p, int iswrite);
int btreeHasFileLock(Btree *p, int iswrite);
int sqlite3CodecAttach(sqlite3*, int, const void*, int);
int getPersistentPragma(Btree *p, const char *pragma_name, char **value,
Parse *pParse);
int setPersistentPragma(Btree *p, const char *pragma_name, const char *value,
Parse *pParse);
int encodeI64(u_int8_t *buf, i64 num);
int cleanPragmaCache(Btree *p);
int getHostPort(const char *hpstr, char **host, u_int *port);
int setRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, const char *fname,
char *msg);
int unsetRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, char **msg);
void *getThreadID(sqlite3 *db);
int isCurrentThread(void *tid);
#define	CLEAR_PWD(pBt)	do  while (0)
#define	OPEN_MUTEX(store)	((store == DB_STORE_NAMED) ?	\
SQLITE_MUTEX_STATIC_OPEN : SQLITE_MUTEX_STATIC_LRU)
#define	BDBSQL_META_DATA_TABLE "metadata"
int getMetaDataFileName(const char *full_name, char **filename);
struct BtShared ;
struct BtCursor ;
struct Btree ;
typedef enum  loglevel_t;
#define	CURRENT_LOG_LEVEL	LOG_RELEASE
#define	log_msg(...)
void log_msg(loglevel_t level, const char *fmt, ...);
int btreeFindOrCreateDataTable(Btree *, int *, CACHED_DB **, int);
int btreeGetKeyInfo(Btree *p, int iTable, KeyInfo **pKeyInfo);
int btreeTableNameToId(const char *subdb, int len, int *pid);
#define	pDbEnv		(pBt->dbenv)
#define	pMetaDb		(pBt->metadb)
#define	pTablesDb	(pBt->tablesdb)
#define	pFamilyTxn	(p->family_txn)
#define	pReadTxn	(p->read_txn)
#define	pMainTxn	(p->main_txn)
#define	pSavepointTxn	(p->savepoint_txn)
#define	FIX_TABLENAME(pBt, fileName, tableName) do  while (0)
#define	FIX_TABLENAME(pBt, fileName, tableName) do  while (0)
#define	GET_AUTO_COMMIT(pBt, txn) (((pBt)->transactional &&	\
(!(txn) || (txn) == pFamilyTxn)) ? DB_AUTO_COMMIT : 0)
#define	UPDATE_DURING_BACKUP(p)  \
if (p->nBackup > 0)     \
p->updateDuringBackup++;
