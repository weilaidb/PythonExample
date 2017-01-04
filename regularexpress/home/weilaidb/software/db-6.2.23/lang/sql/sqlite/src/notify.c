#define assertMutexHeld() \
assert( sqlite3_mutex_held(sqlite3MutexAlloc(SQLITE_MUTEX_STATIC_MASTER)) )
static sqlite3 *SQLITE_WSD sqlite3BlockedList = 0;
static void checkListProperties(sqlite3 *db)
# define checkListProperties(x)
static void removeFromBlockedList(sqlite3 *db)
static void addToBlockedList(sqlite3 *db)
static void enterMutex(void)
static void leaveMutex(void)
int sqlite3_unlock_notify(
sqlite3 *db,
void (*xNotify)(void **, int),
void *pArg
)
void sqlite3ConnectionBlocked(sqlite3 *db, sqlite3 *pBlocker)
void sqlite3ConnectionUnlocked(sqlite3 *db)
void sqlite3ConnectionClosed(sqlite3 *db)
