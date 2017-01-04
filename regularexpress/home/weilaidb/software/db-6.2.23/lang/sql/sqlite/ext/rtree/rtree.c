#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_RTREE)
SQLITE_EXTENSION_INIT1
typedef sqlite3_int64 i64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
# define UNUSED_PARAMETER(x) (void)(x)
typedef struct Rtree Rtree;
typedef struct RtreeCursor RtreeCursor;
typedef struct RtreeNode RtreeNode;
typedef struct RtreeCell RtreeCell;
typedef struct RtreeConstraint RtreeConstraint;
typedef struct RtreeMatchArg RtreeMatchArg;
typedef struct RtreeGeomCallback RtreeGeomCallback;
typedef union RtreeCoord RtreeCoord;
typedef struct RtreeSearchPoint RtreeSearchPoint;
#define RTREE_MAX_DIMENSIONS 5
#define HASHSIZE 97
#define RTREE_DEFAULT_ROWEST 1048576
#define RTREE_MIN_ROWEST         100
struct Rtree ;
#define RTREE_COORD_REAL32 0
#define RTREE_COORD_INT32  1
typedef sqlite3_int64 RtreeDValue;
typedef int RtreeValue;
# define RTREE_ZERO 0
typedef double RtreeDValue;
typedef float RtreeValue;
# define RTREE_ZERO 0.0
struct RtreeSearchPoint ;
#define RTREE_MINCELLS(p) ((((p)->iNodeSize-4)/(p)->nBytesPerCell)/3)
#define RTREE_REINSERT(p) RTREE_MINCELLS(p)
#define RTREE_MAXCELLS 51
#define RTREE_MAX_DEPTH 40
#define RTREE_CACHE_SZ  5
struct RtreeCursor ;
#define RTREE_OF_CURSOR(X)   ((Rtree*)((X)->base.pVtab))
union RtreeCoord ;
# define DCOORD(coord) ((RtreeDValue)coord.i)
# define DCOORD(coord) (                           \
(pRtree->eCoordType==RTREE_COORD_REAL32) ?      \
((double)coord.f) :                           \
((double)coord.i)                             \
)
struct RtreeConstraint ;
#define RTREE_EQ    0x41
#define RTREE_LE    0x42
#define RTREE_LT    0x43
#define RTREE_GE    0x44
#define RTREE_GT    0x45
#define RTREE_MATCH 0x46
#define RTREE_QUERY 0x47
struct RtreeNode ;
#define NCELL(pNode) readInt16(&(pNode)->zData[2])
struct RtreeCell ;
struct RtreeGeomCallback ;
#define RTREE_GEOMETRY_MAGIC 0x891245AB
struct RtreeMatchArg ;
# define MAX(x,y) ((x) < (y) ? (y) : (x))
# define MIN(x,y) ((x) > (y) ? (y) : (x))
static int readInt16(u8 *p)
static void readCoord(u8 *p, RtreeCoord *pCoord)
static i64 readInt64(u8 *p)
static int writeInt16(u8 *p, int i)
static int writeCoord(u8 *p, RtreeCoord *pCoord)
static int writeInt64(u8 *p, i64 i)
static void nodeReference(RtreeNode *p)
static void nodeZero(Rtree *pRtree, RtreeNode *p)
static int nodeHash(i64 iNode)
static RtreeNode *nodeHashLookup(Rtree *pRtree, i64 iNode)
static void nodeHashInsert(Rtree *pRtree, RtreeNode *pNode)
static void nodeHashDelete(Rtree *pRtree, RtreeNode *pNode)
static RtreeNode *nodeNew(Rtree *pRtree, RtreeNode *pParent)
static int nodeAcquire(
Rtree *pRtree,
i64 iNode,
RtreeNode *pParent,
RtreeNode **ppNode
)
static void nodeOverwriteCell(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iCell
)
static void nodeDeleteCell(Rtree *pRtree, RtreeNode *pNode, int iCell)
static int nodeInsertCell(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell
)
static int nodeWrite(Rtree *pRtree, RtreeNode *pNode)
static int nodeRelease(Rtree *pRtree, RtreeNode *pNode)
static i64 nodeGetRowid(
Rtree *pRtree,
RtreeNode *pNode,
int iCell
)
static void nodeGetCoord(
Rtree *pRtree,
RtreeNode *pNode,
int iCell,
int iCoord,
RtreeCoord *pCoord
)
static void nodeGetCell(
Rtree *pRtree,
RtreeNode *pNode,
int iCell,
RtreeCell *pCell
)
static int rtreeInit(
sqlite3 *, void *, int, const char *const*, sqlite3_vtab **, char **, int
);
static int rtreeCreate(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static int rtreeConnect(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr
)
static void rtreeReference(Rtree *pRtree)
static void rtreeRelease(Rtree *pRtree)
static int rtreeDisconnect(sqlite3_vtab *pVtab)
static int rtreeDestroy(sqlite3_vtab *pVtab)
static int rtreeOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor)
static void freeCursorConstraints(RtreeCursor *pCsr)
static int rtreeClose(sqlite3_vtab_cursor *cur)
static int rtreeEof(sqlite3_vtab_cursor *cur)
#if defined(SQLITE_BYTEORDER) && SQLITE_BYTEORDER==1234
#define RTREE_DECODE_COORD(eInt, a, r)
#elif defined(SQLITE_BYTEORDER) && SQLITE_BYTEORDER==4321
#define RTREE_DECODE_COORD(eInt, a, r)
#define RTREE_DECODE_COORD(eInt, a, r)
static int rtreeCallbackConstraint(
RtreeConstraint *pConstraint,
int eInt,
u8 *pCellData,
RtreeSearchPoint *pSearch,
sqlite3_rtree_dbl *prScore,
int *peWithin
)
static void rtreeNonleafConstraint(
RtreeConstraint *p,
int eInt,
u8 *pCellData,
int *peWithin
)
static void rtreeLeafConstraint(
RtreeConstraint *p,
int eInt,
u8 *pCellData,
int *peWithin
)
static int nodeRowidIndex(
Rtree *pRtree,
RtreeNode *pNode,
i64 iRowid,
int *piIndex
)
static int nodeParentIndex(Rtree *pRtree, RtreeNode *pNode, int *piIndex)
static int rtreeSearchPointCompare(
const RtreeSearchPoint *pA,
const RtreeSearchPoint *pB
)
static void rtreeSearchPointSwap(RtreeCursor *p, int i, int j)
static RtreeSearchPoint *rtreeSearchPointFirst(RtreeCursor *pCur)
static RtreeNode *rtreeNodeOfFirstSearchPoint(RtreeCursor *pCur, int *pRC)
static RtreeSearchPoint *rtreeEnqueue(
RtreeCursor *pCur,
RtreeDValue rScore,
u8 iLevel
)
static RtreeSearchPoint *rtreeSearchPointNew(
RtreeCursor *pCur,
RtreeDValue rScore,
u8 iLevel
)
static void rtreeSearchPointPop(RtreeCursor *p)
static int rtreeStepToLeaf(RtreeCursor *pCur)
static int rtreeNext(sqlite3_vtab_cursor *pVtabCursor)
static int rtreeRowid(sqlite3_vtab_cursor *pVtabCursor, sqlite_int64 *pRowid)
static int rtreeColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i)
static int findLeafNode(
Rtree *pRtree,
i64 iRowid,
RtreeNode **ppLeaf,
sqlite3_int64 *piNode
)
static int deserializeGeometry(sqlite3_value *pValue, RtreeConstraint *pCons)
static int rtreeFilter(
sqlite3_vtab_cursor *pVtabCursor,
int idxNum, const char *idxStr,
int argc, sqlite3_value **argv
)
static void setEstimatedRows(sqlite3_index_info *pIdxInfo, i64 nRow)
static int rtreeBestIndex(sqlite3_vtab *tab, sqlite3_index_info *pIdxInfo)
static RtreeDValue cellArea(Rtree *pRtree, RtreeCell *p)
static RtreeDValue cellMargin(Rtree *pRtree, RtreeCell *p)
static void cellUnion(Rtree *pRtree, RtreeCell *p1, RtreeCell *p2)
static int cellContains(Rtree *pRtree, RtreeCell *p1, RtreeCell *p2)
static RtreeDValue cellGrowth(Rtree *pRtree, RtreeCell *p, RtreeCell *pCell)
static RtreeDValue cellOverlap(
Rtree *pRtree,
RtreeCell *p,
RtreeCell *aCell,
int nCell
)
static int ChooseLeaf(
Rtree *pRtree,
RtreeCell *pCell,
int iHeight,
RtreeNode **ppLeaf
)
static int AdjustTree(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell
)
static int rowidWrite(Rtree *pRtree, sqlite3_int64 iRowid, sqlite3_int64 iNode)
static int parentWrite(Rtree *pRtree, sqlite3_int64 iNode, sqlite3_int64 iPar)
static int rtreeInsertCell(Rtree *, RtreeNode *, RtreeCell *, int);
static void SortByDistance(
int *aIdx,
int nIdx,
RtreeDValue *aDistance,
int *aSpare
)
static void SortByDimension(
Rtree *pRtree,
int *aIdx,
int nIdx,
int iDim,
RtreeCell *aCell,
int *aSpare
)
static int splitNodeStartree(
Rtree *pRtree,
RtreeCell *aCell,
int nCell,
RtreeNode *pLeft,
RtreeNode *pRight,
RtreeCell *pBboxLeft,
RtreeCell *pBboxRight
)
static int updateMapping(
Rtree *pRtree,
i64 iRowid,
RtreeNode *pNode,
int iHeight
)
static int SplitNode(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iHeight
)
static int fixLeafParent(Rtree *pRtree, RtreeNode *pLeaf)
static int deleteCell(Rtree *, RtreeNode *, int, int);
static int removeNode(Rtree *pRtree, RtreeNode *pNode, int iHeight)
static int fixBoundingBox(Rtree *pRtree, RtreeNode *pNode)
static int deleteCell(Rtree *pRtree, RtreeNode *pNode, int iCell, int iHeight)
static int Reinsert(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iHeight
)
static int rtreeInsertCell(
Rtree *pRtree,
RtreeNode *pNode,
RtreeCell *pCell,
int iHeight
)
static int reinsertNodeContent(Rtree *pRtree, RtreeNode *pNode)
static int newRowid(Rtree *pRtree, i64 *piRowid)
static int rtreeDeleteRowid(Rtree *pRtree, sqlite3_int64 iDelete)
#define RNDTOWARDS  (1.0 - 1.0/8388608.0)
#define RNDAWAY     (1.0 + 1.0/8388608.0)
#if !defined(SQLITE_RTREE_INT_ONLY)
static RtreeValue rtreeValueDown(sqlite3_value *v)
static RtreeValue rtreeValueUp(sqlite3_value *v)
static int rtreeUpdate(
sqlite3_vtab *pVtab,
int nData,
sqlite3_value **azData,
sqlite_int64 *pRowid
)
static int rtreeRename(sqlite3_vtab *pVtab, const char *zNewName)
static int rtreeQueryStat1(sqlite3 *db, Rtree *pRtree)
static sqlite3_module rtreeModule = ;
static int rtreeSqlInit(
Rtree *pRtree,
sqlite3 *db,
const char *zDb,
const char *zPrefix,
int isCreate
)
static int getIntFromStmt(sqlite3 *db, const char *zSql, int *piVal)
static int getNodeSize(
sqlite3 *db,
Rtree *pRtree,
int isCreate,
char **pzErr
)
static int rtreeInit(
sqlite3 *db,
void *pAux,
int argc, const char *const*argv,
sqlite3_vtab **ppVtab,
char **pzErr,
int isCreate
)
static void rtreenode(sqlite3_context *ctx, int nArg, sqlite3_value **apArg)
static void rtreedepth(sqlite3_context *ctx, int nArg, sqlite3_value **apArg)
int sqlite3RtreeInit(sqlite3 *db)
static void rtreeFreeCallback(void *p)
static void geomCallback(sqlite3_context *ctx, int nArg, sqlite3_value **aArg)
int sqlite3_rtree_geometry_callback(
sqlite3 *db,
const char *zGeom,
int (*xGeom)(sqlite3_rtree_geometry*,int,RtreeDValue*,int*),
void *pContext
)
int sqlite3_rtree_query_callback(
sqlite3 *db,
const char *zQueryFunc,
int (*xQueryFunc)(sqlite3_rtree_query_info*),
void *pContext,
void (*xDestructor)(void*)
)
#if !SQLITE_CORE
__declspec(dllexport)
int sqlite3_rtree_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
