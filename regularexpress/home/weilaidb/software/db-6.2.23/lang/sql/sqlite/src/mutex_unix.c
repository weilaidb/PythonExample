#if defined(SQLITE_DEBUG) || defined(SQLITE_HOMEGROWN_RECURSIVE_MUTEX)
# define SQLITE_MUTEX_NREF 1
# define SQLITE_MUTEX_NREF 0
struct sqlite3_mutex ;
#if SQLITE_MUTEX_NREF
#define SQLITE3_MUTEX_INITIALIZER
#define SQLITE3_MUTEX_INITIALIZER
#if !defined(NDEBUG) || defined(SQLITE_DEBUG)
static int pthreadMutexHeld(sqlite3_mutex *p)
static int pthreadMutexNotheld(sqlite3_mutex *p)
static int pthreadMutexInit(void)
static int pthreadMutexEnd(void)
static sqlite3_mutex *pthreadMutexAlloc(int iType)
static void pthreadMutexFree(sqlite3_mutex *p)
static void pthreadMutexEnter(sqlite3_mutex *p)
static int pthreadMutexTry(sqlite3_mutex *p)
static void pthreadMutexLeave(sqlite3_mutex *p)
sqlite3_mutex_methods const *sqlite3DefaultMutex(void)
