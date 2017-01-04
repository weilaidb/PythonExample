SQLITE_EXTENSION_INIT1
#define DIRECTORY		"'BFILE_DIRECTORY'"
#define BFILE_PREFIX		"B"
#define PATH_SEPARATOR		"/"
#define INTERNAL_ERR_MSG	"internal error"
#define UNIQUE_ERR_MSG		"Directory already exist"
#define NOT_EXIST_ERR_MSG	"Directory does not exist"
static void BFileCreateDirectoryFunc(sqlite3_context *, int, sqlite3_value **);
static void BFileReplaceDirectoryFunc(sqlite3_context *, int, sqlite3_value **);
static void BFileDropDirectoryFunc(sqlite3_context *, int, sqlite3_value **);
static void BFileNameFunc(sqlite3_context *, int, sqlite3_value **);
static void BFileFullPathFunc(sqlite3_context *, int, sqlite3_value **);
static int search_path_by_alias(sqlite3 *, char *, char *, int, char **);
static int get_full_path(sqlite3 *, char *, int, char **);
static void BFileCreateDirectoryFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static void BFileReplaceDirectoryFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static void BFileDropDirectoryFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static void BFileNameFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static void BFileFullPathFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static int search_path_by_alias(
sqlite3 *db,
char *zSql,
char *alias,
int alias_size,
char **old_path)
static int get_full_path(
sqlite3 *db,
char *pLoc,
int loc_size,
char **pFull_path)
#define FIND_DIRECTORY						\
"SELECT COUNT(name) FROM sqlite_master			\
WHERE name = "DIRECTORY" AND TYPE = 'table';"
#define CREATE_DIRECTORY					\
"CREATE TABLE "DIRECTORY"(				\
ALIAS TEXT PRIMARY KEY,				\
PATH TEXT					\
);"
typedef struct BfileHdl BfileHdl;
struct BfileHdl ;
SQLITE_API int sqlite3_column_bfile(
sqlite3_stmt *pStmt,
int iCol,
sqlite3_bfile **ppBfile
)
SQLITE_API int sqlite3_bfile_open(
sqlite3_bfile *pBfile)
SQLITE_API int sqlite3_bfile_close(
sqlite3_bfile *pBfile)
SQLITE_API int sqlite3_bfile_is_open(
sqlite3_bfile *pBfile,
int *open)
SQLITE_API int sqlite3_bfile_read(
sqlite3_bfile *pBfile,
void *z,
int nSize,
off_t iOffset,
int *nRead)
SQLITE_API int sqlite3_bfile_file_exists(
sqlite3_bfile *pBfile,
int *exist
)
SQLITE_API int sqlite3_bfile_size(
sqlite3_bfile *pBfile,
off_t *size)
SQLITE_API int sqlite3_bfile_final(
sqlite3_bfile *pBfile)
typedef struct BfileHdl BfileHdl;
struct BfileHdl ;
static void BFileOpenFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static void BFileCloseFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static int __bfile_get_size(
char *full_path,
off_t *size)
static void BFileReadFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
static void BFileSizeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv)
int sqlite3_extension_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi)
