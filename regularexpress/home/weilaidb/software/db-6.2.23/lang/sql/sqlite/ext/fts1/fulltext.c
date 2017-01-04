#if !defined(__APPLE__)
SQLITE_EXTENSION_INIT1
#define VARINT_MAX 10
static int putVarint(char *p, sqlite_int64 v)
static int getVarint(const char *p, sqlite_int64 *v)
static int getVarint32(const char *p, int *pi)
typedef enum DocListType  DocListType;
typedef struct DocList  DocList;
static void docListInit(DocList *d, DocListType iType,
const char *pData, int nData)
static DocList *docListNew(DocListType iType)
static void docListDestroy(DocList *d)
static void docListDelete(DocList *d)
static char *docListEnd(DocList *d)
static void appendVarint(DocList *d, sqlite_int64 i)
static void docListAddDocid(DocList *d, sqlite_int64 iDocid)
static void docListAddPos(DocList *d, int iPos)
static void docListAddPosOffset(DocList *d, int iPos,
int iStartOffset, int iEndOffset)
static void docListAddEndPos(DocList *d)
typedef struct DocListReader  DocListReader;
static void readerInit(DocListReader *r, DocList *pDoclist)
static int readerAtEnd(DocListReader *pReader)
static sqlite_int64 peekDocid(DocListReader *pReader)
static sqlite_int64 readDocid(DocListReader *pReader)
static int readPosition(DocListReader *pReader)
static void skipPositionList(DocListReader *pReader)
static void skipDocument(DocListReader *pReader)
static sqlite_int64 firstDocid(DocList *d)
static int docListUpdate(DocList *d, sqlite_int64 iDocid, DocList *pUpdate)
static int docListSplit(DocList *d, DocList *d2)
typedef struct DocListMerge  DocListMerge;
static void mergeInit(DocListMerge *m,
DocList *pIn, int iOffset, DocList *pOut)
static void mergePosList(DocListMerge *m, sqlite_int64 iDocid,
DocListReader *pBlockReader)
static void mergeBlock(DocListMerge *m, DocList *pBlock)
static char *string_dup_n(const char *s, int n)
static char *string_dup(const char *s)
static char *string_format(const char *zFormat, const char *zName)
static int sql_exec(sqlite3 *db, const char *zName, const char *zFormat)
static int sql_prepare(sqlite3 *db, const char *zName, sqlite3_stmt **ppStmt,
const char *zFormat)
#define QUERY_GENERIC 0
#define QUERY_FULLTEXT 1
#define CHUNK_MAX 1024
typedef enum fulltext_statement  fulltext_statement;
static const char *fulltext_zStatement[MAX_STMT] = ;
typedef struct fulltext_vtab  fulltext_vtab;
typedef struct fulltext_cursor  fulltext_cursor;
static struct fulltext_vtab *cursor_vtab(fulltext_cursor *c)
static sqlite3_module fulltextModule;
static int sql_get_statement(fulltext_vtab *v, fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int sql_step_statement(fulltext_vtab *v, fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int sql_single_step_statement(fulltext_vtab *v,
fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int content_insert(fulltext_vtab *v, sqlite3_value *rowid,
const char *zContent, int nContent)
static int content_select(fulltext_vtab *v, sqlite_int64 iRow,
char **pzContent)
static int content_delete(fulltext_vtab *v, sqlite_int64 iRow)
static int term_select(fulltext_vtab *v, const char *zTerm, int nTerm,
sqlite_int64 iFirst,
sqlite_int64 *rowid,
DocList *out)
static int term_chunk_select(fulltext_vtab *v, const char *zTerm, int nTerm,
sqlite_int64 iFirst, sqlite_int64 *piResult)
static int term_insert(fulltext_vtab *v, const char *zTerm, int nTerm,
sqlite_int64 iFirst, DocList *doclist)
static int term_update(fulltext_vtab *v, sqlite_int64 rowid,
DocList *doclist)
static int term_delete(fulltext_vtab *v, sqlite_int64 rowid)
static void fulltext_vtab_destroy(fulltext_vtab *v)
static int fulltextConnect(
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int fulltextCreate(
sqlite3 *db,
void *pAux,
int argc,
const char * const *argv,
sqlite3_vtab **ppVTab,
char **pzErr
)
static int fulltextBestIndex(sqlite3_vtab *pVTab, sqlite3_index_info *pInfo)
static int fulltextDisconnect(sqlite3_vtab *pVTab)
static int fulltextDestroy(sqlite3_vtab *pVTab)
static int fulltextOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static int fulltextClose(sqlite3_vtab_cursor *pCursor)
static int fulltextNext(sqlite3_vtab_cursor *pCursor)
static int term_select_doclist(fulltext_vtab *v, const char *pTerm, int nTerm,
sqlite3_stmt **ppStmt)
static int query_merge(fulltext_vtab *v, sqlite3_stmt **pSelect,
const char *zTerm,
DocList *pIn, int iOffset, DocList *out)
typedef struct QueryTerm  QueryTerm;
typedef struct Query  Query;
static void query_add(Query *q, int is_phrase, const char *zTerm)
static void query_free(Query *q)
static int tokenize_segment(sqlite3_tokenizer *pTokenizer,
const char *zQuery, int in_phrase,
Query *pQuery)
static int parse_query(fulltext_vtab *v, const char *zQuery, Query *pQuery)
static int fulltext_query(fulltext_vtab *v, const char *zQuery,
DocList **pResult)
static int fulltextFilter(sqlite3_vtab_cursor *pCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv)
static int fulltextEof(sqlite3_vtab_cursor *pCursor)
static int fulltextColumn(sqlite3_vtab_cursor *pCursor,
sqlite3_context *pContext, int idxCol)
static int fulltextRowid(sqlite3_vtab_cursor *pCursor, sqlite_int64 *pRowid)
static int build_terms(Hash *terms, sqlite3_tokenizer *pTokenizer,
const char *zText, sqlite_int64 iDocid)
static int index_insert_term(fulltext_vtab *v, const char *zTerm, int nTerm,
sqlite_int64 iDocid, DocList *p)
static int index_insert(fulltext_vtab *v,
sqlite3_value *pRequestRowid, const char *zText,
sqlite_int64 *piRowid)
static int index_delete_term(fulltext_vtab *v, const char *zTerm, int nTerm,
sqlite_int64 iDocid)
static int index_delete(fulltext_vtab *v, sqlite_int64 iRow)
static int fulltextUpdate(sqlite3_vtab *pVtab, int nArg, sqlite3_value **ppArg,
sqlite_int64 *pRowid)
static sqlite3_module fulltextModule = ;
int fulltext_init(sqlite3 *db)
#if !SQLITE_CORE
__declspec(dllexport)
int sqlite3_fulltext_init(sqlite3 *db, char **pzErrMsg,
const sqlite3_api_routines *pApi)
