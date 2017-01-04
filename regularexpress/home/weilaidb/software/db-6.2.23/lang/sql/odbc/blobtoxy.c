static SQLITE_EXTENSION_INIT1
#define strcasecmp  _stricmp
#define strncasecmp _strnicmp
#define vsnprintf   _vsnprintf
#define TYPE_CODE(num, type) (((num) << 8) | (sizeof (type)))
#define TYPE_SIZE(code)      ((code) & 0xFF)
#define TYPE_CHAR      TYPE_CODE( 0, char)
#define TYPE_UCHAR     TYPE_CODE( 1, char)
#define TYPE_SHORT_LE  TYPE_CODE( 2, short)
#define TYPE_USHORT_LE TYPE_CODE( 3, short)
#define TYPE_SHORT_BE  TYPE_CODE( 4, short)
#define TYPE_USHORT_BE TYPE_CODE( 5, short)
#define TYPE_INT_LE    TYPE_CODE( 6, int)
#define TYPE_UINT_LE   TYPE_CODE( 7, int)
#define TYPE_INT_BE    TYPE_CODE( 8, int)
#define TYPE_UINT_BE   TYPE_CODE( 9, int)
#define TYPE_BIGINT_LE TYPE_CODE(10, sqlite_int64)
#define TYPE_BIGINT_BE TYPE_CODE(11, sqlite_int64)
#define TYPE_FLOAT     TYPE_CODE(12, float)
#define TYPE_DOUBLE    TYPE_CODE(13, double)
typedef struct b2xy_table  b2xy_table;
typedef struct b2xy_cursor  b2xy_cursor;
static int
string_to_type(const char *str)
static int
b2xy_destroy(sqlite3_vtab *vtab)
static int
b2xy_create(sqlite3 *db, void *userdata, int argc,
const char * const *argv, sqlite3_vtab **vtabret, char **errp)
static int
b2xy_open(sqlite3_vtab *vtab, sqlite3_vtab_cursor **curret)
static int
b2xy_close(sqlite3_vtab_cursor *cur)
static int
b2xy_column(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int
b2xy_rowid(sqlite3_vtab_cursor *cur, sqlite_int64 *rowidp)
static int
b2xy_eof(sqlite3_vtab_cursor *cur)
static int
b2xy_next(sqlite3_vtab_cursor *cur)
static int
b2xy_filter(sqlite3_vtab_cursor *cur, int idxNum, const char *idxStr,
int argc, sqlite3_value **argv)
static int
b2xy_bestindex(sqlite3_vtab *tab, sqlite3_index_info *info)
#if (SQLITE_VERSION_NUMBER > 3004000)
static int
b2xy_rename(sqlite3_vtab *tab, const char *newname)
static const sqlite3_module b2xy_module = ;
typedef struct  strbuf;
static int
init_strbuf(strbuf *sb)
static int
expand_strbuf(strbuf *sb)
static void
drop_strbuf(strbuf *sb)
static int
print_strbuf(strbuf *sb, const char *fmt, ...)
#define PATH_MODE_TK    ((void *) 0)
#define PATH_MODE_SVG   ((void *) 1)
#define PATH_MODE_BLT_X ((void *) 2)
#define PATH_MODE_BLT_Y ((void *) 3)
#define PATH_MODE_BLT   ((void *) 4)
#define PATH_MODE_TK3D  ((void *) 5)
static void
common_path_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
typedef struct  path_aggctx;
static void
common_path_step(sqlite3_context *ctx, int nargs, sqlite3_value **args)
static void
common_path_finalize(sqlite3_context *ctx)
static void
blt_vec_step(sqlite3_context *ctx, int nargs, sqlite3_value **args)
static void
subblob_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
typedef struct  rownumber_ctx;
static void
rownumber_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
static
int
b2xy_init(sqlite3 *db)
int
sqlite3_extension_init(sqlite3 *db, char **errmsg,
const sqlite3_api_routines *api)
