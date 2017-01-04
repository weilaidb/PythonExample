typedef struct Incrblob Incrblob;
struct Incrblob ;
static int blobSeekToRow(Incrblob *p, sqlite3_int64 iRow, char **pzErr)
int sqlite3_blob_open(
sqlite3* db,
const char *zDb,
const char *zTable,
const char *zColumn,
sqlite_int64 iRow,
int flags,
sqlite3_blob **ppBlob
)
int sqlite3_blob_close(sqlite3_blob *pBlob)
static int blobReadWrite(
sqlite3_blob *pBlob,
void *z,
int n,
int iOffset,
int (*xCall)(BtCursor*, u32, u32, void*)
)
int sqlite3_blob_read(sqlite3_blob *pBlob, void *z, int n, int iOffset)
int sqlite3_blob_write(sqlite3_blob *pBlob, const void *z, int n, int iOffset)
int sqlite3_blob_bytes(sqlite3_blob *pBlob)
int sqlite3_blob_reopen(sqlite3_blob *pBlob, sqlite3_int64 iRow)
