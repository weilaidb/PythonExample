#define _VDBEINT_H_
# define SQLITE_MAX_SCHEMA_RETRY 50
typedef struct VdbeOp Op;
typedef unsigned Bool;
typedef struct VdbeSorter VdbeSorter;
typedef struct Explain Explain;
typedef struct AuxData AuxData;
struct VdbeCursor ;
typedef struct VdbeCursor VdbeCursor;
typedef struct VdbeFrame VdbeFrame;
struct VdbeFrame ;
#define VdbeFrameMem(p) ((Mem *)&((u8 *)p)[ROUND8(sizeof(VdbeFrame))])
#define CACHE_STALE 0
struct Mem ;
#define MEM_Null      0x0001
#define MEM_Str       0x0002
#define MEM_Int       0x0004
#define MEM_Real      0x0008
#define MEM_Blob      0x0010
#define MEM_AffMask   0x001f
#define MEM_RowSet    0x0020
#define MEM_Frame     0x0040
#define MEM_Undefined 0x0080
#define MEM_Cleared   0x0100
#define MEM_TypeMask  0x01ff
#define MEM_Term      0x0200
#define MEM_Dyn       0x0400
#define MEM_Static    0x0800
#define MEM_Ephem     0x1000
#define MEM_Agg       0x2000
#define MEM_Zero      0x4000
#undef MEM_Zero
#define MEM_Zero 0x0000
#define MemSetTypeFlag(p, f) \
((p)->flags = ((p)->flags&~(MEM_TypeMask|MEM_Zero))|f)
#define memIsValid(M)  ((M)->flags & MEM_Undefined)==0
struct AuxData ;
struct sqlite3_context ;
struct Explain ;
typedef unsigned bft;
typedef struct ScanStatus ScanStatus;
struct ScanStatus ;
struct Vdbe ;
#define VDBE_MAGIC_INIT     0x26bceaa5
#define VDBE_MAGIC_RUN      0xbdf20da3
#define VDBE_MAGIC_HALT     0x519c2973
#define VDBE_MAGIC_DEAD     0xb606c3c8
void sqlite3VdbeFreeCursor(Vdbe *, VdbeCursor*);
void sqliteVdbePopStack(Vdbe*,int);
int sqlite3VdbeCursorMoveto(VdbeCursor*);
int sqlite3VdbeCursorRestore(VdbeCursor*);
#if defined(SQLITE_DEBUG) || defined(VDBE_PROFILE)
void sqlite3VdbePrintOp(FILE*, int, Op*);
u32 sqlite3VdbeSerialTypeLen(u32);
u32 sqlite3VdbeSerialType(Mem*, int);
u32 sqlite3VdbeSerialPut(unsigned char*, Mem*, u32);
u32 sqlite3VdbeSerialGet(const unsigned char*, u32, Mem*);
void sqlite3VdbeDeleteAuxData(Vdbe*, int, int);
int sqlite2BtreeKeyCompare(BtCursor *, const void *, int, int, int *);
int sqlite3VdbeIdxKeyCompare(sqlite3*,VdbeCursor*,UnpackedRecord*,int*);
int sqlite3VdbeIdxRowid(sqlite3*, BtCursor*, i64*);
int sqlite3VdbeExec(Vdbe*);
int sqlite3VdbeList(Vdbe*);
int sqlite3VdbeHalt(Vdbe*);
int sqlite3VdbeChangeEncoding(Mem *, int);
int sqlite3VdbeMemTooBig(Mem*);
int sqlite3VdbeMemCopy(Mem*, const Mem*);
void sqlite3VdbeMemShallowCopy(Mem*, const Mem*, int);
void sqlite3VdbeMemMove(Mem*, Mem*);
int sqlite3VdbeMemNulTerminate(Mem*);
int sqlite3VdbeMemSetStr(Mem*, const char*, int, u8, void(*)(void*));
void sqlite3VdbeMemSetInt64(Mem*, i64);
# define sqlite3VdbeMemSetDouble sqlite3VdbeMemSetInt64
void sqlite3VdbeMemSetDouble(Mem*, double);
void sqlite3VdbeMemInit(Mem*,sqlite3*,u16);
void sqlite3VdbeMemSetNull(Mem*);
void sqlite3VdbeMemSetZeroBlob(Mem*,int);
void sqlite3VdbeMemSetRowSet(Mem*);
int sqlite3VdbeMemMakeWriteable(Mem*);
int sqlite3VdbeMemStringify(Mem*, u8, u8);
i64 sqlite3VdbeIntValue(Mem*);
int sqlite3VdbeMemIntegerify(Mem*);
double sqlite3VdbeRealValue(Mem*);
void sqlite3VdbeIntegerAffinity(Mem*);
int sqlite3VdbeMemRealify(Mem*);
int sqlite3VdbeMemNumerify(Mem*);
void sqlite3VdbeMemCast(Mem*,u8,u8);
int sqlite3VdbeMemFromBtree(BtCursor*,u32,u32,int,Mem*);
void sqlite3VdbeMemRelease(Mem *p);
#define VdbeMemDynamic(X)  \
(((X)->flags&(MEM_Agg|MEM_Dyn|MEM_RowSet|MEM_Frame))!=0)
int sqlite3VdbeMemFinalize(Mem*, FuncDef*);
const char *sqlite3OpcodeName(int);
int sqlite3VdbeMemGrow(Mem *pMem, int n, int preserve);
int sqlite3VdbeMemClearAndResize(Mem *pMem, int n);
int sqlite3VdbeCloseStatement(Vdbe *, int);
void sqlite3VdbeFrameDelete(VdbeFrame*);
int sqlite3VdbeFrameRestore(VdbeFrame *);
int sqlite3VdbeTransferError(Vdbe *p);
int sqlite3VdbeSorterInit(sqlite3 *, int, VdbeCursor *);
void sqlite3VdbeSorterReset(sqlite3 *, VdbeSorter *);
void sqlite3VdbeSorterClose(sqlite3 *, VdbeCursor *);
int sqlite3VdbeSorterRowkey(const VdbeCursor *, Mem *);
int sqlite3VdbeSorterNext(sqlite3 *, const VdbeCursor *, int *);
int sqlite3VdbeSorterRewind(const VdbeCursor *, int *);
int sqlite3VdbeSorterWrite(const VdbeCursor *, Mem *);
int sqlite3VdbeSorterCompare(const VdbeCursor *, Mem *, int, int *);
#if !defined(SQLITE_OMIT_SHARED_CACHE) && SQLITE_THREADSAFE>0
void sqlite3VdbeEnter(Vdbe*);
void sqlite3VdbeLeave(Vdbe*);
# define sqlite3VdbeEnter(X)
# define sqlite3VdbeLeave(X)
void sqlite3VdbeMemAboutToChange(Vdbe*,Mem*);
int sqlite3VdbeCheckMemInvariants(Mem*);
int sqlite3VdbeCheckFk(Vdbe *, int);
# define sqlite3VdbeCheckFk(p,i) 0
int sqlite3VdbeMemTranslate(Mem*, u8);
void sqlite3VdbePrintSql(Vdbe*);
void sqlite3VdbeMemPrettyPrint(Mem *pMem, char *zBuf);
int sqlite3VdbeMemHandleBom(Mem *pMem);
int sqlite3VdbeMemExpandBlob(Mem *);
#define ExpandBlob(P) (((P)->flags&MEM_Zero)?sqlite3VdbeMemExpandBlob(P):0)
#define sqlite3VdbeMemExpandBlob(x) SQLITE_OK
#define ExpandBlob(P) SQLITE_OK
