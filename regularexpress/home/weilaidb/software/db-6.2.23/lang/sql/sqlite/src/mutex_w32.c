#if SQLITE_OS_WIN
struct sqlite3_mutex ;
#define SQLITE_W32_MUTEX_INITIALIZER
#define SQLITE3_MUTEX_INITIALIZER
#define SQLITE3_MUTEX_INITIALIZER
static int winMutexHeld(sqlite3_mutex *p)
static int winMutexNotheld2(sqlite3_mutex *p, DWORD tid)
static int winMutexNotheld(sqlite3_mutex *p)
static sqlite3_mutex winMutex_staticMutexes[] = ;
static int winMutex_isInit = 0;
static int winMutex_isNt = -1;
static LONG SQLITE_WIN32_VOLATILE winMutex_lock = 0;
int sqlite3_win32_is_nt(void);
void sqlite3_win32_sleep(DWORD milliseconds);
static int winMutexInit(void)
static int winMutexEnd(void)
static sqlite3_mutex *winMutexAlloc(int iType)
static void winMutexFree(sqlite3_mutex *p)
static void winMutexEnter(sqlite3_mutex *p)
static int winMutexTry(sqlite3_mutex *p)
static void winMutexLeave(sqlite3_mutex *p)
sqlite3_mutex_methods const *sqlite3DefaultMutex(void)
