#define _FTSINT_H
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
#if defined(SQLITE_ENABLE_FTS4) && !defined(SQLITE_ENABLE_FTS3)
# define SQLITE_ENABLE_FTS3
#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS3)
# include "sqlite3ext.h"
SQLITE_EXTENSION_INIT3
# define SQLITE_FTS3_MAX_EXPR_DEPTH 12
#define FTS3_MERGE_COUNT 16
#define FTS3_MAX_PENDING_DATA (1*1024*1024)
#define SizeofArray(X) ((int)(sizeof(X)/sizeof(X[0])))
# define MIN(x,y) ((x)<(y)?(x):(y))
# define MAX(x,y) ((x)>(y)?(x):(y))
#define FTS3_VARINT_MAX 10
#define FTS3_SEGDIR_MAXLEVEL      1024
#define FTS3_SEGDIR_MAXLEVEL_STR "1024"
# define testcase(X)
#define POS_COLUMN  (1)
#define POS_END     (0)
# define ALWAYS(x) (1)
# define NEVER(X)  (0)
#elif defined(SQLITE_DEBUG)
# define ALWAYS(x) sqlite3Fts3Always((x)!=0)
# define NEVER(x) sqlite3Fts3Never((x)!=0)
int sqlite3Fts3Always(int b);
int sqlite3Fts3Never(int b);
# define ALWAYS(x) (x)
# define NEVER(x)  (x)
typedef unsigned char u8;
typedef short int i16;
typedef unsigned int u32;
typedef sqlite3_uint64 u64;
typedef sqlite3_int64 i64;
#define UNUSED_PARAMETER(x) (void)(x)
#if !defined(NDEBUG) && !defined(SQLITE_DEBUG)
# define NDEBUG 1
#if defined(SQLITE_DEBUG) || defined(SQLITE_COVERAGE_TEST)
# define TESTONLY(X)  X
# define TESTONLY(X)
int sqlite3Fts3Corrupt(void);
# define FTS_CORRUPT_VTAB sqlite3Fts3Corrupt()
# define FTS_CORRUPT_VTAB SQLITE_CORRUPT_VTAB
typedef struct Fts3Table Fts3Table;
typedef struct Fts3Cursor Fts3Cursor;
typedef struct Fts3Expr Fts3Expr;
typedef struct Fts3Phrase Fts3Phrase;
typedef struct Fts3PhraseToken Fts3PhraseToken;
typedef struct Fts3Doclist Fts3Doclist;
typedef struct Fts3SegFilter Fts3SegFilter;
typedef struct Fts3DeferredToken Fts3DeferredToken;
typedef struct Fts3SegReader Fts3SegReader;
typedef struct Fts3MultiSegReader Fts3MultiSegReader;
struct Fts3Table ;
struct Fts3Cursor ;
#define FTS3_EVAL_FILTER    0
#define FTS3_EVAL_NEXT      1
#define FTS3_EVAL_MATCHINFO 2
#define FTS3_FULLSCAN_SEARCH 0
#define FTS3_DOCID_SEARCH    1
#define FTS3_FULLTEXT_SEARCH 2
#define FTS3_HAVE_LANGID    0x00010000
#define FTS3_HAVE_DOCID_GE  0x00020000
#define FTS3_HAVE_DOCID_LE  0x00040000
struct Fts3Doclist ;
struct Fts3PhraseToken ;
struct Fts3Phrase ;
struct Fts3Expr ;
#define FTSQUERY_NEAR   1
#define FTSQUERY_NOT    2
#define FTSQUERY_AND    3
#define FTSQUERY_OR     4
#define FTSQUERY_PHRASE 5
int sqlite3Fts3UpdateMethod(sqlite3_vtab*,int,sqlite3_value**,sqlite3_int64*);
int sqlite3Fts3PendingTermsFlush(Fts3Table *);
void sqlite3Fts3PendingTermsClear(Fts3Table *);
int sqlite3Fts3Optimize(Fts3Table *);
int sqlite3Fts3SegReaderNew(int, int, sqlite3_int64,
sqlite3_int64, sqlite3_int64, const char *, int, Fts3SegReader**);
int sqlite3Fts3SegReaderPending(
Fts3Table*,int,const char*,int,int,Fts3SegReader**);
void sqlite3Fts3SegReaderFree(Fts3SegReader *);
int sqlite3Fts3AllSegdirs(Fts3Table*, int, int, int, sqlite3_stmt **);
int sqlite3Fts3ReadBlock(Fts3Table*, sqlite3_int64, char **, int*, int*);
int sqlite3Fts3SelectDoctotal(Fts3Table *, sqlite3_stmt **);
int sqlite3Fts3SelectDocsize(Fts3Table *, sqlite3_int64, sqlite3_stmt **);
void sqlite3Fts3FreeDeferredTokens(Fts3Cursor *);
int sqlite3Fts3DeferToken(Fts3Cursor *, Fts3PhraseToken *, int);
int sqlite3Fts3CacheDeferredDoclists(Fts3Cursor *);
void sqlite3Fts3FreeDeferredDoclists(Fts3Cursor *);
int sqlite3Fts3DeferredTokenList(Fts3DeferredToken *, char **, int *);
# define sqlite3Fts3FreeDeferredTokens(x)
# define sqlite3Fts3DeferToken(x,y,z) SQLITE_OK
# define sqlite3Fts3CacheDeferredDoclists(x) SQLITE_OK
# define sqlite3Fts3FreeDeferredDoclists(x)
# define sqlite3Fts3DeferredTokenList(x,y,z) SQLITE_OK
void sqlite3Fts3SegmentsClose(Fts3Table *);
int sqlite3Fts3MaxLevel(Fts3Table *, int *);
#define FTS3_SEGCURSOR_PENDING        -1
#define FTS3_SEGCURSOR_ALL            -2
int sqlite3Fts3SegReaderStart(Fts3Table*, Fts3MultiSegReader*, Fts3SegFilter*);
int sqlite3Fts3SegReaderStep(Fts3Table *, Fts3MultiSegReader *);
void sqlite3Fts3SegReaderFinish(Fts3MultiSegReader *);
int sqlite3Fts3SegReaderCursor(Fts3Table *,
int, int, int, const char *, int, int, int, Fts3MultiSegReader *);
#define FTS3_SEGMENT_REQUIRE_POS   0x00000001
#define FTS3_SEGMENT_IGNORE_EMPTY  0x00000002
#define FTS3_SEGMENT_COLUMN_FILTER 0x00000004
#define FTS3_SEGMENT_PREFIX        0x00000008
#define FTS3_SEGMENT_SCAN          0x00000010
#define FTS3_SEGMENT_FIRST         0x00000020
struct Fts3SegFilter ;
struct Fts3MultiSegReader ;
int sqlite3Fts3Incrmerge(Fts3Table*,int,int);
#define fts3GetVarint32(p, piVal) (                                           \
(*(u8*)(p)&0x80) ? sqlite3Fts3GetVarint32(p, piVal) : (*piVal=*(u8*)(p), 1) \
)
void sqlite3Fts3ErrMsg(char**,const char*,...);
int sqlite3Fts3PutVarint(char *, sqlite3_int64);
int sqlite3Fts3GetVarint(const char *, sqlite_int64 *);
int sqlite3Fts3GetVarint32(const char *, int *);
int sqlite3Fts3VarintLen(sqlite3_uint64);
void sqlite3Fts3Dequote(char *);
void sqlite3Fts3DoclistPrev(int,char*,int,char**,sqlite3_int64*,int*,u8*);
int sqlite3Fts3EvalPhraseStats(Fts3Cursor *, Fts3Expr *, u32 *);
int sqlite3Fts3FirstFilter(sqlite3_int64, char *, int, char *);
void sqlite3Fts3CreateStatTable(int*, Fts3Table*);
const char *sqlite3Fts3NextToken(const char *, int *);
int sqlite3Fts3InitHashTable(sqlite3 *, Fts3Hash *, const char *);
int sqlite3Fts3InitTokenizer(Fts3Hash *pHash, const char *,
sqlite3_tokenizer **, char **
);
int sqlite3Fts3IsIdChar(char);
void sqlite3Fts3Offsets(sqlite3_context*, Fts3Cursor*);
void sqlite3Fts3Snippet(sqlite3_context *, Fts3Cursor *, const char *,
const char *, const char *, int, int
);
void sqlite3Fts3Matchinfo(sqlite3_context *, Fts3Cursor *, const char *);
int sqlite3Fts3ExprParse(sqlite3_tokenizer *, int,
char **, int, int, int, const char *, int, Fts3Expr **, char **
);
void sqlite3Fts3ExprFree(Fts3Expr *);
int sqlite3Fts3ExprInitTestInterface(sqlite3 *db);
int sqlite3Fts3InitTerm(sqlite3 *db);
int sqlite3Fts3OpenTokenizer(sqlite3_tokenizer *, int, const char *, int,
sqlite3_tokenizer_cursor **
);
int sqlite3Fts3InitAux(sqlite3 *db);
void sqlite3Fts3EvalPhraseCleanup(Fts3Phrase *);
int sqlite3Fts3MsrIncrStart(
Fts3Table*, Fts3MultiSegReader*, int, const char*, int);
int sqlite3Fts3MsrIncrNext(
Fts3Table *, Fts3MultiSegReader *, sqlite3_int64 *, char **, int *);
int sqlite3Fts3EvalPhrasePoslist(Fts3Cursor *, Fts3Expr *, int iCol, char **);
int sqlite3Fts3MsrOvfl(Fts3Cursor *, Fts3MultiSegReader *, int *);
int sqlite3Fts3MsrIncrRestart(Fts3MultiSegReader *pCsr);
int sqlite3Fts3InitTok(sqlite3*, Fts3Hash *);
int sqlite3FtsUnicodeFold(int, int);
int sqlite3FtsUnicodeIsalnum(int);
int sqlite3FtsUnicodeIsdiacritic(int);
