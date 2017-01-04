#define DLMALLOC_VERSION 20804
#if defined(linux)
#define _GNU_SOURCE 1
#define WIN32 1
#define LACKS_FCNTL_H
#define WIN32 1
#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x403
#define HAVE_MMAP 1
#define HAVE_MORECORE 0
#define LACKS_UNISTD_H
#define LACKS_SYS_PARAM_H
#define LACKS_SYS_MMAN_H
#define LACKS_STRING_H
#define LACKS_STRINGS_H
#define LACKS_SYS_TYPES_H
#define LACKS_ERRNO_H
#define MALLOC_FAILURE_ACTION
#define MMAP_CLEARS 0
#define MMAP_CLEARS 1
#if defined(DARWIN) || defined(_DARWIN)
#define HAVE_MORECORE 0
#define HAVE_MMAP 1
#define MALLOC_ALIGNMENT ((size_t)16U)
#define MAX_SIZE_T           (~(size_t)0)
#define ONLY_MSPACES 0
#define ONLY_MSPACES 1
#if ONLY_MSPACES
#define MSPACES 1
#define MSPACES 0
#define MALLOC_ALIGNMENT ((size_t)8U)
#define FOOTERS 0
#define ABORT  abort()
#define ABORT_ON_ASSERT_FAILURE 1
#define PROCEED_ON_ERROR 0
#define USE_LOCKS 0
#if USE_LOCKS && (defined(__GNUC__) && ((defined(__i386__) || defined(__x86_64__)))) || (defined(_MSC_VER) && _MSC_VER>=1310)
#define USE_SPIN_LOCKS 1
#define USE_SPIN_LOCKS 0
#define INSECURE 0
#define HAVE_MMAP 1
#define MMAP_CLEARS 1
#define HAVE_MREMAP 1
#define HAVE_MREMAP 0
#define MALLOC_FAILURE_ACTION  errno = ENOMEM;
#if ONLY_MSPACES
#define HAVE_MORECORE 0
#define HAVE_MORECORE 1
#if !HAVE_MORECORE
#define MORECORE_CONTIGUOUS 0
#define MORECORE_DEFAULT sbrk
#define MORECORE_CONTIGUOUS 1
#if (MORECORE_CONTIGUOUS || defined(WIN32))
#define DEFAULT_GRANULARITY (0)
#define DEFAULT_GRANULARITY ((size_t)64U * (size_t)1024U)
#define DEFAULT_TRIM_THRESHOLD ((size_t)2U * (size_t)1024U * (size_t)1024U)
#define DEFAULT_TRIM_THRESHOLD MAX_SIZE_T
#if HAVE_MMAP
#define DEFAULT_MMAP_THRESHOLD ((size_t)256U * (size_t)1024U)
#define DEFAULT_MMAP_THRESHOLD MAX_SIZE_T
#if HAVE_MMAP
#define MAX_RELEASE_CHECK_RATE 4095
#define MAX_RELEASE_CHECK_RATE MAX_SIZE_T
#define USE_BUILTIN_FFS 0
#define USE_DEV_RANDOM 0
#define NO_MALLINFO 0
#define MALLINFO_FIELD_TYPE size_t
#define NO_SEGMENT_TRAVERSAL 0
#define M_TRIM_THRESHOLD     (-1)
#define M_GRANULARITY        (-2)
#define M_MMAP_THRESHOLD     (-3)
#if !NO_MALLINFO
#define STRUCT_MALLINFO_DECLARED 1
struct mallinfo ;
#if defined(__GNUC__)
#define FORCEINLINE __inline __attribute__ ((always_inline))
#elif defined(_MSC_VER)
#define FORCEINLINE __forceinline
#if defined(__GNUC__)
#define NOINLINE __attribute__ ((noinline))
#elif defined(_MSC_VER)
#define NOINLINE __declspec(noinline)
#define NOINLINE
#define FORCEINLINE
#if !ONLY_MSPACES
#define dlcalloc               calloc
#define dlfree                 free
#define dlmalloc               malloc
#define dlmemalign             memalign
#define dlrealloc              realloc
#define dlvalloc               valloc
#define dlpvalloc              pvalloc
#define dlmallinfo             mallinfo
#define dlmallopt              mallopt
#define dlmalloc_trim          malloc_trim
#define dlmalloc_stats         malloc_stats
#define dlmalloc_usable_size   malloc_usable_size
#define dlmalloc_footprint     malloc_footprint
#define dlmalloc_max_footprint malloc_max_footprint
#define dlindependent_calloc   independent_calloc
#define dlindependent_comalloc independent_comalloc
void* dlmalloc(size_t);
void  dlfree(void*);
void* dlcalloc(size_t, size_t);
void* dlrealloc(void*, size_t);
void* dlmemalign(size_t, size_t);
void* dlvalloc(size_t);
int dlmallopt(int, int);
size_t dlmalloc_footprint(void);
size_t dlmalloc_max_footprint(void);
#if !NO_MALLINFO
struct mallinfo dlmallinfo(void);
void** dlindependent_calloc(size_t, size_t, void**);
void** dlindependent_comalloc(size_t, size_t*, void**);
void*  dlpvalloc(size_t);
int  dlmalloc_trim(size_t);
void  dlmalloc_stats(void);
size_t dlmalloc_usable_size(void*);
#if MSPACES
typedef void* mspace;
mspace create_mspace(size_t capacity, int locked);
size_t destroy_mspace(mspace msp);
mspace create_mspace_with_base(void* base, size_t capacity, int locked);
int mspace_mmap_large_chunks(mspace msp, int enable);
void* mspace_malloc(mspace msp, size_t bytes);
void mspace_free(mspace msp, void* mem);
void* mspace_realloc(mspace msp, void* mem, size_t newsize);
void* mspace_calloc(mspace msp, size_t n_elements, size_t elem_size);
void* mspace_memalign(mspace msp, size_t alignment, size_t bytes);
void** mspace_independent_calloc(mspace msp, size_t n_elements,
size_t elem_size, void* chunks[]);
void** mspace_independent_comalloc(mspace msp, size_t n_elements,
size_t sizes[], void* chunks[]);
size_t mspace_footprint(mspace msp);
size_t mspace_max_footprint(mspace msp);
#if !NO_MALLINFO
struct mallinfo mspace_mallinfo(mspace msp);
size_t mspace_usable_size(void* mem);
void mspace_malloc_stats(mspace msp);
int mspace_trim(mspace msp, size_t pad);
int mspace_mallopt(int, int);
#if FOOTERS
#if ABORT_ON_ASSERT_FAILURE
#define assert(x) if(!(x)) ABORT
#define assert(x)
#define DEBUG 0
#if USE_BUILTIN_FFS
#if HAVE_MMAP
#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
extern void*     sbrk(ptrdiff_t);
#if USE_LOCKS
#if defined (__SVR4) && defined (__sun)
LONG __cdecl _InterlockedCompareExchange(LONG volatile *Dest, LONG Exchange, LONG Comp);
LONG __cdecl _InterlockedExchange(LONG volatile *Target, LONG Value);
#if (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__) > 40100
#define _ReadWriteBarrier() __sync_synchronize()
static __inline__ __attribute__((always_inline)) long __sync_lock_test_and_set(volatile long * const Target, const long Value)
static void __inline__ __attribute__((always_inline)) _MemoryBarrier(void)
#define _ReadWriteBarrier() _MemoryBarrier()
static __inline__ __attribute__((always_inline)) long _InterlockedExchange(volatile long * const Target, const long Value)
#define interlockedcompareexchange _InterlockedCompareExchange
#define interlockedexchange _InterlockedExchange
#if defined(_MSC_VER) && _MSC_VER>=1300
unsigned char _BitScanForward(unsigned long *index, unsigned long mask);
unsigned char _BitScanReverse(unsigned long *index, unsigned long mask);
#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse
#  ifdef _SC_PAGESIZE
#    ifndef _SC_PAGE_SIZE
#      define _SC_PAGE_SIZE _SC_PAGESIZE
#    endif
#  endif
#  ifdef _SC_PAGE_SIZE
#    define malloc_getpagesize sysconf(_SC_PAGE_SIZE)
#  else
#    if defined(BSD) || defined(DGUX) || defined(HAVE_GETPAGESIZE)
extern size_t getpagesize();
#      define malloc_getpagesize getpagesize()
#    else
#      ifdef WIN32
#        define malloc_getpagesize getpagesize()
#      else
#        ifndef LACKS_SYS_PARAM_H
#          include <sys/param.h>
#        endif
#        ifdef EXEC_PAGESIZE
#          define malloc_getpagesize EXEC_PAGESIZE
#        else
#          ifdef NBPG
#            ifndef CLSIZE
#              define malloc_getpagesize NBPG
#            else
#              define malloc_getpagesize (NBPG * CLSIZE)
#            endif
#          else
#            ifdef NBPC
#              define malloc_getpagesize NBPC
#            else
#              ifdef PAGESIZE
#                define malloc_getpagesize PAGESIZE
#              else
#                define malloc_getpagesize ((size_t)4096U)
#              endif
#            endif
#          endif
#        endif
#      endif
#    endif
#  endif
#define SIZE_T_SIZE         (sizeof(size_t))
#define SIZE_T_BITSIZE      (sizeof(size_t) << 3)
#define SIZE_T_ZERO         ((size_t)0)
#define SIZE_T_ONE          ((size_t)1)
#define SIZE_T_TWO          ((size_t)2)
#define SIZE_T_FOUR         ((size_t)4)
#define TWO_SIZE_T_SIZES    (SIZE_T_SIZE<<1)
#define FOUR_SIZE_T_SIZES   (SIZE_T_SIZE<<2)
#define SIX_SIZE_T_SIZES    (FOUR_SIZE_T_SIZES+TWO_SIZE_T_SIZES)
#define HALF_MAX_SIZE_T     (MAX_SIZE_T / 2U)
#define CHUNK_ALIGN_MASK    (MALLOC_ALIGNMENT - SIZE_T_ONE)
#define is_aligned(A)       (((size_t)((A)) & (CHUNK_ALIGN_MASK)) == 0)
#define align_offset(A)\
((((size_t)(A) & CHUNK_ALIGN_MASK) == 0)? 0 :\
((MALLOC_ALIGNMENT - ((size_t)(A) & CHUNK_ALIGN_MASK)) & CHUNK_ALIGN_MASK))
#define MFAIL                ((void*)(MAX_SIZE_T))
#define CMFAIL               ((char*)(MFAIL))
#if HAVE_MMAP
#define MUNMAP_DEFAULT(a, s)  munmap((a), (s))
#define MMAP_PROT            (PROT_READ|PROT_WRITE)
#if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
#define MAP_ANONYMOUS        MAP_ANON
#define MMAP_FLAGS           (MAP_PRIVATE|MAP_ANONYMOUS)
#define MMAP_DEFAULT(s)       mmap(0, (s), MMAP_PROT, MMAP_FLAGS, -1, 0)
#define MMAP_FLAGS           (MAP_PRIVATE)
static int dev_zero_fd = -1;
#define MMAP_DEFAULT(s) ((dev_zero_fd < 0) ? \
(dev_zero_fd = open("/dev/zero", O_RDWR), \
mmap(0, (s), MMAP_PROT, MMAP_FLAGS, dev_zero_fd, 0)) : \
mmap(0, (s), MMAP_PROT, MMAP_FLAGS, dev_zero_fd, 0))
#define DIRECT_MMAP_DEFAULT(s) MMAP_DEFAULT(s)
static FORCEINLINE void* win32mmap(size_t size)
static FORCEINLINE void* win32direct_mmap(size_t size)
static FORCEINLINE int win32munmap(void* ptr, size_t size)
#define MMAP_DEFAULT(s)             win32mmap(s)
#define MUNMAP_DEFAULT(a, s)        win32munmap((a), (s))
#define DIRECT_MMAP_DEFAULT(s)      win32direct_mmap(s)
#if HAVE_MREMAP
#define MREMAP_DEFAULT(addr, osz, nsz, mv) mremap((addr), (osz), (nsz), (mv))
#if HAVE_MORECORE
#define CALL_MORECORE(S)    MORECORE(S)
#define CALL_MORECORE(S)    MORECORE_DEFAULT(S)
#define CALL_MORECORE(S)        MFAIL
#if HAVE_MMAP
#define IS_MMAPPED_BIT          (SIZE_T_ONE)
#define USE_MMAP_BIT            (SIZE_T_ONE)
#define CALL_MMAP(s)        MMAP(s)
#define CALL_MMAP(s)        MMAP_DEFAULT(s)
#define CALL_MUNMAP(a, s)   MUNMAP((a), (s))
#define CALL_MUNMAP(a, s)   MUNMAP_DEFAULT((a), (s))
#define CALL_DIRECT_MMAP(s) DIRECT_MMAP(s)
#define CALL_DIRECT_MMAP(s) DIRECT_MMAP_DEFAULT(s)
#define IS_MMAPPED_BIT          (SIZE_T_ZERO)
#define USE_MMAP_BIT            (SIZE_T_ZERO)
#define MMAP(s)                 MFAIL
#define MUNMAP(a, s)            (-1)
#define DIRECT_MMAP(s)          MFAIL
#define CALL_DIRECT_MMAP(s)     DIRECT_MMAP(s)
#define CALL_MMAP(s)            MMAP(s)
#define CALL_MUNMAP(a, s)       MUNMAP((a), (s))
#if HAVE_MMAP && HAVE_MREMAP
#define CALL_MREMAP(addr, osz, nsz, mv) MREMAP((addr), (osz), (nsz), (mv))
#define CALL_MREMAP(addr, osz, nsz, mv) MREMAP_DEFAULT((addr), (osz), (nsz), (mv))
#define CALL_MREMAP(addr, osz, nsz, mv)     MFAIL
#define USE_NONCONTIGUOUS_BIT (4U)
#define EXTERN_BIT            (8U)
#if USE_LOCKS == 1
#if USE_SPIN_LOCKS
struct pthread_mlock_t ;
#define MLOCK_T struct        pthread_mlock_t
#define CURRENT_THREAD        pthread_self()
#define INITIAL_LOCK(sl)      (memset(sl, 0, sizeof(MLOCK_T)), 0)
#define ACQUIRE_LOCK(sl)      pthread_acquire_lock(sl)
#define RELEASE_LOCK(sl)      pthread_release_lock(sl)
#define TRY_LOCK(sl)          pthread_try_lock(sl)
#define SPINS_PER_YIELD       63
static MLOCK_T malloc_global_mutex = ;
static FORCEINLINE int pthread_acquire_lock (MLOCK_T *sl)
static FORCEINLINE void pthread_release_lock (MLOCK_T *sl)
static FORCEINLINE int pthread_try_lock (MLOCK_T *sl)
struct win32_mlock_t
;
#define MLOCK_T               struct win32_mlock_t
#define CURRENT_THREAD        win32_getcurrentthreadid()
#define INITIAL_LOCK(sl)      (memset(sl, 0, sizeof(MLOCK_T)), 0)
#define ACQUIRE_LOCK(sl)      win32_acquire_lock(sl)
#define RELEASE_LOCK(sl)      win32_release_lock(sl)
#define TRY_LOCK(sl)          win32_try_lock(sl)
#define SPINS_PER_YIELD       63
static MLOCK_T malloc_global_mutex = ;
static FORCEINLINE long win32_getcurrentthreadid(void)
static FORCEINLINE int win32_acquire_lock (MLOCK_T *sl)
static FORCEINLINE void win32_release_lock (MLOCK_T *sl)
static FORCEINLINE int win32_try_lock (MLOCK_T *sl)
#define MLOCK_T               pthread_mutex_t
#define CURRENT_THREAD        pthread_self()
#define INITIAL_LOCK(sl)      pthread_init_lock(sl)
#define ACQUIRE_LOCK(sl)      pthread_mutex_lock(sl)
#define RELEASE_LOCK(sl)      pthread_mutex_unlock(sl)
#define TRY_LOCK(sl)          (!pthread_mutex_trylock(sl))
static MLOCK_T malloc_global_mutex = PTHREAD_MUTEX_INITIALIZER;
extern int pthread_mutexattr_setkind_np __P ((pthread_mutexattr_t *__attr,
int __kind));
#define PTHREAD_MUTEX_RECURSIVE PTHREAD_MUTEX_RECURSIVE_NP
#define pthread_mutexattr_settype(x,y) pthread_mutexattr_setkind_np(x,y)
static int pthread_init_lock (MLOCK_T *sl)
#define MLOCK_T               CRITICAL_SECTION
#define CURRENT_THREAD        GetCurrentThreadId()
#define INITIAL_LOCK(s)       (!InitializeCriticalSectionAndSpinCount((s), 0x80000000|4000))
#define ACQUIRE_LOCK(s)       (EnterCriticalSection(s), 0)
#define RELEASE_LOCK(s)       LeaveCriticalSection(s)
#define TRY_LOCK(s)           TryEnterCriticalSection(s)
#define NEED_GLOBAL_LOCK_INIT
static MLOCK_T malloc_global_mutex;
static volatile long malloc_global_mutex_status;
static void init_malloc_global_mutex()
#if USE_LOCKS > 1
#if USE_LOCKS
#define USE_LOCK_BIT               (2U)
#define USE_LOCK_BIT               (0U)
#define INITIAL_LOCK(l)
#if USE_LOCKS
#define ACQUIRE_MALLOC_GLOBAL_LOCK()  ACQUIRE_LOCK(&malloc_global_mutex);
#define RELEASE_MALLOC_GLOBAL_LOCK()  RELEASE_LOCK(&malloc_global_mutex);
#define ACQUIRE_MALLOC_GLOBAL_LOCK()
#define RELEASE_MALLOC_GLOBAL_LOCK()
struct malloc_chunk ;
typedef struct malloc_chunk  mchunk;
typedef struct malloc_chunk* mchunkptr;
typedef struct malloc_chunk* sbinptr;
typedef unsigned int bindex_t;
typedef unsigned int binmap_t;
typedef unsigned int flag_t;
#define MCHUNK_SIZE         (sizeof(mchunk))
#if FOOTERS
#define CHUNK_OVERHEAD      (TWO_SIZE_T_SIZES)
#define CHUNK_OVERHEAD      (SIZE_T_SIZE)
#define MMAP_CHUNK_OVERHEAD (TWO_SIZE_T_SIZES)
#define MMAP_FOOT_PAD       (FOUR_SIZE_T_SIZES)
#define MIN_CHUNK_SIZE\
((MCHUNK_SIZE + CHUNK_ALIGN_MASK) & ~CHUNK_ALIGN_MASK)
#define chunk2mem(p)        ((void*)((char*)(p)       + TWO_SIZE_T_SIZES))
#define mem2chunk(mem)      ((mchunkptr)((char*)(mem) - TWO_SIZE_T_SIZES))
#define align_as_chunk(A)   (mchunkptr)((A) + align_offset(chunk2mem(A)))
#define MAX_REQUEST         ((-MIN_CHUNK_SIZE) << 2)
#define MIN_REQUEST         (MIN_CHUNK_SIZE - CHUNK_OVERHEAD - SIZE_T_ONE)
#define pad_request(req) \
(((req) + CHUNK_OVERHEAD + CHUNK_ALIGN_MASK) & ~CHUNK_ALIGN_MASK)
#define request2size(req) \
(((req) < MIN_REQUEST)? MIN_CHUNK_SIZE : pad_request(req))
#define PINUSE_BIT          (SIZE_T_ONE)
#define CINUSE_BIT          (SIZE_T_TWO)
#define FLAG4_BIT           (SIZE_T_FOUR)
#define INUSE_BITS          (PINUSE_BIT|CINUSE_BIT)
#define FLAG_BITS           (PINUSE_BIT|CINUSE_BIT|FLAG4_BIT)
#define FENCEPOST_HEAD      (INUSE_BITS|SIZE_T_SIZE)
#define cinuse(p)           ((p)->head & CINUSE_BIT)
#define pinuse(p)           ((p)->head & PINUSE_BIT)
#define chunksize(p)        ((p)->head & ~(FLAG_BITS))
#define clear_pinuse(p)     ((p)->head &= ~PINUSE_BIT)
#define clear_cinuse(p)     ((p)->head &= ~CINUSE_BIT)
#define chunk_plus_offset(p, s)  ((mchunkptr)(((char*)(p)) + (s)))
#define chunk_minus_offset(p, s) ((mchunkptr)(((char*)(p)) - (s)))
#define next_chunk(p) ((mchunkptr)( ((char*)(p)) + ((p)->head & ~FLAG_BITS)))
#define prev_chunk(p) ((mchunkptr)( ((char*)(p)) - ((p)->prev_foot) ))
#define next_pinuse(p)  ((next_chunk(p)->head) & PINUSE_BIT)
#define get_foot(p, s)  (((mchunkptr)((char*)(p) + (s)))->prev_foot)
#define set_foot(p, s)  (((mchunkptr)((char*)(p) + (s)))->prev_foot = (s))
#define set_size_and_pinuse_of_free_chunk(p, s)\
((p)->head = (s|PINUSE_BIT), set_foot(p, s))
#define set_free_with_pinuse(p, s, n)\
(clear_pinuse(n), set_size_and_pinuse_of_free_chunk(p, s))
#define is_mmapped(p)\
(!((p)->head & PINUSE_BIT) && ((p)->prev_foot & IS_MMAPPED_BIT))
#define overhead_for(p)\
(is_mmapped(p)? MMAP_CHUNK_OVERHEAD : CHUNK_OVERHEAD)
#if MMAP_CLEARS
#define calloc_must_clear(p) (!is_mmapped(p))
#define calloc_must_clear(p) (1)
struct malloc_tree_chunk ;
typedef struct malloc_tree_chunk  tchunk;
typedef struct malloc_tree_chunk* tchunkptr;
typedef struct malloc_tree_chunk* tbinptr;
#define leftmost_child(t) ((t)->child[0] != 0? (t)->child[0] : (t)->child[1])
struct malloc_segment ;
#define is_mmapped_segment(S)  ((S)->sflags & IS_MMAPPED_BIT)
#define is_extern_segment(S)   ((S)->sflags & EXTERN_BIT)
typedef struct malloc_segment  msegment;
typedef struct malloc_segment* msegmentptr;
#define NSMALLBINS        (32U)
#define NTREEBINS         (32U)
#define SMALLBIN_SHIFT    (3U)
#define SMALLBIN_WIDTH    (SIZE_T_ONE << SMALLBIN_SHIFT)
#define TREEBIN_SHIFT     (8U)
#define MIN_LARGE_SIZE    (SIZE_T_ONE << TREEBIN_SHIFT)
#define MAX_SMALL_SIZE    (MIN_LARGE_SIZE - SIZE_T_ONE)
#define MAX_SMALL_REQUEST (MAX_SMALL_SIZE - CHUNK_ALIGN_MASK - CHUNK_OVERHEAD)
struct malloc_state ;
typedef struct malloc_state*    mstate;
struct malloc_params ;
static struct malloc_params mparams;
#define ensure_initialization() ((void)(mparams.magic != 0 || init_mparams()))
#if !ONLY_MSPACES
static struct malloc_state _gm_;
#define gm                 (&_gm_)
#define is_global(M)       ((M) == &_gm_)
#define is_initialized(M)  ((M)->top != 0)
#define use_lock(M)           ((M)->mflags &   USE_LOCK_BIT)
#define enable_lock(M)        ((M)->mflags |=  USE_LOCK_BIT)
#define disable_lock(M)       ((M)->mflags &= ~USE_LOCK_BIT)
#define use_mmap(M)           ((M)->mflags &   USE_MMAP_BIT)
#define enable_mmap(M)        ((M)->mflags |=  USE_MMAP_BIT)
#define disable_mmap(M)       ((M)->mflags &= ~USE_MMAP_BIT)
#define use_noncontiguous(M)  ((M)->mflags &   USE_NONCONTIGUOUS_BIT)
#define disable_contiguous(M) ((M)->mflags |=  USE_NONCONTIGUOUS_BIT)
#define set_lock(M,L)\
((M)->mflags = (L)?\
((M)->mflags | USE_LOCK_BIT) :\
((M)->mflags & ~USE_LOCK_BIT))
#define page_align(S)\
(((S) + (mparams.page_size - SIZE_T_ONE)) & ~(mparams.page_size - SIZE_T_ONE))
#define granularity_align(S)\
(((S) + (mparams.granularity - SIZE_T_ONE))\
& ~(mparams.granularity - SIZE_T_ONE))
#define mmap_align(S) granularity_align(S)
#define mmap_align(S) page_align(S)
#define SYS_ALLOC_PADDING (TOP_FOOT_SIZE + MALLOC_ALIGNMENT)
#define is_page_aligned(S)\
(((size_t)(S) & (mparams.page_size - SIZE_T_ONE)) == 0)
#define is_granularity_aligned(S)\
(((size_t)(S) & (mparams.granularity - SIZE_T_ONE)) == 0)
#define segment_holds(S, A)\
((char*)(A) >= S->base && (char*)(A) < S->base + S->size)
static msegmentptr segment_holding(mstate m, char* addr)
static int has_segment_link(mstate m, msegmentptr ss)
#define should_trim(M,s)  ((s) > (M)->trim_check)
#define should_trim(M,s)  (0)
#define TOP_FOOT_SIZE\
(align_offset(chunk2mem(0))+pad_request(sizeof(struct malloc_segment))+MIN_CHUNK_SIZE)
#if USE_LOCKS
#define PREACTION(M)  ((use_lock(M))? ACQUIRE_LOCK(&(M)->mutex) : 0)
#define POSTACTION(M)
#define PREACTION(M) (0)
#define POSTACTION(M)
#if PROCEED_ON_ERROR
int malloc_corruption_error_count;
static void reset_on_error(mstate m);
#define CORRUPTION_ERROR_ACTION(m)  reset_on_error(m)
#define USAGE_ERROR_ACTION(m, p)
#define CORRUPTION_ERROR_ACTION(m) ABORT
#define USAGE_ERROR_ACTION(m,p) ABORT
#if ! DEBUG
#define check_free_chunk(M,P)
#define check_inuse_chunk(M,P)
#define check_malloced_chunk(M,P,N)
#define check_mmapped_chunk(M,P)
#define check_malloc_state(M)
#define check_top_chunk(M,P)
#define check_free_chunk(M,P)       do_check_free_chunk(M,P)
#define check_inuse_chunk(M,P)      do_check_inuse_chunk(M,P)
#define check_top_chunk(M,P)        do_check_top_chunk(M,P)
#define check_malloced_chunk(M,P,N) do_check_malloced_chunk(M,P,N)
#define check_mmapped_chunk(M,P)    do_check_mmapped_chunk(M,P)
#define check_malloc_state(M)       do_check_malloc_state(M)
static void   do_check_any_chunk(mstate m, mchunkptr p);
static void   do_check_top_chunk(mstate m, mchunkptr p);
static void   do_check_mmapped_chunk(mstate m, mchunkptr p);
static void   do_check_inuse_chunk(mstate m, mchunkptr p);
static void   do_check_free_chunk(mstate m, mchunkptr p);
static void   do_check_malloced_chunk(mstate m, void* mem, size_t s);
static void   do_check_tree(mstate m, tchunkptr t);
static void   do_check_treebin(mstate m, bindex_t i);
static void   do_check_smallbin(mstate m, bindex_t i);
static void   do_check_malloc_state(mstate m);
static int    bin_find(mstate m, mchunkptr x);
static size_t traverse_and_check(mstate m);
#define is_small(s)         (((s) >> SMALLBIN_SHIFT) < NSMALLBINS)
#define small_index(s)      ((s)  >> SMALLBIN_SHIFT)
#define small_index2size(i) ((i)  << SMALLBIN_SHIFT)
#define MIN_SMALL_INDEX     (small_index(MIN_CHUNK_SIZE))
#define smallbin_at(M, i)   ((sbinptr)((char*)&((M)->smallbins[(i)<<1])))
#define treebin_at(M,i)     (&((M)->treebins[i]))
#if defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
#define compute_tree_index(S, I)\
#elif defined (__INTEL_COMPILER)
#define compute_tree_index(S, I)\
#elif defined(_MSC_VER) && _MSC_VER>=1300
#define compute_tree_index(S, I)\
#define compute_tree_index(S, I)\
#define bit_for_tree_index(i) \
(i == NTREEBINS-1)? (SIZE_T_BITSIZE-1) : (((i) >> 1) + TREEBIN_SHIFT - 2)
#define leftshift_for_tree_index(i) \
((i == NTREEBINS-1)? 0 : \
((SIZE_T_BITSIZE-SIZE_T_ONE) - (((i) >> 1) + TREEBIN_SHIFT - 2)))
#define minsize_for_tree_index(i) \
((SIZE_T_ONE << (((i) >> 1) + TREEBIN_SHIFT)) |  \
(((size_t)((i) & SIZE_T_ONE)) << (((i) >> 1) + TREEBIN_SHIFT - 1)))
#define idx2bit(i)              ((binmap_t)(1) << (i))
#define mark_smallmap(M,i)      ((M)->smallmap |=  idx2bit(i))
#define clear_smallmap(M,i)     ((M)->smallmap &= ~idx2bit(i))
#define smallmap_is_marked(M,i) ((M)->smallmap &   idx2bit(i))
#define mark_treemap(M,i)       ((M)->treemap  |=  idx2bit(i))
#define clear_treemap(M,i)      ((M)->treemap  &= ~idx2bit(i))
#define treemap_is_marked(M,i)  ((M)->treemap  &   idx2bit(i))
#define least_bit(x)         ((x) & -(x))
#define left_bits(x)         ((x<<1) | -(x<<1))
#define same_or_left_bits(x) ((x) | -(x))
#if defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
#define compute_bit2idx(X, I)\
#elif defined (__INTEL_COMPILER)
#define compute_bit2idx(X, I)\
#elif defined(_MSC_VER) && _MSC_VER>=1300
#define compute_bit2idx(X, I)\
#elif USE_BUILTIN_FFS
#define compute_bit2idx(X, I) I = ffs(X)-1
#define compute_bit2idx(X, I)\
#if !INSECURE
#define ok_address(M, a) ((char*)(a) >= (M)->least_addr)
#define ok_next(p, n)    ((char*)(p) < (char*)(n))
#define ok_cinuse(p)     cinuse(p)
#define ok_pinuse(p)     pinuse(p)
#define ok_address(M, a) (1)
#define ok_next(b, n)    (1)
#define ok_cinuse(p)     (1)
#define ok_pinuse(p)     (1)
#if (FOOTERS && !INSECURE)
#define ok_magic(M)      ((M)->magic == mparams.magic)
#define ok_magic(M)      (1)
#if !INSECURE
#if defined(__GNUC__) && __GNUC__ >= 3
#define RTCHECK(e)  __builtin_expect(e, 1)
#define RTCHECK(e)  (e)
#define RTCHECK(e)  (1)
#if !FOOTERS
#define mark_inuse_foot(M,p,s)
#define set_inuse(M,p,s)\
((p)->head = (((p)->head & PINUSE_BIT)|s|CINUSE_BIT),\
((mchunkptr)(((char*)(p)) + (s)))->head |= PINUSE_BIT)
#define set_inuse_and_pinuse(M,p,s)\
((p)->head = (s|PINUSE_BIT|CINUSE_BIT),\
((mchunkptr)(((char*)(p)) + (s)))->head |= PINUSE_BIT)
#define set_size_and_pinuse_of_inuse_chunk(M, p, s)\
((p)->head = (s|PINUSE_BIT|CINUSE_BIT))
#define mark_inuse_foot(M,p,s)\
(((mchunkptr)((char*)(p) + (s)))->prev_foot = ((size_t)(M) ^ mparams.magic))
#define get_mstate_for(p)\
((mstate)(((mchunkptr)((char*)(p) +\
(chunksize(p))))->prev_foot ^ mparams.magic))
#define set_inuse(M,p,s)\
((p)->head = (((p)->head & PINUSE_BIT)|s|CINUSE_BIT),\
(((mchunkptr)(((char*)(p)) + (s)))->head |= PINUSE_BIT), \
mark_inuse_foot(M,p,s))
#define set_inuse_and_pinuse(M,p,s)\
((p)->head = (s|PINUSE_BIT|CINUSE_BIT),\
(((mchunkptr)(((char*)(p)) + (s)))->head |= PINUSE_BIT),\
mark_inuse_foot(M,p,s))
#define set_size_and_pinuse_of_inuse_chunk(M, p, s)\
((p)->head = (s|PINUSE_BIT|CINUSE_BIT),\
mark_inuse_foot(M, p, s))
static int init_mparams(void)
static int change_mparam(int param_number, int value)
#if DEBUG
static void do_check_any_chunk(mstate m, mchunkptr p)
static void do_check_top_chunk(mstate m, mchunkptr p)
static void do_check_mmapped_chunk(mstate m, mchunkptr p)
static void do_check_inuse_chunk(mstate m, mchunkptr p)
static void do_check_free_chunk(mstate m, mchunkptr p)
static void do_check_malloced_chunk(mstate m, void* mem, size_t s)
static void do_check_tree(mstate m, tchunkptr t)
static void do_check_treebin(mstate m, bindex_t i)
static void do_check_smallbin(mstate m, bindex_t i)
static int bin_find(mstate m, mchunkptr x)
static size_t traverse_and_check(mstate m)
static void do_check_malloc_state(mstate m)
#if !NO_MALLINFO
static struct mallinfo internal_mallinfo(mstate m)
static void internal_malloc_stats(mstate m)
#define insert_small_chunk(M, P, S)
#define unlink_small_chunk(M, P, S)
#define unlink_first_small_chunk(M, B, P, I)
#define replace_dv(M, P, S)
#define insert_large_chunk(M, X, S)
#define unlink_large_chunk(M, X)
#define insert_chunk(M, P, S)\
if (is_small(S)) insert_small_chunk(M, P, S)\
else
#define unlink_chunk(M, P, S)\
if (is_small(S)) unlink_small_chunk(M, P, S)\
else
#if ONLY_MSPACES
#define internal_malloc(m, b) mspace_malloc(m, b)
#define internal_free(m, mem) mspace_free(m,mem);
#if MSPACES
#define internal_malloc(m, b)\
(m == gm)? dlmalloc(b) : mspace_malloc(m, b)
#define internal_free(m, mem)\
if (m == gm) dlfree(mem); else mspace_free(m,mem);
#define internal_malloc(m, b) dlmalloc(b)
#define internal_free(m, mem) dlfree(mem)
static void* mmap_alloc(mstate m, size_t nb)
static mchunkptr mmap_resize(mstate m, mchunkptr oldp, size_t nb)
static void init_top(mstate m, mchunkptr p, size_t psize)
static void init_bins(mstate m)
#if PROCEED_ON_ERROR
static void reset_on_error(mstate m)
static void* prepend_alloc(mstate m, char* newbase, char* oldbase,
size_t nb)
static void add_segment(mstate m, char* tbase, size_t tsize, flag_t mmapped)
static void* sys_alloc(mstate m, size_t nb)
static size_t release_unused_segments(mstate m)
static int sys_trim(mstate m, size_t pad)
static void* tmalloc_large(mstate m, size_t nb)
static void* tmalloc_small(mstate m, size_t nb)
static void* internal_realloc(mstate m, void* oldmem, size_t bytes)
static void* internal_memalign(mstate m, size_t alignment, size_t bytes)
static void** ialloc(mstate m,
size_t n_elements,
size_t* sizes,
int opts,
void* chunks[])
#if !ONLY_MSPACES
void* dlmalloc(size_t bytes)
void dlfree(void* mem)
void* dlcalloc(size_t n_elements, size_t elem_size)
void* dlrealloc(void* oldmem, size_t bytes)
void* dlmemalign(size_t alignment, size_t bytes)
void** dlindependent_calloc(size_t n_elements, size_t elem_size,
void* chunks[])
void** dlindependent_comalloc(size_t n_elements, size_t sizes[],
void* chunks[])
void* dlvalloc(size_t bytes)
void* dlpvalloc(size_t bytes)
int dlmalloc_trim(size_t pad)
size_t dlmalloc_footprint(void)
size_t dlmalloc_max_footprint(void)
#if !NO_MALLINFO
struct mallinfo dlmallinfo(void)
void dlmalloc_stats()
int dlmallopt(int param_number, int value)
size_t dlmalloc_usable_size(void* mem)
#if MSPACES
static mstate init_user_mstate(char* tbase, size_t tsize)
mspace create_mspace(size_t capacity, int locked)
mspace create_mspace_with_base(void* base, size_t capacity, int locked)
int mspace_mmap_large_chunks(mspace msp, int enable)
size_t destroy_mspace(mspace msp)
void* mspace_malloc(mspace msp, size_t bytes)
void mspace_free(mspace msp, void* mem)
void* mspace_calloc(mspace msp, size_t n_elements, size_t elem_size)
void* mspace_realloc(mspace msp, void* oldmem, size_t bytes)
void* mspace_memalign(mspace msp, size_t alignment, size_t bytes)
void** mspace_independent_calloc(mspace msp, size_t n_elements,
size_t elem_size, void* chunks[])
void** mspace_independent_comalloc(mspace msp, size_t n_elements,
size_t sizes[], void* chunks[])
int mspace_trim(mspace msp, size_t pad)
void mspace_malloc_stats(mspace msp)
size_t mspace_footprint(mspace msp)
size_t mspace_max_footprint(mspace msp)
#if !NO_MALLINFO
struct mallinfo mspace_mallinfo(mspace msp)
size_t mspace_usable_size(void* mem)
int mspace_mallopt(int param_number, int value)
