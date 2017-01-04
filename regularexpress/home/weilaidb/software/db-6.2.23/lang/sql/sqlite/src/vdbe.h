#define _SQLITE_VDBE_H_
typedef struct Vdbe Vdbe;
typedef struct Mem Mem;
typedef struct SubProgram SubProgram;
struct VdbeOp ;
typedef struct VdbeOp VdbeOp;
struct SubProgram ;
struct VdbeOpList ;
typedef struct VdbeOpList VdbeOpList;
#define P4_NOTUSED    0
#define P4_DYNAMIC  (-1)
#define P4_STATIC   (-2)
#define P4_COLLSEQ  (-4)
#define P4_FUNCDEF  (-5)
#define P4_KEYINFO  (-6)
#define P4_MEM      (-8)
#define P4_TRANSIENT  0
#define P4_VTAB     (-10)
#define P4_MPRINTF  (-11)
#define P4_REAL     (-12)
#define P4_INT64    (-13)
#define P4_INT32    (-14)
#define P4_INTARRAY (-15)
#define P4_SUBPROGRAM  (-18)
#define P4_ADVANCE  (-19)
#define P5_ConstraintNotNull 1
#define P5_ConstraintUnique  2
#define P5_ConstraintCheck   3
#define P5_ConstraintFK      4
#define COLNAME_NAME     0
#define COLNAME_DECLTYPE 1
#define COLNAME_DATABASE 2
#define COLNAME_TABLE    3
#define COLNAME_COLUMN   4
# define COLNAME_N        5
# ifdef SQLITE_OMIT_DECLTYPE
#   define COLNAME_N      1
# else
#   define COLNAME_N      2
# endif
#define ADDR(X)  (-1-(X))
Vdbe *sqlite3VdbeCreate(Parse*);
int sqlite3VdbeAddOp0(Vdbe*,int);
int sqlite3VdbeAddOp1(Vdbe*,int,int);
int sqlite3VdbeAddOp2(Vdbe*,int,int,int);
int sqlite3VdbeAddOp3(Vdbe*,int,int,int,int);
int sqlite3VdbeAddOp4(Vdbe*,int,int,int,int,const char *zP4,int);
int sqlite3VdbeAddOp4Int(Vdbe*,int,int,int,int,int);
int sqlite3VdbeAddOpList(Vdbe*, int nOp, VdbeOpList const *aOp, int iLineno);
void sqlite3VdbeAddParseSchemaOp(Vdbe*,int,char*);
void sqlite3VdbeChangeP1(Vdbe*, u32 addr, int P1);
void sqlite3VdbeChangeP2(Vdbe*, u32 addr, int P2);
void sqlite3VdbeChangeP3(Vdbe*, u32 addr, int P3);
void sqlite3VdbeChangeP5(Vdbe*, u8 P5);
void sqlite3VdbeJumpHere(Vdbe*, int addr);
void sqlite3VdbeChangeToNoop(Vdbe*, int addr);
int sqlite3VdbeDeletePriorOpcode(Vdbe*, u8 op);
void sqlite3VdbeChangeP4(Vdbe*, int addr, const char *zP4, int N);
void sqlite3VdbeSetP4KeyInfo(Parse*, Index*);
void sqlite3VdbeUsesBtree(Vdbe*, int);
VdbeOp *sqlite3VdbeGetOp(Vdbe*, int);
int sqlite3VdbeMakeLabel(Vdbe*);
void sqlite3VdbeRunOnlyOnce(Vdbe*);
void sqlite3VdbeDelete(Vdbe*);
void sqlite3VdbeClearObject(sqlite3*,Vdbe*);
void sqlite3VdbeMakeReady(Vdbe*,Parse*);
int sqlite3VdbeFinalize(Vdbe*);
void sqlite3VdbeResolveLabel(Vdbe*, int);
int sqlite3VdbeCurrentAddr(Vdbe*);
int sqlite3VdbeAssertMayAbort(Vdbe *, int);
void sqlite3VdbeResetStepResult(Vdbe*);
void sqlite3VdbeRewind(Vdbe*);
int sqlite3VdbeReset(Vdbe*);
void sqlite3VdbeSetNumCols(Vdbe*,int);
int sqlite3VdbeSetColName(Vdbe*, int, int, const char *, void(*)(void*));
void sqlite3VdbeCountChanges(Vdbe*);
sqlite3 *sqlite3VdbeDb(Vdbe*);
void sqlite3VdbeSetSql(Vdbe*, const char *z, int n, int);
void sqlite3VdbeSwap(Vdbe*,Vdbe*);
VdbeOp *sqlite3VdbeTakeOpArray(Vdbe*, int*, int*);
sqlite3_value *sqlite3VdbeGetBoundValue(Vdbe*, int, u8);
void sqlite3VdbeSetVarmask(Vdbe*, int);
char *sqlite3VdbeExpandSql(Vdbe*, const char*);
int sqlite3MemCompare(const Mem*, const Mem*, const CollSeq*);
void sqlite3VdbeRecordUnpack(KeyInfo*,int,const void*,UnpackedRecord*);
int sqlite3VdbeRecordCompare(int,const void*,UnpackedRecord*);
int sqlite3VdbeRecordCompareWithSkip(int, const void *, UnpackedRecord *, int);
UnpackedRecord *sqlite3VdbeAllocUnpackedRecord(KeyInfo *, char *, int, char **);
typedef int (*RecordCompare)(int,const void*,UnpackedRecord*);
RecordCompare sqlite3VdbeFindCompare(UnpackedRecord*);
void sqlite3VdbeLinkSubProgram(Vdbe *, SubProgram *);
void sqlite3VdbeComment(Vdbe*, const char*, ...);
# define VdbeComment(X)  sqlite3VdbeComment X
void sqlite3VdbeNoopComment(Vdbe*, const char*, ...);
# define VdbeNoopComment(X)  sqlite3VdbeNoopComment X
# ifdef SQLITE_ENABLE_MODULE_COMMENTS
#   define VdbeModuleComment(X)  sqlite3VdbeNoopComment X
# else
#   define VdbeModuleComment(X)
# endif
# define VdbeComment(X)
# define VdbeNoopComment(X)
# define VdbeModuleComment(X)
void sqlite3VdbeSetLineNumber(Vdbe*,int);
# define VdbeCoverage(v) sqlite3VdbeSetLineNumber(v,__LINE__)
# define VdbeCoverageIf(v,x) if(x)sqlite3VdbeSetLineNumber(v,__LINE__)
# define VdbeCoverageAlwaysTaken(v) sqlite3VdbeSetLineNumber(v,2);
# define VdbeCoverageNeverTaken(v) sqlite3VdbeSetLineNumber(v,1);
# define VDBE_OFFSET_LINENO(x) (__LINE__+x)
# define VdbeCoverage(v)
# define VdbeCoverageIf(v,x)
# define VdbeCoverageAlwaysTaken(v)
# define VdbeCoverageNeverTaken(v)
# define VDBE_OFFSET_LINENO(x) 0
void sqlite3VdbeScanStatus(Vdbe*, int, int, int, LogEst, const char*);
# define sqlite3VdbeScanStatus(a,b,c,d,e)
