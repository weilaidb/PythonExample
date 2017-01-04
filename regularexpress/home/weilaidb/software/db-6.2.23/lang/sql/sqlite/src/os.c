#define _SQLITE_OS_C_ 1
#undef _SQLITE_OS_C_
#if defined(SQLITE_TEST)
int sqlite3_memdebug_vfs_oom_test = 1;
#define DO_OS_MALLOC_TEST(x)                                       \
if (sqlite3_memdebug_vfs_oom_test && (!x || !sqlite3IsMemJournal(x)))
#define DO_OS_MALLOC_TEST(x)
int sqlite3OsClose(sqlite3_file *pId)
int sqlite3OsRead(sqlite3_file *id, void *pBuf, int amt, i64 offset)
int sqlite3OsWrite(sqlite3_file *id, const void *pBuf, int amt, i64 offset)
int sqlite3OsTruncate(sqlite3_file *id, i64 size)
int sqlite3OsSync(sqlite3_file *id, int flags)
int sqlite3OsFileSize(sqlite3_file *id, i64 *pSize)
int sqlite3OsLock(sqlite3_file *id, int lockType)
int sqlite3OsUnlock(sqlite3_file *id, int lockType)
int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut)
int sqlite3OsFileControl(sqlite3_file *id, int op, void *pArg)
void sqlite3OsFileControlHint(sqlite3_file *id, int op, void *pArg)
int sqlite3OsSectorSize(sqlite3_file *id)
int sqlite3OsDeviceCharacteristics(sqlite3_file *id)
int sqlite3OsShmLock(sqlite3_file *id, int offset, int n, int flags)
void sqlite3OsShmBarrier(sqlite3_file *id)
int sqlite3OsShmUnmap(sqlite3_file *id, int deleteFlag)
int sqlite3OsShmMap(
sqlite3_file *id,
int iPage,
int pgsz,
int bExtend,
void volatile **pp
)
#if SQLITE_MAX_MMAP_SIZE>0
int sqlite3OsFetch(sqlite3_file *id, i64 iOff, int iAmt, void **pp)
int sqlite3OsUnfetch(sqlite3_file *id, i64 iOff, void *p)
int sqlite3OsFetch(sqlite3_file *id, i64 iOff, int iAmt, void **pp)
int sqlite3OsUnfetch(sqlite3_file *id, i64 iOff, void *p)
int sqlite3OsOpen(
sqlite3_vfs *pVfs,
const char *zPath,
sqlite3_file *pFile,
int flags,
int *pFlagsOut
)
int sqlite3OsDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync)
int sqlite3OsAccess(
sqlite3_vfs *pVfs,
const char *zPath,
int flags,
int *pResOut
)
int sqlite3OsFullPathname(
sqlite3_vfs *pVfs,
const char *zPath,
int nPathOut,
char *zPathOut
)
void *sqlite3OsDlOpen(sqlite3_vfs *pVfs, const char *zPath)
void sqlite3OsDlError(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
void (*sqlite3OsDlSym(sqlite3_vfs *pVfs, void *pHdle, const char *zSym))(void)
void sqlite3OsDlClose(sqlite3_vfs *pVfs, void *pHandle)
int sqlite3OsRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut)
int sqlite3OsSleep(sqlite3_vfs *pVfs, int nMicro)
int sqlite3OsCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *pTimeOut)
int sqlite3OsOpenMalloc(
sqlite3_vfs *pVfs,
const char *zFile,
sqlite3_file **ppFile,
int flags,
int *pOutFlags
)
int sqlite3OsCloseFree(sqlite3_file *pFile)
int sqlite3OsInit(void)
static sqlite3_vfs * SQLITE_WSD vfsList = 0;
#define vfsList GLOBAL(sqlite3_vfs *, vfsList)
sqlite3_vfs *sqlite3_vfs_find(const char *zVfs)
static void vfsUnlink(sqlite3_vfs *pVfs)
int sqlite3_vfs_register(sqlite3_vfs *pVfs, int makeDflt)
int sqlite3_vfs_unregister(sqlite3_vfs *pVfs)
