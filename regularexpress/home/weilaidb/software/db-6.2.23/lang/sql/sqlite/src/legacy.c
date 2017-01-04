int sqlite3_exec(
sqlite3 *db,
const char *zSql,
sqlite3_callback xCallback,
void *pArg,
char **pzErrMsg
)
