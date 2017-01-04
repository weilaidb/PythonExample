#if SQLITE_OS_UNIX
# include <unistd.h>
#if SQLITE_OS_WIN
# include <io.h>
typedef struct fs_vtab fs_vtab;
typedef struct fs_cursor fs_cursor;
struct fs_vtab ;
struct fs_cursor ;
static int fsConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int fsDisconnect(sqlite3_vtab *pVtab)
static int fsOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int fsClose(sqlite3_vtab_cursor *cur)
static int fsNext(sqlite3_vtab_cursor *cur)
static int fsFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int fsColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int fsRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid)
static int fsEof(sqlite3_vtab_cursor *cur)
static int fsBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static sqlite3_module fsModule = ;
extern int getDbPointer(Tcl_Interp *interp, const char *zA, sqlite3 **ppDb);
static int register_fs_module(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestfs_Init(Tcl_Interp *interp)
