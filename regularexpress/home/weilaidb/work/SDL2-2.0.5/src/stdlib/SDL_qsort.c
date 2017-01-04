#if defined(__clang_analyzer__) && !defined(SDL_DISABLE_ANALYZE_MACROS)
#define SDL_DISABLE_ANALYZE_MACROS 1
#if defined(HAVE_QSORT)
void
SDL_qsort(void *base, size_t nmemb, size_t size, int (*compare) (const void *, const void *))
#undef assert
#define assert SDL_assert
#undef malloc
#define malloc SDL_malloc
#undef free
#define free SDL_free
#undef memcpy
#define memcpy SDL_memcpy
#undef memmove
#define memmove SDL_memmove
#undef qsortG
#define qsortG SDL_qsort
#define WORD_BYTES sizeof(int)
#define STACK_SIZE (8*sizeof(size_t))
#define TRUNC_nonaligned	12
#define TRUNC_aligned		12
#define TRUNC_words		12*WORD_BYTES
#define PIVOT_THRESHOLD 40
typedef struct  stack_entry;
#define pushLeft
#define pushRight
#define doLeft
#define doRight
#define pop
#define Recurse(Trunc)				\
#define Pivot(swapper,sz)			\
if (last-first>PIVOT_THRESHOLD*sz) mid=pivot_big(first,mid,last,sz,compare);\
else
#define Partition(swapper,sz)
#define PreInsertion(swapper,limit,sz)		\
first=base;					\
last=first + ((nmemb>limit ? limit : nmemb)-1)*sz;\
while (last!=base) 					\
if (first!=base) swapper(first,(char*)base);
#define Insertion(swapper)			\
last=((char*)base)+nmemb*size;		\
for (first=((char*)base)+size;first!=last;first+=size)
#define SWAP_nonaligned(a,b)
#define SWAP_aligned(a,b)
#define SWAP_words(a,b)
static char * pivot_big(char *first, char *mid, char *last, size_t size,
int compare(const void *, const void *))
static void qsort_nonaligned(void *base, size_t nmemb, size_t size,
int (*compare)(const void *, const void *))
static void qsort_aligned(void *base, size_t nmemb, size_t size,
int (*compare)(const void *, const void *))
static void qsort_words(void *base, size_t nmemb,
int (*compare)(const void *, const void *))
extern void qsortG(void *base, size_t nmemb, size_t size,
int (*compare)(const void *, const void *))
