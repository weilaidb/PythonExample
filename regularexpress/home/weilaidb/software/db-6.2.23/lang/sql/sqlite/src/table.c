typedef struct TabResult  TabResult;
static int sqlite3_get_table_cb(void *pArg, int nCol, char **argv, char **colv)
int sqlite3_get_table(
sqlite3 *db,
const char *zSql,
char ***pazResult,
int *pnRow,
int *pnColumn,
char **pzErrMsg
)
void sqlite3_free_table(
char **azResult
)
