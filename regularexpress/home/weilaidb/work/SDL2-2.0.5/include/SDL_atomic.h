#define _SDL_atomic_h_
typedef int SDL_SpinLock;
extern DECLSPEC SDL_bool SDLCALL SDL_AtomicTryLock(SDL_SpinLock *lock);
extern DECLSPEC void SDLCALL SDL_AtomicLock(SDL_SpinLock *lock);
extern DECLSPEC void SDLCALL SDL_AtomicUnlock(SDL_SpinLock *lock);
#if defined(_MSC_VER) && (_MSC_VER > 1200)
void _ReadWriteBarrier(void);
#define SDL_CompilerBarrier()   _ReadWriteBarrier()
#elif (defined(__GNUC__) && !defined(__EMSCRIPTEN__)) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x5120))
#define SDL_CompilerBarrier()   __asm__ __volatile__ ("" : : : "memory")
#define SDL_CompilerBarrier()   \
#if defined(__GNUC__) && (defined(__powerpc__) || defined(__ppc__))
#define SDL_MemoryBarrierRelease()   __asm__ __volatile__ ("lwsync" : : : "memory")
#define SDL_MemoryBarrierAcquire()   __asm__ __volatile__ ("lwsync" : : : "memory")
#elif defined(__GNUC__) && defined(__arm__)
#if defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7EM__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)
#define SDL_MemoryBarrierRelease()   __asm__ __volatile__ ("dmb ish" : : : "memory")
#define SDL_MemoryBarrierAcquire()   __asm__ __volatile__ ("dmb ish" : : : "memory")
#elif defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6T2__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6ZK__)
extern DECLSPEC void SDLCALL SDL_MemoryBarrierRelease();
extern DECLSPEC void SDLCALL SDL_MemoryBarrierAcquire();
#define SDL_MemoryBarrierRelease()   __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 5" : : "r"(0) : "memory")
#define SDL_MemoryBarrierAcquire()   __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 5" : : "r"(0) : "memory")
#define SDL_MemoryBarrierRelease()   __asm__ __volatile__ ("" : : : "memory")
#define SDL_MemoryBarrierAcquire()   __asm__ __volatile__ ("" : : : "memory")
#if (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x5120))
#define SDL_MemoryBarrierRelease()  __machine_rel_barrier()
#define SDL_MemoryBarrierAcquire()  __machine_acq_barrier()
#define SDL_MemoryBarrierRelease()  SDL_CompilerBarrier()
#define SDL_MemoryBarrierAcquire()  SDL_CompilerBarrier()
typedef struct  SDL_atomic_t;
extern DECLSPEC SDL_bool SDLCALL SDL_AtomicCAS(SDL_atomic_t *a, int oldval, int newval);
extern DECLSPEC int SDLCALL SDL_AtomicSet(SDL_atomic_t *a, int v);
extern DECLSPEC int SDLCALL SDL_AtomicGet(SDL_atomic_t *a);
extern DECLSPEC int SDLCALL SDL_AtomicAdd(SDL_atomic_t *a, int v);
#define SDL_AtomicIncRef(a)    SDL_AtomicAdd(a, 1)
#define SDL_AtomicDecRef(a)    (SDL_AtomicAdd(a, -1) == 1)
extern DECLSPEC SDL_bool SDLCALL SDL_AtomicCASPtr(void **a, void *oldval, void *newval);
extern DECLSPEC void* SDLCALL SDL_AtomicSetPtr(void **a, void* v);
extern DECLSPEC void* SDLCALL SDL_AtomicGetPtr(void **a);
