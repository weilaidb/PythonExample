static struct Wrapped  wrapped;
static int wrMemInit(void *pAppData)
static void wrMemShutdown(void *pAppData)
static void *wrMemMalloc(int n)
static void wrMemFree(void *p)
static void *wrMemRealloc(void *p, int n)
static int wrMemSize(void *p)
static int wrMemRoundup(int n)
static int wrMutexInit(void)
static int wrMutexEnd(void)
static sqlite3_mutex *wrMutexAlloc(int e)
static void wrMutexFree(sqlite3_mutex *p)
static void wrMutexEnter(sqlite3_mutex *p)
static int wrMutexTry(sqlite3_mutex *p)
static void wrMutexLeave(sqlite3_mutex *p)
static int wrMutexHeld(sqlite3_mutex *p)
static int wrMutexNotheld(sqlite3_mutex *p)
static int wrPCacheInit(void *pArg)
static void wrPCacheShutdown(void *pArg)
static sqlite3_pcache *wrPCacheCreate(int a, int b, int c)
static void wrPCacheCachesize(sqlite3_pcache *p, int n)
static int wrPCachePagecount(sqlite3_pcache *p)
static sqlite3_pcache_page *wrPCacheFetch(sqlite3_pcache *p, unsigned a, int b)
static void wrPCacheUnpin(sqlite3_pcache *p, sqlite3_pcache_page *a, int b)
static void wrPCacheRekey(
sqlite3_pcache *p,
sqlite3_pcache_page *a,
unsigned b,
unsigned c
)
static void wrPCacheTruncate(sqlite3_pcache *p, unsigned a)
static void wrPCacheDestroy(sqlite3_pcache *p)
static void installInitWrappers(void)
static int init_wrapper_install(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int init_wrapper_uninstall(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int init_wrapper_clear(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int init_wrapper_query(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_init_Init(Tcl_Interp *interp)
