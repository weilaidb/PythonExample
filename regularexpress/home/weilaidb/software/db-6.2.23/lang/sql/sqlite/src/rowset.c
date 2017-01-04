#define ROWSET_ALLOCATION_SIZE 1024
#define ROWSET_ENTRY_PER_CHUNK  \
((ROWSET_ALLOCATION_SIZE-8)/sizeof(struct RowSetEntry))
struct RowSetEntry ;
struct RowSetChunk ;
struct RowSet ;
#define ROWSET_SORTED  0x01
#define ROWSET_NEXT    0x02
RowSet *sqlite3RowSetInit(sqlite3 *db, void *pSpace, unsigned int N)
void sqlite3RowSetClear(RowSet *p)
static struct RowSetEntry *rowSetEntryAlloc(RowSet *p)
void sqlite3RowSetInsert(RowSet *p, i64 rowid)
static struct RowSetEntry *rowSetEntryMerge(
struct RowSetEntry *pA,
struct RowSetEntry *pB
)
static struct RowSetEntry *rowSetEntrySort(struct RowSetEntry *pIn)
static void rowSetTreeToList(
struct RowSetEntry *pIn,
struct RowSetEntry **ppFirst,
struct RowSetEntry **ppLast
)
static struct RowSetEntry *rowSetNDeepTree(
struct RowSetEntry **ppList,
int iDepth
)
static struct RowSetEntry *rowSetListToTree(struct RowSetEntry *pList)
static void rowSetToList(RowSet *p)
int sqlite3RowSetNext(RowSet *p, i64 *pRowid)
int sqlite3RowSetTest(RowSet *pRowSet, int iBatch, sqlite3_int64 iRowid)
