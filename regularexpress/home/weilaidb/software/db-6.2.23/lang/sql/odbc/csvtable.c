static SQLITE_EXTENSION_INIT1
#define strcasecmp  _stricmp
#define strncasecmp _strnicmp
typedef struct csv_file  csv_file;
typedef struct csv_guess_fmt  csv_guess_fmt;
typedef struct csv_vtab  csv_vtab;
typedef struct  csv_cursor;
static void
append_free(char **in)
static char *
append(char **in, char const *append, char quote)
static char *
unquote(char const *in)
static int
maptype(char const *type)
static void
conv_names(char **names, int ncols)
static void
result_or_bind(sqlite3_context *ctx, sqlite3_stmt *stmt, int idx,
char *data, int len, int type)
static int
process_col(sqlite3_context *ctx, sqlite3_stmt *stmt, int idx,
char *data, int type, int conv)
static csv_file *
csv_open(const char *filename, const char *sep, const char *quot)
static void
csv_close(csv_file *csv)
static int
csv_eof(csv_file *csv)
static long
csv_seek(csv_file *csv, long pos)
static void
csv_rewind(csv_file *csv)
static long
csv_tell(csv_file *csv)
static int
csv_getline(csv_file *csv, csv_guess_fmt *guess)
static int
csv_ncols(csv_file *csv)
static char *
csv_coldata(csv_file *csv, int n)
static int
csv_guess(csv_file *csv)
static int
csv_vtab_connect(sqlite3* db, void *aux, int argc, const char * const *argv,
sqlite3_vtab **vtabp, char **errp)
static int
csv_vtab_create(sqlite3* db, void *aux, int argc,
const char *const *argv,
sqlite3_vtab **vtabp, char **errp)
static int
csv_vtab_disconnect(sqlite3_vtab *vtab)
static int
csv_vtab_destroy(sqlite3_vtab *vtab)
static int
csv_vtab_bestindex(sqlite3_vtab *vtab, sqlite3_index_info *info)
static int
csv_vtab_open(sqlite3_vtab *vtab, sqlite3_vtab_cursor **cursorp)
static int
csv_vtab_close(sqlite3_vtab_cursor *cursor)
static int
csv_vtab_next(sqlite3_vtab_cursor *cursor)
static int
csv_vtab_filter(sqlite3_vtab_cursor *cursor, int idxNum,
const char *idxStr, int argc, sqlite3_value **argv)
static int
csv_vtab_eof(sqlite3_vtab_cursor *cursor)
static int
csv_vtab_column(sqlite3_vtab_cursor *cursor, sqlite3_context *ctx, int n)
static int
csv_vtab_rowid(sqlite3_vtab_cursor *cursor, sqlite_int64 *rowidp)
#if (SQLITE_VERSION_NUMBER > 3004000)
static int
csv_vtab_rename(sqlite3_vtab *vtab, const char *newname)
static const sqlite3_module csv_vtab_mod = ;
static void
csv_import_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static
int
csv_vtab_init(sqlite3 *db)
int
sqlite3_extension_init(sqlite3 *db, char **errmsg,
const sqlite3_api_routines *api)
