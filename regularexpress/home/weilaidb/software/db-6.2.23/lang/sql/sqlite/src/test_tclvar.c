typedef struct tclvar_vtab tclvar_vtab;
typedef struct tclvar_cursor tclvar_cursor;
struct tclvar_vtab ;
struct tclvar_cursor ;
static int tclvarConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int tclvarDisconnect(sqlite3_vtab *pVtab)
static int tclvarOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int tclvarClose(sqlite3_vtab_cursor *cur)
static int next2(Tcl_Interp *interp, tclvar_cursor *pCur, Tcl_Obj *pObj)
static int tclvarNext(sqlite3_vtab_cursor *cur)
static int tclvarFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int tclvarColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int tclvarRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int tclvarEof(sqlite3_vtab_cursor *cur)
static int tclvarBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static sqlite3_module tclvarModule = ;
extern int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb);
static int register_tclvar_module(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetesttclvar_Init(Tcl_Interp *interp)
