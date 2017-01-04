#define SQLITE_MAX_PMASZ    (1<<29)
typedef struct MergeEngine MergeEngine;
typedef struct PmaReader PmaReader;
typedef struct PmaWriter PmaWriter;
typedef struct SorterRecord SorterRecord;
typedef struct SortSubtask SortSubtask;
typedef struct SorterFile SorterFile;
typedef struct SorterList SorterList;
typedef struct IncrMerger IncrMerger;
struct SorterFile ;
struct SorterList ;
struct MergeEngine ;
typedef int (*SorterCompare)(SortSubtask*,int*,const void*,int,const void*,int);
struct SortSubtask ;
struct VdbeSorter ;
#define SORTER_TYPE_INTEGER 0x01
#define SORTER_TYPE_TEXT    0x02
struct PmaReader ;
struct IncrMerger ;
struct PmaWriter ;
struct SorterRecord ;
#define SRVAL(p) ((void*)((SorterRecord*)(p) + 1))
#define SORTER_MAX_MERGE_COUNT 16
static int vdbeIncrSwap(IncrMerger*);
static void vdbeIncrFree(IncrMerger *);
static void vdbePmaReaderClear(PmaReader *pReadr)
static int vdbePmaReadBlob(
PmaReader *p,
int nByte,
u8 **ppOut
)
static int vdbePmaReadVarint(PmaReader *p, u64 *pnOut)
static int vdbeSorterMapFile(SortSubtask *pTask, SorterFile *pFile, u8 **pp)
static int vdbePmaReaderSeek(
SortSubtask *pTask,
PmaReader *pReadr,
SorterFile *pFile,
i64 iOff
)
static int vdbePmaReaderNext(PmaReader *pReadr)
static int vdbePmaReaderInit(
SortSubtask *pTask,
SorterFile *pFile,
i64 iStart,
PmaReader *pReadr,
i64 *pnByte
)
static int vdbeSorterCompareTail(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
static int vdbeSorterCompare(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
static int vdbeSorterCompareText(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
static int vdbeSorterCompareInt(
SortSubtask *pTask,
int *pbKey2Cached,
const void *pKey1, int nKey1,
const void *pKey2, int nKey2
)
int sqlite3VdbeSorterInit(
sqlite3 *db,
int nField,
VdbeCursor *pCsr
)
#undef nWorker
static void vdbeSorterRecordFree(sqlite3 *db, SorterRecord *pRecord)
static void vdbeSortSubtaskCleanup(sqlite3 *db, SortSubtask *pTask)
static void vdbeSorterWorkDebug(SortSubtask *pTask, const char *zEvent)
static void vdbeSorterRewindDebug(const char *zEvent)
static void vdbeSorterPopulateDebug(
SortSubtask *pTask,
const char *zEvent
)
static void vdbeSorterBlockDebug(
SortSubtask *pTask,
int bBlocked,
const char *zEvent
)
# define vdbeSorterWorkDebug(x,y)
# define vdbeSorterRewindDebug(y)
# define vdbeSorterPopulateDebug(x,y)
# define vdbeSorterBlockDebug(x,y,z)
#if SQLITE_MAX_WORKER_THREADS>0
static int vdbeSorterJoinThread(SortSubtask *pTask)
static int vdbeSorterCreateThread(
SortSubtask *pTask,
void *(*xTask)(void*),
void *pIn
)
static int vdbeSorterJoinAll(VdbeSorter *pSorter, int rcin)
# define vdbeSorterJoinAll(x,rcin) (rcin)
# define vdbeSorterJoinThread(pTask) SQLITE_OK
static MergeEngine *vdbeMergeEngineNew(int nReader)
static void vdbeMergeEngineFree(MergeEngine *pMerger)
static void vdbeIncrFree(IncrMerger *pIncr)
void sqlite3VdbeSorterReset(sqlite3 *db, VdbeSorter *pSorter)
void sqlite3VdbeSorterClose(sqlite3 *db, VdbeCursor *pCsr)
#if SQLITE_MAX_MMAP_SIZE>0
static void vdbeSorterExtendFile(sqlite3 *db, sqlite3_file *pFd, i64 nByte)
# define vdbeSorterExtendFile(x,y,z)
static int vdbeSorterOpenTempFile(
sqlite3 *db,
i64 nExtend,
sqlite3_file **ppFd
)
static int vdbeSortAllocUnpacked(SortSubtask *pTask)
static void vdbeSorterMerge(
SortSubtask *pTask,
SorterRecord *p1,
SorterRecord *p2,
SorterRecord **ppOut
)
static SorterCompare vdbeSorterGetCompare(VdbeSorter *p)
static int vdbeSorterSort(SortSubtask *pTask, SorterList *pList)
static void vdbePmaWriterInit(
sqlite3_file *pFd,
PmaWriter *p,
int nBuf,
i64 iStart
)
static void vdbePmaWriteBlob(PmaWriter *p, u8 *pData, int nData)
static int vdbePmaWriterFinish(PmaWriter *p, i64 *piEof)
static void vdbePmaWriteVarint(PmaWriter *p, u64 iVal)
static int vdbeSorterListToPMA(SortSubtask *pTask, SorterList *pList)
static int vdbeMergeEngineStep(
MergeEngine *pMerger,
int *pbEof
)
#if SQLITE_MAX_WORKER_THREADS>0
static void *vdbeSorterFlushThread(void *pCtx)
static int vdbeSorterFlushPMA(VdbeSorter *pSorter)
int sqlite3VdbeSorterWrite(
const VdbeCursor *pCsr,
Mem *pVal
)
static int vdbeIncrPopulate(IncrMerger *pIncr)
#if SQLITE_MAX_WORKER_THREADS>0
static void *vdbeIncrPopulateThread(void *pCtx)
static int vdbeIncrBgPopulate(IncrMerger *pIncr)
static int vdbeIncrSwap(IncrMerger *pIncr)
static int vdbeIncrMergerNew(
SortSubtask *pTask,
MergeEngine *pMerger,
IncrMerger **ppOut
)
#if SQLITE_MAX_WORKER_THREADS>0
static void vdbeIncrMergerSetThreads(IncrMerger *pIncr)
static void vdbeMergeEngineCompare(
MergeEngine *pMerger,
int iOut
)
#define INCRINIT_NORMAL 0
#define INCRINIT_TASK   1
#define INCRINIT_ROOT   2
static int vdbePmaReaderIncrInit(PmaReader *pReadr, int eMode);
static int vdbeMergeEngineInit(
SortSubtask *pTask,
MergeEngine *pMerger,
int eMode
)
static int vdbePmaReaderIncrMergeInit(PmaReader *pReadr, int eMode)
#if SQLITE_MAX_WORKER_THREADS>0
static void *vdbePmaReaderBgIncrInit(void *pCtx)
static int vdbePmaReaderIncrInit(PmaReader *pReadr, int eMode)
static int vdbeMergeEngineLevel0(
SortSubtask *pTask,
int nPMA,
i64 *piOffset,
MergeEngine **ppOut
)
static int vdbeSorterTreeDepth(int nPMA)
static int vdbeSorterAddToTree(
SortSubtask *pTask,
int nDepth,
int iSeq,
MergeEngine *pRoot,
MergeEngine *pLeaf
)
static int vdbeSorterMergeTreeBuild(
VdbeSorter *pSorter,
MergeEngine **ppOut
)
static int vdbeSorterSetupMerge(VdbeSorter *pSorter)
int sqlite3VdbeSorterRewind(const VdbeCursor *pCsr, int *pbEof)
int sqlite3VdbeSorterNext(sqlite3 *db, const VdbeCursor *pCsr, int *pbEof)
static void *vdbeSorterRowkey(
const VdbeSorter *pSorter,
int *pnKey
)
int sqlite3VdbeSorterRowkey(const VdbeCursor *pCsr, Mem *pOut)
int sqlite3VdbeSorterCompare(
const VdbeCursor *pCsr,
Mem *pVal,
int nKeyCol,
int *pRes
)
