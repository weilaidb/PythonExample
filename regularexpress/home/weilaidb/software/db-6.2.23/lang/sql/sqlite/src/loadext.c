#define SQLITE_CORE 1
# define sqlite3_column_database_name   0
# define sqlite3_column_database_name16 0
# define sqlite3_column_table_name      0
# define sqlite3_column_table_name16    0
# define sqlite3_column_origin_name     0
# define sqlite3_column_origin_name16   0
# define sqlite3_set_authorizer         0
# define sqlite3_bind_text16            0
# define sqlite3_collation_needed16     0
# define sqlite3_column_decltype16      0
# define sqlite3_column_name16          0
# define sqlite3_column_text16          0
# define sqlite3_complete16             0
# define sqlite3_create_collation16     0
# define sqlite3_create_function16      0
# define sqlite3_errmsg16               0
# define sqlite3_open16                 0
# define sqlite3_prepare16              0
# define sqlite3_prepare16_v2           0
# define sqlite3_result_error16         0
# define sqlite3_result_text16          0
# define sqlite3_result_text16be        0
# define sqlite3_result_text16le        0
# define sqlite3_value_text16           0
# define sqlite3_value_text16be         0
# define sqlite3_value_text16le         0
# define sqlite3_column_database_name16 0
# define sqlite3_column_table_name16    0
# define sqlite3_column_origin_name16   0
# define sqlite3_complete 0
# define sqlite3_complete16 0
# define sqlite3_column_decltype16      0
# define sqlite3_column_decltype        0
# define sqlite3_progress_handler 0
# define sqlite3_create_module 0
# define sqlite3_create_module_v2 0
# define sqlite3_declare_vtab 0
# define sqlite3_vtab_config 0
# define sqlite3_vtab_on_conflict 0
# define sqlite3_enable_shared_cache 0
# define sqlite3_profile       0
# define sqlite3_trace         0
# define sqlite3_free_table    0
# define sqlite3_get_table     0
#define sqlite3_bind_zeroblob  0
#define sqlite3_blob_bytes     0
#define sqlite3_blob_close     0
#define sqlite3_blob_open      0
#define sqlite3_blob_read      0
#define sqlite3_blob_write     0
#define sqlite3_blob_reopen    0
static const sqlite3_api_routines sqlite3Apis = ;
static int sqlite3LoadExtension(
sqlite3 *db,
const char *zFile,
const char *zProc,
char **pzErrMsg
)
int sqlite3_load_extension(
sqlite3 *db,
const char *zFile,
const char *zProc,
char **pzErrMsg
)
void sqlite3CloseExtensions(sqlite3 *db)
int sqlite3_enable_load_extension(sqlite3 *db, int onoff)
static const sqlite3_api_routines sqlite3Apis = ;
typedef struct sqlite3AutoExtList sqlite3AutoExtList;
static SQLITE_WSD struct sqlite3AutoExtList  sqlite3Autoext = ;
# define wsdAutoextInit \
sqlite3AutoExtList *x = &GLOBAL(sqlite3AutoExtList,sqlite3Autoext)
# define wsdAutoext x[0]
# define wsdAutoextInit
# define wsdAutoext sqlite3Autoext
int sqlite3_auto_extension(void (*xInit)(void))
int sqlite3_cancel_auto_extension(void (*xInit)(void))
void sqlite3_reset_auto_extension(void)
void sqlite3AutoLoadExtensions(sqlite3 *db)
