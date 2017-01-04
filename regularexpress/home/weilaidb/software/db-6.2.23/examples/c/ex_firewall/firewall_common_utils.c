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
#define snprintf sprintf_s
int gettimeofday(struct timeval2 *tv, struct timezone *tz)
