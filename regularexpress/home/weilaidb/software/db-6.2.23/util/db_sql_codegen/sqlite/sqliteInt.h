#define _SQLITEINT_H_
#define DB_SQL
#if defined(__BORLANDC__)
#define _GNU_SOURCE
void sqlite3Coverage(int);
# define testcase(X)  if( X )
# define testcase(X)
#if defined(__GNUC__) && 0
# define likely(X)    __builtin_expect((X),1)
# define unlikely(X)  __builtin_expect((X),0)
# define likely(X)    !!(X)
# define unlikely(X)  !!(X)
# define _LARGE_FILE       1
# ifndef _FILE_OFFSET_BITS
#   define _FILE_OFFSET_BITS 64
# endif
# define _LARGEFILE_SOURCE 1
#if !defined(SQLITE_THREADSAFE)
#if defined(THREADSAFE)
# define SQLITE_THREADSAFE THREADSAFE
# define SQLITE_THREADSAFE 1
#if defined(SQLITE_SYSTEM_MALLOC)+defined(SQLITE_MEMDEBUG)+\
defined(SQLITE_MEMORY_SIZE)+defined(SQLITE_MMAP_HEAP_SIZE)+\
defined(SQLITE_POW2_MEMORY_SIZE)>1
# error "At most one of the following compile-time configuration options\
is allows: SQLITE_SYSTEM_MALLOC, SQLITE_MEMDEBUG, SQLITE_MEMORY_SIZE,\
SQLITE_MMAP_HEAP_SIZE, SQLITE_POW2_MEMORY_SIZE"
#if defined(SQLITE_SYSTEM_MALLOC)+defined(SQLITE_MEMDEBUG)+\
defined(SQLITE_MEMORY_SIZE)+defined(SQLITE_MMAP_HEAP_SIZE)+\
defined(SQLITE_POW2_MEMORY_SIZE)==0
# define SQLITE_SYSTEM_MALLOC 1
#if defined(SQLITE_POW2_MEMORY_SIZE) && !defined(SQLITE_MALLOC_SOFT_LIMIT)
# define SQLITE_MALLOC_SOFT_LIMIT 1024
#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && SQLITE_THREADSAFE
#  define _XOPEN_SOURCE 500
#if defined(SQLITE_TCL) || defined(TCLSH)
# include <tcl.h>
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
# define double sqlite_int64
# define LONGDOUBLE_TYPE sqlite_int64
# ifndef SQLITE_BIG_DBL
#   define SQLITE_BIG_DBL (0x7fffffffffffffff)
# endif
# define SQLITE_OMIT_DATETIME_FUNCS 1
# define SQLITE_OMIT_TRACE 1
# undef SQLITE_MIXED_ENDIAN_64BIT_FLOAT
# define SQLITE_BIG_DBL (1e99)
#define OMIT_TEMPDB 1
#define OMIT_TEMPDB 0
#define NULL_DISTINCT_FOR_UNIQUE 1
#define SQLITE_MAX_FILE_FORMAT 4
# define SQLITE_DEFAULT_FILE_FORMAT 1
# define TEMP_STORE 1
#define offsetof(STRUCTURE,FIELD) ((int)((char*)&((STRUCTURE*)0)->FIELD))
#if 'A' == '\301'
# define SQLITE_EBCDIC 1
# define SQLITE_ASCII 1
# ifdef HAVE_UINT32_T
#  define UINT32_TYPE uint32_t
# else
#  define UINT32_TYPE unsigned int
# endif
# ifdef HAVE_UINT16_T
#  define UINT16_TYPE uint16_t
# else
#  define UINT16_TYPE unsigned short int
# endif
# ifdef HAVE_INT16_T
#  define INT16_TYPE int16_t
# else
#  define INT16_TYPE short int
# endif
# ifdef HAVE_UINT8_T
#  define UINT8_TYPE uint8_t
# else
#  define UINT8_TYPE unsigned char
# endif
# ifdef HAVE_INT8_T
#  define INT8_TYPE int8_t
# else
#  define INT8_TYPE signed char
# endif
# define LONGDOUBLE_TYPE long double
typedef sqlite_int64 i64;
typedef sqlite_uint64 u64;
typedef UINT32_TYPE u32;
typedef UINT16_TYPE u16;
typedef INT16_TYPE i16;
typedef UINT8_TYPE u8;
typedef UINT8_TYPE i8;
const int sqlite3one;
extern const int sqlite3one;
#if defined(i386) || defined(__i386__) || defined(_M_IX86)
# define SQLITE_BIGENDIAN    0
# define SQLITE_LITTLEENDIAN 1
# define SQLITE_UTF16NATIVE  SQLITE_UTF16LE
# define SQLITE_BIGENDIAN    (*(char *)(&sqlite3one)==0)
# define SQLITE_LITTLEENDIAN (*(char *)(&sqlite3one)==1)
# define SQLITE_UTF16NATIVE (SQLITE_BIGENDIAN?SQLITE_UTF16BE:SQLITE_UTF16LE)
#define LARGEST_INT64  (0xffffffff|(((i64)0x7fffffff)<<32))
#define SMALLEST_INT64 (((i64)-1) - LARGEST_INT64)
typedef struct BusyHandler BusyHandler;
struct BusyHandler ;
#define MASTER_NAME       "sqlite_master"
#define TEMP_MASTER_NAME  "sqlite_temp_master"
#define MASTER_ROOT       1
#define SCHEMA_TABLE(x)  ((!OMIT_TEMPDB)&&(x==1)?TEMP_MASTER_NAME:MASTER_NAME)
#define ArraySize(X)    (sizeof(X)/sizeof(X[0]))
typedef struct AggInfo AggInfo;
typedef struct AuthContext AuthContext;
typedef struct Bitvec Bitvec;
typedef struct CollSeq CollSeq;
typedef struct Column Column;
typedef struct Db Db;
typedef struct Schema Schema;
typedef struct Expr Expr;
typedef struct ExprList ExprList;
typedef struct FKey FKey;
typedef struct FuncDef FuncDef;
typedef struct IdList IdList;
typedef struct Index Index;
typedef struct KeyClass KeyClass;
typedef struct KeyInfo KeyInfo;
typedef struct Module Module;
typedef struct NameContext NameContext;
typedef struct Parse Parse;
typedef struct Select Select;
typedef struct SrcList SrcList;
typedef struct StrAccum StrAccum;
typedef struct Table Table;
typedef struct TableLock TableLock;
typedef struct Token Token;
typedef struct TriggerStack TriggerStack;
typedef struct TriggerStep TriggerStep;
typedef struct Trigger Trigger;
typedef struct WhereInfo WhereInfo;
typedef struct WhereLevel WhereLevel;
struct Db ;
struct Schema ;
#define DbHasProperty(D,I,P)     (((D)->aDb[I].pSchema->flags&(P))==(P))
#define DbHasAnyProperty(D,I,P)  (((D)->aDb[I].pSchema->flags&(P))!=0)
#define DbSetProperty(D,I,P)     (D)->aDb[I].pSchema->flags|=(P)
#define DbClearProperty(D,I,P)   (D)->aDb[I].pSchema->flags&=~(P)
#define DB_SchemaLoaded    0x0001
#define DB_UnresetViews    0x0002
#define DB_Empty           0x0004
#define SQLITE_N_LIMIT (SQLITE_LIMIT_VARIABLE_NUMBER+1)
struct sqlite3 ;
#define ENC(db) ((db)->aDb[0].pSchema->enc)
#define SQLITE_VdbeTrace      0x00000001
#define SQLITE_InTrans        0x00000008
#define SQLITE_InternChanges  0x00000010
#define SQLITE_FullColNames   0x00000020
#define SQLITE_ShortColNames  0x00000040
#define SQLITE_CountRows      0x00000080
#define SQLITE_NullCallback   0x00000100
#define SQLITE_SqlTrace       0x00000200
#define SQLITE_VdbeListing    0x00000400
#define SQLITE_WriteSchema    0x00000800
#define SQLITE_NoReadlock     0x00001000
#define SQLITE_IgnoreChecks   0x00002000
#define SQLITE_ReadUncommitted 0x00004000
#define SQLITE_LegacyFileFmt  0x00008000
#define SQLITE_FullFSync      0x00010000
#define SQLITE_LoadExtension  0x00020000
#define SQLITE_RecoveryMode   0x00040000
#define SQLITE_SharedCache    0x00080000
#define SQLITE_Vtab           0x00100000
#define SQLITE_MAGIC_OPEN     0xa029a697
#define SQLITE_MAGIC_CLOSED   0x9f3c2d33
#define SQLITE_MAGIC_SICK     0x4b771290
#define SQLITE_MAGIC_BUSY     0xf03b7906
#define SQLITE_MAGIC_ERROR    0xb5357930
struct FuncDef ;
struct Module ;
#define SQLITE_FUNC_LIKE   0x01
#define SQLITE_FUNC_CASE   0x02
#define SQLITE_FUNC_EPHEM  0x04
struct Column ;
struct CollSeq ;
#define SQLITE_COLL_BINARY  1
#define SQLITE_COLL_NOCASE  2
#define SQLITE_COLL_REVERSE 3
#define SQLITE_COLL_USER    0
#define SQLITE_SO_ASC       0
#define SQLITE_SO_DESC      1
#define SQLITE_AFF_TEXT     'a'
#define SQLITE_AFF_NONE     'b'
#define SQLITE_AFF_NUMERIC  'c'
#define SQLITE_AFF_INTEGER  'd'
#define SQLITE_AFF_REAL     'e'
#define sqlite3IsNumericAffinity(X)  ((X)>=SQLITE_AFF_NUMERIC)
#define SQLITE_AFF_MASK     0x67
#define SQLITE_JUMPIFNULL   0x08
#define SQLITE_NULLEQUAL    0x10
#define SQLITE_STOREP2      0x80
struct Table ;
#  define IsVirtual(X)      ((X)->isVirtual)
#  define IsHiddenColumn(X) ((X)->isHidden)
#  define IsVirtual(X)      0
#  define IsHiddenColumn(X) 0
struct FKey ;
#define OE_None     0
#define OE_Rollback 1
#define OE_Abort    2
#define OE_Fail     3
#define OE_Ignore   4
#define OE_Replace  5
#define OE_Restrict 6
#define OE_SetNull  7
#define OE_SetDflt  8
#define OE_Cascade  9
#define OE_Default  99
struct KeyInfo ;
struct Index ;
struct Token ;
struct AggInfo ;
struct Expr ;
#define EP_FromJoin   0x0001
#define EP_Agg        0x0002
#define EP_Resolved   0x0004
#define EP_Error      0x0008
#define EP_Distinct   0x0010
#define EP_VarSelect  0x0020
#define EP_Dequoted   0x0040
#define EP_InfixFunc  0x0080
#define EP_ExpCollate 0x0100
#define EP_AnyAff     0x0200
#define EP_FixedDest  0x0400
#define ExprHasProperty(E,P)     (((E)->flags&(P))==(P))
#define ExprHasAnyProperty(E,P)  (((E)->flags&(P))!=0)
#define ExprSetProperty(E,P)     (E)->flags|=(P)
#define ExprClearProperty(E,P)   (E)->flags&=~(P)
struct ExprList ;
struct IdList ;
typedef u64 Bitmask;
struct SrcList ;
#define JT_INNER     0x0001
#define JT_CROSS     0x0002
#define JT_NATURAL   0x0004
#define JT_LEFT      0x0008
#define JT_RIGHT     0x0010
#define JT_OUTER     0x0020
#define JT_ERROR     0x0040
struct WhereLevel ;
#define WHERE_ORDERBY_NORMAL     0
#define WHERE_ORDERBY_MIN        1
#define WHERE_ORDERBY_MAX        2
#define WHERE_ONEPASS_DESIRED    4
struct WhereInfo ;
struct NameContext ;
struct Select ;
#define SRT_Union        1
#define SRT_Except       2
#define SRT_Exists       3
#define SRT_Discard      4
#define IgnorableOrderby(X) ((X->eDest)<=SRT_Discard)
#define SRT_Callback     5
#define SRT_Mem          6
#define SRT_Set          7
#define SRT_Table        8
#define SRT_EphemTab     9
#define SRT_Subroutine  10
typedef struct SelectDest SelectDest;
struct SelectDest ;
struct Parse ;
#define IN_DECLARE_VTAB 0
#define IN_DECLARE_VTAB (pParse->declareVtab)
struct AuthContext ;
#define OPFLAG_NCHANGE   1
#define OPFLAG_LASTROWID 2
#define OPFLAG_ISUPDATE  4
#define OPFLAG_APPEND    8
struct Trigger ;
#define TRIGGER_BEFORE  1
#define TRIGGER_AFTER   2
struct TriggerStep ;
struct TriggerStack ;
typedef struct DbFixer DbFixer;
struct DbFixer ;
struct StrAccum ;
typedef struct  InitData;
#define SQLITE_SKIP_UTF8(zIn)
int sqlite3Corrupt(void);
# define SQLITE_CORRUPT_BKPT sqlite3Corrupt()
# define DEBUGONLY(X)        X
# define SQLITE_CORRUPT_BKPT SQLITE_CORRUPT
# define DEBUGONLY(X)
int sqlite3StrICmp(const char *, const char *);
int sqlite3StrNICmp(const char *, const char *, int);
int sqlite3IsNumber(const char*, int*, u8);
void *sqlite3MallocZero(unsigned);
void *sqlite3DbMallocZero(sqlite3*, unsigned);
void *sqlite3DbMallocRaw(sqlite3*, unsigned);
char *sqlite3StrDup(const char*);
char *sqlite3StrNDup(const char*, int);
char *sqlite3DbStrDup(sqlite3*,const char*);
char *sqlite3DbStrNDup(sqlite3*,const char*, int);
void *sqlite3DbReallocOrFree(sqlite3 *, void *, int);
void *sqlite3DbRealloc(sqlite3 *, void *, int);
int sqlite3MallocSize(void *);
int sqlite3IsNaN(double);
char *sqlite3MPrintf(sqlite3*,const char*, ...);
char *sqlite3VMPrintf(sqlite3*,const char*, va_list);
#if defined(SQLITE_TEST) || defined(SQLITE_DEBUG)
void sqlite3DebugPrintf(const char*, ...);
#if defined(SQLITE_TEST)
void *sqlite3TextToPtr(const char*);
void sqlite3SetString(char **, ...);
void sqlite3ErrorMsg(Parse*, const char*, ...);
void sqlite3ErrorClear(Parse*);
void sqlite3Dequote(char*);
void sqlite3DequoteExpr(sqlite3*, Expr*);
int sqlite3KeywordCode(const unsigned char*, int);
int sqlite3RunParser(Parse*, const char*, char **);
void sqlite3FinishCoding(Parse*);
int sqlite3GetTempReg(Parse*);
void sqlite3ReleaseTempReg(Parse*,int);
int sqlite3GetTempRange(Parse*,int);
void sqlite3ReleaseTempRange(Parse*,int,int);
Expr *sqlite3Expr(sqlite3*, int, Expr*, Expr*, const Token*);
Expr *sqlite3PExpr(Parse*, int, Expr*, Expr*, const Token*);
Expr *sqlite3RegisterExpr(Parse*,Token*);
Expr *sqlite3ExprAnd(sqlite3*,Expr*, Expr*);
void sqlite3ExprSpan(Expr*,Token*,Token*);
Expr *sqlite3ExprFunction(Parse*,ExprList*, Token*);
void sqlite3ExprAssignVarNumber(Parse*, Expr*);
void sqlite3ExprDelete(Expr*);
ExprList *sqlite3ExprListAppend(Parse*,ExprList*,Expr*,Token*);
void sqlite3ExprListDelete(ExprList*);
int sqlite3Init(sqlite3*, char**);
int sqlite3InitCallback(void*, int, char**, char**);
void sqlite3Pragma(Parse*,Token*,Token*,Token*,int);
void sqlite3ResetInternalSchema(sqlite3*, int);
void sqlite3BeginParse(Parse*,int);
void sqlite3CommitInternalChanges(sqlite3*);
Table *sqlite3ResultSetOfSelect(Parse*,char*,Select*);
void sqlite3OpenMasterTable(Parse *, int);
void sqlite3StartTable(Parse*,Token*,Token*,int,int,int,int);
void sqlite3AddColumn(Parse*,Token*);
void sqlite3AddNotNull(Parse*, int);
void sqlite3AddPrimaryKey(Parse*, ExprList*, int, int, int);
void sqlite3AddCheckConstraint(Parse*, Expr*);
void sqlite3AddColumnType(Parse*,Token*);
void sqlite3AddDefaultValue(Parse*,Expr*);
void sqlite3AddCollateType(Parse*, Token*);
void sqlite3EndTable(Parse*,Token*,Token*,Select*);
Bitvec *sqlite3BitvecCreate(u32);
int sqlite3BitvecTest(Bitvec*, u32);
int sqlite3BitvecSet(Bitvec*, u32);
void sqlite3BitvecClear(Bitvec*, u32);
void sqlite3BitvecDestroy(Bitvec*);
int sqlite3BitvecBuiltinTest(int,int*);
void sqlite3CreateView(Parse*,Token*,Token*,Token*,Select*,int,int);
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_VIRTUALTABLE)
int sqlite3ViewGetColumnNames(Parse*,Table*);
# define sqlite3ViewGetColumnNames(A,B) 0
void sqlite3DropTable(Parse*, SrcList*, int, int);
void sqlite3DeleteTable(Table*);
void sqlite3Insert(Parse*, SrcList*, ExprList*, Select*, IdList*, int);
void *sqlite3ArrayAllocate(sqlite3*,void*,int,int,int*,int*,int*);
IdList *sqlite3IdListAppend(sqlite3*, IdList*, Token*);
int sqlite3IdListIndex(IdList*,const char*);
SrcList *sqlite3SrcListAppend(sqlite3*, SrcList*, Token*, Token*);
SrcList *sqlite3SrcListAppendFromTerm(Parse*, SrcList*, Token*, Token*, Token*,
Select*, Expr*, IdList*);
void sqlite3SrcListShiftJoinType(SrcList*);
void sqlite3SrcListAssignCursors(Parse*, SrcList*);
void sqlite3IdListDelete(IdList*);
void sqlite3SrcListDelete(SrcList*);
void sqlite3CreateIndex(Parse*,Token*,Token*,SrcList*,ExprList*,int,Token*,
Token*, int, int);
void sqlite3DropIndex(Parse*, SrcList*, int);
int sqlite3Select(Parse*, Select*, SelectDest*, Select*, int, int*, char *aff);
Select *sqlite3SelectNew(Parse*,ExprList*,SrcList*,Expr*,ExprList*,
Expr*,ExprList*,int,Expr*,Expr*);
void sqlite3SelectDelete(Select*);
Table *sqlite3SrcListLookup(Parse*, SrcList*);
int sqlite3IsReadOnly(Parse*, Table*, int);
void sqlite3OpenTable(Parse*, int iCur, int iDb, Table*, int);
void sqlite3DeleteFrom(Parse*, SrcList*, Expr*);
void sqlite3Update(Parse*, SrcList*, ExprList*, Expr*, int);
WhereInfo *sqlite3WhereBegin(Parse*, SrcList*, Expr*, ExprList**, u8);
void sqlite3WhereEnd(WhereInfo*);
int sqlite3ExprCodeGetColumn(Parse*, Table*, int, int, int, int);
void sqlite3ExprCodeMove(Parse*, int, int);
void sqlite3ExprClearColumnCache(Parse*, int);
void sqlite3ExprCacheAffinityChange(Parse*, int, int);
int sqlite3ExprWritableRegister(Parse*,int,int);
void sqlite3ExprHardCopy(Parse*,int,int);
int sqlite3ExprCode(Parse*, Expr*, int);
int sqlite3ExprCodeTemp(Parse*, Expr*, int*);
int sqlite3ExprCodeTarget(Parse*, Expr*, int);
int sqlite3ExprCodeAndCache(Parse*, Expr*, int);
void sqlite3ExprCodeConstants(Parse*, Expr*);
int sqlite3ExprCodeExprList(Parse*, ExprList*, int, int);
void sqlite3ExprIfTrue(Parse*, Expr*, int, int);
void sqlite3ExprIfFalse(Parse*, Expr*, int, int);
Table *sqlite3FindTable(sqlite3*,const char*, const char*);
Table *sqlite3LocateTable(Parse*,int isView,const char*, const char*);
Index *sqlite3FindIndex(sqlite3*,const char*, const char*);
void sqlite3UnlinkAndDeleteTable(sqlite3*,int,const char*);
void sqlite3UnlinkAndDeleteIndex(sqlite3*,int,const char*);
void sqlite3Vacuum(Parse*);
int sqlite3RunVacuum(char**, sqlite3*);
char *sqlite3NameFromToken(sqlite3*, Token*);
int sqlite3ExprCompare(Expr*, Expr*);
int sqlite3ExprResolveNames(NameContext *, Expr *);
void sqlite3ExprAnalyzeAggregates(NameContext*, Expr*);
void sqlite3ExprAnalyzeAggList(NameContext*,ExprList*);
Vdbe *sqlite3GetVdbe(Parse*);
Expr *sqlite3CreateIdExpr(Parse *, const char*);
void sqlite3PrngSaveState(void);
void sqlite3PrngRestoreState(void);
void sqlite3PrngResetState(void);
void sqlite3RollbackAll(sqlite3*);
void sqlite3CodeVerifySchema(Parse*, int);
void sqlite3BeginTransaction(Parse*, int);
void sqlite3CommitTransaction(Parse*);
void sqlite3RollbackTransaction(Parse*);
int sqlite3ExprIsConstant(Expr*);
int sqlite3ExprIsConstantNotJoin(Expr*);
int sqlite3ExprIsConstantOrFunction(Expr*);
int sqlite3ExprIsInteger(Expr*, int*);
int sqlite3IsRowid(const char*);
void sqlite3GenerateRowDelete(Parse*, Table*, int, int, int);
void sqlite3GenerateRowIndexDelete(Parse*, Table*, int, int*);
int sqlite3GenerateIndexKey(Parse*, Index*, int, int, int);
void sqlite3GenerateConstraintChecks(Parse*,Table*,int,int,
int*,int,int,int,int);
void sqlite3CompleteInsertion(Parse*, Table*, int, int, int*,int,int,int,int);
int sqlite3OpenTableAndIndices(Parse*, Table*, int, int);
void sqlite3BeginWriteOperation(Parse*, int, int);
Expr *sqlite3ExprDup(sqlite3*,Expr*);
void sqlite3TokenCopy(sqlite3*,Token*, Token*);
ExprList *sqlite3ExprListDup(sqlite3*,ExprList*);
SrcList *sqlite3SrcListDup(sqlite3*,SrcList*);
IdList *sqlite3IdListDup(sqlite3*,IdList*);
Select *sqlite3SelectDup(sqlite3*,Select*);
FuncDef *sqlite3FindFunction(sqlite3*,const char*,int,int,u8,int);
void sqlite3RegisterBuiltinFunctions(sqlite3*);
void sqlite3RegisterDateTimeFunctions(sqlite3*);
int sqlite3SafetyOn(sqlite3*);
int sqlite3SafetyOff(sqlite3*);
# define sqlite3SafetyOn(A) 0
# define sqlite3SafetyOff(A) 0
int sqlite3SafetyCheckOk(sqlite3*);
int sqlite3SafetyCheckSickOrOk(sqlite3*);
void sqlite3ChangeCookie(Parse*, int);
void sqlite3MaterializeView(Parse*, Select*, Expr*, int);
void sqlite3BeginTrigger(Parse*, Token*,Token*,int,int,IdList*,SrcList*,
Expr*,int, int);
void sqlite3FinishTrigger(Parse*, TriggerStep*, Token*);
void sqlite3DropTrigger(Parse*, SrcList*, int);
void sqlite3DropTriggerPtr(Parse*, Trigger*);
int sqlite3TriggersExist(Parse*, Table*, int, ExprList*);
int sqlite3CodeRowTrigger(Parse*, int, ExprList*, int, Table *, int, int,
int, int, u32*, u32*);
void sqliteViewTriggers(Parse*, Table*, Expr*, int, ExprList*);
void sqlite3DeleteTriggerStep(TriggerStep*);
TriggerStep *sqlite3TriggerSelectStep(sqlite3*,Select*);
TriggerStep *sqlite3TriggerInsertStep(sqlite3*,Token*, IdList*,
ExprList*,Select*,int);
TriggerStep *sqlite3TriggerUpdateStep(sqlite3*,Token*,ExprList*, Expr*, int);
TriggerStep *sqlite3TriggerDeleteStep(sqlite3*,Token*, Expr*);
void sqlite3DeleteTrigger(Trigger*);
void sqlite3UnlinkAndDeleteTrigger(sqlite3*,int,const char*);
# define sqlite3TriggersExist(A,B,C,D,E,F) 0
# define sqlite3DeleteTrigger(A)
# define sqlite3DropTriggerPtr(A,B)
# define sqlite3UnlinkAndDeleteTrigger(A,B,C)
# define sqlite3CodeRowTrigger(A,B,C,D,E,F,G,H,I,J,K) 0
int sqlite3JoinType(Parse*, Token*, Token*, Token*);
void sqlite3CreateForeignKey(Parse*, ExprList*, Token*, ExprList*, int);
void sqlite3DeferForeignKey(Parse*, int);
void sqlite3AuthRead(Parse*,Expr*,Schema*,SrcList*);
int sqlite3AuthCheck(Parse*,int, const char*, const char*, const char*);
void sqlite3AuthContextPush(Parse*, AuthContext*, const char*);
void sqlite3AuthContextPop(AuthContext*);
# define sqlite3AuthRead(a,b,c,d)
# define sqlite3AuthCheck(a,b,c,d,e)    SQLITE_OK
# define sqlite3AuthContextPush(a,b,c)
# define sqlite3AuthContextPop(a)  ((void)(a))
void sqlite3Attach(Parse*, Expr*, Expr*, Expr*);
void sqlite3Detach(Parse*, Expr*);
int sqlite3BtreeFactory(const sqlite3 *db, const char *zFilename,
int omitJournal, int nCache, int flags, Btree **ppBtree);
int sqlite3FixInit(DbFixer*, Parse*, int, const char*, const Token*);
int sqlite3FixSrcList(DbFixer*, SrcList*);
int sqlite3FixSelect(DbFixer*, Select*);
int sqlite3FixExpr(DbFixer*, Expr*);
int sqlite3FixExprList(DbFixer*, ExprList*);
int sqlite3FixTriggerStep(DbFixer*, TriggerStep*);
int sqlite3AtoF(const char *z, double*);
char *sqlite3_snprintf(int,char*,const char*,...);
int sqlite3GetInt32(const char *, int*);
int sqlite3FitsIn64Bits(const char *, int);
int sqlite3Utf16ByteLen(const void *pData, int nChar);
int sqlite3Utf8CharLen(const char *pData, int nByte);
int sqlite3Utf8Read(const u8*, const u8*, const u8**);
int sqlite3PutVarint(unsigned char*, u64);
int sqlite3PutVarint32(unsigned char*, u32);
int sqlite3GetVarint(const unsigned char *, u64 *);
int sqlite3GetVarint32(const unsigned char *, u32 *);
int sqlite3VarintLen(u64 v);
#define getVarint32(A,B)  ((*(A)<(unsigned char)0x80) ? ((B) = (u32)*(A)),1 : sqlite3GetVarint32((A), &(B)))
#define putVarint32(A,B)  (((B)<(u32)0x80) ? (*(A) = (unsigned char)(B)),1 : sqlite3PutVarint32((A), (B)))
#define getVarint    sqlite3GetVarint
#define putVarint    sqlite3PutVarint
void sqlite3IndexAffinityStr(Vdbe *, Index *);
void sqlite3TableAffinityStr(Vdbe *, Table *);
char sqlite3CompareAffinity(Expr *pExpr, char aff2);
int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity);
char sqlite3ExprAffinity(Expr *pExpr);
int sqlite3Atoi64(const char*, i64*);
void sqlite3Error(sqlite3*, int, const char*,...);
void *sqlite3HexToBlob(sqlite3*, const char *z, int n);
int sqlite3TwoPartName(Parse *, Token *, Token *, Token **);
const char *sqlite3ErrStr(int);
int sqlite3ReadSchema(Parse *pParse);
CollSeq *sqlite3FindCollSeq(sqlite3*,u8 enc, const char *,int,int);
CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char *zName, int nName);
CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr);
Expr *sqlite3ExprSetColl(Parse *pParse, Expr *, Token *);
int sqlite3CheckCollSeq(Parse *, CollSeq *);
int sqlite3CheckObjectName(Parse *, const char *);
void sqlite3VdbeSetChanges(sqlite3 *, int);
const void *sqlite3ValueText(sqlite3_value*, u8);
int sqlite3ValueBytes(sqlite3_value*, u8);
void sqlite3ValueSetStr(sqlite3_value*, int, const void *,u8,
void(*)(void*));
void sqlite3ValueFree(sqlite3_value*);
sqlite3_value *sqlite3ValueNew(sqlite3 *);
char *sqlite3Utf16to8(sqlite3 *, const void*, int);
int sqlite3ValueFromExpr(sqlite3 *, Expr *, u8, u8, sqlite3_value **);
void sqlite3ValueApplyAffinity(sqlite3_value *, u8, u8);
extern const unsigned char sqlite3UpperToLower[];
void sqlite3RootPageMoved(Db*, int, int);
void sqlite3Reindex(Parse*, Token*, Token*);
void sqlite3AlterFunctions(sqlite3*);
void sqlite3AlterRenameTable(Parse*, SrcList*, Token*);
int sqlite3GetToken(const unsigned char *, int *);
void sqlite3NestedParse(Parse*, const char*, ...);
void sqlite3ExpirePreparedStatements(sqlite3*);
void sqlite3CodeSubselect(Parse *, Expr *);
int sqlite3SelectResolve(Parse *, Select *, NameContext *);
void sqlite3ColumnDefault(Vdbe *, Table *, int);
void sqlite3AlterFinishAddColumn(Parse *, Token *);
void sqlite3AlterBeginAddColumn(Parse *, SrcList *);
CollSeq *sqlite3GetCollSeq(sqlite3*, CollSeq *, const char *, int);
char sqlite3AffinityType(const Token*);
void sqlite3Analyze(Parse*, Token*, Token*);
int sqlite3InvokeBusyHandler(BusyHandler*);
int sqlite3FindDb(sqlite3*, Token*);
int sqlite3AnalysisLoad(sqlite3*,int iDB);
void sqlite3DefaultRowEst(Index*);
void sqlite3RegisterLikeFunctions(sqlite3*, int);
int sqlite3IsLikeFunction(sqlite3*,Expr*,int*,char*);
void sqlite3AttachFunctions(sqlite3 *);
void sqlite3MinimumFileFormat(Parse*, int, int);
void sqlite3SchemaFree(void *);
Schema *sqlite3SchemaGet(sqlite3 *, Btree *);
int sqlite3SchemaToIndex(sqlite3 *db, Schema *);
KeyInfo *sqlite3IndexKeyinfo(Parse *, Index *);
int sqlite3CreateFunc(sqlite3 *, const char *, int, int, void *,
void (*)(sqlite3_context*,int,sqlite3_value **),
void (*)(sqlite3_context*,int,sqlite3_value **), void (*)(sqlite3_context*));
int sqlite3ApiExit(sqlite3 *db, int);
int sqlite3OpenTempDatabase(Parse *);
void sqlite3StrAccumAppend(StrAccum*,const char*,int);
char *sqlite3StrAccumFinish(StrAccum*);
void sqlite3StrAccumReset(StrAccum*);
void sqlite3SelectDestInit(SelectDest*,int,int);
void *sqlite3ParserAlloc(void*(*)(size_t));
void sqlite3ParserFree(void*, void(*)(void*));
void sqlite3Parser(void*, int, Token, Parse*);
int sqlite3AutoLoadExtensions(sqlite3*);
void sqlite3CloseExtensions(sqlite3*);
# define sqlite3CloseExtensions(X)
void sqlite3TableLock(Parse *, int, int, u8, const char *);
#define sqlite3TableLock(v,w,x,y,z)
int sqlite3Utf8To8(unsigned char*);
#  define sqlite3VtabClear(X)
#  define sqlite3VtabSync(X,Y) (Y)
#  define sqlite3VtabRollback(X)
#  define sqlite3VtabCommit(X)
void sqlite3VtabClear(Table*);
int sqlite3VtabSync(sqlite3 *db, int rc);
int sqlite3VtabRollback(sqlite3 *db);
int sqlite3VtabCommit(sqlite3 *db);
void sqlite3VtabMakeWritable(Parse*,Table*);
void sqlite3VtabLock(sqlite3_vtab*);
void sqlite3VtabUnlock(sqlite3*, sqlite3_vtab*);
void sqlite3VtabBeginParse(Parse*, Token*, Token*, Token*);
void sqlite3VtabFinishParse(Parse*, Token*);
void sqlite3VtabArgInit(Parse*);
void sqlite3VtabArgExtend(Parse*, Token*);
int sqlite3VtabCallCreate(sqlite3*, int, const char *, char **);
int sqlite3VtabCallConnect(Parse*, Table*);
int sqlite3VtabCallDestroy(sqlite3*, int, const char *);
int sqlite3VtabBegin(sqlite3 *, sqlite3_vtab *);
FuncDef *sqlite3VtabOverloadFunction(sqlite3 *,FuncDef*, int nArg, Expr*);
void sqlite3InvalidFunction(sqlite3_context*,int,sqlite3_value**);
int sqlite3Reprepare(Vdbe*);
void sqlite3ExprListCheckLength(Parse*, ExprList*, const char*);
CollSeq *sqlite3BinaryCompareCollSeq(Parse *, Expr *, Expr *);
#define SQLITE_FAULTINJECTOR_MALLOC     0
#define SQLITE_FAULTINJECTOR_COUNT      1
void sqlite3FaultConfig(int,int,int);
int sqlite3FaultFailures(int);
int sqlite3FaultBenignFailures(int);
int sqlite3FaultPending(int);
void sqlite3FaultBeginBenign(int);
void sqlite3FaultEndBenign(int);
int sqlite3FaultStep(int);
# define sqlite3FaultConfig(A,B,C)
# define sqlite3FaultFailures(A)         0
# define sqlite3FaultBenignFailures(A)   0
# define sqlite3FaultPending(A)          (-1)
# define sqlite3FaultBeginBenign(A)
# define sqlite3FaultEndBenign(A)
# define sqlite3FaultStep(A)             0
#define IN_INDEX_ROWID           1
#define IN_INDEX_EPH             2
#define IN_INDEX_INDEX           3
int sqlite3FindInIndex(Parse *, Expr *, int);
int sqlite3JournalOpen(sqlite3_vfs *, const char *, sqlite3_file *, int, int);
int sqlite3JournalSize(sqlite3_vfs *);
int sqlite3JournalCreate(sqlite3_file *);
#define sqlite3JournalSize(pVfs) ((pVfs)->szOsFile)
#if defined(SQLITE_TEST) || SQLITE_MAX_EXPR_DEPTH>0
void sqlite3ExprSetHeight(Expr *);
int sqlite3SelectExprHeight(Select *);
#define sqlite3ExprSetHeight(x)
u32 sqlite3Get4byte(const u8*);
void sqlite3Put4byte(u8*, u32);
void sqlite3ParserTrace(FILE*, char *);
# define IOTRACE(A)  if( sqlite3IoTrace )
void sqlite3VdbeIOTraceSql(Vdbe*);
SQLITE_EXTERN void (*sqlite3IoTrace)(const char*,...);
# define IOTRACE(A)
# define sqlite3VdbeIOTraceSql(X)
#define sqlite3_malloc malloc
#define sqlite3_free free
