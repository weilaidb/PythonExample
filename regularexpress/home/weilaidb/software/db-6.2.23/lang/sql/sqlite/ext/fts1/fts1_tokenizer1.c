#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS1)
typedef struct simple_tokenizer  simple_tokenizer;
typedef struct simple_tokenizer_cursor  simple_tokenizer_cursor;
static const sqlite3_tokenizer_module simpleTokenizerModule;
static int isDelim(simple_tokenizer *t, unsigned char c)
static int simpleCreate(
int argc, const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int simpleDestroy(sqlite3_tokenizer *pTokenizer)
static int simpleOpen(
sqlite3_tokenizer *pTokenizer,
const char *pInput, int nBytes,
sqlite3_tokenizer_cursor **ppCursor
)
static int simpleClose(sqlite3_tokenizer_cursor *pCursor)
static int simpleNext(
sqlite3_tokenizer_cursor *pCursor,
const char **ppToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static const sqlite3_tokenizer_module simpleTokenizerModule = ;
void sqlite3Fts1SimpleTokenizerModule(
sqlite3_tokenizer_module const**ppModule
)
