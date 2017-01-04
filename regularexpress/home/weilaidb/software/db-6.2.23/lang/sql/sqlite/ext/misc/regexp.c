SQLITE_EXTENSION_INIT1
#define re_match   sqlite3re_match
#define re_compile sqlite3re_compile
#define re_free    sqlite3re_free
#define RE_EOF            0
#define RE_OP_MATCH       1
#define RE_OP_ANY         2
#define RE_OP_ANYSTAR     3
#define RE_OP_FORK        4
#define RE_OP_GOTO        5
#define RE_OP_ACCEPT      6
#define RE_OP_CC_INC      7
#define RE_OP_CC_EXC      8
#define RE_OP_CC_VALUE    9
#define RE_OP_CC_RANGE   10
#define RE_OP_WORD       11
#define RE_OP_NOTWORD    12
#define RE_OP_DIGIT      13
#define RE_OP_NOTDIGIT   14
#define RE_OP_SPACE      15
#define RE_OP_NOTSPACE   16
#define RE_OP_BOUNDARY   17
typedef unsigned short ReStateNumber;
typedef struct ReStateSet  ReStateSet;
typedef struct ReInput ReInput;
struct ReInput ;
typedef struct ReCompiled ReCompiled;
struct ReCompiled ;
static void re_add_state(ReStateSet *pSet, int newState)
static unsigned re_next_char(ReInput *p)
static unsigned re_next_char_nocase(ReInput *p)
static int re_word_char(int c)
static int re_digit_char(int c)
static int re_space_char(int c)
static int re_match(ReCompiled *pRe, const unsigned char *zIn, int nIn)
static int re_resize(ReCompiled *p, int N)
static int re_insert(ReCompiled *p, int iBefore, int op, int arg)
static int re_append(ReCompiled *p, int op, int arg)
static void re_copy(ReCompiled *p, int iStart, int N)
static int re_hex(int c, int *pV)
static unsigned re_esc_char(ReCompiled *p)
static const char *re_subcompile_string(ReCompiled*);
static unsigned char rePeek(ReCompiled *p)
static const char *re_subcompile_re(ReCompiled *p)
static const char *re_subcompile_string(ReCompiled *p){
int iPrev = -1;
int iStart;
unsigned c;
const char *zErr;
while( (c = p->xNextChar(&p->sIn))!=0 )
void re_free(ReCompiled *pRe)
const char *re_compile(ReCompiled **ppRe, const char *zIn, int noCase)
static void re_sql_func(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
__declspec(dllexport)
int sqlite3_regexp_init(
sqlite3 *db,
char **pzErrMsg,
const sqlite3_api_routines *pApi
)
