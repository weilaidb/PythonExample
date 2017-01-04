#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS1)
static void *malloc_and_zero(int n)
void sqlite3Fts1HashInit(fts1Hash *pNew, int keyClass, int copyKey)
void sqlite3Fts1HashClear(fts1Hash *pH)
static int strHash(const void *pKey, int nKey)
static int strCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int binHash(const void *pKey, int nKey)
static int binCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int (*hashFunction(int keyClass))(const void*,int)
static int (*compareFunction(int keyClass))(const void*,int,const void*,int)
static void insertElement(
fts1Hash *pH,
struct _fts1ht *pEntry,
fts1HashElem *pNew
)
static void rehash(fts1Hash *pH, int new_size)
static fts1HashElem *findElementGivenHash(
const fts1Hash *pH,
const void *pKey,
int nKey,
int h
)
static void removeElementGivenHash(
fts1Hash *pH,
fts1HashElem* elem,
int h
)
void *sqlite3Fts1HashFind(const fts1Hash *pH, const void *pKey, int nKey)
void *sqlite3Fts1HashInsert(
fts1Hash *pH,
const void *pKey,
int nKey,
void *data
)
