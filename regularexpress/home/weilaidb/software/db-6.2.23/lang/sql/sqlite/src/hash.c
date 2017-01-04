void sqlite3HashInit(Hash *pNew)
void sqlite3HashClear(Hash *pH)
static unsigned int strHash(const char *z)
static void insertElement(
Hash *pH,
struct _ht *pEntry,
HashElem *pNew
)
static int rehash(Hash *pH, unsigned int new_size)
static HashElem *findElementWithHash(
const Hash *pH,
const char *pKey,
unsigned int *pHash
)
static void removeElementGivenHash(
Hash *pH,
HashElem* elem,
unsigned int h
)
void *sqlite3HashFind(const Hash *pH, const char *pKey)
void *sqlite3HashInsert(Hash *pH, const char *pKey, void *data)
