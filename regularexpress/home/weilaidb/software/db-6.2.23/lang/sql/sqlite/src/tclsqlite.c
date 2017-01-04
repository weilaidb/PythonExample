#if defined(INCLUDE_MSVC_H)
# include "sqlite3.h"
# include <stdlib.h>
# include <string.h>
# include <assert.h>
typedef unsigned char u8;
#if !defined(_WIN32)
# include <unistd.h>
# define GETPID getpid
#elif !defined(_WIN32_WCE)
# ifndef SQLITE_AMALGAMATION
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
# endif
# define GETPID (int)GetCurrentProcessId
#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT
#define NUM_PREPARED_STMTS 10
#define MAX_PREPARED_STMTS 100
typedef struct SqliteDb SqliteDb;
typedef struct SqlFunc SqlFunc;
struct SqlFunc ;
typedef struct SqlCollate SqlCollate;
struct SqlCollate ;
typedef struct SqlPreparedStmt SqlPreparedStmt;
struct SqlPreparedStmt ;
typedef struct IncrblobChannel IncrblobChannel;
struct SqliteDb ;
struct IncrblobChannel ;
static int strlen30(const char *z)
static void closeIncrblobChannels(SqliteDb *pDb)
static int incrblobClose(ClientData instanceData, Tcl_Interp *interp)
static int incrblobInput(
ClientData instanceData,
char *buf,
int bufSize,
int *errorCodePtr
)
static int incrblobOutput(
ClientData instanceData,
CONST char *buf,
int toWrite,
int *errorCodePtr
)
static int incrblobSeek(
ClientData instanceData,
long offset,
int seekMode,
int *errorCodePtr
)
static void incrblobWatch(ClientData instanceData, int mode)
static int incrblobHandle(ClientData instanceData, int dir, ClientData *hPtr)
static Tcl_ChannelType IncrblobChannelType = ;
static int createIncrblobChannel(
Tcl_Interp *interp,
SqliteDb *pDb,
const char *zDb,
const char *zTable,
const char *zColumn,
sqlite_int64 iRow,
int isReadonly
)
#define closeIncrblobChannels(pDb)
static int safeToUseEvalObjv(Tcl_Interp *interp, Tcl_Obj *pCmd)
static SqlFunc *findSqlFunc(SqliteDb *pDb, const char *zName)
static void dbFreeStmt(SqlPreparedStmt *pStmt)
static void flushStmtCache(SqliteDb *pDb)
static void DbDeleteCmd(void *db)
static int DbBusyHandler(void *cd, int nTries)
static int DbProgressHandler(void *cd)
static void DbTraceHandler(void *cd, const char *zSql)
static void DbProfileHandler(void *cd, const char *zSql, sqlite_uint64 tm)
static int DbCommitHandler(void *cd)
static void DbRollbackHandler(void *clientData)
static int DbWalHandler(
void *clientData,
sqlite3 *db,
const char *zDb,
int nEntry
)
#if defined(SQLITE_TEST) && defined(SQLITE_ENABLE_UNLOCK_NOTIFY)
static void setTestUnlockNotifyVars(Tcl_Interp *interp, int iArg, int nArg)
# define setTestUnlockNotifyVars(x,y,z)
static void DbUnlockNotify(void **apArg, int nArg)
static void DbUpdateHandler(
void *p,
int op,
const char *zDb,
const char *zTbl,
sqlite_int64 rowid
)
static void tclCollateNeeded(
void *pCtx,
sqlite3 *db,
int enc,
const char *zName
)
static int tclSqlCollate(
void *pCtx,
int nA,
const void *zA,
int nB,
const void *zB
)
static void tclSqlFunc(sqlite3_context *context, int argc, sqlite3_value**argv)
static int auth_callback(
void *pArg,
int code,
const char *zArg1,
const char *zArg2,
const char *zArg3,
const char *zArg4
,const char *zArg5
)
static char *local_getline(char *zPrompt, FILE *in)
static int DbTransPostCmd(
ClientData data[],
Tcl_Interp *interp,
int result
)
static int dbPrepare(
SqliteDb *pDb,
const char *zSql,
sqlite3_stmt **ppStmt,
const char **pzOut
)
static int dbPrepareAndBind(
SqliteDb *pDb,
char const *zIn,
char const **pzOut,
SqlPreparedStmt **ppPreStmt
)
static void dbReleaseStmt(
SqliteDb *pDb,
SqlPreparedStmt *pPreStmt,
int discard
)
typedef struct DbEvalContext DbEvalContext;
struct DbEvalContext ;
static void dbReleaseColumnNames(DbEvalContext *p)
static void dbEvalInit(
DbEvalContext *p,
SqliteDb *pDb,
Tcl_Obj *pSql,
Tcl_Obj *pArray
)
static void dbEvalRowInfo(
DbEvalContext *p,
int *pnCol,
Tcl_Obj ***papColName
)
static int dbEvalStep(DbEvalContext *p)
static void dbEvalFinalize(DbEvalContext *p)
static Tcl_Obj *dbEvalColumnValue(DbEvalContext *p, int iCol)
#if TCL_MAJOR_VERSION>8 || (TCL_MAJOR_VERSION==8 && TCL_MINOR_VERSION>=6)
# define SQLITE_TCL_NRE 1
static int DbUseNre(void)
# define SQLITE_TCL_NRE 0
# define DbUseNre() 0
# define Tcl_NRAddCallback(a,b,c,d,e,f) (void)0
# define Tcl_NREvalObj(a,b,c) 0
# define Tcl_NRCreateCommand(a,b,c,d,e,f) (void)0
static int DbEvalNextCmd(
ClientData data[],
Tcl_Interp *interp,
int result
)
static int DbObjCmd(void *cd, Tcl_Interp *interp, int objc,Tcl_Obj *const*objv)
#if SQLITE_TCL_NRE
static int DbObjCmdAdaptor(
void *cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *const*objv
)
static int DbMain(void *cd, Tcl_Interp *interp, int objc,Tcl_Obj *const*objv)
# undef  Tcl_InitStubs
# define Tcl_InitStubs(a,b,c) TCL_VERSION
# define PACKAGE_VERSION SQLITE_VERSION
EXTERN int Sqlite3_Init(Tcl_Interp *interp)
EXTERN int Tclsqlite3_Init(Tcl_Interp *interp)
EXTERN int Sqlite3_Unload(Tcl_Interp *interp, int flags)
EXTERN int Tclsqlite3_Unload(Tcl_Interp *interp, int flags)
int Sqlite_Init(Tcl_Interp *interp)
int Tclsqlite_Init(Tcl_Interp *interp)
int Sqlite_Unload(Tcl_Interp *interp, int flags)
int Tclsqlite_Unload(Tcl_Interp *interp, int flags)
#if defined(SQLITE_TEST) || defined(SQLITE_TCLMD5)
#  define uint32 unsigned int
struct MD5Context ;
typedef struct MD5Context MD5Context;
static void byteReverse (unsigned char *buf, unsigned longs)
#define F1(x, y, z) (z ^ (x & (y ^ z)))
#define F2(x, y, z) F1(z, x, y)
#define F3(x, y, z) (x ^ y ^ z)
#define F4(x, y, z) (y ^ (x | ~z))
#define MD5STEP(f, w, x, y, z, data, s) \
( w += f(x, y, z) + data,  w = w<<s | w>>(32-s),  w += x )
static void MD5Transform(uint32 buf[4], const uint32 in[16])
static void MD5Init(MD5Context *ctx)
static
void MD5Update(MD5Context *ctx, const unsigned char *buf, unsigned int len)
static void MD5Final(unsigned char digest[16], MD5Context *ctx)
static void MD5DigestToBase16(unsigned char *digest, char *zBuf)
static void MD5DigestToBase10x8(unsigned char digest[16], char zDigest[50])
static int md5_cmd(void*cd, Tcl_Interp *interp, int argc, const char **argv)
static int md5file_cmd(void*cd, Tcl_Interp*interp, int argc, const char **argv)
int Md5_Init(Tcl_Interp *interp)
#if defined(SQLITE_TEST)
static void md5step(sqlite3_context *context, int argc, sqlite3_value **argv)
static void md5finalize(sqlite3_context *context)
int Md5_Register(sqlite3 *db)
#if TCLSH==1
static const char *tclsh_main_loop(void)
#if TCLSH==2
static const char *tclsh_main_loop(void);
static void init_all(Tcl_Interp *);
static int init_all_cmd(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int db_use_legacy_prepare_cmd(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int db_last_stmt_ptr(
ClientData cd,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
#if defined(SQLITE_TEST) || defined(SQLITE_ENABLE_DBSTAT_VTAB)
static int sqlite3RegisterDbstatCmd(
void *clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static void init_all(Tcl_Interp *interp)
#if defined(unix)
#define TCLSH_MAIN main
int TCLSH_MAIN(int argc, char **argv)
