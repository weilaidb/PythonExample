#if (!defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS2)) \
&& !defined(SQLITE_ENABLE_BROKEN_FTS2)
#error fts2 has a design flaw and has been deprecated.
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS2)
#if defined(SQLITE_ENABLE_FTS2) && !defined(SQLITE_CORE)
# define SQLITE_CORE 1
SQLITE_EXTENSION_INIT1
static int safe_isspace(char c)
static int safe_tolower(char c)
static int safe_isalnum(char c)
typedef enum DocListType  DocListType;
# define DL_DEFAULT DL_POSITIONS
enum ;
#define MERGE_COUNT 16
#define CLEAR(b) memset(b, '\0', sizeof(*(b)))
#  define SCRAMBLE(b) memset(b, 0x55, sizeof(*(b)))
#  define SCRAMBLE(b)
#define VARINT_MAX 10
static int putVarint(char *p, sqlite_int64 v)
static int getVarint(const char *p, sqlite_int64 *v)
static int getVarint32(const char *p, int *pi)
typedef struct DataBuffer  DataBuffer;
static void dataBufferInit(DataBuffer *pBuffer, int nCapacity)
static void dataBufferReset(DataBuffer *pBuffer)
static void dataBufferDestroy(DataBuffer *pBuffer)
static void dataBufferSwap(DataBuffer *pBuffer1, DataBuffer *pBuffer2)
static void dataBufferExpand(DataBuffer *pBuffer, int nAddCapacity)
static void dataBufferAppend(DataBuffer *pBuffer,
const char *pSource, int nSource)
static void dataBufferAppend2(DataBuffer *pBuffer,
const char *pSource1, int nSource1,
const char *pSource2, int nSource2)
static void dataBufferReplace(DataBuffer *pBuffer,
const char *pSource, int nSource)
typedef struct StringBuffer  StringBuffer;
static void initStringBuffer(StringBuffer *sb)
static int stringBufferLength(StringBuffer *sb)
static char *stringBufferData(StringBuffer *sb)
static void stringBufferDestroy(StringBuffer *sb)
static void nappend(StringBuffer *sb, const char *zFrom, int nFrom)
static void append(StringBuffer *sb, const char *zFrom)
static void appendList(StringBuffer *sb, int nString, char **azString)
static int endsInWhiteSpace(StringBuffer *p)
static void appendWhiteSpace(StringBuffer *p)
static void trimWhiteSpace(StringBuffer *p)
typedef struct DLReader  DLReader;
static int dlrAtEnd(DLReader *pReader)
static sqlite_int64 dlrDocid(DLReader *pReader)
static const char *dlrDocData(DLReader *pReader)
static int dlrDocDataBytes(DLReader *pReader)
static int dlrAllDataBytes(DLReader *pReader)
static const char *dlrPosData(DLReader *pReader)
static int dlrPosDataLen(DLReader *pReader)
static void dlrStep(DLReader *pReader)
static void dlrInit(DLReader *pReader, DocListType iType,
const char *pData, int nData)
static void dlrDestroy(DLReader *pReader)
static void docListValidate(DocListType iType, const char *pData, int nData,
sqlite_int64 *pLastDocid)
#define ASSERT_VALID_DOCLIST(i, p, n, o) docListValidate(i, p, n, o)
#define ASSERT_VALID_DOCLIST(i, p, n, o) assert( 1 )
typedef struct DLWriter  DLWriter;
static void dlwInit(DLWriter *pWriter, DocListType iType, DataBuffer *b)
static void dlwDestroy(DLWriter *pWriter)
static void dlwAppend(DLWriter *pWriter,
const char *pData, int nData,
sqlite_int64 iFirstDocid, sqlite_int64 iLastDocid)
static void dlwCopy(DLWriter *pWriter, DLReader *pReader)
static void dlwAdd(DLWriter *pWriter, sqlite_int64 iDocid)
typedef struct PLReader  PLReader;
static int plrAtEnd(PLReader *pReader)
static int plrColumn(PLReader *pReader)
static int plrPosition(PLReader *pReader)
static int plrStartOffset(PLReader *pReader)
static int plrEndOffset(PLReader *pReader)
static void plrStep(PLReader *pReader)
static void plrInit(PLReader *pReader, DLReader *pDLReader)
static void plrDestroy(PLReader *pReader)
typedef struct PLWriter  PLWriter;
static void plwAdd(PLWriter *pWriter, int iColumn, int iPos,
int iStartOffset, int iEndOffset)
static void plwCopy(PLWriter *pWriter, PLReader *pReader)
static void plwInit(PLWriter *pWriter, DLWriter *dlw, sqlite_int64 iDocid)
static void plwTerminate(PLWriter *pWriter)
static void plwDestroy(PLWriter *pWriter)
typedef struct DLCollector  DLCollector;
static void dlcAddDoclist(DLCollector *pCollector, DataBuffer *b)
static void dlcNext(DLCollector *pCollector, sqlite_int64 iDocid)
static void dlcAddPos(DLCollector *pCollector, int iColumn, int iPos,
int iStartOffset, int iEndOffset)
static DLCollector *dlcNew(sqlite_int64 iDocid, DocListType iType)
static void dlcDelete(DLCollector *pCollector)
static void docListTrim(DocListType iType, const char *pData, int nData,
int iColumn, DocListType iOutType, DataBuffer *out)
typedef struct OrderedDLReader  OrderedDLReader;
static int orderedDLReaderCmp(OrderedDLReader *r1, OrderedDLReader *r2)
static void orderedDLReaderReorder(OrderedDLReader *p, int n)
static void docListMerge(DataBuffer *out,
DLReader *pReaders, int nReaders)
static int posListCmp(PLReader *pLeft, PLReader *pRight)
static void posListUnion(DLReader *pLeft, DLReader *pRight, DLWriter *pOut)
static void docListUnion(
const char *pLeft, int nLeft,
const char *pRight, int nRight,
DataBuffer *pOut
)
static void posListPhraseMerge(DLReader *pLeft, DLReader *pRight,
DLWriter *pOut)
static void docListPhraseMerge(
const char *pLeft, int nLeft,
const char *pRight, int nRight,
DocListType iType,
DataBuffer *pOut
)
static void docListAndMerge(
const char *pLeft, int nLeft,
const char *pRight, int nRight,
DataBuffer *pOut
)
static void docListOrMerge(
const char *pLeft, int nLeft,
const char *pRight, int nRight,
DataBuffer *pOut
)
static void docListExceptMerge(
const char *pLeft, int nLeft,
const char *pRight, int nRight,
DataBuffer *pOut
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
typedef enum fulltext_statement  fulltext_statement;
static const char *const fulltext_zStatement[MAX_STMT] = ;
struct fulltext_vtab ;
typedef struct fulltext_cursor  fulltext_cursor;
static struct fulltext_vtab *cursor_vtab(fulltext_cursor *c)
static const sqlite3_module fts2Module;
static const char *contentInsertStatement(fulltext_vtab *v)
static const char *contentUpdateStatement(fulltext_vtab *v)
static int sql_get_statement(fulltext_vtab *v, fulltext_statement iStmt,
sqlite3_stmt **ppStmt)
static int sql_single_step(sqlite3_stmt *s)
static int sql_get_leaf_statement(fulltext_vtab *v, int idx,
sqlite3_stmt **ppStmt)
static int content_insert(fulltext_vtab *v, sqlite3_value *rowid,
sqlite3_value **pValues)
static int content_update(fulltext_vtab *v, sqlite3_value **pValues,
sqlite_int64 iRowid)
static void freeStringArray(int nString, const char **pString)
static int content_select(fulltext_vtab *v, sqlite_int64 iRow,
const char ***pValues)
static int content_delete(fulltext_vtab *v, sqlite_int64 iRow)
static int content_exists(fulltext_vtab *v)
static int block_insert(fulltext_vtab *v, const char *pData, int nData,
sqlite_int64 *piBlockid)
static int block_delete(fulltext_vtab *v,
sqlite_int64 iStartBlockid, sqlite_int64 iEndBlockid)
static int segdir_max_index(fulltext_vtab *v, int iLevel, int *pidx)
static int segdir_set(fulltext_vtab *v, int iLevel, int idx,
sqlite_int64 iStartBlockid,
sqlite_int64 iLeavesEndBlockid,
sqlite_int64 iEndBlockid,
const char *pRootData, int nRootData)
static int segdir_span(fulltext_vtab *v, int iLevel,
sqlite_int64 *piStartBlockid,
sqlite_int64 *piEndBlockid)
static int segdir_delete(fulltext_vtab *v, int iLevel)
static int segdir_delete_all(fulltext_vtab *v)
static int segdir_count(fulltext_vtab *v, int *pnSegments, int *piMaxLevel)
static int clearPendingTerms(fulltext_vtab *v);
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
fts2Hash *pHash,
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
#define FTS2_ROTOR_SZ   (32)
#define FTS2_ROTOR_MASK (FTS2_ROTOR_SZ-1)
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
static int termSelect(fulltext_vtab *v, int iColumn,
const char *pTerm, int nTerm, int isPrefix,
DocListType iType, DataBuffer *out);
static int docListOfTerm(
fulltext_vtab *v,
int iColumn,
QueryTerm *pQTerm,
DataBuffer *pResult
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
static int flushPendingTerms(fulltext_vtab *v);
static int fulltextQuery(
fulltext_vtab *v,
int iColumn,
const char *zInput,
int nInput,
DataBuffer *pResult,
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
static int buildTerms(fulltext_vtab *v, sqlite_int64 iDocid,
const char *zText, int iColumn)
static int insertTerms(fulltext_vtab *v, sqlite_int64 iRowid,
sqlite3_value **pValues)
static int deleteTerms(fulltext_vtab *v, sqlite_int64 iRowid)
static int initPendingTerms(fulltext_vtab *v, sqlite_int64 iDocid);
static int index_insert(fulltext_vtab *v, sqlite3_value *pRequestRowid,
sqlite3_value **pValues, sqlite_int64 *piRowid)
static int index_delete(fulltext_vtab *v, sqlite_int64 iRow)
static int index_update(fulltext_vtab *v, sqlite_int64 iRow,
sqlite3_value **pValues)
#define INTERIOR_MAX 2048
#define INTERIOR_MIN_TERMS 7
#if INTERIOR_MIN_TERMS<1
# error INTERIOR_MIN_TERMS must be greater than 0.
#define ROOT_MAX 1024
#if ROOT_MAX<VARINT_MAX*2
# error ROOT_MAX must have enough space for a header.
typedef struct InteriorBlock  InteriorBlock;
static InteriorBlock *interiorBlockNew(int iHeight, sqlite_int64 iChildBlock,
const char *pTerm, int nTerm)
static void interiorBlockValidate(InteriorBlock *pBlock)
#define ASSERT_VALID_INTERIOR_BLOCK(x) interiorBlockValidate(x)
#define ASSERT_VALID_INTERIOR_BLOCK(x) assert( 1 )
typedef struct InteriorWriter  InteriorWriter;
static void interiorWriterInit(int iHeight, const char *pTerm, int nTerm,
sqlite_int64 iChildBlock,
InteriorWriter *pWriter)
static void interiorWriterAppend(InteriorWriter *pWriter,
const char *pTerm, int nTerm,
sqlite_int64 iChildBlock)
static int interiorWriterDestroy(InteriorWriter *pWriter)
static int interiorWriterRootInfo(fulltext_vtab *v, InteriorWriter *pWriter,
char **ppRootInfo, int *pnRootInfo,
sqlite_int64 *piEndBlockid)
typedef struct InteriorReader  InteriorReader;
static void interiorReaderDestroy(InteriorReader *pReader)
static void interiorReaderInit(const char *pData, int nData,
InteriorReader *pReader)
static int interiorReaderAtEnd(InteriorReader *pReader)
static sqlite_int64 interiorReaderCurrentBlockid(InteriorReader *pReader)
static int interiorReaderTermBytes(InteriorReader *pReader)
static const char *interiorReaderTerm(InteriorReader *pReader)
static void interiorReaderStep(InteriorReader *pReader)
static int interiorReaderTermCmp(InteriorReader *pReader,
const char *pTerm, int nTerm, int isPrefix)
#define STANDALONE_MIN 1024
#define LEAF_MAX 2048
typedef struct LeafWriter  LeafWriter;
static void leafWriterInit(int iLevel, int idx, LeafWriter *pWriter)
static void leafNodeValidate(const char *pData, int nData)
#define ASSERT_VALID_LEAF_NODE(p, n) leafNodeValidate(p, n)
#define ASSERT_VALID_LEAF_NODE(p, n) assert( 1 )
static int leafWriterInternalFlush(fulltext_vtab *v, LeafWriter *pWriter,
int iData, int nData)
static int leafWriterFlush(fulltext_vtab *v, LeafWriter *pWriter)
static int leafWriterRootInfo(fulltext_vtab *v, LeafWriter *pWriter,
char **ppRootInfo, int *pnRootInfo,
sqlite_int64 *piEndBlockid)
static int leafWriterFinalize(fulltext_vtab *v, LeafWriter *pWriter)
static void leafWriterDestroy(LeafWriter *pWriter)
static int leafWriterEncodeTerm(LeafWriter *pWriter,
const char *pTerm, int nTerm)
static int leafWriterInlineFlush(fulltext_vtab *v, LeafWriter *pWriter,
const char *pTerm, int nTerm,
int iDoclistData)
static int leafWriterStepMerge(fulltext_vtab *v, LeafWriter *pWriter,
const char *pTerm, int nTerm,
DLReader *pReaders, int nReaders)
static int leafWriterStep(fulltext_vtab *v, LeafWriter *pWriter,
const char *pTerm, int nTerm,
const char *pData, int nData)
typedef struct LeafReader  LeafReader;
static void leafReaderDestroy(LeafReader *pReader)
static int leafReaderAtEnd(LeafReader *pReader)
static int leafReaderTermBytes(LeafReader *pReader)
static const char *leafReaderTerm(LeafReader *pReader)
static int leafReaderDataBytes(LeafReader *pReader)
static const char *leafReaderData(LeafReader *pReader)
static void leafReaderInit(const char *pData, int nData,
LeafReader *pReader)
static void leafReaderStep(LeafReader *pReader)
static int leafReaderTermCmp(LeafReader *pReader,
const char *pTerm, int nTerm, int isPrefix)
typedef struct LeavesReader  LeavesReader;
static int leavesReaderTermBytes(LeavesReader *pReader)
static const char *leavesReaderTerm(LeavesReader *pReader)
static int leavesReaderDataBytes(LeavesReader *pReader)
static const char *leavesReaderData(LeavesReader *pReader)
static int leavesReaderAtEnd(LeavesReader *pReader)
static int leavesReaderReset(LeavesReader *pReader)
static void leavesReaderDestroy(LeavesReader *pReader)
static int leavesReaderInit(fulltext_vtab *v,
int idx,
sqlite_int64 iStartBlockid,
sqlite_int64 iEndBlockid,
const char *pRootData, int nRootData,
LeavesReader *pReader)
static int leavesReaderStep(fulltext_vtab *v, LeavesReader *pReader)
static int leavesReaderTermCmp(LeavesReader *lr1, LeavesReader *lr2)
static int leavesReaderCmp(LeavesReader *lr1, LeavesReader *lr2)
static void leavesReaderReorder(LeavesReader *pLr, int nLr)
static int leavesReadersInit(fulltext_vtab *v, int iLevel,
LeavesReader *pReaders, int *piReaders)
static int leavesReadersMerge(fulltext_vtab *v,
LeavesReader *pReaders, int nReaders,
LeafWriter *pWriter)
static int segmentMerge(fulltext_vtab *v, int iLevel);
static int segdirNextIndex(fulltext_vtab *v, int iLevel, int *pidx)
static int segmentMerge(fulltext_vtab *v, int iLevel)
static void docListAccumulateUnion(DataBuffer *acc,
const char *pData, int nData)
static int loadSegmentLeavesInt(fulltext_vtab *v, LeavesReader *pReader,
const char *pTerm, int nTerm, int isPrefix,
DataBuffer *out)
static int loadSegmentLeaf(fulltext_vtab *v, const char *pData, int nData,
const char *pTerm, int nTerm, int isPrefix,
DataBuffer *out)
static int loadSegmentLeaves(fulltext_vtab *v,
sqlite_int64 iStartLeaf, sqlite_int64 iEndLeaf,
const char *pTerm, int nTerm, int isPrefix,
DataBuffer *out)
static void getChildrenContaining(const char *pData, int nData,
const char *pTerm, int nTerm, int isPrefix,
sqlite_int64 *piStartChild,
sqlite_int64 *piEndChild)
static int loadAndGetChildrenContaining(
fulltext_vtab *v,
sqlite_int64 iBlockid,
const char *pTerm, int nTerm, int isPrefix,
sqlite_int64 *piStartChild, sqlite_int64 *piEndChild
)
static int loadSegmentInt(fulltext_vtab *v, const char *pData, int nData,
sqlite_int64 iLeavesEnd,
const char *pTerm, int nTerm, int isPrefix,
DataBuffer *out)
static int loadSegment(fulltext_vtab *v, const char *pData, int nData,
sqlite_int64 iLeavesEnd,
const char *pTerm, int nTerm, int isPrefix,
DataBuffer *out)
static int termSelect(fulltext_vtab *v, int iColumn,
const char *pTerm, int nTerm, int isPrefix,
DocListType iType, DataBuffer *out)
typedef struct TermData  TermData;
static int termDataCmp(const void *av, const void *bv)
static int writeZeroSegment(fulltext_vtab *v, fts2Hash *pTerms)
static int clearPendingTerms(fulltext_vtab *v)
static int flushPendingTerms(fulltext_vtab *v)
static int initPendingTerms(fulltext_vtab *v, sqlite_int64 iDocid)
static int fulltextUpdate(sqlite3_vtab *pVtab, int nArg, sqlite3_value **ppArg,
sqlite_int64 *pRowid)
static int fulltextSync(sqlite3_vtab *pVtab)
static int fulltextBegin(sqlite3_vtab *pVtab)
static int fulltextCommit(sqlite3_vtab *pVtab)
static int fulltextRollback(sqlite3_vtab *pVtab)
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
typedef struct OptLeavesReader  OptLeavesReader;
static int optLeavesReaderAtEnd(OptLeavesReader *pReader)
static int optLeavesReaderTermBytes(OptLeavesReader *pReader)
static const char *optLeavesReaderData(OptLeavesReader *pReader)
static int optLeavesReaderDataBytes(OptLeavesReader *pReader)
static const char *optLeavesReaderTerm(OptLeavesReader *pReader)
static int optLeavesReaderStep(fulltext_vtab *v, OptLeavesReader *pReader)
static int optLeavesReaderTermCmp(OptLeavesReader *lr1, OptLeavesReader *lr2)
static int optLeavesReaderCmp(OptLeavesReader *lr1, OptLeavesReader *lr2)
static void optLeavesReaderReorder(OptLeavesReader *pLr, int nLr)
static int optimizeInternal(fulltext_vtab *v,
OptLeavesReader *readers, int nReaders,
LeafWriter *pWriter)
static void optimizeFunc(sqlite3_context *pContext,
int argc, sqlite3_value **argv)
static void generateError(sqlite3_context *pContext,
const char *prefix, const char *msg)
static int collectSegmentTerms(fulltext_vtab *v, sqlite3_stmt *s,
fts2Hash *pTerms)
static int generateTermsResult(sqlite3_context *pContext, fts2Hash *pTerms)
static void dumpTermsFunc(
sqlite3_context *pContext,
int argc, sqlite3_value **argv
)
static void createDoclistResult(sqlite3_context *pContext,
const char *pData, int nData)
static void dumpDoclistFunc(
sqlite3_context *pContext,
int argc, sqlite3_value **argv
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
static const sqlite3_module fts2Module = ;
static void hashDestroy(void *p)
void sqlite3Fts2SimpleTokenizerModule(sqlite3_tokenizer_module const**ppModule);
void sqlite3Fts2PorterTokenizerModule(sqlite3_tokenizer_module const**ppModule);
void sqlite3Fts2IcuTokenizerModule(sqlite3_tokenizer_module const**ppModule);
int sqlite3Fts2InitHashTable(sqlite3 *, fts2Hash *, const char *);
int sqlite3Fts2Init(sqlite3 *db)
#if !SQLITE_CORE
__declspec(dllexport)
int sqlite3_fts2_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
