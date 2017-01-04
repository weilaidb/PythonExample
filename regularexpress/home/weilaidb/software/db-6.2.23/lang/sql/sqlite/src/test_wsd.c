#if defined(SQLITE_OMIT_WSD) && defined(SQLITE_TEST)
#define PLS_HASHSIZE 43
typedef struct ProcessLocalStorage ProcessLocalStorage;
typedef struct ProcessLocalVar ProcessLocalVar;
struct ProcessLocalStorage ;
struct ProcessLocalVar ;
static ProcessLocalStorage *pGlobal = 0;
int sqlite3_wsd_init(int N, int J)
void *sqlite3_wsd_find(void *K, int L)
