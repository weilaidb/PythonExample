#define _SQLITEINT_H_
# define _LARGE_FILE       1
# ifndef _FILE_OFFSET_BITS
#   define _FILE_OFFSET_BITS 64
# endif
# define _LARGEFILE_SOURCE 1
#if defined(__GNUC__) && !defined(_GNU_SOURCE)
# define _GNU_SOURCE
#if defined(__OpenBSD__) && !defined(_BSD_SOURCE)
# define _BSD_SOURCE
#if defined(_HAVE_MINGW_H)
# include "mingw.h"
#elif defined(_HAVE__MINGW_H)
# include "_mingw.h"
#if !defined(_USE_32BIT_TIME_T) && !defined(_USE_64BIT_TIME_T) && \
defined(_WIN32) && !defined(_WIN64) && \
defined(__MINGW_MAJOR_VERSION) && __MINGW_MAJOR_VERSION >= 4 && \
defined(__MSVCRT__)
# define _USE_32BIT_TIME_T
#if defined(__BORLANDC__)
#if defined(__PTRDIFF_TYPE__)
# define SQLITE_INT_TO_PTR(X)  ((void*)(__PTRDIFF_TYPE__)(X))
# define SQLITE_PTR_TO_INT(X)  ((int)(__PTRDIFF_TYPE__)(X))
#elif !defined(__GNUC__)
# define SQLITE_INT_TO_PTR(X)  ((void*)&((char*)0)[X])
# define SQLITE_PTR_TO_INT(X)  ((int)(((char*)X)-(char*)0))
#elif defined(HAVE_STDINT_H)
# define SQLITE_INT_TO_PTR(X)  ((void*)(intptr_t)(X))
# define SQLITE_PTR_TO_INT(X)  ((int)(intptr_t)(X))
# define SQLITE_INT_TO_PTR(X)  ((void*)(X))
# define SQLITE_PTR_TO_INT(X)  ((int)(X))
#if defined(__GNUC__)
#  define SQLITE_NOINLINE  __attribute__((noinline))
#elif defined(_MSC_VER) && _MSC_VER>=1310
#  define SQLITE_NOINLINE  __declspec(noinline)
#  define SQLITE_NOINLINE
#if !defined(SQLITE_THREADSAFE)
# if defined(THREADSAFE)
#   define SQLITE_THREADSAFE THREADSAFE
# else
#   define SQLITE_THREADSAFE 1
# endif
# define SQLITE_POWERSAFE_OVERWRITE 1
#if !defined(SQLITE_DEFAULT_MEMSTATUS)
# define SQLITE_DEFAULT_MEMSTATUS 1
#if defined(SQLITE_SYSTEM_MALLOC) \
+ defined(SQLITE_WIN32_MALLOC) \
+ defined(SQLITE_ZERO_MALLOC) \
+ defined(SQLITE_MEMDEBUG)>1
# error "Two or more of the following compile-time configuration options\
are defined but at most one is allowed:\
SQLITE_SYSTEM_MALLOC, SQLITE_WIN32_MALLOC, SQLITE_MEMDEBUG,\
SQLITE_ZERO_MALLOC"
#if defined(SQLITE_SYSTEM_MALLOC) \
+ defined(SQLITE_WIN32_MALLOC) \
+ defined(SQLITE_ZERO_MALLOC) \
+ defined(SQLITE_MEMDEBUG)==0
# define SQLITE_SYSTEM_MALLOC 1
#if !defined(SQLITE_MALLOC_SOFT_LIMIT)
# define SQLITE_MALLOC_SOFT_LIMIT 1024
#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__)
#  define _XOPEN_SOURCE 600
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
#if defined(NDEBUG) && defined(SQLITE_DEBUG)
# undef NDEBUG
#if !defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) && defined(SQLITE_DEBUG)
# define SQLITE_ENABLE_EXPLAIN_COMMENTS 1
void sqlite3Coverage(int);
# define testcase(X)  if( X )
# define testcase(X)
#if !defined(NDEBUG) || defined(SQLITE_COVERAGE_TEST)
# define TESTONLY(X)  X
# define TESTONLY(X)
# define VVA_ONLY(X)  X
# define VVA_ONLY(X)
#if defined(SQLITE_COVERAGE_TEST)
# define ALWAYS(X)      (1)
# define NEVER(X)       (0)
#elif !defined(NDEBUG)
# define ALWAYS(X)      ((X)?1:(assert(0),0))
# define NEVER(X)       ((X)?(assert(0),1):0)
# define ALWAYS(X)      (X)
# define NEVER(X)       (X)
#if defined(SQLITE_FORCE_OS_TRACE) || defined(SQLITE_TEST) || \
(defined(SQLITE_DEBUG) && SQLITE_OS_WIN)
extern int sqlite3OSTrace;
# define OSTRACE(X)          if( sqlite3OSTrace ) sqlite3DebugPrintf X
# define SQLITE_HAVE_OS_TRACE
# define OSTRACE(X)
# undef  SQLITE_HAVE_OS_TRACE
#if defined(SQLITE_HAVE_OS_TRACE) || defined(SQLITE_TEST) || \
(defined(SQLITE_DEBUG) && SQLITE_OS_WIN)
# define SQLITE_NEED_ERR_NAME
# undef  SQLITE_NEED_ERR_NAME
#define IS_BIG_INT(X)  (((X)&~(i64)0xffffffff)!=0)
#define likely(X)    (X)
#define unlikely(X)  (X)
# define double sqlite_int64
# define float sqlite_int64
# define LONGDOUBLE_TYPE sqlite_int64
# ifndef SQLITE_BIG_DBL
#   define SQLITE_BIG_DBL (((sqlite3_int64)1)<<50)
# endif
# define SQLITE_OMIT_DATETIME_FUNCS 1
# define SQLITE_OMIT_TRACE 1
# undef SQLITE_MIXED_ENDIAN_64BIT_FLOAT
# undef SQLITE_HAVE_ISNAN
# define SQLITE_BIG_DBL (1e99)
#define OMIT_TEMPDB 1
#define OMIT_TEMPDB 0
#define SQLITE_MAX_FILE_FORMAT 4
# define SQLITE_DEFAULT_FILE_FORMAT 4
# define SQLITE_DEFAULT_RECURSIVE_TRIGGERS 0
# define SQLITE_TEMP_STORE 1
# define SQLITE_TEMP_STORE_xc 1
#if SQLITE_TEMP_STORE==3 || SQLITE_THREADSAFE==0
# undef SQLITE_MAX_WORKER_THREADS
# define SQLITE_MAX_WORKER_THREADS 0
# define SQLITE_MAX_WORKER_THREADS 8
# define SQLITE_DEFAULT_WORKER_THREADS 0
#if SQLITE_DEFAULT_WORKER_THREADS>SQLITE_MAX_WORKER_THREADS
# undef SQLITE_MAX_WORKER_THREADS
# define SQLITE_MAX_WORKER_THREADS SQLITE_DEFAULT_WORKER_THREADS
#define offsetof(STRUCTURE,FIELD) ((int)((char*)&((STRUCTURE*)0)->FIELD))
#define MIN(A,B) ((A)<(B)?(A):(B))
#define MAX(A,B) ((A)>(B)?(A):(B))
#define SWAP(TYPE,A,B)
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
#define U32_TYPE_DEFINED
typedef UINT16_TYPE u16;
#define U16_TYPE_DEFINED
typedef INT16_TYPE i16;
typedef UINT8_TYPE u8;
#define U8_TYPE_DEFINED
typedef INT8_TYPE i8;
#define SQLITE_MAX_U32  ((((u64)1)<<32)-1)
typedef u64 tRowcnt;
typedef u32 tRowcnt;
typedef INT16_TYPE LogEst;
# if defined(__SIZEOF_POINTER__)
#   define SQLITE_PTRSIZE __SIZEOF_POINTER__
# elif defined(i386)     || defined(__i386__)   || defined(_M_IX86) ||    \
defined(_M_ARM)   || defined(__arm__)    || defined(__x86)
#   define SQLITE_PTRSIZE 4
# else
#   define SQLITE_PTRSIZE 8
# endif
const int sqlite3one = 1;
extern const int sqlite3one;
#if (defined(i386)     || defined(__i386__)   || defined(_M_IX86) ||    \
defined(__x86_64) || defined(__x86_64__) || defined(_M_X64)  ||    \
defined(_M_AMD64) || defined(_M_ARM)     || defined(__x86)   ||    \
defined(__arm__)) && !defined(SQLITE_RUNTIME_BYTEORDER)
# define SQLITE_BYTEORDER    1234
# define SQLITE_BIGENDIAN    0
# define SQLITE_LITTLEENDIAN 1
# define SQLITE_UTF16NATIVE  SQLITE_UTF16LE
#if (defined(sparc)    || defined(__ppc__))  \
&& !defined(SQLITE_RUNTIME_BYTEORDER)
# define SQLITE_BYTEORDER    4321
# define SQLITE_BIGENDIAN    1
# define SQLITE_LITTLEENDIAN 0
# define SQLITE_UTF16NATIVE  SQLITE_UTF16BE
#if !defined(SQLITE_BYTEORDER)
# define SQLITE_BYTEORDER    0
# define SQLITE_BIGENDIAN    (*(char *)(&sqlite3one)==0)
# define SQLITE_LITTLEENDIAN (*(char *)(&sqlite3one)==1)
# define SQLITE_UTF16NATIVE  (SQLITE_BIGENDIAN?SQLITE_UTF16BE:SQLITE_UTF16LE)
#define LARGEST_INT64  (0xffffffff|(((i64)0x7fffffff)<<32))
#define SMALLEST_INT64 (((i64)-1) - LARGEST_INT64)
#define ROUND8(x)     (((x)+7)&~7)
#define ROUNDDOWN8(x) ((x)&~7)
# define EIGHT_BYTE_ALIGNMENT(X)   ((((char*)(X) - (char*)0)&3)==0)
# define EIGHT_BYTE_ALIGNMENT(X)   ((((char*)(X) - (char*)0)&7)==0)
#if defined(__OpenBSD__) || defined(__QNXNTO__)
# undef SQLITE_MAX_MMAP_SIZE
# define SQLITE_MAX_MMAP_SIZE 0
# include <TargetConditionals.h>
# if TARGET_OS_IPHONE
#   undef SQLITE_MAX_MMAP_SIZE
#   define SQLITE_MAX_MMAP_SIZE 0
# endif
# if defined(__linux__) \
|| defined(_WIN32) \
|| (defined(__APPLE__) && defined(__MACH__)) \
|| defined(__sun)
#   define SQLITE_MAX_MMAP_SIZE 0x7fff0000
# else
#   define SQLITE_MAX_MMAP_SIZE 0
# endif
# define SQLITE_MAX_MMAP_SIZE_xc 1
# define SQLITE_DEFAULT_MMAP_SIZE 0
# define SQLITE_DEFAULT_MMAP_SIZE_xc 1
#if SQLITE_DEFAULT_MMAP_SIZE>SQLITE_MAX_MMAP_SIZE
# undef SQLITE_DEFAULT_MMAP_SIZE
# define SQLITE_DEFAULT_MMAP_SIZE SQLITE_MAX_MMAP_SIZE
# undef SQLITE_ENABLE_STAT3
# define SQLITE_ENABLE_STAT3_OR_STAT4 1
#elif SQLITE_ENABLE_STAT3
# define SQLITE_ENABLE_STAT3_OR_STAT4 1
#elif SQLITE_ENABLE_STAT3_OR_STAT4
# undef SQLITE_ENABLE_STAT3_OR_STAT4
#if defined(SQLITE_DEBUG) || defined(SQLITE_ENABLE_SELECTTRACE)
# define SELECTTRACE_ENABLED 1
# define SELECTTRACE_ENABLED 0
typedef struct BusyHandler BusyHandler;
struct BusyHandler ;
#define MASTER_NAME       "sqlite_master"
#define TEMP_MASTER_NAME  "sqlite_temp_master"
#define MASTER_ROOT       1
#define SCHEMA_TABLE(x)  ((!OMIT_TEMPDB)&&(x==1)?TEMP_MASTER_NAME:MASTER_NAME)
#define ArraySize(X)    ((int)(sizeof(X)/sizeof(X[0])))
#define IsPowerOfTwo(X) (((X)&((X)-1))==0)
#define SQLITE_DYNAMIC   ((sqlite3_destructor_type)sqlite3MallocSize)
#define SQLITE_WSD const
#define GLOBAL(t,v) (*(t*)sqlite3_wsd_find((void*)&(v), sizeof(v)))
#define sqlite3GlobalConfig GLOBAL(struct Sqlite3Config, sqlite3Config)
int sqlite3_wsd_init(int N, int J);
void *sqlite3_wsd_find(void *K, int L);
#define SQLITE_WSD
#define GLOBAL(t,v) v
#define sqlite3GlobalConfig sqlite3Config
#define UNUSED_PARAMETER(x) (void)(x)
#define UNUSED_PARAMETER2(x,y) UNUSED_PARAMETER(x),UNUSED_PARAMETER(y)
typedef struct AggInfo AggInfo;
typedef struct AuthContext AuthContext;
typedef struct AutoincInfo AutoincInfo;
typedef struct Bitvec Bitvec;
typedef struct CollSeq CollSeq;
typedef struct Column Column;
typedef struct Db Db;
typedef struct Schema Schema;
typedef struct Expr Expr;
typedef struct ExprList ExprList;
typedef struct ExprSpan ExprSpan;
typedef struct FKey FKey;
typedef struct FuncDestructor FuncDestructor;
typedef struct FuncDef FuncDef;
typedef struct FuncDefHash FuncDefHash;
typedef struct IdList IdList;
typedef struct Index Index;
typedef struct IndexSample IndexSample;
typedef struct KeyClass KeyClass;
typedef struct KeyInfo KeyInfo;
typedef struct Lookaside Lookaside;
typedef struct LookasideSlot LookasideSlot;
typedef struct Module Module;
typedef struct NameContext NameContext;
typedef struct Parse Parse;
typedef struct PrintfArguments PrintfArguments;
typedef struct RowSet RowSet;
typedef struct Savepoint Savepoint;
typedef struct Select Select;
typedef struct SQLiteThread SQLiteThread;
typedef struct SelectDest SelectDest;
typedef struct SrcList SrcList;
typedef struct StrAccum StrAccum;
typedef struct Table Table;
typedef struct TableLock TableLock;
typedef struct Token Token;
typedef struct TreeView TreeView;
typedef struct Trigger Trigger;
typedef struct TriggerPrg TriggerPrg;
typedef struct TriggerStep TriggerStep;
typedef struct UnpackedRecord UnpackedRecord;
typedef struct VTable VTable;
typedef struct VtabCtx VtabCtx;
typedef struct Walker Walker;
typedef struct WhereInfo WhereInfo;
typedef struct With With;
struct Db ;
struct Schema ;
#define DbHasProperty(D,I,P)     (((D)->aDb[I].pSchema->schemaFlags&(P))==(P))
#define DbHasAnyProperty(D,I,P)  (((D)->aDb[I].pSchema->schemaFlags&(P))!=0)
#define DbSetProperty(D,I,P)     (D)->aDb[I].pSchema->schemaFlags|=(P)
#define DbClearProperty(D,I,P)   (D)->aDb[I].pSchema->schemaFlags&=~(P)
#define DB_SchemaLoaded    0x0001
#define DB_UnresetViews    0x0002
#define DB_Empty           0x0004
#define SQLITE_N_LIMIT (SQLITE_LIMIT_WORKER_THREADS+1)
struct Lookaside ;
struct LookasideSlot ;
struct FuncDefHash ;
typedef struct sqlite3_userauth sqlite3_userauth;
struct sqlite3_userauth ;
#define UAUTH_Unknown     0
#define UAUTH_Fail        1
#define UAUTH_User        2
#define UAUTH_Admin       3
int sqlite3UserAuthTable(const char*);
int sqlite3UserAuthCheckLogin(sqlite3*,const char*,u8*);
void sqlite3UserAuthInit(sqlite3*);
void sqlite3CryptFunc(sqlite3_context*,int,sqlite3_value**);
typedef int (*sqlite3_xauth)(void*,int,const char*,const char*,const char*,
const char*, const char*);
typedef int (*sqlite3_xauth)(void*,int,const char*,const char*,const char*,
const char*);
struct sqlite3 ;
#define SCHEMA_ENC(db) ((db)->aDb[0].pSchema->enc)
#define ENC(db)        ((db)->enc)
#define SQLITE_VdbeTrace      0x00000001
#define SQLITE_InternChanges  0x00000002
#define SQLITE_FullFSync      0x00000004
#define SQLITE_CkptFullFSync  0x00000008
#define SQLITE_CacheSpill     0x00000010
#define SQLITE_FullColNames   0x00000020
#define SQLITE_ShortColNames  0x00000040
#define SQLITE_CountRows      0x00000080
#define SQLITE_NullCallback   0x00000100
#define SQLITE_SqlTrace       0x00000200
#define SQLITE_VdbeListing    0x00000400
#define SQLITE_WriteSchema    0x00000800
#define SQLITE_VdbeAddopTrace 0x00001000
#define SQLITE_IgnoreChecks   0x00002000
#define SQLITE_ReadUncommitted 0x0004000
#define SQLITE_LegacyFileFmt  0x00008000
#define SQLITE_RecoveryMode   0x00010000
#define SQLITE_ReverseOrder   0x00020000
#define SQLITE_RecTriggers    0x00040000
#define SQLITE_ForeignKeys    0x00080000
#define SQLITE_AutoIndex      0x00100000
#define SQLITE_PreferBuiltin  0x00200000
#define SQLITE_LoadExtension  0x00400000
#define SQLITE_EnableTrigger  0x00800000
#define SQLITE_DeferFKs       0x01000000
#define SQLITE_QueryOnly      0x02000000
#define SQLITE_VdbeEQP        0x04000000
#define SQLITE_Vacuum         0x08000000
#define SQLITE_QueryFlattener 0x0001
#define SQLITE_ColumnCache    0x0002
#define SQLITE_GroupByOrder   0x0004
#define SQLITE_FactorOutConst 0x0008
#define SQLITE_CoverIdxScan   0x0040
#define SQLITE_OrderByIdxJoin 0x0080
#define SQLITE_SubqCoroutine  0x0100
#define SQLITE_Transitive     0x0200
#define SQLITE_OmitNoopJoin   0x0400
#define SQLITE_Stat34         0x0800
#define SQLITE_AllOpts        0xffff
#define OptimizationDisabled(db, mask)  (((db)->dbOptFlags&(mask))!=0)
#define OptimizationEnabled(db, mask)   (((db)->dbOptFlags&(mask))==0)
#define OptimizationDisabled(db, mask)  0
#define OptimizationEnabled(db, mask)   1
#define ConstFactorOk(P) ((P)->okConstFactor)
#define SQLITE_MAGIC_OPEN     0xa029a697
#define SQLITE_MAGIC_CLOSED   0x9f3c2d33
#define SQLITE_MAGIC_SICK     0x4b771290
#define SQLITE_MAGIC_BUSY     0xf03b7906
#define SQLITE_MAGIC_ERROR    0xb5357930
#define SQLITE_MAGIC_ZOMBIE   0x64cffc7f
struct FuncDef ;
struct FuncDestructor ;
#define SQLITE_FUNC_ENCMASK  0x003
#define SQLITE_FUNC_LIKE     0x004
#define SQLITE_FUNC_CASE     0x008
#define SQLITE_FUNC_EPHEM    0x010
#define SQLITE_FUNC_NEEDCOLL 0x020
#define SQLITE_FUNC_LENGTH   0x040
#define SQLITE_FUNC_TYPEOF   0x080
#define SQLITE_FUNC_COUNT    0x100
#define SQLITE_FUNC_COALESCE 0x200
#define SQLITE_FUNC_UNLIKELY 0x400
#define SQLITE_FUNC_CONSTANT 0x800
#define SQLITE_FUNC_MINMAX  0x1000
#define FUNCTION(zName, nArg, iArg, bNC, xFunc) \
#define VFUNCTION(zName, nArg, iArg, bNC, xFunc) \
#define FUNCTION2(zName, nArg, iArg, bNC, xFunc, extraFlags) \
#define STR_FUNCTION(zName, nArg, pArg, bNC, xFunc) \
#define LIKEFUNC(zName, nArg, arg, flags) \
#define AGGREGATE(zName, nArg, arg, nc, xStep, xFinal) \
#define AGGREGATE2(zName, nArg, arg, nc, xStep, xFinal, extraFlags) \
struct Savepoint ;
#define SAVEPOINT_BEGIN      0
#define SAVEPOINT_RELEASE    1
#define SAVEPOINT_ROLLBACK   2
struct Module ;
struct Column ;
#define COLFLAG_PRIMKEY  0x0001
#define COLFLAG_HIDDEN   0x0002
struct CollSeq ;
#define SQLITE_SO_ASC       0
#define SQLITE_SO_DESC      1
#define SQLITE_AFF_NONE     'A'
#define SQLITE_AFF_TEXT     'B'
#define SQLITE_AFF_NUMERIC  'C'
#define SQLITE_AFF_INTEGER  'D'
#define SQLITE_AFF_REAL     'E'
#define sqlite3IsNumericAffinity(X)  ((X)>=SQLITE_AFF_NUMERIC)
#define SQLITE_AFF_MASK     0x47
#define SQLITE_JUMPIFNULL   0x10
#define SQLITE_STOREP2      0x20
#define SQLITE_NULLEQ       0x80
#define SQLITE_NOTNULL      0x90
struct VTable ;
struct Table ;
#define TF_Readonly        0x01
#define TF_Ephemeral       0x02
#define TF_HasPrimaryKey   0x04
#define TF_Autoincrement   0x08
#define TF_Virtual         0x10
#define TF_WithoutRowid    0x20
#define TF_OOOHidden       0x40
#  define IsVirtual(X)      (((X)->tabFlags & TF_Virtual)!=0)
#  define IsHiddenColumn(X) (((X)->colFlags & COLFLAG_HIDDEN)!=0)
#  define IsVirtual(X)      0
#  define IsHiddenColumn(X) 0
#define HasRowid(X)     (((X)->tabFlags & TF_WithoutRowid)==0)
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
#define OE_Default  10
struct KeyInfo ;
struct UnpackedRecord ;
struct Index ;
#define SQLITE_IDXTYPE_APPDEF      0
#define SQLITE_IDXTYPE_UNIQUE      1
#define SQLITE_IDXTYPE_PRIMARYKEY  2
#define IsPrimaryKeyIndex(X)  ((X)->idxType==SQLITE_IDXTYPE_PRIMARYKEY)
#define IsUniqueIndex(X)      ((X)->onError!=OE_None)
struct IndexSample ;
struct Token ;
struct AggInfo ;
#if SQLITE_MAX_VARIABLE_NUMBER<=32767
typedef i16 ynVar;
typedef int ynVar;
struct Expr ;
#define EP_FromJoin  0x000001
#define EP_Agg       0x000002
#define EP_Resolved  0x000004
#define EP_Error     0x000008
#define EP_Distinct  0x000010
#define EP_VarSelect 0x000020
#define EP_DblQuoted 0x000040
#define EP_InfixFunc 0x000080
#define EP_Collate   0x000100
#define EP_Generic   0x000200
#define EP_IntValue  0x000400
#define EP_xIsSelect 0x000800
#define EP_Skip      0x001000
#define EP_Reduced   0x002000
#define EP_TokenOnly 0x004000
#define EP_Static    0x008000
#define EP_MemToken  0x010000
#define EP_NoReduce  0x020000
#define EP_Unlikely  0x040000
#define EP_ConstFunc 0x080000
#define EP_CanBeNull 0x100000
#define EP_Subquery  0x200000
#define EP_Propagate (EP_Collate|EP_Subquery)
#define ExprHasProperty(E,P)     (((E)->flags&(P))!=0)
#define ExprHasAllProperty(E,P)  (((E)->flags&(P))==(P))
#define ExprSetProperty(E,P)     (E)->flags|=(P)
#define ExprClearProperty(E,P)   (E)->flags&=~(P)
# define ExprSetVVAProperty(E,P)  (E)->flags|=(P)
# define ExprSetVVAProperty(E,P)
#define EXPR_FULLSIZE           sizeof(Expr)
#define EXPR_REDUCEDSIZE        offsetof(Expr,iTable)
#define EXPR_TOKENONLYSIZE      offsetof(Expr,pLeft)
#define EXPRDUP_REDUCE         0x0001
struct ExprList ;
struct ExprSpan ;
struct IdList ;
typedef u64 Bitmask;
#define BMS  ((int)(sizeof(Bitmask)*8))
#define MASKBIT(n)   (((Bitmask)1)<<(n))
#define MASKBIT32(n) (((unsigned int)1)<<(n))
struct SrcList ;
#define JT_INNER     0x0001
#define JT_CROSS     0x0002
#define JT_NATURAL   0x0004
#define JT_LEFT      0x0008
#define JT_RIGHT     0x0010
#define JT_OUTER     0x0020
#define JT_ERROR     0x0040
#define WHERE_ORDERBY_NORMAL   0x0000
#define WHERE_ORDERBY_MIN      0x0001
#define WHERE_ORDERBY_MAX      0x0002
#define WHERE_ONEPASS_DESIRED  0x0004
#define WHERE_DUPLICATES_OK    0x0008
#define WHERE_OMIT_OPEN_CLOSE  0x0010
#define WHERE_FORCE_TABLE      0x0020
#define WHERE_ONETABLE_ONLY    0x0040
#define WHERE_NO_AUTOINDEX     0x0080
#define WHERE_GROUPBY          0x0100
#define WHERE_DISTINCTBY       0x0200
#define WHERE_WANT_DISTINCT    0x0400
#define WHERE_SORTBYGROUP      0x0800
#define WHERE_REOPEN_IDX       0x1000
#define WHERE_DISTINCT_NOOP      0
#define WHERE_DISTINCT_UNIQUE    1
#define WHERE_DISTINCT_ORDERED   2
#define WHERE_DISTINCT_UNORDERED 3
struct NameContext ;
#define NC_AllowAgg  0x0001
#define NC_HasAgg    0x0002
#define NC_IsCheck   0x0004
#define NC_InAggFunc 0x0008
#define NC_PartIdx   0x0010
#define NC_MinMaxAgg 0x1000
struct Select ;
#define SF_Distinct        0x0001
#define SF_Resolved        0x0002
#define SF_Aggregate       0x0004
#define SF_UsesEphemeral   0x0008
#define SF_Expanded        0x0010
#define SF_HasTypeInfo     0x0020
#define SF_Compound        0x0040
#define SF_Values          0x0080
#define SF_MultiValue      0x0100
#define SF_NestedFrom      0x0200
#define SF_MaybeConvert    0x0400
#define SF_Recursive       0x0800
#define SF_MinMaxAgg       0x1000
#define SF_Converted       0x2000
#define SRT_Union        1
#define SRT_Except       2
#define SRT_Exists       3
#define SRT_Discard      4
#define SRT_Fifo         5
#define SRT_DistFifo     6
#define SRT_Queue        7
#define SRT_DistQueue    8
#define IgnorableOrderby(X) ((X->eDest)<=SRT_DistQueue)
#define SRT_Output       9
#define SRT_Mem         10
#define SRT_Set         11
#define SRT_EphemTab    12
#define SRT_Coroutine   13
#define SRT_Table       14
struct SelectDest ;
struct AutoincInfo ;
# define SQLITE_N_COLCACHE 10
struct TriggerPrg ;
#if SQLITE_MAX_ATTACHED>30
typedef unsigned char yDbMask[(SQLITE_MAX_ATTACHED+9)/8];
# define DbMaskTest(M,I)    (((M)[(I)/8]&(1<<((I)&7)))!=0)
# define DbMaskZero(M)      memset((M),0,sizeof(M))
# define DbMaskSet(M,I)     (M)[(I)/8]|=(1<<((I)&7))
# define DbMaskAllZero(M)   sqlite3DbMaskAllZero(M)
# define DbMaskNonZero(M)   (sqlite3DbMaskAllZero(M)==0)
typedef unsigned int yDbMask;
# define DbMaskTest(M,I)    (((M)&(((yDbMask)1)<<(I)))!=0)
# define DbMaskZero(M)      (M)=0
# define DbMaskSet(M,I)     (M)|=(((yDbMask)1)<<(I))
# define DbMaskAllZero(M)   (M)==0
# define DbMaskNonZero(M)   (M)!=0
struct Parse ;
#define IN_DECLARE_VTAB 0
#define IN_DECLARE_VTAB (pParse->declareVtab)
struct AuthContext ;
#define OPFLAG_NCHANGE       0x01
#define OPFLAG_EPHEM         0x01
#define OPFLAG_LASTROWID     0x02
#define OPFLAG_ISUPDATE      0x04
#define OPFLAG_APPEND        0x08
#define OPFLAG_USESEEKRESULT 0x10
#define OPFLAG_LENGTHARG     0x40
#define OPFLAG_TYPEOFARG     0x80
#define OPFLAG_BULKCSR       0x01
#define OPFLAG_SEEKEQ        0x02
#define OPFLAG_P2ISREG       0x04
#define OPFLAG_PERMUTE       0x01
struct Trigger ;
#define TRIGGER_BEFORE  1
#define TRIGGER_AFTER   2
struct TriggerStep ;
typedef struct DbFixer DbFixer;
struct DbFixer ;
struct StrAccum ;
#define STRACCUM_NOMEM   1
#define STRACCUM_TOOBIG  2
typedef struct  InitData;
struct Sqlite3Config ;
#define CORRUPT_DB  (sqlite3Config.neverCorrupt==0)
struct Walker ;
int sqlite3WalkExpr(Walker*, Expr*);
int sqlite3WalkExprList(Walker*, ExprList*);
int sqlite3WalkSelect(Walker*, Select*);
int sqlite3WalkSelectExpr(Walker*, Select*);
int sqlite3WalkSelectFrom(Walker*, Select*);
#define WRC_Continue    0
#define WRC_Prune       1
#define WRC_Abort       2
struct With ;
struct TreeView ;
#define SQLITE_SKIP_UTF8(zIn)
int sqlite3CorruptError(int);
int sqlite3MisuseError(int);
int sqlite3CantopenError(int);
#define SQLITE_CORRUPT_BKPT sqlite3CorruptError(__LINE__)
#define SQLITE_MISUSE_BKPT sqlite3MisuseError(__LINE__)
#define SQLITE_CANTOPEN_BKPT sqlite3CantopenError(__LINE__)
#if defined(SQLITE_ENABLE_FTS4) && !defined(SQLITE_ENABLE_FTS3)
# define SQLITE_ENABLE_FTS3 1
#if !defined(SQLITE_ASCII) || \
(defined(SQLITE_ENABLE_FTS3) && defined(SQLITE_AMALGAMATION))
# include <ctype.h>
# define sqlite3Toupper(x)  ((x)&~(sqlite3CtypeMap[(unsigned char)(x)]&0x20))
# define sqlite3Isspace(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x01)
# define sqlite3Isalnum(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x06)
# define sqlite3Isalpha(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x02)
# define sqlite3Isdigit(x)   (sqlite3CtypeMap[(unsigned char)(x)]&0x04)
# define sqlite3Isxdigit(x)  (sqlite3CtypeMap[(unsigned char)(x)]&0x08)
# define sqlite3Tolower(x)   (sqlite3UpperToLower[(unsigned char)(x)])
# define sqlite3Toupper(x)   toupper((unsigned char)(x))
# define sqlite3Isspace(x)   isspace((unsigned char)(x))
# define sqlite3Isalnum(x)   isalnum((unsigned char)(x))
# define sqlite3Isalpha(x)   isalpha((unsigned char)(x))
# define sqlite3Isdigit(x)   isdigit((unsigned char)(x))
# define sqlite3Isxdigit(x)  isxdigit((unsigned char)(x))
# define sqlite3Tolower(x)   tolower((unsigned char)(x))
int sqlite3IsIdChar(u8);
#define sqlite3StrICmp sqlite3_stricmp
int sqlite3Strlen30(const char*);
#define sqlite3StrNICmp sqlite3_strnicmp
int sqlite3MallocInit(void);
void sqlite3MallocEnd(void);
void *sqlite3Malloc(u64);
void *sqlite3MallocZero(u64);
void *sqlite3DbMallocZero(sqlite3*, u64);
void *sqlite3DbMallocRaw(sqlite3*, u64);
char *sqlite3DbStrDup(sqlite3*,const char*);
char *sqlite3DbStrNDup(sqlite3*,const char*, u64);
void *sqlite3Realloc(void*, u64);
void *sqlite3DbReallocOrFree(sqlite3 *, void *, u64);
void *sqlite3DbRealloc(sqlite3 *, void *, u64);
void sqlite3DbFree(sqlite3*, void*);
int sqlite3MallocSize(void*);
int sqlite3DbMallocSize(sqlite3*, void*);
void *sqlite3ScratchMalloc(int);
void sqlite3ScratchFree(void*);
void *sqlite3PageMalloc(int);
void sqlite3PageFree(void*);
void sqlite3MemSetDefault(void);
void sqlite3BenignMallocHooks(void (*)(void), void (*)(void));
int sqlite3HeapNearlyFull(void);
# define sqlite3StackAllocRaw(D,N)   alloca(N)
# define sqlite3StackAllocZero(D,N)  memset(alloca(N), 0, N)
# define sqlite3StackFree(D,P)
# define sqlite3StackAllocRaw(D,N)   sqlite3DbMallocRaw(D,N)
# define sqlite3StackAllocZero(D,N)  sqlite3DbMallocZero(D,N)
# define sqlite3StackFree(D,P)       sqlite3DbFree(D,P)
const sqlite3_mem_methods *sqlite3MemGetMemsys3(void);
const sqlite3_mem_methods *sqlite3MemGetMemsys5(void);
sqlite3_mutex_methods const *sqlite3DefaultMutex(void);
sqlite3_mutex_methods const *sqlite3NoopMutex(void);
sqlite3_mutex *sqlite3MutexAlloc(int);
int sqlite3MutexInit(void);
int sqlite3MutexEnd(void);
sqlite3_int64 sqlite3StatusValue(int);
void sqlite3StatusUp(int, int);
void sqlite3StatusDown(int, int);
void sqlite3StatusSet(int, int);
sqlite3_mutex *sqlite3Pcache1Mutex(void);
sqlite3_mutex *sqlite3MallocMutex(void);
int sqlite3IsNaN(double);
# define sqlite3IsNaN(X)  0
struct PrintfArguments ;
#define SQLITE_PRINTF_INTERNAL 0x01
#define SQLITE_PRINTF_SQLFUNC  0x02
void sqlite3VXPrintf(StrAccum*, u32, const char*, va_list);
void sqlite3XPrintf(StrAccum*, u32, const char*, ...);
char *sqlite3MPrintf(sqlite3*,const char*, ...);
char *sqlite3VMPrintf(sqlite3*,const char*, va_list);
char *sqlite3MAppendf(sqlite3*,char*,const char*,...);
#if defined(SQLITE_DEBUG) || defined(SQLITE_HAVE_OS_TRACE)
void sqlite3DebugPrintf(const char*, ...);
#if defined(SQLITE_TEST)
void *sqlite3TestTextToPtr(const char*);
#if defined(SQLITE_DEBUG)
TreeView *sqlite3TreeViewPush(TreeView*,u8);
void sqlite3TreeViewPop(TreeView*);
void sqlite3TreeViewLine(TreeView*, const char*, ...);
void sqlite3TreeViewItem(TreeView*, const char*, u8);
void sqlite3TreeViewExpr(TreeView*, const Expr*, u8);
void sqlite3TreeViewExprList(TreeView*, const ExprList*, u8, const char*);
void sqlite3TreeViewSelect(TreeView*, const Select*, u8);
void sqlite3SetString(char **, sqlite3*, const char*, ...);
void sqlite3ErrorMsg(Parse*, const char*, ...);
int sqlite3Dequote(char*);
int sqlite3KeywordCode(const unsigned char*, int);
int sqlite3RunParser(Parse*, const char*, char **);
void sqlite3FinishCoding(Parse*);
int sqlite3GetTempReg(Parse*);
void sqlite3ReleaseTempReg(Parse*,int);
int sqlite3GetTempRange(Parse*,int);
void sqlite3ReleaseTempRange(Parse*,int,int);
void sqlite3ClearTempRegCache(Parse*);
Expr *sqlite3ExprAlloc(sqlite3*,int,const Token*,int);
Expr *sqlite3Expr(sqlite3*,int,const char*);
void sqlite3ExprAttachSubtrees(sqlite3*,Expr*,Expr*,Expr*);
Expr *sqlite3PExpr(Parse*, int, Expr*, Expr*, const Token*);
Expr *sqlite3ExprAnd(sqlite3*,Expr*, Expr*);
Expr *sqlite3ExprFunction(Parse*,ExprList*, Token*);
void sqlite3ExprAssignVarNumber(Parse*, Expr*);
void sqlite3ExprDelete(sqlite3*, Expr*);
ExprList *sqlite3ExprListAppend(Parse*,ExprList*,Expr*);
void sqlite3ExprListSetName(Parse*,ExprList*,Token*,int);
void sqlite3ExprListSetSpan(Parse*,ExprList*,ExprSpan*);
void sqlite3ExprListDelete(sqlite3*, ExprList*);
u32 sqlite3ExprListFlags(const ExprList*);
int sqlite3Init(sqlite3*, char**);
int sqlite3InitCallback(void*, int, char**, char**);
void sqlite3Pragma(Parse*,Token*,Token*,Token*,int);
void sqlite3ResetAllSchemasOfConnection(sqlite3*);
void sqlite3ResetOneSchema(sqlite3*,int);
void sqlite3CollapseDatabaseArray(sqlite3*);
void sqlite3BeginParse(Parse*,int);
void sqlite3CommitInternalChanges(sqlite3*);
Table *sqlite3ResultSetOfSelect(Parse*,Select*);
void sqlite3OpenMasterTable(Parse *, int);
Index *sqlite3PrimaryKeyIndex(Table*);
i16 sqlite3ColumnOfIndex(Index*, i16);
void sqlite3StartTable(Parse*,Token*,Token*,int,int,int,int);
void sqlite3AddColumn(Parse*,Token*);
void sqlite3AddNotNull(Parse*, int);
void sqlite3AddPrimaryKey(Parse*, ExprList*, int, int, int);
void sqlite3AddCheckConstraint(Parse*, Expr*);
void sqlite3AddColumnType(Parse*,Token*);
void sqlite3AddDefaultValue(Parse*,ExprSpan*);
void sqlite3AddCollateType(Parse*, Token*);
void sqlite3EndTable(Parse*,Token*,Token*,u8,Select*);
int sqlite3ParseUri(const char*,const char*,unsigned int*,
sqlite3_vfs**,char**,char **);
Btree *sqlite3DbNameToBtree(sqlite3*,const char*);
int sqlite3CodeOnce(Parse *);
# define sqlite3FaultSim(X) SQLITE_OK
int sqlite3FaultSim(int);
Bitvec *sqlite3BitvecCreate(u32);
int sqlite3BitvecTest(Bitvec*, u32);
int sqlite3BitvecSet(Bitvec*, u32);
void sqlite3BitvecClear(Bitvec*, u32, void*);
void sqlite3BitvecDestroy(Bitvec*);
u32 sqlite3BitvecSize(Bitvec*);
int sqlite3BitvecBuiltinTest(int,int*);
RowSet *sqlite3RowSetInit(sqlite3*, void*, unsigned int);
void sqlite3RowSetClear(RowSet*);
void sqlite3RowSetInsert(RowSet*, i64);
int sqlite3RowSetTest(RowSet*, int iBatch, i64);
int sqlite3RowSetNext(RowSet*, i64*);
void sqlite3CreateView(Parse*,Token*,Token*,Token*,Select*,int,int);
#if !defined(SQLITE_OMIT_VIEW) || !defined(SQLITE_OMIT_VIRTUALTABLE)
int sqlite3ViewGetColumnNames(Parse*,Table*);
# define sqlite3ViewGetColumnNames(A,B) 0
#if SQLITE_MAX_ATTACHED>30
int sqlite3DbMaskAllZero(yDbMask);
void sqlite3DropTable(Parse*, SrcList*, int, int);
void sqlite3CodeDropTable(Parse*, Table*, int, int);
void sqlite3DeleteTable(sqlite3*, Table*);
void sqlite3AutoincrementBegin(Parse *pParse);
void sqlite3AutoincrementEnd(Parse *pParse);
# define sqlite3AutoincrementBegin(X)
# define sqlite3AutoincrementEnd(X)
void sqlite3Insert(Parse*, SrcList*, Select*, IdList*, int);
void *sqlite3ArrayAllocate(sqlite3*,void*,int,int*,int*);
IdList *sqlite3IdListAppend(sqlite3*, IdList*, Token*);
int sqlite3IdListIndex(IdList*,const char*);
SrcList *sqlite3SrcListEnlarge(sqlite3*, SrcList*, int, int);
SrcList *sqlite3SrcListAppend(sqlite3*, SrcList*, Token*, Token*);
SrcList *sqlite3SrcListAppendFromTerm(Parse*, SrcList*, Token*, Token*,
Token*, Select*, Expr*, IdList*);
void sqlite3SrcListIndexedBy(Parse *, SrcList *, Token *);
int sqlite3IndexedByLookup(Parse *, struct SrcList_item *);
void sqlite3SrcListShiftJoinType(SrcList*);
void sqlite3SrcListAssignCursors(Parse*, SrcList*);
void sqlite3IdListDelete(sqlite3*, IdList*);
void sqlite3SrcListDelete(sqlite3*, SrcList*);
Index *sqlite3AllocateIndexObject(sqlite3*,i16,int,char**);
Index *sqlite3CreateIndex(Parse*,Token*,Token*,SrcList*,ExprList*,int,Token*,
Expr*, int, int);
void sqlite3DropIndex(Parse*, SrcList*, int);
int sqlite3Select(Parse*, Select*, SelectDest*);
Select *sqlite3SelectNew(Parse*,ExprList*,SrcList*,Expr*,ExprList*,
Expr*,ExprList*,u16,Expr*,Expr*);
void sqlite3SelectDelete(sqlite3*, Select*);
Table *sqlite3SrcListLookup(Parse*, SrcList*);
int sqlite3IsReadOnly(Parse*, Table*, int);
void sqlite3OpenTable(Parse*, int iCur, int iDb, Table*, int);
#if defined(SQLITE_ENABLE_UPDATE_DELETE_LIMIT) && !defined(SQLITE_OMIT_SUBQUERY)
Expr *sqlite3LimitWhere(Parse*,SrcList*,Expr*,ExprList*,Expr*,Expr*,char*);
void sqlite3DeleteFrom(Parse*, SrcList*, Expr*);
void sqlite3Update(Parse*, SrcList*, ExprList*, Expr*, int);
WhereInfo *sqlite3WhereBegin(Parse*,SrcList*,Expr*,ExprList*,ExprList*,u16,int);
void sqlite3WhereEnd(WhereInfo*);
u64 sqlite3WhereOutputRowCount(WhereInfo*);
int sqlite3WhereIsDistinct(WhereInfo*);
int sqlite3WhereIsOrdered(WhereInfo*);
int sqlite3WhereIsSorted(WhereInfo*);
int sqlite3WhereContinueLabel(WhereInfo*);
int sqlite3WhereBreakLabel(WhereInfo*);
int sqlite3WhereOkOnePass(WhereInfo*, int*);
int sqlite3ExprCodeGetColumn(Parse*, Table*, int, int, int, u8);
void sqlite3ExprCodeGetColumnOfTable(Vdbe*, Table*, int, int, int);
void sqlite3ExprCodeMove(Parse*, int, int, int);
void sqlite3ExprCacheStore(Parse*, int, int, int);
void sqlite3ExprCachePush(Parse*);
void sqlite3ExprCachePop(Parse*);
void sqlite3ExprCacheRemove(Parse*, int, int);
void sqlite3ExprCacheClear(Parse*);
void sqlite3ExprCacheAffinityChange(Parse*, int, int);
void sqlite3ExprCode(Parse*, Expr*, int);
void sqlite3ExprCodeFactorable(Parse*, Expr*, int);
void sqlite3ExprCodeAtInit(Parse*, Expr*, int, u8);
int sqlite3ExprCodeTemp(Parse*, Expr*, int*);
int sqlite3ExprCodeTarget(Parse*, Expr*, int);
void sqlite3ExprCodeAndCache(Parse*, Expr*, int);
int sqlite3ExprCodeExprList(Parse*, ExprList*, int, u8);
#define SQLITE_ECEL_DUP      0x01
#define SQLITE_ECEL_FACTOR   0x02
void sqlite3ExprIfTrue(Parse*, Expr*, int, int);
void sqlite3ExprIfFalse(Parse*, Expr*, int, int);
Table *sqlite3FindTable(sqlite3*,const char*, const char*);
Table *sqlite3LocateTable(Parse*,int isView,const char*, const char*);
Table *sqlite3LocateTableItem(Parse*,int isView,struct SrcList_item *);
Index *sqlite3FindIndex(sqlite3*,const char*, const char*);
void sqlite3UnlinkAndDeleteTable(sqlite3*,int,const char*);
void sqlite3UnlinkAndDeleteIndex(sqlite3*,int,const char*);
void sqlite3Vacuum(Parse*);
int sqlite3RunVacuum(char**, sqlite3*);
char *sqlite3NameFromToken(sqlite3*, Token*);
int sqlite3ExprCompare(Expr*, Expr*, int);
int sqlite3ExprListCompare(ExprList*, ExprList*, int);
int sqlite3ExprImpliesExpr(Expr*, Expr*, int);
void sqlite3ExprAnalyzeAggregates(NameContext*, Expr*);
void sqlite3ExprAnalyzeAggList(NameContext*,ExprList*);
int sqlite3FunctionUsesThisSrc(Expr*, SrcList*);
Vdbe *sqlite3GetVdbe(Parse*);
void sqlite3PrngSaveState(void);
void sqlite3PrngRestoreState(void);
void sqlite3RollbackAll(sqlite3*,int);
void sqlite3CodeVerifySchema(Parse*, int);
void sqlite3CodeVerifyNamedSchema(Parse*, const char *zDb);
void sqlite3BeginTransaction(Parse*, int);
void sqlite3CommitTransaction(Parse*);
void sqlite3RollbackTransaction(Parse*);
void sqlite3Savepoint(Parse*, int, Token*);
void sqlite3CloseSavepoints(sqlite3 *);
void sqlite3LeaveMutexAndCloseZombie(sqlite3*);
int sqlite3ExprIsConstant(Expr*);
int sqlite3ExprIsConstantNotJoin(Expr*);
int sqlite3ExprIsConstantOrFunction(Expr*, u8);
int sqlite3ExprIsTableConstant(Expr*,int);
int sqlite3ExprIsInteger(Expr*, int*);
int sqlite3ExprCanBeNull(const Expr*);
int sqlite3ExprNeedsNoAffinityChange(const Expr*, char);
int sqlite3IsRowid(const char*);
void sqlite3GenerateRowDelete(Parse*,Table*,Trigger*,int,int,int,i16,u8,u8,u8);
void sqlite3GenerateRowIndexDelete(Parse*, Table*, int, int, int*);
int sqlite3GenerateIndexKey(Parse*, Index*, int, int, int, int*,Index*,int);
void sqlite3ResolvePartIdxLabel(Parse*,int);
void sqlite3GenerateConstraintChecks(Parse*,Table*,int*,int,int,int,int,
u8,u8,int,int*);
void sqlite3CompleteInsertion(Parse*,Table*,int,int,int,int*,int,int,int);
int sqlite3OpenTableAndIndices(Parse*, Table*, int, int, u8*, int*, int*);
void sqlite3BeginWriteOperation(Parse*, int, int);
void sqlite3MultiWrite(Parse*);
void sqlite3MayAbort(Parse*);
void sqlite3HaltConstraint(Parse*, int, int, char*, i8, u8);
void sqlite3UniqueConstraint(Parse*, int, Index*);
void sqlite3RowidConstraint(Parse*, int, Table*);
Expr *sqlite3ExprDup(sqlite3*,Expr*,int);
ExprList *sqlite3ExprListDup(sqlite3*,ExprList*,int);
SrcList *sqlite3SrcListDup(sqlite3*,SrcList*,int);
IdList *sqlite3IdListDup(sqlite3*,IdList*);
Select *sqlite3SelectDup(sqlite3*,Select*,int);
#if SELECTTRACE_ENABLED
void sqlite3SelectSetName(Select*,const char*);
# define sqlite3SelectSetName(A,B)
void sqlite3FuncDefInsert(FuncDefHash*, FuncDef*);
FuncDef *sqlite3FindFunction(sqlite3*,const char*,int,int,u8,u8);
void sqlite3RegisterBuiltinFunctions(sqlite3*);
void sqlite3RegisterDateTimeFunctions(void);
void sqlite3RegisterGlobalFunctions(void);
int sqlite3SafetyCheckOk(sqlite3*);
int sqlite3SafetyCheckSickOrOk(sqlite3*);
void sqlite3ChangeCookie(Parse*, int);
#if !defined(SQLITE_OMIT_VIEW) && !defined(SQLITE_OMIT_TRIGGER)
void sqlite3MaterializeView(Parse*, Table*, Expr*, int);
void sqlite3BeginTrigger(Parse*, Token*,Token*,int,int,IdList*,SrcList*,
Expr*,int, int);
void sqlite3FinishTrigger(Parse*, TriggerStep*, Token*);
void sqlite3DropTrigger(Parse*, SrcList*, int);
void sqlite3DropTriggerPtr(Parse*, Trigger*);
Trigger *sqlite3TriggersExist(Parse *, Table*, int, ExprList*, int *pMask);
Trigger *sqlite3TriggerList(Parse *, Table *);
void sqlite3CodeRowTrigger(Parse*, Trigger *, int, ExprList*, int, Table *,
int, int, int);
void sqlite3CodeRowTriggerDirect(Parse *, Trigger *, Table *, int, int, int);
void sqliteViewTriggers(Parse*, Table*, Expr*, int, ExprList*);
void sqlite3DeleteTriggerStep(sqlite3*, TriggerStep*);
TriggerStep *sqlite3TriggerSelectStep(sqlite3*,Select*);
TriggerStep *sqlite3TriggerInsertStep(sqlite3*,Token*, IdList*,
Select*,u8);
TriggerStep *sqlite3TriggerUpdateStep(sqlite3*,Token*,ExprList*, Expr*, u8);
TriggerStep *sqlite3TriggerDeleteStep(sqlite3*,Token*, Expr*);
void sqlite3DeleteTrigger(sqlite3*, Trigger*);
void sqlite3UnlinkAndDeleteTrigger(sqlite3*,int,const char*);
u32 sqlite3TriggerColmask(Parse*,Trigger*,ExprList*,int,int,Table*,int);
# define sqlite3ParseToplevel(p) ((p)->pToplevel ? (p)->pToplevel : (p))
# define sqlite3TriggersExist(B,C,D,E,F) 0
# define sqlite3DeleteTrigger(A,B)
# define sqlite3DropTriggerPtr(A,B)
# define sqlite3UnlinkAndDeleteTrigger(A,B,C)
# define sqlite3CodeRowTrigger(A,B,C,D,E,F,G,H,I)
# define sqlite3CodeRowTriggerDirect(A,B,C,D,E,F)
# define sqlite3TriggerList(X, Y) 0
# define sqlite3ParseToplevel(p) p
# define sqlite3TriggerColmask(A,B,C,D,E,F,G) 0
int sqlite3JoinType(Parse*, Token*, Token*, Token*);
void sqlite3CreateForeignKey(Parse*, ExprList*, Token*, ExprList*, int);
void sqlite3DeferForeignKey(Parse*, int);
void sqlite3AuthRead(Parse*,Expr*,Schema*,SrcList*);
int sqlite3AuthCheck(Parse*,int, const char*, const char*, const char*);
void sqlite3AuthContextPush(Parse*, AuthContext*, const char*);
void sqlite3AuthContextPop(AuthContext*);
int sqlite3AuthReadCol(Parse*, const char *, const char *, int);
# define sqlite3AuthRead(a,b,c,d)
# define sqlite3AuthCheck(a,b,c,d,e)    SQLITE_OK
# define sqlite3AuthContextPush(a,b,c)
# define sqlite3AuthContextPop(a)  ((void)(a))
void sqlite3Attach(Parse*, Expr*, Expr*, Expr*);
void sqlite3Detach(Parse*, Expr*);
void sqlite3FixInit(DbFixer*, Parse*, int, const char*, const Token*);
int sqlite3FixSrcList(DbFixer*, SrcList*);
int sqlite3FixSelect(DbFixer*, Select*);
int sqlite3FixExpr(DbFixer*, Expr*);
int sqlite3FixExprList(DbFixer*, ExprList*);
int sqlite3FixTriggerStep(DbFixer*, TriggerStep*);
int sqlite3AtoF(const char *z, double*, int, u8);
int sqlite3GetInt32(const char *, int*);
int sqlite3Atoi(const char*);
int sqlite3Utf16ByteLen(const void *pData, int nChar);
int sqlite3Utf8CharLen(const char *pData, int nByte);
u32 sqlite3Utf8Read(const u8**);
LogEst sqlite3LogEst(u64);
LogEst sqlite3LogEstAdd(LogEst,LogEst);
LogEst sqlite3LogEstFromDouble(double);
u64 sqlite3LogEstToInt(LogEst);
int sqlite3PutVarint(unsigned char*, u64);
u8 sqlite3GetVarint(const unsigned char *, u64 *);
u8 sqlite3GetVarint32(const unsigned char *, u32 *);
int sqlite3VarintLen(u64 v);
#define getVarint32(A,B)  \
(u8)((*(A)<(u8)0x80)?((B)=(u32)*(A)),1:sqlite3GetVarint32((A),(u32 *)&(B)))
#define putVarint32(A,B)  \
(u8)(((u32)(B)<(u32)0x80)?(*(A)=(unsigned char)(B)),1:\
sqlite3PutVarint((A),(B)))
#define getVarint    sqlite3GetVarint
#define putVarint    sqlite3PutVarint
const char *sqlite3IndexAffinityStr(Vdbe *, Index *);
void sqlite3TableAffinity(Vdbe*, Table*, int);
char sqlite3CompareAffinity(Expr *pExpr, char aff2);
int sqlite3IndexAffinityOk(Expr *pExpr, char idx_affinity);
char sqlite3ExprAffinity(Expr *pExpr);
int sqlite3Atoi64(const char*, i64*, int, u8);
int sqlite3DecOrHexToI64(const char*, i64*);
void sqlite3ErrorWithMsg(sqlite3*, int, const char*,...);
void sqlite3Error(sqlite3*,int);
void *sqlite3HexToBlob(sqlite3*, const char *z, int n);
u8 sqlite3HexToInt(int h);
int sqlite3TwoPartName(Parse *, Token *, Token *, Token **);
#if defined(SQLITE_NEED_ERR_NAME)
const char *sqlite3ErrName(int);
const char *sqlite3ErrStr(int);
int sqlite3ReadSchema(Parse *pParse);
CollSeq *sqlite3FindCollSeq(sqlite3*,u8 enc, const char*,int);
CollSeq *sqlite3LocateCollSeq(Parse *pParse, const char*zName);
CollSeq *sqlite3ExprCollSeq(Parse *pParse, Expr *pExpr);
Expr *sqlite3ExprAddCollateToken(Parse *pParse, Expr*, const Token*, int);
Expr *sqlite3ExprAddCollateString(Parse*,Expr*,const char*);
Expr *sqlite3ExprSkipCollate(Expr*);
int sqlite3CheckCollSeq(Parse *, CollSeq *);
int sqlite3CheckObjectName(Parse *, const char *);
void sqlite3VdbeSetChanges(sqlite3 *, int);
int sqlite3AddInt64(i64*,i64);
int sqlite3SubInt64(i64*,i64);
int sqlite3MulInt64(i64*,i64);
int sqlite3AbsInt32(int);
void sqlite3FileSuffix3(const char*, char*);
# define sqlite3FileSuffix3(X,Y)
u8 sqlite3GetBoolean(const char *z,u8);
const void *sqlite3ValueText(sqlite3_value*, u8);
int sqlite3ValueBytes(sqlite3_value*, u8);
void sqlite3ValueSetStr(sqlite3_value*, int, const void *,u8,
void(*)(void*));
void sqlite3ValueSetNull(sqlite3_value*);
void sqlite3ValueFree(sqlite3_value*);
sqlite3_value *sqlite3ValueNew(sqlite3 *);
char *sqlite3Utf16to8(sqlite3 *, const void*, int, u8);
int sqlite3ValueFromExpr(sqlite3 *, Expr *, u8, u8, sqlite3_value **);
void sqlite3ValueApplyAffinity(sqlite3_value *, u8, u8);
extern const unsigned char sqlite3OpcodeProperty[];
extern const unsigned char sqlite3UpperToLower[];
extern const unsigned char sqlite3CtypeMap[];
extern const Token sqlite3IntTokens[];
extern SQLITE_WSD struct Sqlite3Config sqlite3Config;
extern SQLITE_WSD FuncDefHash sqlite3GlobalFunctions;
extern int sqlite3PendingByte;
void sqlite3RootPageMoved(sqlite3*, int, int, int);
void sqlite3Reindex(Parse*, Token*, Token*);
void sqlite3AlterFunctions(void);
void sqlite3AlterRenameTable(Parse*, SrcList*, Token*);
int sqlite3GetToken(const unsigned char *, int *);
void sqlite3NestedParse(Parse*, const char*, ...);
void sqlite3ExpirePreparedStatements(sqlite3*);
int sqlite3CodeSubselect(Parse *, Expr *, int, int);
void sqlite3SelectPrep(Parse*, Select*, NameContext*);
int sqlite3MatchSpanName(const char*, const char*, const char*, const char*);
int sqlite3ResolveExprNames(NameContext*, Expr*);
void sqlite3ResolveSelectNames(Parse*, Select*, NameContext*);
void sqlite3ResolveSelfReference(Parse*,Table*,int,Expr*,ExprList*);
int sqlite3ResolveOrderGroupBy(Parse*, Select*, ExprList*, const char*);
void sqlite3ColumnDefault(Vdbe *, Table *, int, int);
void sqlite3AlterFinishAddColumn(Parse *, Token *);
void sqlite3AlterBeginAddColumn(Parse *, SrcList *);
CollSeq *sqlite3GetCollSeq(Parse*, u8, CollSeq *, const char*);
char sqlite3AffinityType(const char*, u8*);
void sqlite3Analyze(Parse*, Token*, Token*);
int sqlite3InvokeBusyHandler(BusyHandler*);
int sqlite3FindDb(sqlite3*, Token*);
int sqlite3FindDbName(sqlite3 *, const char *);
int sqlite3AnalysisLoad(sqlite3*,int iDB);
void sqlite3DeleteIndexSamples(sqlite3*,Index*);
void sqlite3DefaultRowEst(Index*);
void sqlite3RegisterLikeFunctions(sqlite3*, int);
int sqlite3IsLikeFunction(sqlite3*,Expr*,int*,char*);
void sqlite3MinimumFileFormat(Parse*, int, int);
void sqlite3SchemaClear(void *);
Schema *sqlite3SchemaGet(sqlite3 *, Btree *);
int sqlite3SchemaToIndex(sqlite3 *db, Schema *);
KeyInfo *sqlite3KeyInfoAlloc(sqlite3*,int,int);
void sqlite3KeyInfoUnref(KeyInfo*);
KeyInfo *sqlite3KeyInfoRef(KeyInfo*);
KeyInfo *sqlite3KeyInfoOfIndex(Parse*, Index*);
int sqlite3KeyInfoIsWriteable(KeyInfo*);
int sqlite3CreateFunc(sqlite3 *, const char *, int, int, void *,
void (*)(sqlite3_context*,int,sqlite3_value **),
void (*)(sqlite3_context*,int,sqlite3_value **), void (*)(sqlite3_context*),
FuncDestructor *pDestructor
);
int sqlite3ApiExit(sqlite3 *db, int);
int sqlite3OpenTempDatabase(Parse *);
void sqlite3StrAccumInit(StrAccum*, sqlite3*, char*, int, int);
void sqlite3StrAccumAppend(StrAccum*,const char*,int);
void sqlite3StrAccumAppendAll(StrAccum*,const char*);
void sqlite3AppendChar(StrAccum*,int,char);
char *sqlite3StrAccumFinish(StrAccum*);
void sqlite3StrAccumReset(StrAccum*);
void sqlite3SelectDestInit(SelectDest*,int,int);
Expr *sqlite3CreateColumnExpr(sqlite3 *, SrcList *, int, int);
void sqlite3BackupRestart(sqlite3_backup *);
void sqlite3BackupUpdate(sqlite3_backup *, Pgno, const u8 *);
void sqlite3AnalyzeFunctions(void);
int sqlite3Stat4ProbeSetValue(Parse*,Index*,UnpackedRecord**,Expr*,u8,int,int*);
int sqlite3Stat4ValueFromExpr(Parse*, Expr*, u8, sqlite3_value**);
void sqlite3Stat4ProbeFree(UnpackedRecord*);
int sqlite3Stat4Column(sqlite3*, const void*, int, int, sqlite3_value**);
void *sqlite3ParserAlloc(void*(*)(u64));
void sqlite3ParserFree(void*, void(*)(void*));
void sqlite3Parser(void*, int, Token, Parse*);
int sqlite3ParserStackPeak(void*);
void sqlite3AutoLoadExtensions(sqlite3*);
void sqlite3CloseExtensions(sqlite3*);
# define sqlite3CloseExtensions(X)
void sqlite3TableLock(Parse *, int, int, u8, const char *);
#define sqlite3TableLock(v,w,x,y,z)
int sqlite3Utf8To8(unsigned char*);
#  define sqlite3VtabClear(Y)
#  define sqlite3VtabSync(X,Y) SQLITE_OK
#  define sqlite3VtabRollback(X)
#  define sqlite3VtabCommit(X)
#  define sqlite3VtabInSync(db) 0
#  define sqlite3VtabLock(X)
#  define sqlite3VtabUnlock(X)
#  define sqlite3VtabUnlockList(X)
#  define sqlite3VtabSavepoint(X, Y, Z) SQLITE_OK
#  define sqlite3GetVTable(X,Y)  ((VTable*)0)
void sqlite3VtabClear(sqlite3 *db, Table*);
void sqlite3VtabDisconnect(sqlite3 *db, Table *p);
int sqlite3VtabSync(sqlite3 *db, Vdbe*);
int sqlite3VtabRollback(sqlite3 *db);
int sqlite3VtabCommit(sqlite3 *db);
void sqlite3VtabLock(VTable *);
void sqlite3VtabUnlock(VTable *);
void sqlite3VtabUnlockList(sqlite3*);
int sqlite3VtabSavepoint(sqlite3 *, int, int);
void sqlite3VtabImportErrmsg(Vdbe*, sqlite3_vtab*);
VTable *sqlite3GetVTable(sqlite3*, Table*);
#  define sqlite3VtabInSync(db) ((db)->nVTrans>0 && (db)->aVTrans==0)
void sqlite3VtabMakeWritable(Parse*,Table*);
void sqlite3VtabBeginParse(Parse*, Token*, Token*, Token*, int);
void sqlite3VtabFinishParse(Parse*, Token*);
void sqlite3VtabArgInit(Parse*);
void sqlite3VtabArgExtend(Parse*, Token*);
int sqlite3VtabCallCreate(sqlite3*, int, const char *, char **);
int sqlite3VtabCallConnect(Parse*, Table*);
int sqlite3VtabCallDestroy(sqlite3*, int, const char *);
int sqlite3VtabBegin(sqlite3 *, VTable *);
FuncDef *sqlite3VtabOverloadFunction(sqlite3 *,FuncDef*, int nArg, Expr*);
void sqlite3InvalidFunction(sqlite3_context*,int,sqlite3_value**);
sqlite3_int64 sqlite3StmtCurrentTime(sqlite3_context*);
int sqlite3VdbeParameterIndex(Vdbe*, const char*, int);
int sqlite3TransferBindings(sqlite3_stmt *, sqlite3_stmt *);
void sqlite3ParserReset(Parse*);
int sqlite3Reprepare(Vdbe*);
void sqlite3ExprListCheckLength(Parse*, ExprList*, const char*);
CollSeq *sqlite3BinaryCompareCollSeq(Parse *, Expr *, Expr *);
int sqlite3TempInMemory(const sqlite3*);
const char *sqlite3JournalModename(int);
int sqlite3Checkpoint(sqlite3*, int, int, int*, int*);
int sqlite3WalDefaultHook(void*,sqlite3*,const char*,int);
With *sqlite3WithAdd(Parse*,With*,Token*,ExprList*,Select*);
void sqlite3WithDelete(sqlite3*,With*);
void sqlite3WithPush(Parse*, With*, u8);
#define sqlite3WithPush(x,y,z)
#define sqlite3WithDelete(x,y)
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
void sqlite3FkCheck(Parse*, Table*, int, int, int*, int);
void sqlite3FkDropTable(Parse*, SrcList *, Table*);
void sqlite3FkActions(Parse*, Table*, ExprList*, int, int*, int);
int sqlite3FkRequired(Parse*, Table*, int*, int);
u32 sqlite3FkOldmask(Parse*, Table*);
FKey *sqlite3FkReferences(Table *);
#define sqlite3FkActions(a,b,c,d,e,f)
#define sqlite3FkCheck(a,b,c,d,e,f)
#define sqlite3FkDropTable(a,b,c)
#define sqlite3FkOldmask(a,b)         0
#define sqlite3FkRequired(a,b,c,d)    0
void sqlite3FkDelete(sqlite3 *, Table*);
int sqlite3FkLocateIndex(Parse*,Table*,FKey*,Index**,int**);
#define sqlite3FkDelete(a,b)
#define sqlite3FkLocateIndex(a,b,c,d,e)
#define SQLITE_FAULTINJECTOR_MALLOC     0
#define SQLITE_FAULTINJECTOR_COUNT      1
void sqlite3BeginBenignMalloc(void);
void sqlite3EndBenignMalloc(void);
#define sqlite3BeginBenignMalloc()
#define sqlite3EndBenignMalloc()
#define IN_INDEX_ROWID        1
#define IN_INDEX_EPH          2
#define IN_INDEX_INDEX_ASC    3
#define IN_INDEX_INDEX_DESC   4
#define IN_INDEX_NOOP         5
#define IN_INDEX_NOOP_OK     0x0001
#define IN_INDEX_MEMBERSHIP  0x0002
#define IN_INDEX_LOOP        0x0004
int sqlite3FindInIndex(Parse *, Expr *, u32, int*);
int sqlite3JournalOpen(sqlite3_vfs *, const char *, sqlite3_file *, int, int);
int sqlite3JournalSize(sqlite3_vfs *);
int sqlite3JournalCreate(sqlite3_file *);
int sqlite3JournalExists(sqlite3_file *p);
#define sqlite3JournalSize(pVfs) ((pVfs)->szOsFile)
#define sqlite3JournalExists(p) 1
void sqlite3MemJournalOpen(sqlite3_file *);
int sqlite3MemJournalSize(void);
int sqlite3IsMemJournal(sqlite3_file *);
void sqlite3ExprSetHeightAndFlags(Parse *pParse, Expr *p);
#if SQLITE_MAX_EXPR_DEPTH>0
int sqlite3SelectExprHeight(Select *);
int sqlite3ExprCheckHeight(Parse*, int);
#define sqlite3SelectExprHeight(x) 0
#define sqlite3ExprCheckHeight(x,y)
u32 sqlite3Get4byte(const u8*);
void sqlite3Put4byte(u8*, u32);
void sqlite3ConnectionBlocked(sqlite3 *, sqlite3 *);
void sqlite3ConnectionUnlocked(sqlite3 *db);
void sqlite3ConnectionClosed(sqlite3 *db);
#define sqlite3ConnectionBlocked(x,y)
#define sqlite3ConnectionUnlocked(x)
#define sqlite3ConnectionClosed(x)
void sqlite3ParserTrace(FILE*, char *);
# define IOTRACE(A)  if( sqlite3IoTrace )
void sqlite3VdbeIOTraceSql(Vdbe*);
SQLITE_API SQLITE_EXTERN void (SQLITE_CDECL *sqlite3IoTrace)(const char*,...);
# define IOTRACE(A)
# define sqlite3VdbeIOTraceSql(X)
void sqlite3MemdebugSetType(void*,u8);
int sqlite3MemdebugHasType(void*,u8);
int sqlite3MemdebugNoType(void*,u8);
# define sqlite3MemdebugSetType(X,Y)
# define sqlite3MemdebugHasType(X,Y)  1
# define sqlite3MemdebugNoType(X,Y)   1
#define MEMTYPE_HEAP       0x01
#define MEMTYPE_LOOKASIDE  0x02
#define MEMTYPE_SCRATCH    0x04
#define MEMTYPE_PCACHE     0x08
#if SQLITE_MAX_WORKER_THREADS>0
int sqlite3ThreadCreate(SQLiteThread**,void*(*)(void*),void*);
int sqlite3ThreadJoin(SQLiteThread*, void**);
