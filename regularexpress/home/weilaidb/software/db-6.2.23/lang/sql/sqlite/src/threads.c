#if SQLITE_OS_WIN
#  include "os_win.h"
#if SQLITE_MAX_WORKER_THREADS>0
#if SQLITE_OS_UNIX && defined(SQLITE_MUTEX_PTHREADS) && SQLITE_THREADSAFE>0
#define SQLITE_THREADS_IMPLEMENTED 1
struct SQLiteThread ;
int sqlite3ThreadCreate(
SQLiteThread **ppThread,
void *(*xTask)(void*),
void *pIn
)
int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
#if SQLITE_OS_WIN_THREADS
#define SQLITE_THREADS_IMPLEMENTED 1
struct SQLiteThread ;
static unsigned __stdcall sqlite3ThreadProc(
void *pArg
)
int sqlite3ThreadCreate(
SQLiteThread **ppThread,
void *(*xTask)(void*),
void *pIn
)
DWORD sqlite3Win32Wait(HANDLE hObject);
int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
struct SQLiteThread ;
int sqlite3ThreadCreate(
SQLiteThread **ppThread,
void *(*xTask)(void*),
void *pIn
)
int sqlite3ThreadJoin(SQLiteThread *p, void **ppOut)
