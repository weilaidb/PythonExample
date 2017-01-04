#if defined(SQLITE_TEST)
#if defined(SQLITE_ENABLE_FTS3) || defined(SQLITE_ENABLE_FTS4)
#define NM_MAX_TOKEN 12
typedef struct NearPhrase NearPhrase;
typedef struct NearDocument NearDocument;
typedef struct NearToken NearToken;
struct NearDocument ;
struct NearToken ;
struct NearPhrase ;
static int nm_phrase_match(
NearPhrase *p,
NearToken *aToken
)
static int nm_near_chain(
int iDir,
NearDocument *pDoc,
int iPos,
int nPhrase,
NearPhrase *aPhrase,
int iPhrase
)
static int nm_match_count(
NearDocument *pDoc,
int nPhrase,
NearPhrase *aPhrase,
int iPhrase
)
static int fts3_near_match_cmd(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int fts3_configure_incr_load_cmd(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
typedef struct test_tokenizer  test_tokenizer;
typedef struct test_tokenizer_cursor  test_tokenizer_cursor;
static int testTokenizerCreate(
int argc, const char * const *argv,
sqlite3_tokenizer **ppTokenizer
)
static int testTokenizerDestroy(sqlite3_tokenizer *pTokenizer)
static int testTokenizerOpen(
sqlite3_tokenizer *pTokenizer,
const char *pInput, int nBytes,
sqlite3_tokenizer_cursor **ppCursor
)
static int testTokenizerClose(sqlite3_tokenizer_cursor *pCursor)
static int testIsTokenChar(char c)
static int testTolower(char c)
static int testTokenizerNext(
sqlite3_tokenizer_cursor *pCursor,
const char **ppToken,
int *pnBytes,
int *piStartOffset,
int *piEndOffset,
int *piPosition
)
static int testTokenizerLanguage(
sqlite3_tokenizer_cursor *pCursor,
int iLangid
)
static int fts3_test_tokenizer_cmd(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
static int fts3_test_varint_cmd(
ClientData clientData,
Tcl_Interp *interp,
int objc,
Tcl_Obj *CONST objv[]
)
int Sqlitetestfts3_Init(Tcl_Interp *interp)
