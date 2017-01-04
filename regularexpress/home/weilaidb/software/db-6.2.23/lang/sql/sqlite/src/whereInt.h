#if defined(SQLITE_TEST) || defined(SQLITE_DEBUG) int sqlite3WhereTrace = 0;
#if defined(SQLITE_DEBUG) \
&& (defined(SQLITE_TEST) || defined(SQLITE_ENABLE_WHERETRACE))
# define WHERETRACE(K,X)  if(sqlite3WhereTrace&(K)) sqlite3DebugPrintf X
# define WHERETRACE_ENABLED 1
# define WHERETRACE(K,X)
typedef struct WhereClause WhereClause;
typedef struct WhereMaskSet WhereMaskSet;
typedef struct WhereOrInfo WhereOrInfo;
typedef struct WhereAndInfo WhereAndInfo;
typedef struct WhereLevel WhereLevel;
typedef struct WhereLoop WhereLoop;
typedef struct WherePath WherePath;
typedef struct WhereTerm WhereTerm;
typedef struct WhereLoopBuilder WhereLoopBuilder;
typedef struct WhereScan WhereScan;
typedef struct WhereOrCost WhereOrCost;
typedef struct WhereOrSet WhereOrSet;
struct WhereLevel ;
struct WhereLoop ;
struct WhereOrCost ;
#define N_OR_COST 3
struct WhereOrSet ;
static int whereLoopResize(sqlite3*, WhereLoop*, int);
struct WherePath ;
struct WhereTerm ;
#define TERM_DYNAMIC    0x01
#define TERM_VIRTUAL    0x02
#define TERM_CODED      0x04
#define TERM_COPIED     0x08
#define TERM_ORINFO     0x10
#define TERM_ANDINFO    0x20
#define TERM_OR_OK      0x40
#  define TERM_VNULL    0x80
#  define TERM_VNULL    0x00
#define TERM_LIKEOPT    0x100
#define TERM_LIKECOND   0x200
#define TERM_LIKE       0x400
struct WhereScan ;
struct WhereClause ;
struct WhereOrInfo ;
struct WhereAndInfo ;
struct WhereMaskSet ;
struct WhereLoopBuilder ;
struct WhereInfo ;
#define WO_IN     0x001
#define WO_EQ     0x002
#define WO_LT     (WO_EQ<<(TK_LT-TK_EQ))
#define WO_LE     (WO_EQ<<(TK_LE-TK_EQ))
#define WO_GT     (WO_EQ<<(TK_GT-TK_EQ))
#define WO_GE     (WO_EQ<<(TK_GE-TK_EQ))
#define WO_MATCH  0x040
#define WO_ISNULL 0x080
#define WO_OR     0x100
#define WO_AND    0x200
#define WO_EQUIV  0x400
#define WO_NOOP   0x800
#define WO_ALL    0xfff
#define WO_SINGLE 0x0ff
#define WHERE_COLUMN_EQ    0x00000001
#define WHERE_COLUMN_RANGE 0x00000002
#define WHERE_COLUMN_IN    0x00000004
#define WHERE_COLUMN_NULL  0x00000008
#define WHERE_CONSTRAINT   0x0000000f
#define WHERE_TOP_LIMIT    0x00000010
#define WHERE_BTM_LIMIT    0x00000020
#define WHERE_BOTH_LIMIT   0x00000030
#define WHERE_IDX_ONLY     0x00000040
#define WHERE_IPK          0x00000100
#define WHERE_INDEXED      0x00000200
#define WHERE_VIRTUALTABLE 0x00000400
#define WHERE_IN_ABLE      0x00000800
#define WHERE_ONEROW       0x00001000
#define WHERE_MULTI_OR     0x00002000
#define WHERE_AUTO_INDEX   0x00004000
#define WHERE_SKIPSCAN     0x00008000
#define WHERE_UNQ_WANTED   0x00010000
#define WHERE_PARTIALIDX   0x00020000
