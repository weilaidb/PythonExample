#if defined(_WIN32) || defined(_WIN64)
static SQLITE_EXTENSION_INIT1
typedef struct XDOC  XDOC;
typedef struct XMOD  XMOD;
static int initialized = 0;
static XMOD *xmod = 0;
typedef struct XTAB  XTAB;
typedef struct XEXP  XEXP;
typedef struct XCSR  XCSR;
static int
xpath_connect(sqlite3* db, void *aux, int argc, const char * const *argv,
sqlite3_vtab **vtabp, char **errp)
static int
xpath_create(sqlite3* db, void *aux, int argc,
const char *const *argv,
sqlite3_vtab **vtabp, char **errp)
static int
xpath_disconnect(sqlite3_vtab *vtab)
static int
xpath_destroy(sqlite3_vtab *vtab)
static int
xpath_bestindex(sqlite3_vtab *vtab, sqlite3_index_info *info)
static int
xpath_open(sqlite3_vtab *vtab, sqlite3_vtab_cursor **cursorp)
static int
xpath_close(sqlite3_vtab_cursor *cursor)
static int
xpath_next(sqlite3_vtab_cursor *cursor)
static int
xpath_filter(sqlite3_vtab_cursor *cursor, int idxNum,
const char *idxStr, int argc, sqlite3_value **argv)
static int
xpath_eof(sqlite3_vtab_cursor *cursor)
static int
xpath_column(sqlite3_vtab_cursor *cursor, sqlite3_context *ctx, int n)
static int
xpath_rowid(sqlite3_vtab_cursor *cursor, sqlite3_int64 *rowidp)
static int
xpath_update(sqlite3_vtab *vtab, int argc, sqlite3_value **argv,
sqlite3_int64 *rowidp)
static void
xpath_vfunc_common(sqlite3_context *ctx, int conv, int argc,
sqlite3_value **argv)
static void
xpath_vfunc_string(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_vfunc_boolean(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_vfunc_number(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_vfunc_xml(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static int
xpath_findfunc(sqlite3_vtab *vtab, int nargs, const char *name,
void (**pfunc)(sqlite3_context *, int, sqlite3_value **),
void **parg)
#if (SQLITE_VERSION_NUMBER > 3004000)
static int
xpath_rename(sqlite3_vtab *vtab, const char *newname)
static sqlite3_module xpath_mod = ;
static void
xpath_func_common(sqlite3_context *ctx, int conv,
int argc, sqlite3_value **argv)
static void
xpath_func_string(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_func_boolean(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_func_number(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_func_xml(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_func_dump(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_func_transform(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
xpath_fini(void *aux)
static
int
xpath_init(sqlite3 *db)
int
sqlite3_extension_init(sqlite3 *db, char **errmsg,
const sqlite3_api_routines *api)
