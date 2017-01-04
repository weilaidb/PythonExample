#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
typedef struct IcuTokenizer IcuTokenizer;
typedef struct IcuCursor IcuCursor;
struct IcuTokenizer ;
struct IcuCursor ;
static int icuCreate(
int argc,
const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int icuDestroy(sqlite3_tokenizer *pTokenizer)
static int icuOpen(
sqlite3_tokenizer *pTokenizer,
const char *zInput,
int nInput,
sqlite3_tokenizer_cursor **ppCursor
)
static int icuClose(sqlite3_tokenizer_cursor *pCursor)
static int icuNext(
sqlite3_tokenizer_cursor *pCursor,
const char **ppToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static const sqlite3_tokenizer_module icuTokenizerModule = ;
void sqlite3Fts3IcuTokenizerModule(
sqlite3_tokenizer_module const**ppModule
)
