#if HAVE_SQLITE2
#if HAVE_SQLITE3
#undef  HAVE_SQLITE_COMPILE
#define HAVE_SQLITE_COMPILE 1
#undef  HAVE_SQLITE_PROGRESS_HANDLER
#define HAVE_SQLITE_PROGRESS_HANDLER 1
#undef  HAVE_SQLITE_TRACE
#define HAVE_SQLITE_TRACE 1
#if !HAVE_SQLITE3_MALLOC
#define sqlite3_malloc malloc
#define sqlite3_free   free
#if !HAVE_SQLITE3_BIND_PARAMETER_COUNT
#define sqlite3_bind_parameter_count(dummy) (1000)
#if HAVE_SQLITE2 && HAVE_SQLITE3
#define HAVE_BOTH_SQLITE 1
#define HAVE_SQLITE3_SHARED_CACHE 0
#if defined(_WIN32) || !defined(CANT_PASS_VALIST_AS_CHARPTR)
#define MAX_PARAMS 256
#define MAX_PARAMS 32
typedef void (freemem)(void *);
typedef struct  handle;
typedef struct hfunc  hfunc;
#if HAVE_SQLITE_COMPILE
typedef struct hvm  hvm;
#if HAVE_SQLITE3 && HAVE_SQLITE3_INCRBLOBIO
typedef struct hbl  hbl;
#if HAVE_SQLITE3 && HAVE_SQLITE3_BACKUPAPI
typedef struct hbk  hbk;
typedef struct  transstr;
static jclass C_java_lang_String = 0;
static jclass C_SQLite_Database = 0;
static jfieldID F_SQLite_Database_handle = 0;
static jfieldID F_SQLite_Database_error_code = 0;
static jfieldID F_SQLite_FunctionContext_handle = 0;
static jfieldID F_SQLite_Vm_handle = 0;
static jfieldID F_SQLite_Vm_error_code = 0;
static jfieldID F_SQLite_Stmt_handle = 0;
static jfieldID F_SQLite_Stmt_error_code = 0;
static jfieldID F_SQLite_Blob_handle = 0;
static jfieldID F_SQLite_Blob_size = 0;
static jfieldID F_SQLite_Backup_handle = 0;
static jmethodID M_java_lang_String_getBytes = 0;
static jmethodID M_java_lang_String_getBytes2 = 0;
static jmethodID M_java_lang_String_initBytes = 0;
static jmethodID M_java_lang_String_initBytes2 = 0;
static const char xdigits[] = "0123456789ABCDEF";
static void
seterr(JNIEnv *env, jobject obj, int err)
#if HAVE_SQLITE_COMPILE
static void
setvmerr(JNIEnv *env, jobject obj, int err)
#if HAVE_SQLITE3
static void
setstmterr(JNIEnv *env, jobject obj, int err)
static int
jstrlen(const jchar *jstr)
static void *
gethandle(JNIEnv *env, jobject obj)
static void *
getclrhandle(JNIEnv *env, jobject obj)
#if HAVE_SQLITE_COMPILE
static void *
gethvm(JNIEnv *env, jobject obj)
static void *
getclrhvm(JNIEnv *env, jobject obj)
#if HAVE_SQLITE3
static void *
gethstmt(JNIEnv *env, jobject obj)
static void *
getclrhstmt(JNIEnv *env, jobject obj)
#if HAVE_SQLITE3 && HAVE_SQLITE3_INCRBLOBIO
static void *
gethbl(JNIEnv *env, jobject obj)
static void *
getclrhbl(JNIEnv *env, jobject obj)
#if HAVE_SQLITE3 && HAVE_SQLITE3_BACKUPAPI
static void *
gethbk(JNIEnv *env, jobject obj)
static void *
getclrhbk(JNIEnv *env, jobject obj)
static void
delglobrefp(JNIEnv *env, jobject *obj)
static jobject
globrefpop(JNIEnv *env, jobject *obj)
static void
globrefset(JNIEnv *env, jobject obj, jobject *ref)
static void
freep(char **strp)
static void
throwex(JNIEnv *env, const char *msg)
static void
throwoom(JNIEnv *env, const char *msg)
static void
throwclosed(JNIEnv *env)
#if HAVE_SQLITE3 && HAVE_SQLITE3_INCRBLOBIO
static void
throwioex(JNIEnv *env, const char *msg)
static void
transfree(transstr *dest)
static char *
trans2iso(JNIEnv *env, int haveutf, jstring enc, jstring src,
transstr *dest)
static jstring
trans2utf(JNIEnv *env, int haveutf, jstring enc, const char *src,
transstr *dest)
#if HAVE_SQLITE2
static int
busyhandler(void *udata, const char *table, int count)
#if HAVE_SQLITE3
static int
busyhandler3(void *udata, int count)
static int
progresshandler(void *udata)
static int
callback(void *udata, int ncol, char **data, char **cols)
static void
doclose(JNIEnv *env, jobject obj, int final)
JNIEXPORT void JNICALL
Java_SQLite_Database__1close(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database__1finalize(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database__1busy_1timeout(JNIEnv *env, jobject obj, jint ms)
JNIEXPORT jstring JNICALL
Java_SQLite_Database_version(JNIEnv *env, jclass cls)
JNIEXPORT jstring JNICALL
Java_SQLite_Database_dbversion(JNIEnv *env, jobject obj)
JNIEXPORT jlong JNICALL
Java_SQLite_Database__1last_1insert_1rowid(JNIEnv *env, jobject obj)
JNIEXPORT jlong JNICALL
Java_SQLite_Database__1changes(JNIEnv *env, jobject obj)
JNIEXPORT jboolean JNICALL
Java_SQLite_Database__1complete(JNIEnv *env, jclass cls, jstring sql)
JNIEXPORT void JNICALL
Java_SQLite_Database__1interrupt(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database__1open4(JNIEnv *env, jobject obj, jstring file, jint mode,
jstring vfs, jboolean ver2)
JNIEXPORT void JNICALL
Java_SQLite_Database__1open(JNIEnv *env, jobject obj, jstring file, jint mode)
JNIEXPORT void JNICALL
Java_SQLite_Database__1open_1aux_1file(JNIEnv *env, jobject obj, jstring file)
JNIEXPORT void JNICALL
Java_SQLite_Database__1busy_1handler(JNIEnv *env, jobject obj, jobject bh)
JNIEXPORT void JNICALL
Java_SQLite_Database__1exec__Ljava_lang_String_2LSQLite_Callback_2
(JNIEnv *env, jobject obj, jstring sql, jobject cb)
JNIEXPORT void JNICALL
Java_SQLite_Database__1exec__Ljava_lang_String_2LSQLite_Callback_2_3Ljava_lang_String_2
(JNIEnv *env, jobject obj, jstring sql, jobject cb, jobjectArray args)
static hfunc *
getfunc(JNIEnv *env, jobject obj)
#if HAVE_SQLITE2
static void
call_common(sqlite_func *sf, int isstep, int nargs, const char **args)
static void
call_func(sqlite_func *sf, int nargs, const char **args)
static void
call_step(sqlite_func *sf, int nargs, const char **args)
static void
call_final(sqlite_func *sf)
#if HAVE_SQLITE3
static void
call3_common(sqlite3_context *sf, int isstep, int nargs, sqlite3_value **args)
static void
call3_func(sqlite3_context *sf, int nargs, sqlite3_value **args)
static void
call3_step(sqlite3_context *sf, int nargs, sqlite3_value **args)
static void
call3_final(sqlite3_context *sf)
static void
mkfunc_common(JNIEnv *env, int isagg, jobject obj, jstring name,
jint nargs, jobject fi)
JNIEXPORT void JNICALL
Java_SQLite_Database__1create_1aggregate(JNIEnv *env, jobject obj,
jstring name, jint nargs, jobject fi)
JNIEXPORT void JNICALL
Java_SQLite_Database__1create_1function(JNIEnv *env, jobject obj,
jstring name, jint nargs, jobject fi)
JNIEXPORT void JNICALL
Java_SQLite_Database__1function_1type(JNIEnv *env, jobject obj,
jstring name, jint type)
JNIEXPORT jint JNICALL
Java_SQLite_FunctionContext_count(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_set_1error(JNIEnv *env, jobject obj, jstring err)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_set_1result__D(JNIEnv *env, jobject obj, jdouble d)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_set_1result__I(JNIEnv *env, jobject obj, jint i)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_set_1result__Ljava_lang_String_2(JNIEnv *env,
jobject obj,
jstring ret)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_set_1result___3B(JNIEnv *env, jobject obj,
jbyteArray b)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_set_1result_1zeroblob(JNIEnv *env, jobject obj,
jint n)
JNIEXPORT jstring JNICALL
Java_SQLite_Database_error_1string(JNIEnv *env, jclass c, jint err)
JNIEXPORT jstring JNICALL
Java_SQLite_Database__1errmsg(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database__1set_1encoding(JNIEnv *env, jobject obj, jstring enc)
#if HAVE_SQLITE_SET_AUTHORIZER
static int
doauth(void *arg, int what, const char *arg1, const char *arg2,
const char *arg3, const char *arg4)
JNIEXPORT void JNICALL
Java_SQLite_Database__1set_1authorizer(JNIEnv *env, jobject obj, jobject auth)
#if HAVE_SQLITE_TRACE
static void
dotrace(void *arg, const char *msg)
JNIEXPORT void JNICALL
Java_SQLite_Database__1trace(JNIEnv *env, jobject obj, jobject tr)
#if HAVE_SQLITE_COMPILE
static void
dovmfinal(JNIEnv *env, jobject obj, int final)
#if HAVE_SQLITE3
static void
dostmtfinal(JNIEnv *env, jobject obj)
#if HAVE_SQLITE3 && HAVE_SQLITE3_INCRBLOBIO
static void
doblobfinal(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Vm_stop(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Vm_finalize(JNIEnv *env, jobject obj)
#if HAVE_SQLITE_COMPILE
#if HAVE_SQLITE3
static void
free_tab(void *mem)
JNIEXPORT jboolean JNICALL
Java_SQLite_Vm_step(JNIEnv *env, jobject obj, jobject cb)
JNIEXPORT jboolean JNICALL
Java_SQLite_Vm_compile(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database_vm_1compile(JNIEnv *env, jobject obj, jstring sql,
jobject vm)
JNIEXPORT void JNICALL
Java_SQLite_Database_vm_1compile_1args(JNIEnv *env,
jobject obj, jstring sql,
jobject vm, jobjectArray args)
JNIEXPORT void JNICALL
Java_SQLite_FunctionContext_internal_1init(JNIEnv *env, jclass cls)
JNIEXPORT void JNICALL
Java_SQLite_Database__1progress_1handler(JNIEnv *env, jobject obj, jint n,
jobject ph)
JNIEXPORT jboolean JNICALL
Java_SQLite_Database_is3(JNIEnv *env, jobject obj)
JNIEXPORT jboolean JNICALL
Java_SQLite_Stmt_prepare(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database_stmt_1prepare(JNIEnv *env, jobject obj, jstring sql,
jobject stmt)
JNIEXPORT jboolean JNICALL
Java_SQLite_Stmt_step(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_close(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_reset(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_clear_1bindings(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind__II(JNIEnv *env, jobject obj, jint pos, jint val)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind__IJ(JNIEnv *env, jobject obj, jint pos, jlong val)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind__ID(JNIEnv *env, jobject obj, jint pos, jdouble val)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind__I_3B(JNIEnv *env, jobject obj, jint pos, jbyteArray val)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind__ILjava_lang_String_2(JNIEnv *env, jobject obj,
jint pos, jstring val)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind__I(JNIEnv *env, jobject obj, jint pos)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_bind_1zeroblob(JNIEnv *env, jobject obj, jint pos, jint len)
JNIEXPORT jint JNICALL
Java_SQLite_Stmt_bind_1parameter_1count(JNIEnv *env, jobject obj)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_bind_1parameter_1name(JNIEnv *env, jobject obj, jint pos)
JNIEXPORT jint JNICALL
Java_SQLite_Stmt_bind_1parameter_1index(JNIEnv *env, jobject obj,
jstring name)
JNIEXPORT jint JNICALL
Java_SQLite_Stmt_column_1int(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jlong JNICALL
Java_SQLite_Stmt_column_1long(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jdouble JNICALL
Java_SQLite_Stmt_column_1double(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jbyteArray JNICALL
Java_SQLite_Stmt_column_1bytes(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_column_1string(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jint JNICALL
Java_SQLite_Stmt_column_1type(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jint JNICALL
Java_SQLite_Stmt_column_1count(JNIEnv *env, jobject obj)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_column_1table_1name(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_column_1database_1name(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_column_1decltype(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_column_1name(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jstring JNICALL
Java_SQLite_Stmt_column_1origin_1name(JNIEnv *env, jobject obj, jint col)
JNIEXPORT jint JNICALL
Java_SQLite_Stmt_status(JNIEnv *env, jobject obj, jint op, jboolean flg)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_finalize(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Database__1open_1blob(JNIEnv *env, jobject obj,
jstring dbname, jstring table,
jstring column, jlong row,
jboolean rw, jobject blobj)
JNIEXPORT jint JNICALL
Java_SQLite_Blob_write(JNIEnv *env , jobject obj, jbyteArray b, jint off,
jint pos, jint len)
JNIEXPORT jint JNICALL
Java_SQLite_Blob_read(JNIEnv *env , jobject obj, jbyteArray b, jint off,
jint pos, jint len)
JNIEXPORT void JNICALL
Java_SQLite_Blob_close(JNIEnv *env, jobject obj)
JNIEXPORT void JNICALL
Java_SQLite_Blob_finalize(JNIEnv *env, jobject obj)
JNIEXPORT void
JNICALL Java_SQLite_Database__1key(JNIEnv *env, jobject obj, jbyteArray key)
JNIEXPORT void JNICALL
Java_SQLite_Database__1rekey(JNIEnv *env, jobject obj, jbyteArray key)
JNIEXPORT jboolean JNICALL
Java_SQLite_Database__1enable_1shared_1cache(JNIEnv *env, jclass cls,
jboolean onoff)
JNIEXPORT void JNICALL
Java_SQLite_Database__1backup(JNIEnv *env, jclass cls, jobject bkupj,
jobject dest, jstring destName,
jobject src, jstring srcName)
JNIEXPORT void JNICALL
Java_SQLite_Backup__1finalize(JNIEnv *env, jobject obj)
JNIEXPORT jboolean JNICALL
Java_SQLite_Backup__1step(JNIEnv *env, jobject obj, jint n)
JNIEXPORT jint JNICALL
Java_SQLite_Backup__1remaining(JNIEnv *env, jobject obj)
JNIEXPORT jint JNICALL
Java_SQLite_Backup__1pagecount(JNIEnv *env, jobject obj)
#if HAVE_SQLITE3_PROFILE
static void
doprofile(void *arg, const char *msg, sqlite_uint64 est)
JNIEXPORT void JNICALL
Java_SQLite_Database__1profile(JNIEnv *env, jobject obj, jobject tr)
JNIEXPORT jint JNICALL
Java_SQLite_Database__1status(JNIEnv *env, jclass cls, jint op,
jintArray info, jboolean flag)
JNIEXPORT jint JNICALL
Java_SQLite_Database__1db_1status(JNIEnv *env, jobject obj, jint op,
jintArray info, jboolean flag)
JNIEXPORT void JNICALL
Java_SQLite_Stmt_internal_1init(JNIEnv *env, jclass cls)
JNIEXPORT void JNICALL
Java_SQLite_Vm_internal_1init(JNIEnv *env, jclass cls)
JNIEXPORT void JNICALL
Java_SQLite_Blob_internal_1init(JNIEnv *env, jclass cls)
JNIEXPORT void JNICALL
Java_SQLite_Backup_internal_1init(JNIEnv *env, jclass cls)
JNIEXPORT void JNICALL
Java_SQLite_Database_internal_1init(JNIEnv *env, jclass cls)
#if !defined(DONT_USE_JNI_ONLOAD) && defined(JNI_VERSION_1_2)
JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved)
JNIEXPORT void JNICALL
JNI_OnUnload(JavaVM *vm, void *reserved)
