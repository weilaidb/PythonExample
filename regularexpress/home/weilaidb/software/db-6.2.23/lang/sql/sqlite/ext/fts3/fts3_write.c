#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
#define FTS_MAX_APPENDABLE_HEIGHT 16
#define FTS3_NODE_PADDING (FTS3_VARINT_MAX*2)
int test_fts3_node_chunksize = (4*1024);
int test_fts3_node_chunk_threshold = (4*1024)*4;
# define FTS3_NODE_CHUNKSIZE       test_fts3_node_chunksize
# define FTS3_NODE_CHUNK_THRESHOLD test_fts3_node_chunk_threshold
# define FTS3_NODE_CHUNKSIZE (4*1024)
# define FTS3_NODE_CHUNK_THRESHOLD (FTS3_NODE_CHUNKSIZE*4)
#define FTS_STAT_DOCTOTAL      0
#define FTS_STAT_INCRMERGEHINT 1
#define FTS_STAT_AUTOINCRMERGE 2
static void fts3LogMerge(int nMerge, sqlite3_int64 iAbsLevel)
#define fts3LogMerge(x, y)
typedef struct PendingList PendingList;
typedef struct SegmentNode SegmentNode;
typedef struct SegmentWriter SegmentWriter;
struct PendingList ;
struct Fts3DeferredToken ;
struct Fts3SegReader ;
#define fts3SegReaderIsPending(p) ((p)->ppNextElem!=0)
#define fts3SegReaderIsRootOnly(p) ((p)->rootOnly!=0)
struct SegmentWriter ;
struct SegmentNode ;
#define SQL_DELETE_CONTENT             0
#define SQL_IS_EMPTY                   1
#define SQL_DELETE_ALL_CONTENT         2
#define SQL_DELETE_ALL_SEGMENTS        3
#define SQL_DELETE_ALL_SEGDIR          4
#define SQL_DELETE_ALL_DOCSIZE         5
#define SQL_DELETE_ALL_STAT            6
#define SQL_SELECT_CONTENT_BY_ROWID    7
#define SQL_NEXT_SEGMENT_INDEX         8
#define SQL_INSERT_SEGMENTS            9
#define SQL_NEXT_SEGMENTS_ID          10
#define SQL_INSERT_SEGDIR             11
#define SQL_SELECT_LEVEL              12
#define SQL_SELECT_LEVEL_RANGE        13
#define SQL_SELECT_LEVEL_COUNT        14
#define SQL_SELECT_SEGDIR_MAX_LEVEL   15
#define SQL_DELETE_SEGDIR_LEVEL       16
#define SQL_DELETE_SEGMENTS_RANGE     17
#define SQL_CONTENT_INSERT            18
#define SQL_DELETE_DOCSIZE            19
#define SQL_REPLACE_DOCSIZE           20
#define SQL_SELECT_DOCSIZE            21
#define SQL_SELECT_STAT               22
#define SQL_REPLACE_STAT              23
#define SQL_SELECT_ALL_PREFIX_LEVEL   24
#define SQL_DELETE_ALL_TERMS_SEGDIR   25
#define SQL_DELETE_SEGDIR_RANGE       26
#define SQL_SELECT_ALL_LANGID         27
#define SQL_FIND_MERGE_LEVEL          28
#define SQL_MAX_LEAF_NODE_ESTIMATE    29
#define SQL_DELETE_SEGDIR_ENTRY       30
#define SQL_SHIFT_SEGDIR_ENTRY        31
#define SQL_SELECT_SEGDIR             32
#define SQL_CHOMP_SEGDIR              33
#define SQL_SEGMENT_IS_APPENDABLE     34
#define SQL_SELECT_INDEXES            35
#define SQL_SELECT_MXLEVEL            36
#define SQL_SELECT_LEVEL_RANGE2       37
#define SQL_UPDATE_LEVEL_IDX          38
#define SQL_UPDATE_LEVEL              39
static int fts3SqlStmt(
Fts3Table *p,
int eStmt,
sqlite3_stmt **pp,
sqlite3_value **apVal
)
static int fts3SelectDocsize(
Fts3Table *pTab,
sqlite3_int64 iDocid,
sqlite3_stmt **ppStmt
)
int sqlite3Fts3SelectDoctotal(
Fts3Table *pTab,
sqlite3_stmt **ppStmt
)
int sqlite3Fts3SelectDocsize(
Fts3Table *pTab,
sqlite3_int64 iDocid,
sqlite3_stmt **ppStmt
)
static void fts3SqlExec(
int *pRC,
Fts3Table *p,
int eStmt,
sqlite3_value **apVal
)
static int fts3Writelock(Fts3Table *p)
static sqlite3_int64 getAbsoluteLevel(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel
)
int sqlite3Fts3AllSegdirs(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
sqlite3_stmt **ppStmt
)
static int fts3PendingListAppendVarint(
PendingList **pp,
sqlite3_int64 i
)
static int fts3PendingListAppend(
PendingList **pp,
sqlite3_int64 iDocid,
sqlite3_int64 iCol,
sqlite3_int64 iPos,
int *pRc
)
static void fts3PendingListDelete(PendingList *pList)
static int fts3PendingTermsAddOne(
Fts3Table *p,
int iCol,
int iPos,
Fts3Hash *pHash,
const char *zToken,
int nToken
)
static int fts3PendingTermsAdd(
Fts3Table *p,
int iLangid,
const char *zText,
int iCol,
u32 *pnWord
)
static int fts3PendingTermsDocid(
Fts3Table *p,
int iLangid,
sqlite_int64 iDocid
)
void sqlite3Fts3PendingTermsClear(Fts3Table *p)
static int fts3InsertTerms(
Fts3Table *p,
int iLangid,
sqlite3_value **apVal,
u32 *aSz
)
static int fts3InsertData(
Fts3Table *p,
sqlite3_value **apVal,
sqlite3_int64 *piDocid
)
static int fts3DeleteAll(Fts3Table *p, int bContent)
static int langidFromSelect(Fts3Table *p, sqlite3_stmt *pSelect)
static void fts3DeleteTerms(
int *pRC,
Fts3Table *p,
sqlite3_value *pRowid,
u32 *aSz,
int *pbFound
)
static int fts3SegmentMerge(Fts3Table *, int, int, int);
static int fts3AllocateSegdirIdx(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
int *piIdx
)
int sqlite3Fts3ReadBlock(
Fts3Table *p,
sqlite3_int64 iBlockid,
char **paBlob,
int *pnBlob,
int *pnLoad
)
void sqlite3Fts3SegmentsClose(Fts3Table *p)
static int fts3SegReaderIncrRead(Fts3SegReader *pReader)
static int fts3SegReaderRequire(Fts3SegReader *pReader, char *pFrom, int nByte)
static void fts3SegReaderSetEof(Fts3SegReader *pSeg)
static int fts3SegReaderNext(
Fts3Table *p,
Fts3SegReader *pReader,
int bIncr
)
static int fts3SegReaderFirstDocid(Fts3Table *pTab, Fts3SegReader *pReader)
static int fts3SegReaderNextDocid(
Fts3Table *pTab,
Fts3SegReader *pReader,
char **ppOffsetList,
int *pnOffsetList
)
int sqlite3Fts3MsrOvfl(
Fts3Cursor *pCsr,
Fts3MultiSegReader *pMsr,
int *pnOvfl
)
void sqlite3Fts3SegReaderFree(Fts3SegReader *pReader)
int sqlite3Fts3SegReaderNew(
int iAge,
int bLookup,
sqlite3_int64 iStartLeaf,
sqlite3_int64 iEndLeaf,
sqlite3_int64 iEndBlock,
const char *zRoot,
int nRoot,
Fts3SegReader **ppReader
)
static int SQLITE_CDECL fts3CompareElemByTerm(
const void *lhs,
const void *rhs
)
int sqlite3Fts3SegReaderPending(
Fts3Table *p,
int iIndex,
const char *zTerm,
int nTerm,
int bPrefix,
Fts3SegReader **ppReader
)
static int fts3SegReaderCmp(Fts3SegReader *pLhs, Fts3SegReader *pRhs)
static int fts3SegReaderDoclistCmp(Fts3SegReader *pLhs, Fts3SegReader *pRhs)
static int fts3SegReaderDoclistCmpRev(Fts3SegReader *pLhs, Fts3SegReader *pRhs)
static int fts3SegReaderTermCmp(
Fts3SegReader *pSeg,
const char *zTerm,
int nTerm
)
static void fts3SegReaderSort(
Fts3SegReader **apSegment,
int nSegment,
int nSuspect,
int (*xCmp)(Fts3SegReader *, Fts3SegReader *)
)
static int fts3WriteSegment(
Fts3Table *p,
sqlite3_int64 iBlock,
char *z,
int n
)
int sqlite3Fts3MaxLevel(Fts3Table *p, int *pnMax)
static int fts3WriteSegdir(
Fts3Table *p,
sqlite3_int64 iLevel,
int iIdx,
sqlite3_int64 iStartBlock,
sqlite3_int64 iLeafEndBlock,
sqlite3_int64 iEndBlock,
sqlite3_int64 nLeafData,
char *zRoot,
int nRoot
)
static int fts3PrefixCompress(
const char *zPrev,
int nPrev,
const char *zNext,
int nNext
)
static int fts3NodeAddTerm(
Fts3Table *p,
SegmentNode **ppTree,
int isCopyTerm,
const char *zTerm,
int nTerm
)
static int fts3TreeFinishNode(
SegmentNode *pTree,
int iHeight,
sqlite3_int64 iLeftChild
)
static int fts3NodeWrite(
Fts3Table *p,
SegmentNode *pTree,
int iHeight,
sqlite3_int64 iLeaf,
sqlite3_int64 iFree,
sqlite3_int64 *piLast,
char **paRoot,
int *pnRoot
)
static void fts3NodeFree(SegmentNode *pTree)
static int fts3SegWriterAdd(
Fts3Table *p,
SegmentWriter **ppWriter,
int isCopyTerm,
const char *zTerm,
int nTerm,
const char *aDoclist,
int nDoclist
)
static int fts3SegWriterFlush(
Fts3Table *p,
SegmentWriter *pWriter,
sqlite3_int64 iLevel,
int iIdx
)
static void fts3SegWriterFree(SegmentWriter *pWriter)
static int fts3IsEmpty(Fts3Table *p, sqlite3_value *pRowid, int *pisEmpty)
static int fts3SegmentMaxLevel(
Fts3Table *p,
int iLangid,
int iIndex,
sqlite3_int64 *pnMax
)
static int fts3SegmentIsMaxLevel(Fts3Table *p, i64 iAbsLevel, int *pbMax)
static int fts3DeleteSegment(
Fts3Table *p,
Fts3SegReader *pSeg
)
static int fts3DeleteSegdir(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel,
Fts3SegReader **apSegment,
int nReader
)
static void fts3ColumnFilter(
int iCol,
int bZero,
char **ppList,
int *pnList
)
static int fts3MsrBufferData(
Fts3MultiSegReader *pMsr,
char *pList,
int nList
)
int sqlite3Fts3MsrIncrNext(
Fts3Table *p,
Fts3MultiSegReader *pMsr,
sqlite3_int64 *piDocid,
char **paPoslist,
int *pnPoslist
)
static int fts3SegReaderStart(
Fts3Table *p,
Fts3MultiSegReader *pCsr,
const char *zTerm,
int nTerm
)
int sqlite3Fts3SegReaderStart(
Fts3Table *p,
Fts3MultiSegReader *pCsr,
Fts3SegFilter *pFilter
)
int sqlite3Fts3MsrIncrStart(
Fts3Table *p,
Fts3MultiSegReader *pCsr,
int iCol,
const char *zTerm,
int nTerm
)
int sqlite3Fts3MsrIncrRestart(Fts3MultiSegReader *pCsr)
int sqlite3Fts3SegReaderStep(
Fts3Table *p,
Fts3MultiSegReader *pCsr
)
void sqlite3Fts3SegReaderFinish(
Fts3MultiSegReader *pCsr
)
static void fts3ReadEndBlockField(
sqlite3_stmt *pStmt,
int iCol,
i64 *piEndBlock,
i64 *pnByte
)
static int fts3PromoteSegments(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
sqlite3_int64 nByte
)
static int fts3SegmentMerge(
Fts3Table *p,
int iLangid,
int iIndex,
int iLevel
)
int sqlite3Fts3PendingTermsFlush(Fts3Table *p)
static void fts3EncodeIntArray(
int N,
u32 *a,
char *zBuf,
int *pNBuf
)
static void fts3DecodeIntArray(
int N,
u32 *a,
const char *zBuf,
int nBuf
)
static void fts3InsertDocsize(
int *pRC,
Fts3Table *p,
u32 *aSz
)
static void fts3UpdateDocTotals(
int *pRC,
Fts3Table *p,
u32 *aSzIns,
u32 *aSzDel,
int nChng
)
static int fts3DoOptimize(Fts3Table *p, int bReturnDone)
static int fts3DoRebuild(Fts3Table *p)
static int fts3IncrmergeCsr(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int nSeg,
Fts3MultiSegReader *pCsr
)
typedef struct IncrmergeWriter IncrmergeWriter;
typedef struct NodeWriter NodeWriter;
typedef struct Blob Blob;
typedef struct NodeReader NodeReader;
struct Blob ;
struct NodeWriter ;
struct IncrmergeWriter ;
struct NodeReader ;
static void blobGrowBuffer(Blob *pBlob, int nMin, int *pRc)
static int nodeReaderNext(NodeReader *p)
static void nodeReaderRelease(NodeReader *p)
static int nodeReaderInit(NodeReader *p, const char *aNode, int nNode)
static int fts3IncrmergePush(
Fts3Table *p,
IncrmergeWriter *pWriter,
const char *zTerm,
int nTerm
)
static int fts3AppendToNode(
Blob *pNode,
Blob *pPrev,
const char *zTerm,
int nTerm,
const char *aDoclist,
int nDoclist
)
static int fts3IncrmergeAppend(
Fts3Table *p,
IncrmergeWriter *pWriter,
Fts3MultiSegReader *pCsr
)
static void fts3IncrmergeRelease(
Fts3Table *p,
IncrmergeWriter *pWriter,
int *pRc
)
static int fts3TermCmp(
const char *zLhs, int nLhs,
const char *zRhs, int nRhs
)
static int fts3IsAppendable(Fts3Table *p, sqlite3_int64 iEnd, int *pbRes)
static int fts3IncrmergeLoad(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx,
const char *zKey,
int nKey,
IncrmergeWriter *pWriter
)
static int fts3IncrmergeOutputIdx(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int *piIdx
)
static int fts3IncrmergeWriter(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx,
Fts3MultiSegReader *pCsr,
IncrmergeWriter *pWriter
)
static int fts3RemoveSegdirEntry(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx
)
static int fts3RepackSegdirLevel(
Fts3Table *p,
sqlite3_int64 iAbsLevel
)
static void fts3StartNode(Blob *pNode, int iHeight, sqlite3_int64 iChild)
static int fts3TruncateNode(
const char *aNode,
int nNode,
Blob *pNew,
const char *zTerm,
int nTerm,
sqlite3_int64 *piBlock
)
static int fts3TruncateSegment(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
int iIdx,
const char *zTerm,
int nTerm
)
static int fts3IncrmergeChomp(
Fts3Table *p,
sqlite3_int64 iAbsLevel,
Fts3MultiSegReader *pCsr,
int *pnRem
)
static int fts3IncrmergeHintStore(Fts3Table *p, Blob *pHint)
static int fts3IncrmergeHintLoad(Fts3Table *p, Blob *pHint)
static void fts3IncrmergeHintPush(
Blob *pHint,
i64 iAbsLevel,
int nInput,
int *pRc
)
static int fts3IncrmergeHintPop(Blob *pHint, i64 *piAbsLevel, int *pnInput)
int sqlite3Fts3Incrmerge(Fts3Table *p, int nMerge, int nMin)
static int fts3Getint(const char **pz)
static int fts3DoIncrmerge(
Fts3Table *p,
const char *zParam
)
static int fts3DoAutoincrmerge(
Fts3Table *p,
const char *zParam
)
static u64 fts3ChecksumEntry(
const char *zTerm,
int nTerm,
int iLangid,
int iIndex,
i64 iDocid,
int iCol,
int iPos
)
static u64 fts3ChecksumIndex(
Fts3Table *p,
int iLangid,
int iIndex,
int *pRc
)
static int fts3IntegrityCheck(Fts3Table *p, int *pbOk)
static int fts3DoIntegrityCheck(
Fts3Table *p
)
static int fts3SpecialInsert(Fts3Table *p, sqlite3_value *pVal)
void sqlite3Fts3FreeDeferredDoclists(Fts3Cursor *pCsr)
void sqlite3Fts3FreeDeferredTokens(Fts3Cursor *pCsr)
int sqlite3Fts3CacheDeferredDoclists(Fts3Cursor *pCsr)
int sqlite3Fts3DeferredTokenList(
Fts3DeferredToken *p,
char **ppData,
int *pnData
)
int sqlite3Fts3DeferToken(
Fts3Cursor *pCsr,
Fts3PhraseToken *pToken,
int iCol
)
static int fts3DeleteByRowid(
Fts3Table *p,
sqlite3_value *pRowid,
int *pnChng,
u32 *aSzDel
)
int sqlite3Fts3UpdateMethod(
sqlite3_vtab *pVtab,
int nArg,
sqlite3_value **apVal,
sqlite_int64 *pRowid
)
int sqlite3Fts3Optimize(Fts3Table *p)
