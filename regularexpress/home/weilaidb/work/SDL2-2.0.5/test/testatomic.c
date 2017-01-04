static
char *
tf(SDL_bool tf)
static
void RunBasicTest()
#define NThreads 2
#define CountInc 100
#define VALBITS (sizeof(atomicValue)*8)
#define atomicValue int
#define CountTo ((atomicValue)((unsigned int)(1<<(VALBITS-1))-1))
#define NInter (CountTo/CountInc/NThreads)
#define Expect (CountTo-NInter*CountInc*NThreads)
SDL_COMPILE_TIME_ASSERT(size, CountTo>0);
static SDL_atomic_t good = ;
static atomicValue bad = 42;
static SDL_atomic_t threadsRunning;
static SDL_sem *threadDone;
static
int adder(void* junk)
static
void runAdder(void)
static
void RunEpicTest()
#define TEST_SPINLOCK_FIFO
#define NUM_READERS 4
#define NUM_WRITERS 4
#define EVENTS_PER_WRITER   1000000
#define MAX_ENTRIES 256
#define WRAP_MASK   (MAX_ENTRIES-1)
typedef struct
SDL_EventQueueEntry;
typedef struct
SDL_EventQueue;
static void InitEventQueue(SDL_EventQueue *queue)
static SDL_bool EnqueueEvent_LockFree(SDL_EventQueue *queue, const SDL_Event *event)
static SDL_bool DequeueEvent_LockFree(SDL_EventQueue *queue, SDL_Event *event)
static SDL_bool EnqueueEvent_Mutex(SDL_EventQueue *queue, const SDL_Event *event)
static SDL_bool DequeueEvent_Mutex(SDL_EventQueue *queue, SDL_Event *event)
static SDL_sem *writersDone;
static SDL_sem *readersDone;
static SDL_atomic_t writersRunning;
static SDL_atomic_t readersRunning;
typedef struct
WriterData;
typedef struct
ReaderData;
static int FIFO_Writer(void* _data)
static int FIFO_Reader(void* _data)
static int FIFO_Watcher(void* _data)
static void RunFIFOTest(SDL_bool lock_free)
int
main(int argc, char *argv[])
