Vdbe *sqlite3VdbeCreate(Parse *pParse)
void sqlite3VdbeSetSql(Vdbe *p, const char *z, int n, int isPrepareV2)
const char *sqlite3_sql(sqlite3_stmt *pStmt)
void sqlite3VdbeSwap(Vdbe *pA, Vdbe *pB)
static int growOpArray(Vdbe *v, int nOp)
static void test_addop_breakpoint(void)
int sqlite3VdbeAddOp3(Vdbe *p, int op, int p1, int p2, int p3)
int sqlite3VdbeAddOp0(Vdbe *p, int op)
int sqlite3VdbeAddOp1(Vdbe *p, int op, int p1)
int sqlite3VdbeAddOp2(Vdbe *p, int op, int p1, int p2)
int sqlite3VdbeAddOp4(
Vdbe *p,
int op,
int p1,
int p2,
int p3,
const char *zP4,
int p4type
)
void sqlite3VdbeAddParseSchemaOp(Vdbe *p, int iDb, char *zWhere)
int sqlite3VdbeAddOp4Int(
Vdbe *p,
int op,
int p1,
int p2,
int p3,
int p4
)
int sqlite3VdbeMakeLabel(Vdbe *v)
void sqlite3VdbeResolveLabel(Vdbe *v, int x)
void sqlite3VdbeRunOnlyOnce(Vdbe *p)
typedef struct VdbeOpIter VdbeOpIter;
struct VdbeOpIter ;
static Op *opIterNext(VdbeOpIter *p)
int sqlite3VdbeAssertMayAbort(Vdbe *v, int mayAbort)
static void resolveP2Values(Vdbe *p, int *pMaxFuncArgs)
int sqlite3VdbeCurrentAddr(Vdbe *p)
VdbeOp *sqlite3VdbeTakeOpArray(Vdbe *p, int *pnOp, int *pnMaxArg)
int sqlite3VdbeAddOpList(Vdbe *p, int nOp, VdbeOpList const *aOp, int iLineno)
#if defined(SQLITE_ENABLE_STMT_SCANSTATUS)
void sqlite3VdbeScanStatus(
Vdbe *p,
int addrExplain,
int addrLoop,
int addrVisit,
LogEst nEst,
const char *zName
)
void sqlite3VdbeChangeP1(Vdbe *p, u32 addr, int val)
void sqlite3VdbeChangeP2(Vdbe *p, u32 addr, int val)
void sqlite3VdbeChangeP3(Vdbe *p, u32 addr, int val)
void sqlite3VdbeChangeP5(Vdbe *p, u8 val)
void sqlite3VdbeJumpHere(Vdbe *p, int addr)
static void freeEphemeralFunction(sqlite3 *db, FuncDef *pDef)
static void vdbeFreeOpArray(sqlite3 *, Op *, int);
static void freeP4(sqlite3 *db, int p4type, void *p4)
static void vdbeFreeOpArray(sqlite3 *db, Op *aOp, int nOp)
void sqlite3VdbeLinkSubProgram(Vdbe *pVdbe, SubProgram *p)
void sqlite3VdbeChangeToNoop(Vdbe *p, int addr)
int sqlite3VdbeDeletePriorOpcode(Vdbe *p, u8 op)
void sqlite3VdbeChangeP4(Vdbe *p, int addr, const char *zP4, int n)
void sqlite3VdbeSetP4KeyInfo(Parse *pParse, Index *pIdx)
static void vdbeVComment(Vdbe *p, const char *zFormat, va_list ap)
void sqlite3VdbeComment(Vdbe *p, const char *zFormat, ...)
void sqlite3VdbeNoopComment(Vdbe *p, const char *zFormat, ...)
void sqlite3VdbeSetLineNumber(Vdbe *v, int iLine)
VdbeOp *sqlite3VdbeGetOp(Vdbe *p, int addr)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS)
static int translateP(char c, const Op *pOp)
static int displayComment(
const Op *pOp,
const char *zP4,
char *zTemp,
int nTemp
)
#if !defined(SQLITE_OMIT_EXPLAIN) || !defined(NDEBUG) \
|| defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
static char *displayP4(Op *pOp, char *zTemp, int nTemp)
void sqlite3VdbeUsesBtree(Vdbe *p, int i)
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE>0
void sqlite3VdbeEnter(Vdbe *p)
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE>0
void sqlite3VdbeLeave(Vdbe *p)
#if defined(VDBE_PROFILE) || defined(SQLITE_DEBUG)
void sqlite3VdbePrintOp(FILE *pOut, int pc, Op *pOp)
static void releaseMemArray(Mem *p, int N)
void sqlite3VdbeFrameDelete(VdbeFrame *p)
int sqlite3VdbeList(
Vdbe *p
)
void sqlite3VdbePrintSql(Vdbe *p)
#if !defined(SQLITE_OMIT_TRACE) && defined(SQLITE_ENABLE_IOTRACE)
void sqlite3VdbeIOTraceSql(Vdbe *p)
static void *allocSpace(
void *pBuf,
int nByte,
u8 **ppFrom,
u8 *pEnd,
int *pnByte
)
void sqlite3VdbeRewind(Vdbe *p)
void sqlite3VdbeMakeReady(
Vdbe *p,
Parse *pParse
)
void sqlite3VdbeFreeCursor(Vdbe *p, VdbeCursor *pCx)
static void closeCursorsInFrame(Vdbe *p)
int sqlite3VdbeFrameRestore(VdbeFrame *pFrame)
static void closeAllCursors(Vdbe *p)
static void Cleanup(Vdbe *p)
void sqlite3VdbeSetNumCols(Vdbe *p, int nResColumn)
int sqlite3VdbeSetColName(
Vdbe *p,
int idx,
int var,
const char *zName,
void (*xDel)(void*)
)
static int vdbeCommit(sqlite3 *db, Vdbe *p)
static void checkActiveVdbeCnt(sqlite3 *db)
#define checkActiveVdbeCnt(x)
int sqlite3VdbeCloseStatement(Vdbe *p, int eOp)
int sqlite3VdbeCheckFk(Vdbe *p, int deferred)
int sqlite3VdbeHalt(Vdbe *p)
void sqlite3VdbeResetStepResult(Vdbe *p)
int sqlite3VdbeTransferError(Vdbe *p)
static void vdbeInvokeSqllog(Vdbe *v)
# define vdbeInvokeSqllog(x)
int sqlite3VdbeReset(Vdbe *p)
int sqlite3VdbeFinalize(Vdbe *p)
void sqlite3VdbeDeleteAuxData(Vdbe *pVdbe, int iOp, int mask)
void sqlite3VdbeClearObject(sqlite3 *db, Vdbe *p)
void sqlite3VdbeDelete(Vdbe *p)
static int SQLITE_NOINLINE handleDeferredMoveto(VdbeCursor *p)
static int SQLITE_NOINLINE handleMovedCursor(VdbeCursor *p)
int sqlite3VdbeCursorRestore(VdbeCursor *p)
int sqlite3VdbeCursorMoveto(VdbeCursor *p)
u32 sqlite3VdbeSerialType(Mem *pMem, int file_format)
u32 sqlite3VdbeSerialTypeLen(u32 serial_type)
static u64 floatSwap(u64 in)
# define swapMixedEndianFloat(X)  X = floatSwap(X)
# define swapMixedEndianFloat(X)
u32 sqlite3VdbeSerialPut(u8 *buf, Mem *pMem, u32 serial_type)
#define ONE_BYTE_INT(x)    ((i8)(x)[0])
#define TWO_BYTE_INT(x)    (256*(i8)((x)[0])|(x)[1])
#define THREE_BYTE_INT(x)  (65536*(i8)((x)[0])|((x)[1]<<8)|(x)[2])
#define FOUR_BYTE_UINT(x)  (((u32)(x)[0]<<24)|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
#define FOUR_BYTE_INT(x) (16777216*(i8)((x)[0])|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
static u32 SQLITE_NOINLINE serialGet(
const unsigned char *buf,
u32 serial_type,
Mem *pMem
)
u32 sqlite3VdbeSerialGet(
const unsigned char *buf,
u32 serial_type,
Mem *pMem
)
UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(
KeyInfo *pKeyInfo,
char *pSpace,
int szSpace,
char **ppFree
)
void sqlite3VdbeRecordUnpack(
KeyInfo *pKeyInfo,
int nKey,
const void *pKey,
UnpackedRecord *p
){
const unsigned char *aKey = (const unsigned char *)pKey;
int d;
u32 idx;
u16 u;
u32 szHdr;
Mem *pMem = p->aMem;
p->default_rc = 0;
assert( EIGHT_BYTE_ALIGNMENT(pMem) );
idx = getVarint32(aKey, szHdr);
d = szHdr;
u = 0;
while( idx<szHdr && d<=nKey )
#if SQLITE_DEBUG
static void vdbeAssertFieldCountWithinLimits(
int nKey, const void *pKey,
const KeyInfo *pKeyInfo
)
# define vdbeAssertFieldCountWithinLimits(A,B,C)
static int vdbeCompareMemString(
const Mem *pMem1,
const Mem *pMem2,
const CollSeq *pColl,
u8 *prcErr
)
static SQLITE_NOINLINE int sqlite3BlobCompare(const Mem *pB1, const Mem *pB2)
int sqlite3MemCompare(const Mem *pMem1, const Mem *pMem2, const CollSeq *pColl)
static i64 vdbeRecordDecodeInt(u32 serial_type, const u8 *aKey)
int sqlite3VdbeRecordCompareWithSkip(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2,
int bSkip
)
int sqlite3VdbeRecordCompare(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2
)
static int vdbeRecordCompareInt(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2
)
static int vdbeRecordCompareString(
int nKey1, const void *pKey1,
UnpackedRecord *pPKey2
)
RecordCompare sqlite3VdbeFindCompare(UnpackedRecord *p)
int sqlite3VdbeIdxRowid(sqlite3 *db, BtCursor *pCur, i64 *rowid)
int sqlite3VdbeIdxKeyCompare(
sqlite3 *db,
VdbeCursor *pC,
UnpackedRecord *pUnpacked,
int *res
)
void sqlite3VdbeSetChanges(sqlite3 *db, int nChange)
void sqlite3VdbeCountChanges(Vdbe *v)
void sqlite3ExpirePreparedStatements(sqlite3 *db)
sqlite3 *sqlite3VdbeDb(Vdbe *v)
sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe *v, int iVar, u8 aff)
void sqlite3VdbeSetVarmask(Vdbe *v, int iVar)
void sqlite3VtabImportErrmsg(Vdbe *p, sqlite3_vtab *pVtab)
