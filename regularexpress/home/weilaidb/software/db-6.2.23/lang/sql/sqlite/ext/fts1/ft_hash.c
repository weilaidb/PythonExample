void *malloc_and_zero(int n)
void HashInit(Hash *pNew, int keyClass, int copyKey)
void HashClear(Hash *pH)
static int strHash(const void *pKey, int nKey)
static int strCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int binHash(const void *pKey, int nKey)
static int binCompare(const void *pKey1, int n1, const void *pKey2, int n2)
static int (*hashFunction(int keyClass))(const void*,int)
static int (*compareFunction(int keyClass))(const void*,int,const void*,int)
static void insertElement(
Hash *pH,
struct _ht *pEntry,
HashElem *pNew
)
static void rehash(Hash *pH, int new_size)
static HashElem *findElementGivenHash(
const Hash *pH,
const void *pKey,
int nKey,
int h
)
static void removeElementGivenHash(
Hash *pH,
HashElem* elem,
int h
)
void *HashFind(const Hash *pH, const void *pKey, int nKey)
void *HashInsert(Hash *pH, const void *pKey, int nKey, void *data)
