extern int backtrace(void**,int);
extern void backtrace_symbols_fd(void*const*,int,int);
# define backtrace(A,B) 1
# define backtrace_symbols_fd(A,B,C)
struct MemBlockHdr ;
#define FOREGUARD 0x80F5E153
#define REARGUARD 0xE4676B53
#define NCSIZE  1000
static struct  mem;
static void adjustStats(int iSize, int increment)
static struct MemBlockHdr *sqlite3MemsysGetHeader(void *pAllocation)
static int sqlite3MemSize(void *p)
static int sqlite3MemInit(void *NotUsed)
static void sqlite3MemShutdown(void *NotUsed)
static int sqlite3MemRoundup(int n)
static void randomFill(char *pBuf, int nByte)
static void *sqlite3MemMalloc(int nByte)
static void sqlite3MemFree(void *pPrior)
static void *sqlite3MemRealloc(void *pPrior, int nByte)
void sqlite3MemSetDefault(void)
void sqlite3MemdebugSetType(void *p, u8 eType)
int sqlite3MemdebugHasType(void *p, u8 eType)
int sqlite3MemdebugNoType(void *p, u8 eType)
void sqlite3MemdebugBacktrace(int depth)
void sqlite3MemdebugBacktraceCallback(void (*xBacktrace)(int, int, void **))
void sqlite3MemdebugSettitle(const char *zTitle)
void sqlite3MemdebugSync()
void sqlite3MemdebugDump(const char *zFilename)
int sqlite3MemdebugMallocCount()
