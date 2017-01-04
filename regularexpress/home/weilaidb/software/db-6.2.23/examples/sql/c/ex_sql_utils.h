#define __EX_SQL_UTILS_H
typedef sqlite3 db_handle;
db_handle* setup(const char* db_name);
void cleanup(db_handle *db);
int error_handler(db_handle*);
int exec_sql(db_handle*, const char*);
void echo_info(const char*);
typedef struct  sample_data;
extern const sample_data university_sample_data;
extern const sample_data country_sample_data;
void load_table_from_file(sqlite3*, sample_data, int);
#define MAX_THREAD 1024
#if !defined(HAVE_VXWORKS) && !defined(WIN32)
typedef HANDLE          os_thread_t;
#define os_thread_id()  GetCurrentThreadId()
#define os_thread_create(pid, func, arg)                    \
((*pid = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)func, \
arg, 0, NULL)) != NULL)
#define S_ISDIR(m) ((m) & _S_IFDIR)
typedef pthread_t       os_thread_t;
#define os_thread_id()  pthread_self()
#define os_thread_create(pid, func, arg)                    \
(0 == pthread_create(pid, NULL, func, arg))
void register_thread_id(os_thread_t pid);
int join_threads();
