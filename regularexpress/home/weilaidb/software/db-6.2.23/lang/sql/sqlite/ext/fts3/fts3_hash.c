#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
static void *fts3HashMalloc(int n)
static void fts3HashFree(void *p)
void sqlite3Fts3HashInit(Fts3Hash *pNew, char keyClass, char copyKey)
void sqlite3Fts3HashClear(Fts3Hash *pH)
static int fts3StrHash(const void *pKey, int nKey)
static int fts3StrCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int fts3BinHash(const void *pKey, int nKey)
static int fts3BinCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int (*ftsHashFunction(int keyClass))(const void*,int)
static int (*ftsCompareFunction(int keyClass))(const void*,int,const void*,int)
static void fts3HashInsertElement(
Fts3Hash *pH,
struct _fts3ht *pEntry,
Fts3HashElem *pNew
)
static int fts3Rehash(Fts3Hash *pH, int new_size)
static Fts3HashElem *fts3FindElementByHash(
const Fts3Hash *pH,
const void *pKey,
int nKey,
int h
)
static void fts3RemoveElementByHash(
Fts3Hash *pH,
Fts3HashElem* elem,
int h
)
Fts3HashElem *sqlite3Fts3HashFindElem(
const Fts3Hash *pH,
const void *pKey,
int nKey
)
void *sqlite3Fts3HashFind(const Fts3Hash *pH, const void *pKey, int nKey)
void *sqlite3Fts3HashInsert(
Fts3Hash *pH,
const void *pKey,
int nKey,
void *data
)
