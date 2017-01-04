struct JournalFile ;
typedef struct JournalFile JournalFile;
static int createFile(JournalFile *p)
static int jrnlClose(sqlite3_file *pJfd)
static int jrnlRead(
sqlite3_file *pJfd,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int jrnlWrite(
sqlite3_file *pJfd,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int jrnlTruncate(sqlite3_file *pJfd, sqlite_int64 size)
static int jrnlSync(sqlite3_file *pJfd, int flags)
static int jrnlFileSize(sqlite3_file *pJfd, sqlite_int64 *pSize)
static struct sqlite3_io_methods JournalFileMethods = ;
int sqlite3JournalOpen(
sqlite3_vfs *pVfs,
const char *zName,
sqlite3_file *pJfd,
int flags,
int nBuf
)
int sqlite3JournalCreate(sqlite3_file *p)
int sqlite3JournalExists(sqlite3_file *p)
int sqlite3JournalSize(sqlite3_vfs *pVfs)
