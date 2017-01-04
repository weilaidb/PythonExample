#if defined(__has_feature)
#if __has_feature(address_sanitizer)
#define ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS \
__attribute__((no_address_safety_analysis)) \
__attribute__ ((noinline))
#define ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS
#if defined(__SANITIZE_ADDRESS__)
#define ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS \
__attribute__((no_address_safety_analysis)) \
__attribute__ ((noinline))
#define ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS
#define ARENAS_USE_MMAP
#if defined(__GNUC__) && (__GNUC__ > 2) && defined(__OPTIMIZE__)
#  define UNLIKELY(value) __builtin_expect((value), 0)
#  define UNLIKELY(value) (value)
static int running_on_valgrind = -1;
#define ALIGNMENT               8
#define ALIGNMENT_SHIFT         3
#define ALIGNMENT_MASK          (ALIGNMENT - 1)
#define INDEX2SIZE(I) (((uint)(I) + 1) << ALIGNMENT_SHIFT)
#define SMALL_REQUEST_THRESHOLD 512
#define NB_SMALL_SIZE_CLASSES   (SMALL_REQUEST_THRESHOLD / ALIGNMENT)
#define SYSTEM_PAGE_SIZE        (4 * 1024)
#define SYSTEM_PAGE_SIZE_MASK   (SYSTEM_PAGE_SIZE - 1)
#define SMALL_MEMORY_LIMIT      (64 * 1024 * 1024)
#define ARENA_SIZE              (256 << 10)
#define MAX_ARENAS              (SMALL_MEMORY_LIMIT / ARENA_SIZE)
#define POOL_SIZE               SYSTEM_PAGE_SIZE
#define POOL_SIZE_MASK          SYSTEM_PAGE_SIZE_MASK
#define SIMPLELOCK_DECL(lock)
#define SIMPLELOCK_INIT(lock)
#define SIMPLELOCK_FINI(lock)
#define SIMPLELOCK_LOCK(lock)
#define SIMPLELOCK_UNLOCK(lock)
#undef  uchar
#define uchar   unsigned char
#undef  uint
#define uint    unsigned int
#undef  ulong
#define ulong   unsigned long
#undef uptr
#define uptr    Py_uintptr_t
typedef uchar block;
struct pool_header ;
typedef struct pool_header *poolp;
struct arena_object ;
#undef  ROUNDUP
#define ROUNDUP(x)              (((x) + ALIGNMENT_MASK) & ~ALIGNMENT_MASK)
#define POOL_OVERHEAD           ROUNDUP(sizeof(struct pool_header))
#define DUMMY_SIZE_IDX          0xffff
#define POOL_ADDR(P) ((poolp)((uptr)(P) & ~(uptr)POOL_SIZE_MASK))
#define NUMBLOCKS(I) ((uint)(POOL_SIZE - POOL_OVERHEAD) / INDEX2SIZE(I))
SIMPLELOCK_DECL(_malloc_lock)
#define LOCK()          SIMPLELOCK_LOCK(_malloc_lock)
#define UNLOCK()        SIMPLELOCK_UNLOCK(_malloc_lock)
#define LOCK_INIT()     SIMPLELOCK_INIT(_malloc_lock)
#define LOCK_FINI()     SIMPLELOCK_FINI(_malloc_lock)
#define PTA(x)  ((poolp )((uchar *)&(usedpools[2*(x)]) - 2*sizeof(block *)))
#define PT(x)   PTA(x), PTA(x)
static poolp usedpools[2 * ((NB_SMALL_SIZE_CLASSES + 7) / 8) * 8] = ;
static struct arena_object* arenas = NULL;
static uint maxarenas = 0;
static struct arena_object* unused_arena_objects = NULL;
static struct arena_object* usable_arenas = NULL;
#define INITIAL_ARENA_OBJECTS 16
static size_t narenas_currently_allocated = 0;
static size_t ntimes_arena_allocated = 0;
static size_t narenas_highwater = 0;
static struct arena_object*
new_arena(void)
#define Py_ADDRESS_IN_RANGE(P, POOL)                    \
((arenaindex_temp = (POOL)->arenaindex) < maxarenas &&              \
(uptr)(P) - arenas[arenaindex_temp].address < (uptr)ARENA_SIZE && \
arenas[arenaindex_temp].address != 0)
#undef Py_ADDRESS_IN_RANGE
#if defined(__GNUC__) && ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1) || \
(__GNUC__ >= 4))
#define Py_NO_INLINE __attribute__((__noinline__))
#define Py_NO_INLINE
int Py_ADDRESS_IN_RANGE(void *P, poolp pool) Py_NO_INLINE;
#undef Py_NO_INLINE
#undef PyObject_Malloc
void *
PyObject_Malloc(size_t nbytes)
#undef PyObject_Free
ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS
void
PyObject_Free(void *p)
#undef PyObject_Realloc
ATTRIBUTE_NO_ADDRESS_SAFETY_ANALYSIS
void *
PyObject_Realloc(void *p, size_t nbytes)
void *
PyObject_Malloc(size_t n)
void *
PyObject_Realloc(void *p, size_t n)
void
PyObject_Free(void *p)
#undef CLEANBYTE
#undef DEADBYTE
#undef FORBIDDENBYTE
#define CLEANBYTE      0xCB
#define DEADBYTE       0xDB
#define FORBIDDENBYTE  0xFB
#define _PYMALLOC_MEM_ID 'm'
#define _PYMALLOC_OBJ_ID 'o'
static size_t serialno = 0;
static void
bumpserialno(void)
#define SST SIZEOF_SIZE_T
static size_t
read_size_t(const void *p)
static void
write_size_t(void *p, size_t n)
static int
pool_is_in_list(const poolp target, poolp list)
#define pool_is_in_list(X, Y) 1
void *
_PyMem_DebugMalloc(size_t nbytes)
void *
_PyMem_DebugRealloc(void *p, size_t nbytes)
void
_PyMem_DebugFree(void *p)
void *
_PyObject_DebugMalloc(size_t nbytes)
void *
_PyObject_DebugRealloc(void *p, size_t nbytes)
void
_PyObject_DebugFree(void *p)
void
_PyObject_DebugCheckAddress(const void *p)
void *
_PyObject_DebugMallocApi(char id, size_t nbytes)
void
_PyObject_DebugFreeApi(char api, void *p)
void *
_PyObject_DebugReallocApi(char api, void *p, size_t nbytes)
void
_PyObject_DebugCheckAddressApi(char api, const void *p)
void
_PyObject_DebugDumpAddress(const void *p)
static size_t
printone(const char* msg, size_t value)
void
_PyObject_DebugMallocStats(void)
int
Py_ADDRESS_IN_RANGE(void *P, poolp pool)
