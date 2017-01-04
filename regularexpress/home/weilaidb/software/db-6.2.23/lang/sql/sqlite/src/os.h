#define _SQLITE_OS_H_
# define SET_FULLSYNC(x,y)
# define SQLITE_DEFAULT_SECTOR_SIZE 4096
# define SQLITE_TEMP_FILE_PREFIX "etilqs_"
#define NO_LOCK         0
#define SHARED_LOCK     1
#define RESERVED_LOCK   2
#define PENDING_LOCK    3
#define EXCLUSIVE_LOCK  4
# define PENDING_BYTE     (0x40000000)
# define PENDING_BYTE      sqlite3PendingByte
#define RESERVED_BYTE     (PENDING_BYTE+1)
#define SHARED_FIRST      (PENDING_BYTE+2)
#define SHARED_SIZE       510
int sqlite3OsInit(void);
int sqlite3OsClose(sqlite3_file*);
int sqlite3OsRead(sqlite3_file*, void*, int amt, i64 offset);
int sqlite3OsWrite(sqlite3_file*, const void*, int amt, i64 offset);
int sqlite3OsTruncate(sqlite3_file*, i64 size);
int sqlite3OsSync(sqlite3_file*, int);
int sqlite3OsFileSize(sqlite3_file*, i64 *pSize);
int sqlite3OsLock(sqlite3_file*, int);
int sqlite3OsUnlock(sqlite3_file*, int);
int sqlite3OsCheckReservedLock(sqlite3_file *id, int *pResOut);
int sqlite3OsFileControl(sqlite3_file*,int,void*);
void sqlite3OsFileControlHint(sqlite3_file*,int,void*);
#define SQLITE_FCNTL_DB_UNCHANGED 0xca093fa0
int sqlite3OsSectorSize(sqlite3_file *id);
int sqlite3OsDeviceCharacteristics(sqlite3_file *id);
int sqlite3OsShmMap(sqlite3_file *,int,int,int,void volatile **);
int sqlite3OsShmLock(sqlite3_file *id, int, int, int);
void sqlite3OsShmBarrier(sqlite3_file *id);
int sqlite3OsShmUnmap(sqlite3_file *id, int);
int sqlite3OsFetch(sqlite3_file *id, i64, int, void **);
int sqlite3OsUnfetch(sqlite3_file *, i64, void *);
int sqlite3OsOpen(sqlite3_vfs *, const char *, sqlite3_file*, int, int *);
int sqlite3OsDelete(sqlite3_vfs *, const char *, int);
int sqlite3OsAccess(sqlite3_vfs *, const char *, int, int *pResOut);
int sqlite3OsFullPathname(sqlite3_vfs *, const char *, int, char *);
void *sqlite3OsDlOpen(sqlite3_vfs *, const char *);
void sqlite3OsDlError(sqlite3_vfs *, int, char *);
void (*sqlite3OsDlSym(sqlite3_vfs *, void *, const char *))(void);
void sqlite3OsDlClose(sqlite3_vfs *, void *);
int sqlite3OsRandomness(sqlite3_vfs *, int, char *);
int sqlite3OsSleep(sqlite3_vfs *, int);
int sqlite3OsCurrentTimeInt64(sqlite3_vfs *, sqlite3_int64*);
int sqlite3OsOpenMalloc(sqlite3_vfs *, const char *, sqlite3_file **, int,int*);
int sqlite3OsCloseFree(sqlite3_file *);
