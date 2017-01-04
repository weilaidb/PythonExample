#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS2)
SQLITE_EXTENSION_INIT3
static void *fts2HashMalloc(int n)
static void fts2HashFree(void *p)
void sqlite3Fts2HashInit(fts2Hash *pNew, int keyClass, int copyKey)
void sqlite3Fts2HashClear(fts2Hash *pH)
static int strHash(const void *pKey, int nKey)
static int strCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int binHash(const void *pKey, int nKey)
static int binCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int (*hashFunction(int keyClass))(const void*,int)
static int (*compareFunction(int keyClass))(const void*,int,const void*,int)
static void insertElement(
fts2Hash *pH,
struct _fts2ht *pEntry,
fts2HashElem *pNew
)
static void rehash(fts2Hash *pH, int new_size)
static fts2HashElem *findElementGivenHash(
const fts2Hash *pH,
const void *pKey,
int nKey,
int h
)
static void removeElementGivenHash(
fts2Hash *pH,
fts2HashElem* elem,
int h
)
void *sqlite3Fts2HashFind(const fts2Hash *pH, const void *pKey, int nKey)
void *sqlite3Fts2HashInsert(
fts2Hash *pH,
const void *pKey,
int nKey,
void *data
)
