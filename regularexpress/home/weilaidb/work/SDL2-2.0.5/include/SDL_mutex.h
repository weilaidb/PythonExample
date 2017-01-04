#define _SDL_mutex_h
#define SDL_MUTEX_TIMEDOUT  1
#define SDL_MUTEX_MAXWAIT   (~(Uint32)0)
struct SDL_mutex;
typedef struct SDL_mutex SDL_mutex;
extern DECLSPEC SDL_mutex *SDLCALL SDL_CreateMutex(void);
#define SDL_mutexP(m)   SDL_LockMutex(m)
extern DECLSPEC int SDLCALL SDL_LockMutex(SDL_mutex * mutex);
extern DECLSPEC int SDLCALL SDL_TryLockMutex(SDL_mutex * mutex);
#define SDL_mutexV(m)   SDL_UnlockMutex(m)
extern DECLSPEC int SDLCALL SDL_UnlockMutex(SDL_mutex * mutex);
extern DECLSPEC void SDLCALL SDL_DestroyMutex(SDL_mutex * mutex);
struct SDL_semaphore;
typedef struct SDL_semaphore SDL_sem;
extern DECLSPEC SDL_sem *SDLCALL SDL_CreateSemaphore(Uint32 initial_value);
extern DECLSPEC void SDLCALL SDL_DestroySemaphore(SDL_sem * sem);
extern DECLSPEC int SDLCALL SDL_SemWait(SDL_sem * sem);
extern DECLSPEC int SDLCALL SDL_SemTryWait(SDL_sem * sem);
extern DECLSPEC int SDLCALL SDL_SemWaitTimeout(SDL_sem * sem, Uint32 ms);
extern DECLSPEC int SDLCALL SDL_SemPost(SDL_sem * sem);
extern DECLSPEC Uint32 SDLCALL SDL_SemValue(SDL_sem * sem);
struct SDL_cond;
typedef struct SDL_cond SDL_cond;
extern DECLSPEC SDL_cond *SDLCALL SDL_CreateCond(void);
extern DECLSPEC void SDLCALL SDL_DestroyCond(SDL_cond * cond);
extern DECLSPEC int SDLCALL SDL_CondSignal(SDL_cond * cond);
extern DECLSPEC int SDLCALL SDL_CondBroadcast(SDL_cond * cond);
extern DECLSPEC int SDLCALL SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex);
extern DECLSPEC int SDLCALL SDL_CondWaitTimeout(SDL_cond * cond,
SDL_mutex * mutex, Uint32 ms);
