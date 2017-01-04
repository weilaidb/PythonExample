typedef struct Mem5Link Mem5Link;
struct Mem5Link ;
#define LOGMAX 30
#define CTRL_LOGSIZE  0x1f
#define CTRL_FREE     0x20
static SQLITE_WSD struct Mem5Global  mem5;
#define mem5 GLOBAL(struct Mem5Global, mem5)
#define MEM5LINK(idx) ((Mem5Link *)(&mem5.zPool[(idx)*mem5.szAtom]))
static void memsys5Unlink(int i, int iLogsize)
static void memsys5Link(int i, int iLogsize)
static void memsys5Enter(void)
static void memsys5Leave(void)
static int memsys5Size(void *p)
static void *memsys5MallocUnsafe(int nByte)
static void memsys5FreeUnsafe(void *pOld)
static void *memsys5Malloc(int nBytes)
static void memsys5Free(void *pPrior)
static void *memsys5Realloc(void *pPrior, int nBytes)
static int memsys5Roundup(int n)
static int memsys5Log(int iValue)
static int memsys5Init(void *NotUsed)
static void memsys5Shutdown(void *NotUsed)
void sqlite3Memsys5Dump(const char *zFilename)
const sqlite3_mem_methods *sqlite3MemGetMemsys5(void)
