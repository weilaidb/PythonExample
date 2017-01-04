static struct MemFault  memfault;
static void sqlite3Fault(void)
static int faultsimStep(void)
static void *faultsimMalloc(int n)
static void *faultsimRealloc(void *pOld, int n)
static void faultsimFree(void *p)
static int faultsimSize(void *p)
static int faultsimRoundup(int n)
static int faultsimInit(void *p)
static void faultsimShutdown(void *p)
static void faultsimConfig(int nDelay, int nRepeat)
static int faultsimFailures(void)
static int faultsimBenignFailures(void)
static int faultsimPending(void)
static void faultsimBeginBenign(void)
static void faultsimEndBenign(void)
static int faultsimInstall(int install)
extern const char *sqlite3ErrName(int);
static void pointerToText(void *p, char *z)
static int hexToInt(int h)
static int textToPointer(const char *z, void **pp)
static int test_malloc(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_realloc(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_free(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int sqlite3TestHexToBin(const char *, int, char *);
int sqlite3TestBinToHex(char*,int);
static int test_memset(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memget(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memory_used(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memory_highwater(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memdebug_backtrace(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memdebug_dump(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memdebug_malloc_count(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memdebug_fail(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_memdebug_pending(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int sqlite3_memdebug_title_count = 0;
static int test_memdebug_settitle(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
#define MALLOC_LOG_FRAMES  10
#define MALLOC_LOG_KEYINTS (                                              \
10 * ((sizeof(int)>=sizeof(void*)) ? 1 : sizeof(void*)/sizeof(int))   \
)
static Tcl_HashTable aMallocLog;
static int mallocLogEnabled = 0;
typedef struct MallocLog MallocLog;
struct MallocLog ;
static void test_memdebug_callback(int nByte, int nFrame, void **aFrame)
static void test_memdebug_log_clear(void)
static int test_memdebug_log(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_scratch(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_pagecache(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_alt_pcache(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_memstatus(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_lookaside(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_db_config_lookaside(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_heap(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_heap_size(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_error(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_uri(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_cis(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_config_pmasz(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_dump_memsys3(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_status(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_db_status(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_install_malloc_faultsim(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_install_memsys3(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_vfs_oom_test(
void * clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetest_malloc_Init(Tcl_Interp *interp)
