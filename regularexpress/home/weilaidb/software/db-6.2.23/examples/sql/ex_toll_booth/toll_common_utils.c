#define CACHESIZE 200 * 1024 * 1024;
int open_env(env, home, in_memory, create, threaded)
DB_ENV **env;
const char *home;
int in_memory;
int create;
int threaded;
int open_queue(dbenv, queue, name, in_memory, create, threaded)
DB_ENV *dbenv;
DB **queue;
const char *name;
int in_memory;
int create;
int threaded;
int open_btree(dbenv, btree, name, in_memory, create, threaded, dups)
DB_ENV *dbenv;
DB **btree;
const char *name;
int in_memory;
int create;
int threaded;
int dups;
int open_sql(dbsql, name, create)
sqlite3 **dbsql;
const char *name;
int create;
int open_seq(dbenv, dbp, sequence, name, create, threaded)
DB_ENV *dbenv;
DB *dbp;
DB_SEQUENCE **sequence;
const char *name;
int create;
int threaded;
#define snprintf sprintf_s
int gettimeofday(struct timeval2 *tv, struct timezone *tz)
static os_thread_t thread_stack[MAX_THREAD];
static int pstack = 0;
void
register_thread_id(pid)
os_thread_t pid;
int
join_threads()
