#define __SQLITEASYNC_H_ 1
#define SQLITEASYNC_VFSNAME "sqlite3async"
int sqlite3async_initialize(const char *zParent, int isDefault);
void sqlite3async_shutdown(void);
void sqlite3async_run(void);
int sqlite3async_control(int op, ...);
#define SQLITEASYNC_HALT          1
#define SQLITEASYNC_GET_HALT      2
#define SQLITEASYNC_DELAY         3
#define SQLITEASYNC_GET_DELAY     4
#define SQLITEASYNC_LOCKFILES     5
#define SQLITEASYNC_GET_LOCKFILES 6
#define SQLITEASYNC_HALT_NEVER 0
#define SQLITEASYNC_HALT_NOW   1
#define SQLITEASYNC_HALT_IDLE  2
