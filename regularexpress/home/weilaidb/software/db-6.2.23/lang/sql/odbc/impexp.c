#define sqlite3_api_routines void
static SQLITE_EXTENSION_INIT1
#define strcasecmp  _stricmp
#define strncasecmp _strnicmp
typedef struct  json_pfs;
static const char space_chars[] = " \f\n\r\t\v";
#define ISSPACE(c) ((c) && (strchr(space_chars, (c)) != 0))
static char *
one_input_line(FILE *fin)
static int
ends_with_semicolon(const char *str, int n)
static int
all_whitespace(const char *str)
static int
process_input(sqlite3 *db, FILE *fin)
static void
quote_func(sqlite3_context *context, int argc, sqlite3_value **argv)
static void
quote_csv_func(sqlite3_context *context, int argc, sqlite3_value **argv)
static void
indent_xml_func(sqlite3_context *context, int argc, sqlite3_value **argv)
static void
quote_xml_func(sqlite3_context *context, int argc, sqlite3_value **argv)
static void
import_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
int
impexp_import_sql(sqlite3 *db, char *filename)
typedef struct  DUMP_DATA;
static void
indent(DUMP_DATA *dd)
static int
table_dump(DUMP_DATA *dd, char **errp, int fmt, const char *query, ...)
static void
append_free(char **in)
static char *
append(char **in, char const *append, char quote)
static void
quote_xml_str(DUMP_DATA *dd, char *str)
static int
dump_cb(void *udata, int nargs, char **args, char **cols)
static int
schema_dump(DUMP_DATA *dd, char **errp, const char *query, ...)
static void
export_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
static void
export_csv_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
static void
export_xml_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
int
impexp_export_sql(sqlite3 *db, char *filename, int mode, ...)
int
impexp_export_csv(sqlite3 *db, char *filename, int hdr, ...)
int
impexp_export_xml(sqlite3 *db, char *filename, int append, int indnt,
char *root, char *item, char *tablename, char *schema)
static void
json_pstr(const char *string, json_pfs *pfs)
static void
json_pstrq(const char *string, json_pfs *pfs)
static void
json_pstrc(const char *string, json_pfs *pfs)
static void
json_pb64(const unsigned char *blk, int len, json_pfs *pfs)
static int
json_output(sqlite3 *db, char *sql, impexp_putc pfunc, void *parg)
static void
export_json_func(sqlite3_context *ctx, int nargs, sqlite3_value **args)
int
impexp_export_json(sqlite3 *db, char *sql, impexp_putc pfunc,
void *parg)
static int
int
sqlite3_extension_init(sqlite3 *db, char **errmsg,
const sqlite3_api_routines *api)
int
impexp_init(sqlite3 *db)
