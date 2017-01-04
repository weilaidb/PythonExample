#if (!defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS1)) \
&& !defined(SQLITE_ENABLE_BROKEN_FTS1)
#error fts1 has a design flaw and has been deprecated.
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS1)
#if defined(SQLITE_ENABLE_FTS1) && !defined(SQLITE_CORE)
# define SQLITE_CORE 1
SQLITE_EXTENSION_INIT1
typedef struct StringBuffer  StringBuffer;
static void initStringBuffer(StringBuffer *sb)
static void nappend(StringBuffer *sb, const char *zFrom, int nFrom)
static void append(StringBuffer *sb, const char *zFrom)
#define VARINT_MAX 10
static int putVarint(char *p, sqlite_int64 v)
static int getVarint(const char *p, sqlite_int64 *v)
static int getVarint32(const char *p, int *pi)
static int safe_isspace(char c)
static int safe_tolower(char c)
static int safe_isalnum(char c)
typedef enum DocListType  DocListType;
# define DL_DEFAULT DL_POSITIONS
typedef struct DocList  DocList;
enum ;
static void docListInit(DocList *d, DocListType iType,
const char *pData, int nData)
static DocList *docListNew(DocListType iType)
static void docListDestroy(DocList *d)
static void docListDelete(DocList *d)
static char *docListEnd(DocList *d)
static void appendVarint(DocList *d, sqlite_int64 i)
static void docListAddDocid(DocList *d, sqlite_int64 iDocid)
static void addPos(DocList *d, int iColumn, int iPos)
static void docListAddPos(DocList *d, int iColumn, int iPos)
static void docListAddPosOffset(
DocList *d,
int iColumn,
int iPos,
int iStartOffset,
int iEndOffset
)
typedef struct DocListReader  DocListReader;
static void readerInit(DocListReader *r, DocList *pDoclist)
static int atEnd(DocListReader *pReader)
static sqlite_int64 peekDocid(DocListReader *pReader)
static sqlite_int64 readDocid(DocListReader *pReader)
static int readPosition(DocListReader *pReader, int *iColumn)
static void skipPositionList(DocListReader *pReader)
static void skipDocument(DocListReader *pReader)
static int skipToDocid(DocListReader *pReader, sqlite_int64 iDocid)
static sqlite_int64 firstDocid(DocList *d)
static void printDoclist(DocList *p)
static void docListRestrictColumn(DocList *in, int iRestrictColumn)
static void docListDiscardEmpty(DocList *in)
static void docListSpliceElement(DocListReader *r, sqlite_int64 iDocid,
const char *pSource, int nSource)
static void docListUpdate(DocList *d, DocList *pUpdate)
static void docListAccumulate(DocList *pAcc, DocList *pUpdate)
static sqlite_int64 nextDocid(DocListReader *pIn)
static void mergePosList(
DocListReader *pLeft,
DocListReader *pRight,
sqlite_int64 iDocid,
DocList *pOut
)
static void docListPhraseMerge(
DocList *pLeft,
DocList *pRight,
DocList *pOut
)
static void docListAndMerge(
DocList *pLeft,
DocList *pRight,
DocList *pOut
)
static void docListOrMerge(
DocList *pLeft,
DocList *pRight,
DocList *pOut
)
static void docListExceptMerge(
DocList *pLeft,
DocList *pRight,
DocList *pOut
)
static char *string_dup_n(const char *s, int n)
static char *string_dup(const char *s)
static char *string_format(const char *zFormat,
const char *zDb, const char *zName)
static int sql_exec(sqlite3 *db, const char *zDb, const char *zName,
const char *zFormat)
static int sql_prepare(sqlite3 *db, const char *zDb, const char *zName,
sqlite3_stmt **ppStmt, const char *zFormat)
typedef struct fulltext_vtab fulltext_vtab;
typedef struct QueryTerm  QueryTerm;
typedef struct Query  Query;
typedef struct Snippet  Snippet;
typedef enum QueryType  QueryType;
#define CHUNK_MAX 256
typedef enum fulltext_statement  fulltext_statement;
static const char *const fulltext_zStatement[MAX_STMT] = ;
struct fulltext_vtab ;
typedef struct fulltext_cursor  fulltext_cursor;
static struct fulltext_vtab *cursor_vtab(fulltext_cursor *c)
static const sqlite3_module fulltextModule;
static void appendList(StringBuffer *sb, int nString, char **azString)
static const char *contentInsertStatement(fulltext_vtab *v)
static const char *contentUpdateStatement(fulltext_vtab *v)
static int sql_get_statement(fulltext_vtab *v, fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int sql_step_statement(fulltext_vtab *v, fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int sql_single_step_statement(fulltext_vtab *v,
fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int content_insert(fulltext_vtab *v, sqlite3_value *rowid,
sqlite3_value **pValues)
static int content_update(fulltext_vtab *v, sqlite3_value **pValues,
sqlite_int64 iRowid)
static void freeStringArray(int nString, const char **pString)
static int content_select(fulltext_vtab *v, sqlite_int64 iRow,
const char ***pValues)
static int content_delete(fulltext_vtab *v, sqlite_int64 iRow)
static int term_select(fulltext_vtab *v, const char *pTerm, int nTerm,
int iSegment,
sqlite_int64 *rowid, DocList *out)
static int term_select_all(
fulltext_vtab *v,
int iColumn,
const char *pTerm,
int nTerm,
DocList *out
)
static int term_insert(fulltext_vtab *v, sqlite_int64 *piRowid,
const char *pTerm, int nTerm,
int iSegment, DocList *doclist)
static int term_update(fulltext_vtab *v, sqlite_int64 rowid,
DocList *doclist)
static int term_delete(fulltext_vtab *v, sqlite_int64 rowid)
static void fulltext_vtab_destroy(fulltext_vtab *v)
#define TOKEN_EOF         0
#define TOKEN_SPACE       1
#define TOKEN_ID          2
#define TOKEN_STRING      3
#define TOKEN_PUNCT       4
static const char isIdChar[] = ;
#define IdChar(C)  (((c=C)&0x80)!=0 || (c>0x1f && isIdChar[c-0x20]))
static int getToken(const char *z, int *tokenType)
typedef struct Token  Token;
static char **tokenizeString(const char *z, int *pnToken)
static void dequoteString(char *z)
static void tokenListToIdList(char **azIn)
static char *firstToken(char *zIn, char **pzTail)
static int startsWith(const char *s, const char *t)
typedef struct TableSpec  TableSpec;
static void clearTableSpec(TableSpec *p)
static int parseSpec(TableSpec *pSpec, int argc, const char *const*argv,
char**pzErr)
static char *fulltextSchema(
int nColumn,
const char *const* azColumn,
const char *zTableName
)
static int constructVtab(
sqlite3 *db,
TableSpec *spec,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int fulltextConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int fulltextCreate(sqlite3 *db, void *pAux,
int argc, const char * const *argv,
sqlite3_vtab **ppVTab, char **pzErr)
static int fulltextBestIndex(sqlite3_vtab *pVTab, sqlite3_index_info *pInfo)
static int fulltextDisconnect(sqlite3_vtab *pVTab)
static int fulltextDestroy(sqlite3_vtab *pVTab)
static int fulltextOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void queryClear(Query *q)
static void snippetClear(Snippet *p)
static void snippetAppendMatch(
Snippet *p,
int iCol, int iTerm,
int iStart, int nByte
)
#define FTS1_ROTOR_SZ   (32)
#define FTS1_ROTOR_MASK (FTS1_ROTOR_SZ-1)
static void snippetOffsetsOfColumn(
Query *pQuery,
Snippet *pSnippet,
int iColumn,
const char *zDoc,
int nDoc
)
static void snippetAllOffsets(fulltext_cursor *p)
static void snippetOffsetText(Snippet *p)
static int wordBoundary(
int iBreak,
const char *zDoc,
int nDoc,
struct snippetMatch *aMatch,
int nMatch,
int iCol
)
static void appendWhiteSpace(StringBuffer *p)
static void trimWhiteSpace(StringBuffer *p)
#define SNIPPET_IGNORE  0
#define SNIPPET_DESIRED 1
static void snippetText(
fulltext_cursor *pCursor,
const char *zStartMark,
const char *zEndMark,
const char *zEllipsis
)
static int fulltextClose(sqlite3_vtab_cursor *pCursor)
static int fulltextNext(sqlite3_vtab_cursor *pCursor)
static int docListOfTerm(
fulltext_vtab *v,
int iColumn,
QueryTerm *pQTerm,
DocList **ppResult
)
static void queryAdd(Query *q, const char *pTerm, int nTerm)
static int checkColumnSpecifier(
fulltext_vtab *pVtab,
const char *zToken,
int nToken
)
static int tokenizeSegment(
sqlite3_tokenizer *pTokenizer,
const char *pSegment, int nSegment,
int inPhrase,
Query *pQuery
)
static int parseQuery(
fulltext_vtab *v,
const char *zInput,
int nInput,
int dfltColumn,
Query *pQuery
)
static int fulltextQuery(
fulltext_vtab *v,
int iColumn,
const char *zInput,
int nInput,
DocList **pResult,
Query *pQuery
)
static int fulltextFilter(
sqlite3_vtab_cursor *pCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static int fulltextEof(sqlite3_vtab_cursor *pCursor)
static int fulltextColumn(sqlite3_vtab_cursor *pCursor,
sqlite3_context *pContext, int idxCol)
static int fulltextRowid(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
static int buildTerms(fulltext_vtab *v, fts1Hash *terms, sqlite_int64 iDocid,
const char *zText, int iColumn)
static int index_insert_term(fulltext_vtab *v, const char *pTerm, int nTerm,
DocList *d)
static int insertTerms(fulltext_vtab *v, fts1Hash *terms, sqlite_int64 iRowid,
sqlite3_value **pValues)
static int deleteTerms(fulltext_vtab *v, fts1Hash *pTerms, sqlite_int64 iRowid)
static int index_insert(fulltext_vtab *v, sqlite3_value *pRequestRowid,
sqlite3_value **pValues,
sqlite_int64 *piRowid, fts1Hash *pTerms)
static int index_delete(fulltext_vtab *v, sqlite_int64 iRow, fts1Hash *pTerms)
static int index_update(fulltext_vtab *v, sqlite_int64 iRow,
sqlite3_value **pValues, fts1Hash *pTerms)
static int fulltextUpdate(sqlite3_vtab *pVtab, int nArg, sqlite3_value **ppArg,
sqlite_int64 *pRowid)
static void snippetFunc(
sqlite3_context *pContext,
int argc,
sqlite3_value **argv
)
static void snippetOffsetsFunc(
sqlite3_context *pContext,
int argc,
sqlite3_value **argv
)
static int fulltextFindFunction(
sqlite3_vtab *pVtab,
int nArg,
const char *zName,
void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
void **ppArg
)
static int fulltextRename(
sqlite3_vtab *pVtab,
const char *zName
)
static const sqlite3_module fulltextModule = ;
int sqlite3Fts1Init(sqlite3 *db)
#if !SQLITE_CORE
__declspec(dllexport)
int sqlite3_fts1_init(sqlite3 *db, char **pzErrMsg,
const sqlite3_api_routines *pApi)
