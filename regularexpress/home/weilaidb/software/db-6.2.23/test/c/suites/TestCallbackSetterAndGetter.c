typedef void *(*app_malloc_fcn)(size_t);
typedef void *(*app_realloc_fcn)(void *, size_t);
typedef void (*app_free_fcn)(void *);
typedef int (*tx_recover_fcn)(DB_ENV *dbenv, DBT *log_rec,
DB_LSN *lsn, db_recops op);
typedef int (*open_func)(DB_ENV *, const char *dbname,
const char *target, void **handle);
typedef int (*write_func)(DB_ENV *, u_int32_t offset_gbytes,
u_int32_t offset_bytes, u_int32_t size, u_int8_t *buf, void *handle);
typedef int (*close_func)(DB_ENV *, const char *dbname, void *handle);
typedef void (*db_errcall_fcn)(const DB_ENV *dbenv,
const char *errpfx, const char *msg);
typedef void (*dbenv_feedback_fcn)(DB_ENV *dbenv, int opcode, int percent);
typedef int (*is_alive_fcn)(DB_ENV *dbenv, pid_t pid,
db_threadid_t tid, u_int32_t flags);
typedef void (*db_msgcall_fcn)(const DB_ENV *dbenv,
const char *msgpfx, const char *msg);
typedef void (*thread_id_fcn)(DB_ENV *dbenv, pid_t *pid, db_threadid_t *tid);
typedef char *(*thread_id_string_fcn)(DB_ENV *dbenv, pid_t pid,
db_threadid_t tid, char *buf);
typedef int (*dup_compare_fcn)(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp);
typedef void (*db_feedback_fcn)(DB *dbp, int opcode, int percent);
typedef u_int32_t (*db_partition_fcn) (DB *db, DBT *key);
typedef int (*db_append_recno_fcn)(DB *dbp, DBT *data, db_recno_t recno);
typedef int (*bt_compare_fcn)(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp);
typedef int (*bt_compress_fcn)(DB *db, const DBT *prevKey,
const DBT *prevData, const DBT *key, const DBT *data, DBT *dest);
typedef int (*bt_decompress_fcn)(DB *db, const DBT *prevKey,
const DBT *prevData, DBT *compressed, DBT *destKey, DBT *destData);
typedef size_t (*bt_prefix_fcn)(DB *, const DBT *dbt1, const DBT *dbt2);
typedef int (*h_compare_fcn)(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp);
typedef u_int32_t (*h_hash_fcn)(DB *dbp, const void *bytes, u_int32_t length);
static void *t_malloc(size_t sz);
static void *t_realloc(void *addr, size_t sz);
static void t_free(void *addr);
static int t_app_dispatch(DB_ENV *dbenv,
DBT *log_rec, DB_LSN *lsn, db_recops op);
static int t_open_func(DB_ENV *, const char *dbname,
const char *target, void **handle);
static int t_write_func(DB_ENV *, u_int32_t offset_gbytes,
u_int32_t offset_bytes, u_int32_t size, u_int8_t *buf, void *handle);
static int t_close_func(DB_ENV *, const char *dbname, void *handle);
static void t_errcall(const DB_ENV *dbenv,
const char *errpfx, const char *msg);
static void t_dbenv_callback(DB_ENV *dbenv, int opcode, int percent);
static int t_is_alive(DB_ENV *dbenv,
pid_t pid, db_threadid_t tid, u_int32_t flags);
static void t_msgcall(const DB_ENV *dbenv,
const char *msgpfx, const char *msg);
static void t_thread_id(DB_ENV *dbenv, pid_t *pid, db_threadid_t *tid);
static char *t_thread_id_string(DB_ENV *dbenv,
pid_t pid, db_threadid_t tid, char *buf);
static int t_dup_compare(DB *db, const DBT *dbt1, const DBT *dbt2, size_t *locp);
static void t_db_feedback(DB *dbp, int opcode, int percent);
static u_int32_t t_db_partition(DB *db, DBT *key);
static int t_append_recno(DB *dbp, DBT *data, db_recno_t recno);
static int t_bt_compare(DB *db, const DBT *dbt1, const DBT *dbt2, size_t *locp) ;
static int t_compress(DB *db, const DBT *prevKey, const DBT *prevData,
const DBT *key, const DBT *data, DBT *dest);
static int t_decompress(DB *db, const DBT *prevKey,const DBT *prevData,
DBT *compressed, DBT *destKey, DBT *destData);
static size_t t_bt_prefix(DB *db, const DBT *dbt1, const DBT *dbt2);
static int t_h_compare(DB *db, const DBT *dbt1, const DBT *dbt2, size_t *locp);
static u_int32_t t_h_hash(DB *dbp, const void *bytes, u_int32_t length);
#define TEST_FUNCTION_1ARG_HEAD(type)					\
type func_rt = NULL
#define TEST_FUNCTION_1ARG_PREOPEN(handle, setter, getter, func)	\
CuAssert(ct, #handle"->"#setter,				\
handle->setter(handle, func) == 0);				\
CuAssert(ct, "preopen: "#handle"->"#getter, 			\
handle->getter(handle, &func_rt) == 0);			\
CuAssert(ct, "preopen: check "#func, func == func_rt)
#define TEST_FUNCTION_1ARG_POSTOPEN(handle, getter, func)		\
CuAssert(ct, "postopen: "#handle"->"#getter,			\
handle->getter(handle, &func_rt) == 0);			\
CuAssert(ct, "postopen: check "#func, func == func_rt);		\
info.handle = NULL;						\
CuAssert(ct, #handle"->close", handle->close(handle, 0) == 0)
#define TEST_FUNCTION_1ARG_PREOPEN_VOID(handle, setter, getter, func)	\
handle->setter(handle, func);					\
handle->getter(handle, &func_rt);				\
CuAssert(ct, "preopen: check "#func, func == func_rt)
#define TEST_FUNCTION_1ARG_POSTOPEN_VOID(handle, getter, func) 		\
handle->getter(handle, &func_rt);				\
CuAssert(ct, "postopen: check "#func, func == func_rt);		\
info.handle = NULL;						\
CuAssert(ct, #handle"->close", handle->close(handle, 0) == 0)
#define TEST_FUNCTION_2ARG_HEAD(type1, type2)				\
type1 func_rt1 = NULL;						\
type2 func_rt2 = NULL
#define TEST_FUNCTION_2ARG_PREOPEN(handle, setter, getter, func1, func2)\
CuAssert(ct, #handle"->"#setter,				\
handle->setter(handle, func1, func2) == 0);			\
CuAssert(ct, "preopen: "#handle"->"#getter, 			\
handle->getter(handle, &func_rt1, &func_rt2) == 0);		\
CuAssert(ct, "preopen: check "#func1, func1 == func_rt1);	\
CuAssert(ct, "preopen: check "#func2, func2 == func_rt2)
#define TEST_FUNCTION_2ARG_POSTOPEN(handle, getter, func1, func2) 	\
CuAssert(ct, "postopen: "#handle"->"#getter, 			\
handle->getter(handle, &func_rt1, &func_rt2) == 0);		\
CuAssert(ct, "postopen: check "#func1, func1 == func_rt1);	\
CuAssert(ct, "postopen: check "#func2, func2 == func_rt2);	\
info.handle = NULL;						\
CuAssert(ct, #handle"->close", handle->close(handle, 0) == 0)
#define TEST_FUNCTION_3ARG_HEAD(type1, type2, type3)			\
type1 func_rt1 = NULL;						\
type2 func_rt2 = NULL;						\
type3 func_rt3 = NULL
#define TEST_FUNCTION_3ARG_PREOPEN(handle, setter, getter, func1, func2,\
func3)								\
CuAssert(ct, #handle"->"#setter, 				\
handle->setter(handle, func1, func2, func3) == 0);		\
CuAssert(ct, "preopen: "#handle"->"#getter, handle->getter(	\
handle, &func_rt1, &func_rt2, &func_rt3) == 0);		\
CuAssert(ct, "preopen: check "#func1, func1 == func_rt1); 	\
CuAssert(ct, "preopen: check "#func2, func2 == func_rt2); 	\
CuAssert(ct, "preopen: check "#func3, func3 == func_rt3)
#define TEST_FUNCTION_3ARG_POSTOPEN(handle, getter, func1, func2, func3)\
CuAssert(ct, "postopen: "#handle"->"#getter, handle->getter(	\
handle, &func_rt1, &func_rt2, &func_rt3) == 0); 		\
CuAssert(ct, "postopen: check "#func1, func1 == func_rt1); 	\
CuAssert(ct, "postopen: check "#func2, func2 == func_rt2); 	\
CuAssert(ct, "postopen: check "#func3, func3 == func_rt3); 	\
info.handle = NULL;						\
CuAssert(ct, #handle"->close", handle->close(handle, 0) == 0)
#define TEST_ENV_FUNCTIONS_1ARG(setter, getter, type, func) do  while(0)
#define TEST_ENV_FUNCTIONS_1ARG_VOID(setter, getter, type, func) do  while(0)
#define TEST_ENV_FUNCTIONS_2ARG(setter, getter, type1, func1, type2, func2)\
do  while(0)
#define TEST_ENV_FUNCTIONS_3ARG(setter, getter, type1, func1, type2,	\
func2, type3, func3) do  while(0)
#define TEST_DB_OPEN(dbtype) if (dbtype == DB_BTREE)  								\
sprintf(buf, "%s/%d.db", TEST_ENV, indx++); 			\
CuAssert(ct, "dbp->open", dbp->open(dbp, NULL, buf, NULL, 	\
dbtype, DB_CREATE, 0644) == 0)
#define TEST_DB_FUNCTIONS_1ARG(setter, getter, dbtype, type, func) do  while(0)
#define TEST_DB_FUNCTIONS_1ARG_VOID(setter, getter, dbtype, type, func)	\
do  while(0)
#define TEST_DB_FUNCTIONS_2ARG(setter, getter, dbtype, 			\
type1, func1, type2, func2) do  while(0)
#define TEST_DB_FUNCTIONS_3ARG(setter, getter, dbtype, type1, func1,	\
type2, func2, type3, func3) do  while(0)
struct handlers ;
static struct handlers info;
static u_int32_t nparts = 5;
int TestCallbackSetterAndGetterSuiteSetup(CuSuite *suite)
int TestCallbackSetterAndGetterSuiteTeardown(CuSuite *suite)
int TestCallbackSetterAndGetterTestSetup(CuTest *ct)
int TestCallbackSetterAndGetterTestTeardown(CuTest *ct)
int TestEnvCallbacks(CuTest *ct)
int TestDbCallbacks(CuTest *ct)
static void *t_malloc(size_t sz)
static void *t_realloc(void *addr, size_t sz)
static void t_free(void *addr)
static  int t_app_dispatch(DB_ENV *dbenv,
DBT *log_rec, DB_LSN *lsn, db_recops op)
static int t_open_func(DB_ENV *dbenv, const char *dbname,
const char *target, void **handle)
static int t_write_func(DB_ENV *dbenv, u_int32_t offset_gbytes,
u_int32_t offset_bytes, u_int32_t size, u_int8_t *buf, void *handle)
static int t_close_func(DB_ENV *dbenv, const char *dbname, void *handle)
static void t_errcall(const DB_ENV *dbenv,
const char *errpfx, const char *msg)
static void t_dbenv_callback(DB_ENV *dbenv, int opcode, int percent)
static int t_is_alive(DB_ENV *dbenv,
pid_t pid, db_threadid_t tid, u_int32_t flags)
static void t_msgcall(const DB_ENV *dbenv,
const char *msgpfx, const char *msg)
static void t_thread_id(DB_ENV *dbenv, pid_t *pid, db_threadid_t *tid)
static char *t_thread_id_string(DB_ENV *dbenv,
pid_t pid, db_threadid_t tid, char *buf)
static int t_dup_compare(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static void t_db_feedback(DB *dbp, int opcode, int percent)
static u_int32_t t_db_partition(DB *db, DBT *key)
static int t_append_recno(DB *dbp, DBT *data, db_recno_t recno)
static int t_bt_compare(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static int t_compress(DB *db, const DBT *prevKey, const DBT *prevData,
const DBT *key, const DBT *data, DBT *dest)
static int t_decompress(DB *db, const DBT *prevKey,const DBT *prevData,
DBT *compressed, DBT *destKey, DBT *destData)
static size_t t_bt_prefix(DB *db, const DBT *dbt1, const DBT *dbt2)
static int t_h_compare(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static u_int32_t t_h_hash(DB *dbp, const void *bytes, u_int32_t length)
