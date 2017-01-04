typedef struct MemJournal MemJournal;
typedef struct FilePoint FilePoint;
typedef struct FileChunk FileChunk;
#define JOURNAL_CHUNKSIZE ((int)(1024-sizeof(FileChunk*)))
struct FileChunk ;
struct FilePoint ;
struct MemJournal ;
static int memjrnlRead(
sqlite3_file *pJfd,
void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int memjrnlWrite(
sqlite3_file *pJfd,
const void *zBuf,
int iAmt,
sqlite_int64 iOfst
)
static int memjrnlTruncate(sqlite3_file *pJfd, sqlite_int64 size)
static int memjrnlClose(sqlite3_file *pJfd)
static int memjrnlSync(sqlite3_file *NotUsed, int NotUsed2)
static int memjrnlFileSize(sqlite3_file *pJfd, sqlite_int64 *pSize)
static const struct sqlite3_io_methods MemJournalMethods = ;
void sqlite3MemJournalOpen(sqlite3_file *pJfd)
int sqlite3IsMemJournal(sqlite3_file *pJfd)
int sqlite3MemJournalSize(void)
