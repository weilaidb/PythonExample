#if !defined(SQLITE_OMIT_EXPLAIN) || defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) || defined(SQLITE_DEBUG)
# define OpHelp(X) "\0" X
# define OpHelp(X)
const char *sqlite3OpcodeName(int i)
