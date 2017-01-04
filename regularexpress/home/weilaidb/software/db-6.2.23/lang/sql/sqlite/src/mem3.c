#define MX_SMALL 10
#define N_HASH  61
typedef struct Mem3Block Mem3Block;
struct Mem3Block ;
static SQLITE_WSD struct Mem3Global  mem3 = ;
#define mem3 GLOBAL(struct Mem3Global, mem3)
static void memsys3UnlinkFromList(u32 i, u32 *pRoot)
static void memsys3Unlink(u32 i)
static void memsys3LinkIntoList(u32 i, u32 *pRoot)
static void memsys3Link(u32 i)
static void memsys3Enter(void)
static void memsys3Leave(void)
static void memsys3OutOfMemory(int nByte)
static void *memsys3Checkout(u32 i, u32 nBlock)
static void *memsys3FromMaster(u32 nBlock)
static void memsys3Merge(u32 *pRoot)
static void *memsys3MallocUnsafe(int nByte)
static void memsys3FreeUnsafe(void *pOld)
static int memsys3Size(void *p)
static int memsys3Roundup(int n)
static void *memsys3Malloc(int nBytes)
static void memsys3Free(void *pPrior)
static void *memsys3Realloc(void *pPrior, int nBytes)
static int memsys3Init(void *NotUsed)
static void memsys3Shutdown(void *NotUsed)
void sqlite3Memsys3Dump(const char *zFilename)
const sqlite3_mem_methods *sqlite3MemGetMemsys3(void)
