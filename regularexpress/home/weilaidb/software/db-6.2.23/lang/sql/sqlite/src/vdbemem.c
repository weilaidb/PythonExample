int sqlite3VdbeCheckMemInvariants(Mem *p)
int sqlite3VdbeChangeEncoding(Mem *pMem, int desiredEnc)
SQLITE_NOINLINE int sqlite3VdbeMemGrow(Mem *pMem, int n, int bPreserve)
int sqlite3VdbeMemClearAndResize(Mem *pMem, int szNew)
int sqlite3VdbeMemMakeWriteable(Mem *pMem)
int sqlite3VdbeMemExpandBlob(Mem *pMem)
static SQLITE_NOINLINE int vdbeMemAddTerminator(Mem *pMem)
int sqlite3VdbeMemNulTerminate(Mem *pMem)
int sqlite3VdbeMemStringify(Mem *pMem, u8 enc, u8 bForce)
int sqlite3VdbeMemFinalize(Mem *pMem, FuncDef *pFunc)
static SQLITE_NOINLINE void vdbeMemClearExternAndSetNull(Mem *p)
static SQLITE_NOINLINE void vdbeMemClear(Mem *p)
void sqlite3VdbeMemRelease(Mem *p)
static i64 doubleToInt64(double r)
i64 sqlite3VdbeIntValue(Mem *pMem)
double sqlite3VdbeRealValue(Mem *pMem)
void sqlite3VdbeIntegerAffinity(Mem *pMem)
int sqlite3VdbeMemIntegerify(Mem *pMem)
int sqlite3VdbeMemRealify(Mem *pMem)
int sqlite3VdbeMemNumerify(Mem *pMem)
void sqlite3VdbeMemCast(Mem *pMem, u8 aff, u8 encoding)
void sqlite3VdbeMemInit(Mem *pMem, sqlite3 *db, u16 flags)
void sqlite3VdbeMemSetNull(Mem *pMem)
void sqlite3ValueSetNull(sqlite3_value *p)
void sqlite3VdbeMemSetZeroBlob(Mem *pMem, int n)
static SQLITE_NOINLINE void vdbeReleaseAndSetInt64(Mem *pMem, i64 val)
void sqlite3VdbeMemSetInt64(Mem *pMem, i64 val)
void sqlite3VdbeMemSetDouble(Mem *pMem, double val)
void sqlite3VdbeMemSetRowSet(Mem *pMem)
int sqlite3VdbeMemTooBig(Mem *p)
void sqlite3VdbeMemAboutToChange(Vdbe *pVdbe, Mem *pMem)
#define MEMCELLSIZE offsetof(Mem,zMalloc)
void sqlite3VdbeMemShallowCopy(Mem *pTo, const Mem *pFrom, int srcType)
int sqlite3VdbeMemCopy(Mem *pTo, const Mem *pFrom)
void sqlite3VdbeMemMove(Mem *pTo, Mem *pFrom)
int sqlite3VdbeMemSetStr(
Mem *pMem,
const char *z,
int n,
u8 enc,
void (*xDel)(void*)
)
int sqlite3VdbeMemFromBtree(
BtCursor *pCur,
u32 offset,
u32 amt,
int key,
Mem *pMem
)
static SQLITE_NOINLINE const void *valueToText(sqlite3_value* pVal, u8 enc)
const void *sqlite3ValueText(sqlite3_value* pVal, u8 enc)
sqlite3_value *sqlite3ValueNew(sqlite3 *db)
struct ValueNewStat4Ctx ;
static sqlite3_value *valueNew(sqlite3 *db, struct ValueNewStat4Ctx *p)
static int valueFromFunction(
sqlite3 *db,
Expr *p,
u8 enc,
u8 aff,
sqlite3_value **ppVal,
struct ValueNewStat4Ctx *pCtx
)
# define valueFromFunction(a,b,c,d,e,f) SQLITE_OK
static int valueFromExpr(
sqlite3 *db,
Expr *pExpr,
u8 enc,
u8 affinity,
sqlite3_value **ppVal,
struct ValueNewStat4Ctx *pCtx
)
int sqlite3ValueFromExpr(
sqlite3 *db,
Expr *pExpr,
u8 enc,
u8 affinity,
sqlite3_value **ppVal
)
static void recordFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
void sqlite3AnalyzeFunctions(void)
static int stat4ValueFromExpr(
Parse *pParse,
Expr *pExpr,
u8 affinity,
struct ValueNewStat4Ctx *pAlloc,
sqlite3_value **ppVal
)
int sqlite3Stat4ProbeSetValue(
Parse *pParse,
Index *pIdx,
UnpackedRecord **ppRec,
Expr *pExpr,
u8 affinity,
int iVal,
int *pbOk
)
int sqlite3Stat4ValueFromExpr(
Parse *pParse,
Expr *pExpr,
u8 affinity,
sqlite3_value **ppVal
)
int sqlite3Stat4Column(
sqlite3 *db,
const void *pRec,
int nRec,
int iCol,
sqlite3_value **ppVal
)
void sqlite3Stat4ProbeFree(UnpackedRecord *pRec)
void sqlite3ValueSetStr(
sqlite3_value *v,
int n,
const void *z,
u8 enc,
void (*xDel)(void*)
)
void sqlite3ValueFree(sqlite3_value *v)
int sqlite3ValueBytes(sqlite3_value *pVal, u8 enc)
