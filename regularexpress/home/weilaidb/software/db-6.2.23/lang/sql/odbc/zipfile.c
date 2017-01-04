#define _GNU_SOURCE
static SQLITE_EXTENSION_INIT1
#if defined(_WIN32) || defined(_WIN64)
#undef snprintf
#define ZIP_SIG_LEN			4
#define ZIP_LOCAL_HEADER_SIG		0x04034b50
#define ZIP_LOCAL_HEADER_FLAGS		6
#define ZIP_LOCAL_PATHLEN_OFFS		26
#define ZIP_LOCAL_EXTRA_OFFS		28
#define ZIP_LOCAL_HEADER_LEN		30
#define ZIP_CENTRAL_HEADER_SIG		0x02014b50
#define ZIP_CENTRAL_HEADER_FLAGS	8
#define ZIP_CENTRAL_HEADER_LEN		46
#define ZIP_CENTRAL_COMPMETH_OFFS	10
#define ZIP_CENTRAL_MTIME_OFFS		12
#define ZIP_CENTRAL_MDATE_OFFS		14
#define ZIP_CENTRAL_CRC32_OFFS		16
#define ZIP_CENTRAL_COMPLEN_OFFS	20
#define ZIP_CENTRAL_UNCOMPLEN_OFFS	24
#define ZIP_CENTRAL_PATHLEN_OFFS	28
#define ZIP_CENTRAL_EXTRALEN_OFFS	30
#define ZIP_CENTRAL_COMMENTLEN_OFFS	32
#define ZIP_CENTRAL_LOCALHDR_OFFS	42
#define ZIP_CENTRAL_END_SIG		0x06054b50
#define ZIP_CENTRAL_END_LEN		22
#define ZIP_CENTRAL_ENTS_OFFS		8
#define ZIP_CENTRAL_DIRSIZE_OFFS	12
#define ZIP_CENTRAL_DIRSTART_OFFS	16
#define ZIP_COMPMETH_STORED		0
#define ZIP_COMPMETH_DEFLATED		8
#define zip_read_int(p)		\
((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24))
#define zip_read_short(p)	\
((p)[0] | ((p)[1] << 8))
typedef struct zip_file  zip_file;
typedef struct zip_vtab  zip_vtab;
typedef struct  zip_cursor;
typedef struct mem_blk  mem_blk;
typedef struct mem_file  mem_file;
static char mem_vfs_name[64];
static zip_file *
zip_open(const char *filename)
static void
zip_close(zip_file *zip)
static char *
unquote(char const *in)
static int
zip_vtab_connect(sqlite3* db, void *aux, int argc, const char * const *argv,
sqlite3_vtab **vtabp, char **errp)
static int
zip_vtab_create(sqlite3* db, void *aux, int argc,
const char *const *argv,
sqlite3_vtab **vtabp, char **errp)
static int
zip_vtab_disconnect(sqlite3_vtab *vtab)
static int
zip_vtab_destroy(sqlite3_vtab *vtab)
static int
zip_vtab_bestindex(sqlite3_vtab *vtab, sqlite3_index_info *info)
static int
zip_vtab_open(sqlite3_vtab *vtab, sqlite3_vtab_cursor **cursorp)
static int
zip_vtab_close(sqlite3_vtab_cursor *cursor)
static int
zip_vtab_next(sqlite3_vtab_cursor *cursor)
static int
zip_vtab_filter(sqlite3_vtab_cursor *cursor, int idxNum,
const char *idxStr, int argc, sqlite3_value **argv)
static int
zip_vtab_eof(sqlite3_vtab_cursor *cursor)
static int
zip_vtab_column(sqlite3_vtab_cursor *cursor, sqlite3_context *ctx, int n)
static int
zip_vtab_rowid(sqlite3_vtab_cursor *cursor, sqlite_int64 *rowidp)
static void
zip_vtab_matchfunc(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static int
zip_vtab_findfunc(sqlite3_vtab *vtab, int narg, const char *name,
void (**pfunc)(sqlite3_context *, int, sqlite3_value **),
void **parg)
#if (SQLITE_VERSION_NUMBER > 3004000)
static int
zip_vtab_rename(sqlite3_vtab *vtab, const char *newname)
static const sqlite3_module zip_vtab_mod = ;
static void
zip_crc32_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
zip_inflate_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
zip_deflate_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
zip_compress_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static mem_blk *
mem_createmb(const unsigned char *data, unsigned long length)
static void
mem_destroymb(mem_blk *mb)
static int
mem_close(sqlite3_file *file)
static int
mem_read(sqlite3_file *file, void *buf, int len, sqlite_int64 offs)
static int
mem_truncate_unlocked(sqlite3_file *file, sqlite_int64 offs)
mem_truncate(sqlite3_file *file, sqlite_int64 offs)
static int
mem_truncate(sqlite3_file *file, sqlite_int64 offs)
static int
mem_write(sqlite3_file *file, const void *buf, int len, sqlite_int64 offs)
static int
mem_sync(sqlite3_file *file, int flags)
static int
mem_filesize(sqlite3_file *file, sqlite_int64 *size)
static int
mem_lock(sqlite3_file *file, int lck)
static int
mem_unlock(sqlite3_file *file, int lck)
static int
mem_checkreservedlock(sqlite3_file *file, int *out)
static int
mem_filecontrol(sqlite3_file *file, int op, void *arg)
static int
mem_sectorsize(sqlite3_file *file)
static int
mem_devicecharacteristics(sqlite3_file *file)
static sqlite3_io_methods mem_methods = ;
static int
mem_open(sqlite3_vfs *vfs, const char *name, sqlite3_file *file,
int flags, int *outflags)
static int
mem_delete(sqlite3_vfs *vfs, const char *name, int sync)
static int
mem_access(sqlite3_vfs *vfs, const char *name, int flags, int *outflags)
static int
mem_fullpathname(sqlite3_vfs *vfs, const char *name, int len, char *out)
static void *
mem_dlopen(sqlite3_vfs *vfs, const char *name)
static void
mem_dlerror(sqlite3_vfs *vfs, int len, char *out)
static void
(*mem_dlsym(sqlite3_vfs *vfs, void *handle, const char *sym))(void)
static void
mem_dlclose(sqlite3_vfs *vfs, void *handle)
static int
mem_randomness(sqlite3_vfs *vfs, int len, char *out)
static int
mem_sleep(sqlite3_vfs *vfs, int micro)
static int
mem_currenttime(sqlite3_vfs *vfs, double *out)
static sqlite3_vfs mem_vfs = ;
static void
blob_attach_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static void
blob_dump_func(sqlite3_context *ctx, int argc, sqlite3_value **argv)
static
int
zip_vtab_init(sqlite3 *db)
int
sqlite3_extension_init(sqlite3 *db, char **errmsg,
const sqlite3_api_routines *api)
