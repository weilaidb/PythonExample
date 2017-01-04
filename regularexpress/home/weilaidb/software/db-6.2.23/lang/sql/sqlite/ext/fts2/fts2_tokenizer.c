#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS2)
SQLITE_EXTENSION_INIT3
static void scalarFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
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
int queryFts2Tokenizer(
sqlite3 *db,
char *zName,
const sqlite3_tokenizer_module **pp
)
void sqlite3Fts2SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
static void intTestFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
int sqlite3Fts2InitHashTable(
sqlite3 *db,
fts2Hash *pHash,
const char *zName
)
