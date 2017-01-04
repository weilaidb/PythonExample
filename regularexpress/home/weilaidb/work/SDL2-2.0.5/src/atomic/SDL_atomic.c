#if defined(_MSC_VER) && (_MSC_VER >= 1500)
#define HAVE_MSC_ATOMICS 1
#if defined(__MACOSX__)
#if !defined(HAVE_GCC_ATOMICS) && defined(__SOLARIS__)
#if !defined(HAVE_MSC_ATOMICS) && !defined(HAVE_GCC_ATOMICS) && !defined(__MACOSX__) && !defined(__SOLARIS__)
#define EMULATE_CAS 1
#if EMULATE_CAS
static SDL_SpinLock locks[32];
static SDL_INLINE void
enterLock(void *a)
static SDL_INLINE void
leaveLock(void *a)
SDL_bool
SDL_AtomicCAS(SDL_atomic_t *a, int oldval, int newval)
SDL_bool
SDL_AtomicCASPtr(void **a, void *oldval, void *newval)
int
SDL_AtomicSet(SDL_atomic_t *a, int v)
void*
SDL_AtomicSetPtr(void **a, void *v)
int
SDL_AtomicAdd(SDL_atomic_t *a, int v)
int
SDL_AtomicGet(SDL_atomic_t *a)
void *
SDL_AtomicGetPtr(void **a)
#if defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6T2__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6ZK__)
__asm__(
"   .align 2\n"
"   .globl _SDL_MemoryBarrierRelease\n"
"   .globl _SDL_MemoryBarrierAcquire\n"
"_SDL_MemoryBarrierRelease:\n"
"_SDL_MemoryBarrierAcquire:\n"
"   mov r0, #0\n"
"   mcr p15, 0, r0, c7, c10, 5\n"
"   bx lr\n"
);
