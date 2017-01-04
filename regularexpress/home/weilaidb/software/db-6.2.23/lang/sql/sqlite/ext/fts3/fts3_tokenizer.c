#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
static void scalarFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
int sqlite3Fts3IsIdChar(char c)
const char *sqlite3Fts3NextToken(const char *zStr, int *pn)
int sqlite3Fts3InitTokenizer(
Fts3Hash *pHash,
const char *zArg,
sqlite3_tokenizer **ppTok,
char **pzErr
)
static void testFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static
int registerTokenizer(
sqlite3 *db,
char *zName,
const sqlite3_tokenizer_module *p
)
static
int queryTokenizer(
sqlite3 *db,
char *zName,
const sqlite3_tokenizer_module **pp
)
void sqlite3Fts3SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
static void intTestFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
int sqlite3Fts3InitHashTable(
sqlite3 *db,
Fts3Hash *pHash,
const char *zName
)
