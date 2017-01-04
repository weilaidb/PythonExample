#if !SDL_JOYSTICK_DISABLED
#define SDL_MAX_QUEUED_EVENTS   65535
SDL_EventFilter SDL_EventOK = NULL;
void *SDL_EventOKParam;
typedef struct SDL_EventWatcher  SDL_EventWatcher;
static SDL_EventWatcher *SDL_event_watchers = NULL;
typedef struct  SDL_DisabledEventBlock;
static SDL_DisabledEventBlock *SDL_disabled_events[256];
static Uint32 SDL_userevents = SDL_USEREVENT;
typedef struct _SDL_EventEntry
SDL_EventEntry;
typedef struct _SDL_SysWMEntry
SDL_SysWMEntry;
static struct
SDL_EventQ = ;
void
SDL_StopEventLoop(void)
int
SDL_StartEventLoop(void)
static int
SDL_AddEvent(SDL_Event * event)
static void
SDL_CutEvent(SDL_EventEntry *entry)
int
SDL_PeepEvents(SDL_Event * events, int numevents, SDL_eventaction action,
Uint32 minType, Uint32 maxType)
SDL_bool
SDL_HasEvent(Uint32 type)
SDL_bool
SDL_HasEvents(Uint32 minType, Uint32 maxType)
void
SDL_FlushEvent(Uint32 type)
void
SDL_FlushEvents(Uint32 minType, Uint32 maxType)
void
SDL_PumpEvents(void)
int
SDL_PollEvent(SDL_Event * event)
int
SDL_WaitEvent(SDL_Event * event)
int
SDL_WaitEventTimeout(SDL_Event * event, int timeout)
int
SDL_PushEvent(SDL_Event * event)
void
SDL_SetEventFilter(SDL_EventFilter filter, void *userdata)
SDL_bool
SDL_GetEventFilter(SDL_EventFilter * filter, void **userdata)
void
SDL_AddEventWatch(SDL_EventFilter filter, void *userdata)
void
SDL_DelEventWatch(SDL_EventFilter filter, void *userdata)
void
SDL_FilterEvents(SDL_EventFilter filter, void *userdata)
Uint8
SDL_EventState(Uint32 type, int state)
Uint32
SDL_RegisterEvents(int numevents)
int
SDL_SendAppEvent(SDL_EventType eventType)
int
SDL_SendSysWMEvent(SDL_SysWMmsg * message)
int
SDL_SendKeymapChangedEvent(void)
