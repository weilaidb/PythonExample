#if !defined(__APPLE__)
static char *string_dup(const char *s)
typedef struct simple_tokenizer  simple_tokenizer;
typedef struct simple_tokenizer_cursor  simple_tokenizer_cursor;
static sqlite3_tokenizer_module simpleTokenizerModule;
static int simpleCreate(
int argc, const char **argv,
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
const char **ppToken, int *pnBytes,
int *piStartOffset, int *piEndOffset, int *piPosition
)
static sqlite3_tokenizer_module simpleTokenizerModule = ;
void get_simple_tokenizer_module(
sqlite3_tokenizer_module **ppModule
)
