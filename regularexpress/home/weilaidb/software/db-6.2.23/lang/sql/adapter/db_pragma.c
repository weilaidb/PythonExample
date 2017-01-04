extern void returnSingleInt(Parse *, const char *, i64);
static const char *PRAGMA_FILE = "pragma";
static const char *PRAGMA_VERSION = "1.0";
static const char *ACK_POLICY_ALL = "all_sites";
static const char *ACK_POLICY_ALL_AVAILABLE = "all_available";
static const char *ACK_POLICY_NONE = "none";
static const char *ACK_POLICY_ONE = "one";
static const char *ACK_POLICY_QUORUM = "quorum";
static const char *REP_SITE_MASTER = "MASTER";
static const char *REP_SITE_CLIENT = "CLIENT";
static const char *REP_SITE_UNKNOWN = "UNKNOWN";
static const u32 HDR_SIZE = 256;
static const u32 RECORD_HDR_SIZE = 8;
static const u32 VERSION_RECORD_SIZE = 12;
static const char *pragma_names[] = ;
static const u32 DEFINED_PRAGMAS = 8;
#define	PRAGMA_LOADED(index)	(p->pBt->pragma[index].offset)
#define	CACHE_LOADED	(p->pBt->cache_loaded)
#define	RECORD_OFFSET(pragma_index) ((pragma_index * 8) + 12)
#define	RECORD_SIZE(pragma_index) ((pragma_index * 8) + 8)
#define	pBtPragma (p->pBt->pragma)
#define	dbExists (pDb->pBt->pBt->full_name != NULL && \
!__os_exists(NULL, pDb->pBt->pBt->full_name, NULL))
static int textToAckPolicy(const char *policy)
static const char *ackPolicyToText(int policy)
static const char *repSiteTypeToText(rep_site_type_t type)
static u8 envIsClosed(Parse *pParse, Btree *p, const char *pragmaName)
static const int MVCC_MULTIPIER = 2;
int bdbsqlPragmaMultiversion(Parse *pParse, Btree *p, u8 on)
static int supportsReplication(Btree *p)
static int hasDatabaseConnections(Btree *p)
int setRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, const char *fname,
char *msg)
int unsetRepVerboseFile(BtShared *pBt, DB_ENV *dbenv, char **msg)
int getHostPort(const char *hpstr, char **host, u_int *port)
static int getUserPwdIsadmin(const char* upiStr, char** user, char** pwd,
int* isAdmin)
static int getUserPwd(const char* upStr, char** user, char** pwd)
static int bdbsqlPragmaStartReplication(Parse *pParse, Db *pDb)
static int bdbsqlPragmaStopReplication(Parse *pParse, Db *pDb)
int bdbsqlPragma(Parse *pParse, char *zLeft, char *zRight, int iDb)
static int getPragmaIndex(const char *pragma_name)
static const char *getPragmaName(u32 pragma_index)
static int openPragmaFile(Btree *p, sqlite3_file **file, int flags,
int lock_type)
static void removeCorruptedRecords(Btree *p, int *corrupted, int num_corrupted,
sqlite3_file *pragma_file, Parse *pParse)
static int insertPragmaIntoFile(Btree *p, u32 pragma_index,
sqlite3_file *pragma_file, int exists, Parse *pParse)
static int readPragmaFromFile(Btree *p, sqlite3_file *pragma_file,
int pragma_index, Parse *pParse)
int getPersistentPragma(Btree *p, const char *pragma_name, char **value,
Parse *pParse)
int setPersistentPragma(Btree *p, const char *pragma_name, const char *value,
Parse *pParse)
int cleanPragmaCache(Btree *p)
