#if defined(__APPLE__) && !defined(SQLITE_WITHOUT_ZONEMALLOC)
static malloc_zone_t* _sqliteZone_;
#define SQLITE_MALLOC(x) malloc_zone_malloc(_sqliteZone_, (x))
#define SQLITE_FREE(x) malloc_zone_free(_sqliteZone_, (x));
#define SQLITE_REALLOC(x,y) malloc_zone_realloc(_sqliteZone_, (x), (y))
#define SQLITE_MALLOCSIZE(x) \
(_sqliteZone_ ? _sqliteZone_->size(_sqliteZone_,x) : malloc_size(x))
#define SQLITE_MALLOC(x)             malloc(x)
#define SQLITE_FREE(x)               free(x)
#define SQLITE_REALLOC(x,y)          realloc((x),(y))
#if HAVE_MALLOC_H && HAVE_MALLOC_USABLE_SIZE
#  define SQLITE_USE_MALLOC_H 1
#  define SQLITE_USE_MALLOC_USABLE_SIZE 1
#elif defined(_MSC_VER) && !defined(SQLITE_WITHOUT_MSIZE)
#  define SQLITE_USE_MALLOC_H
#  define SQLITE_USE_MSIZE
#if defined(SQLITE_USE_MALLOC_H)
#  include <malloc.h>
#  if defined(SQLITE_USE_MALLOC_USABLE_SIZE)
#    if !defined(SQLITE_MALLOCSIZE)
#      define SQLITE_MALLOCSIZE(x)   malloc_usable_size(x)
#    endif
#  elif defined(SQLITE_USE_MSIZE)
#    if !defined(SQLITE_MALLOCSIZE)
#      define SQLITE_MALLOCSIZE      _msize
#    endif
#  endif
static void *sqlite3MemMalloc(int nByte)
static void sqlite3MemFree(void *pPrior)
static int sqlite3MemSize(void *pPrior)
static void *sqlite3MemRealloc(void *pPrior, int nByte)
static int sqlite3MemRoundup(int n)
static int sqlite3MemInit(void *NotUsed)
static void sqlite3MemShutdown(void *NotUsed)
void sqlite3MemSetDefault(void)
