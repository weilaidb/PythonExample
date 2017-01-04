typedef struct sqlite3StatType sqlite3StatType;
static SQLITE_WSD struct sqlite3StatType  sqlite3Stat = ;
static const char statMutex[] = ;
# define wsdStatInit  sqlite3StatType *x = &GLOBAL(sqlite3StatType,sqlite3Stat)
# define wsdStat x[0]
# define wsdStatInit
# define wsdStat sqlite3Stat
sqlite3_int64 sqlite3StatusValue(int op)
void sqlite3StatusUp(int op, int N)
void sqlite3StatusDown(int op, int N)
void sqlite3StatusSet(int op, int X)
int sqlite3_status64(
int op,
sqlite3_int64 *pCurrent,
sqlite3_int64 *pHighwater,
int resetFlag
)
int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag)
int sqlite3_db_status(
sqlite3 *db,
int op,
int *pCurrent,
int *pHighwater,
int resetFlag
)
