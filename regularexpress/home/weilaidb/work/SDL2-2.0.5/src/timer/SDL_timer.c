typedef struct _SDL_Timer
SDL_Timer;
typedef struct _SDL_TimerMap
SDL_TimerMap;
typedef struct  SDL_TimerData;
static SDL_TimerData SDL_timer_data;
static void
SDL_AddTimerInternal(SDL_TimerData *data, SDL_Timer *timer)
static int
SDL_TimerThread(void *_data)
int
SDL_TimerInit(void)
void
SDL_TimerQuit(void)
SDL_TimerID
SDL_AddTimer(Uint32 interval, SDL_TimerCallback callback, void *param)
SDL_bool
SDL_RemoveTimer(SDL_TimerID id)
