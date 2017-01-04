#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
static const unsigned char sqlite3Utf8Trans1[] = ;
#define READ_UTF8(zIn, zTerm, c)                           \
c = *(zIn++);                                            \
if( c>=0xc0 )
#define WRITE_UTF8(zOut, c)
typedef struct unicode_tokenizer unicode_tokenizer;
typedef struct unicode_cursor unicode_cursor;
struct unicode_tokenizer ;
struct unicode_cursor ;
static int unicodeDestroy(sqlite3_tokenizer *pTokenizer)
static int unicodeAddExceptions(
unicode_tokenizer *p,
int bAlnum,
const char *zIn,
int nIn
)
static int unicodeIsException(unicode_tokenizer *p, int iCode)
static int unicodeIsAlnum(unicode_tokenizer *p, int iCode)
static int unicodeCreate(
int nArg,
const char * const *azArg,
sqlite3_tokenizer **pp
)
static int unicodeOpen(
sqlite3_tokenizer *p,
const char *aInput,
int nInput,
sqlite3_tokenizer_cursor **pp
)
static int unicodeClose(sqlite3_tokenizer_cursor *pCursor)
static int unicodeNext(
sqlite3_tokenizer_cursor *pC,
const char **paToken,
int *pnToken,
int *piStart,
int *piEnd,
int *piPos
)
void sqlite3Fts3UnicodeTokenizer(sqlite3_tokenizer_module const **ppModule)
