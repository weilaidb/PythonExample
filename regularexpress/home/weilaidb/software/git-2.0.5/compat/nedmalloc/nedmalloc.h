#define NEDMALLOC_H
#define EXTSPEC extern
#if defined(_MSC_VER) && _MSC_VER>=1400
#define MALLOCATTR __declspec(restrict)
#define MALLOCATTR __attribute__ ((malloc))
#define MALLOCATTR
#define nedmalloc               malloc
#define nedcalloc               calloc
#define nedrealloc              realloc
#define nedfree                 free
#define nedmemalign             memalign
#define nedmallinfo             mallinfo
#define nedmallopt              mallopt
#define nedmalloc_trim          malloc_trim
#define nedmalloc_stats         malloc_stats
#define nedmalloc_footprint     malloc_footprint
#define nedindependent_calloc   independent_calloc
#define nedindependent_comalloc independent_comalloc
#define nedblksize              _msize
#define NO_MALLINFO 0
#if !NO_MALLINFO
struct mallinfo;
#if defined(__cplusplus)
#if !defined(NO_NED_NAMESPACE)
namespace nedalloc {
extern "C"
#undef MALLOCATTR
#undef EXTSPEC
