struct sqlite3_intarray ;
typedef struct intarray_vtab intarray_vtab;
typedef struct intarray_cursor intarray_cursor;
struct intarray_vtab ;
struct intarray_cursor ;
static void intarrayFree(sqlite3_intarray *p)
static int intarrayDestroy(sqlite3_vtab *p)
static int intarrayCreate(
sqlite3 *db,
void *pAux,
int argc,
const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int intarrayOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int intarrayClose(sqlite3_vtab_cursor *cur)
static int intarrayColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int intarrayRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int intarrayEof(sqlite3_vtab_cursor *cur)
static int intarrayNext(sqlite3_vtab_cursor *cur)
static int intarrayFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int intarrayBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static sqlite3_module intarrayModule = ;
SQLITE_API int sqlite3_intarray_create(
sqlite3 *db,
const char *zName,
sqlite3_intarray **ppReturn
)
SQLITE_API int sqlite3_intarray_bind(
sqlite3_intarray *pIntArray,
int nElements,
sqlite3_int64 *aElements,
void (*xFree)(void*)
)
extern int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb);
extern void *sqlite3TestTextToPtr(const char*);
extern int sqlite3TestMakePointerStr(Tcl_Interp*, char *zPtr, void*);
extern const char *sqlite3ErrName(int);
static int test_intarray_create(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int test_intarray_bind(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestintarray_Init(Tcl_Interp *interp)
