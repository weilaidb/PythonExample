static const char zHdr[] =
"\n"
;
typedef struct Keyword Keyword;
struct Keyword ;
#  define ALTER      0
#  define ALTER      0x00000001
#define ALWAYS       0x00000002
#  define ANALYZE    0
#  define ANALYZE    0x00000004
#  define ATTACH     0
#  define ATTACH     0x00000008
#  define AUTOINCR   0
#  define AUTOINCR   0x00000010
#  define CAST       0
#  define CAST       0x00000020
#  define COMPOUND   0
#  define COMPOUND   0x00000040
#  define CONFLICT   0
#  define CONFLICT   0x00000080
#  define EXPLAIN    0
#  define EXPLAIN    0x00000100
#  define FKEY       0
#  define FKEY       0x00000200
#  define PRAGMA     0
#  define PRAGMA     0x00000400
#  define REINDEX    0
#  define REINDEX    0x00000800
#  define SUBQUERY   0
#  define SUBQUERY   0x00001000
#  define TRIGGER    0
#  define TRIGGER    0x00002000
#if defined(SQLITE_OMIT_AUTOVACUUM) && \
(defined(SQLITE_OMIT_VACUUM) || defined(SQLITE_OMIT_ATTACH))
#  define VACUUM     0
#  define VACUUM     0x00004000
#  define VIEW       0
#  define VIEW       0x00008000
#  define VTAB       0
#  define VTAB       0x00010000
#  define AUTOVACUUM 0
#  define AUTOVACUUM 0x00020000
#  define CTE        0
#  define CTE        0x00040000
static Keyword aKeywordTable[] = ;
static int nKeyword = (sizeof(aKeywordTable)/sizeof(aKeywordTable[0]));
const unsigned char sqlite3UpperToLower[] = ;
#define UpperToLower sqlite3UpperToLower
static int keywordCompare1(const void *a, const void *b)
static int keywordCompare2(const void *a, const void *b)
static int keywordCompare3(const void *a, const void *b)
static Keyword *findById(int id)
int main(int argc, char **argv){
int i, j, k, h;
int bestSize, bestCount;
int count;
int nChar;
int totalLen = 0;
int aHash[1000];
char zText[2000];
for(i=j=0; i<nKeyword; i++)
nKeyword = j;
for(i=0; i<nKeyword; i++)
qsort(aKeywordTable, nKeyword, sizeof(aKeywordTable[0]), keywordCompare1);
for(i=nKeyword-2; i>=0; i--)
for(i=0; i<nKeyword; i++)
qsort(aKeywordTable, nKeyword, sizeof(aKeywordTable[0]), keywordCompare2);
nChar = 0;
for(i=0; i<nKeyword; i++)
for(i=0; i<nKeyword; i++)
qsort(aKeywordTable, nKeyword, sizeof(aKeywordTable[0]), keywordCompare3);
bestSize = nKeyword;
bestCount = nKeyword*nKeyword;
for(i=nKeyword/2; i<=2*nKeyword; i++)
for(i=0; i<bestSize; i++) aHash[i] = 0;
for(i=0; i<nKeyword; i++)
printf("%s", zHdr);
printf("\n", bestCount);
printf("static int keywordCode(const char *z, int n)
