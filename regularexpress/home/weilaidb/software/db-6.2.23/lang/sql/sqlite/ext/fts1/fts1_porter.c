#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS1)
typedef struct porter_tokenizer  porter_tokenizer;
typedef struct porter_tokenizer_cursor  porter_tokenizer_cursor;
static const sqlite3_tokenizer_module porterTokenizerModule;
static int porterCreate(
int argc, const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int porterDestroy(sqlite3_tokenizer *pTokenizer)
static int porterOpen(
sqlite3_tokenizer *pTokenizer,
const char *zInput, int nInput,
sqlite3_tokenizer_cursor **ppCursor
)
static int porterClose(sqlite3_tokenizer_cursor *pCursor)
static const char cType[] = ;
static int isVowel(const char*);
static int isConsonant(const char *z)
static int isVowel(const char *z)
static int m_gt_0(const char *z)
static int m_eq_1(const char *z)
static int m_gt_1(const char *z)
static int hasVowel(const char *z)
static int doubleConsonant(const char *z)
static int star_oh(const char *z)
static int stem(
char **pz,
const char *zFrom,
const char *zTo,
int (*xCond)(const char*)
)
static void copy_stemmer(const char *zIn, int nIn, char *zOut, int *pnOut)
static void porter_stemmer(const char *zIn, int nIn, char *zOut, int *pnOut)
static const char isIdChar[] = ;
#define idChar(C)  (((ch=C)&0x80)!=0 || (ch>0x2f && isIdChar[ch-0x30]))
#define isDelim(C) (((ch=C)&0x80)==0 && (ch<0x30 || !isIdChar[ch-0x30]))
static int porterNext(
sqlite3_tokenizer_cursor *pCursor,
const char **pzToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static const sqlite3_tokenizer_module porterTokenizerModule = ;
void sqlite3Fts1PorterTokenizerModule(
sqlite3_tokenizer_module const**ppModule
)
