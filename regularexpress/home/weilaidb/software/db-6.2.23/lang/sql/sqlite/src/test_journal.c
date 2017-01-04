#if SQLITE_TEST
#define JT_MAX_PATHNAME 512
#define JT_VFS_NAME "jt"
typedef struct jt_file jt_file;
struct jt_file ;
static int jtClose(sqlite3_file*);
static int jtRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int jtWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64 iOfst);
static int jtTruncate(sqlite3_file*, sqlite3_int64 size);
static int jtSync(sqlite3_file*, int flags);
static int jtFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int jtLock(sqlite3_file*, int);
static int jtUnlock(sqlite3_file*, int);
static int jtCheckReservedLock(sqlite3_file*, int *);
static int jtFileControl(sqlite3_file*, int op, void *pArg);
static int jtSectorSize(sqlite3_file*);
static int jtDeviceCharacteristics(sqlite3_file*);
static int jtOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int jtDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int jtAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int jtFullPathname(sqlite3_vfs*, const char *zName, int, char *zOut);
static void *jtDlOpen(sqlite3_vfs*, const char *zFilename);
static void jtDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*jtDlSym(sqlite3_vfs*,void*, const char *zSymbol))(void);
static void jtDlClose(sqlite3_vfs*, void*);
static int jtRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int jtSleep(sqlite3_vfs*, int microseconds);
static int jtCurrentTime(sqlite3_vfs*, double*);
static int jtCurrentTimeInt64(sqlite3_vfs*, sqlite3_int64*);
static sqlite3_vfs jt_vfs = ;
static sqlite3_io_methods jt_io_methods = ;
struct JtGlobal ;
static struct JtGlobal g = ;
static void enterJtMutex(void)
static void leaveJtMutex(void)
extern int sqlite3_io_error_pending;
extern int sqlite3_io_error_hit;
static void stop_ioerr_simulation(int *piSave, int *piSave2)
static void start_ioerr_simulation(int iSave, int iSave2)
static void closeTransaction(jt_file *p)
static int jtClose(sqlite3_file *pFile)
static int jtRead(
sqlite3_file *pFile,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static jt_file *locateDatabaseHandle(const char *zJournal)
static u32 decodeUint32(const unsigned char *z)
static u32 genCksum(const unsigned char *z, int n)
static int decodeJournalHdr(
const unsigned char *zBuf,
u32 *pnRec,
u32 *pnPage,
u32 *pnSector,
u32 *pnPagesize
)
static int openTransaction(jt_file *pMain, jt_file *pJournal)
static int readJournalFile(jt_file *p, jt_file *pMain)
static int jtWrite(
sqlite3_file *pFile,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int jtTruncate(sqlite3_file *pFile, sqlite_int64 size)
static int jtSync(sqlite3_file *pFile, int flags)
static int jtFileSize(sqlite3_file *pFile, sqlite_int64 *pSize)
static int jtLock(sqlite3_file *pFile, int eLock)
static int jtUnlock(sqlite3_file *pFile, int eLock)
static int jtCheckReservedLock(sqlite3_file *pFile, int *pResOut)
static int jtFileControl(sqlite3_file *pFile, int op, void *pArg)
static int jtSectorSize(sqlite3_file *pFile)
static int jtDeviceCharacteristics(sqlite3_file *pFile)
static int jtOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pFile,
int flags,
int *pOutFlags
)
static int jtDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
static int jtAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
static int jtFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nOut,
char *zOut
)
static void *jtDlOpen(sqlite3_vfs *pVfs, const char *zPath)
static void jtDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg)
static void (*jtDlSym(sqlite3_vfs *pVfs, void *p, const char *zSym))(void)
static void jtDlClose(sqlite3_vfs *pVfs, void *pHandle)
static int jtRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
static int jtSleep(sqlite3_vfs *pVfs, int nMicro)
static int jtCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut)
static int jtCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *pTimeOut)
int jt_register(char *zWrap, int isDefault)
void jt_unregister(void)
