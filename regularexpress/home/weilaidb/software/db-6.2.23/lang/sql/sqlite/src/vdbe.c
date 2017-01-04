# define memAboutToChange(P,M) sqlite3VdbeMemAboutToChange(P,M)
# define memAboutToChange(P,M)
int sqlite3_search_count = 0;
int sqlite3_interrupt_count = 0;
int sqlite3_sort_count = 0;
int sqlite3_max_blobsize = 0;
static void updateMaxBlobsize(Mem *p)
int sqlite3_found_count = 0;
#if defined(SQLITE_TEST) && !defined(SQLITE_OMIT_BUILTIN_TEST)
# define UPDATE_MAX_BLOBSIZE(P)  updateMaxBlobsize(P)
# define UPDATE_MAX_BLOBSIZE(P)
#if !defined(SQLITE_VDBE_COVERAGE)
# define VdbeBranchTaken(I,M)
# define VdbeBranchTaken(I,M) vdbeTakeBranch(pOp->iSrcLine,I,M)
static void vdbeTakeBranch(int iSrcLine, u8 I, u8 M)
#define Stringify(P, enc) \
if(((P)->flags&(MEM_Str|MEM_Blob))==0 && sqlite3VdbeMemStringify(P,enc,0)) \
#define Deephemeralize(P) \
if( ((P)->flags&MEM_Ephem)!=0 \
&& sqlite3VdbeMemMakeWriteable(P) )
#define isSorter(x) ((x)->pSorter!=0)
static VdbeCursor *allocateCursor(
Vdbe *p,
int iCur,
int nField,
int iDb,
int isBtreeCursor
)
static void applyNumericAffinity(Mem *pRec, int bTryForInt)
static void applyAffinity(
Mem *pRec,
char affinity,
u8 enc
)
int sqlite3_value_numeric_type(sqlite3_value *pVal)
void sqlite3ValueApplyAffinity(
sqlite3_value *pVal,
u8 affinity,
u8 enc
)
static u16 SQLITE_NOINLINE computeNumericType(Mem *pMem)
static u16 numericType(Mem *pMem)
void sqlite3VdbeMemPrettyPrint(Mem *pMem, char *zBuf)
static void memTracePrint(Mem *p)
static void registerTrace(int iReg, Mem *p)
#  define REGISTER_TRACE(R,M) if(db->flags&SQLITE_VdbeTrace)registerTrace(R,M)
#  define REGISTER_TRACE(R,M)
static int checkSavepointCount(sqlite3 *db)
static Mem *out2Prerelease(Vdbe *p, VdbeOp *pOp)
int sqlite3VdbeExec(
Vdbe *p
)
