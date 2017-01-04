#define _SDL_events_h
#define SDL_RELEASED    0
#define SDL_PRESSED 1
typedef enum
SDL_EventType;
typedef struct SDL_CommonEvent
SDL_CommonEvent;
typedef struct SDL_WindowEvent
SDL_WindowEvent;
typedef struct SDL_KeyboardEvent
SDL_KeyboardEvent;
#define SDL_TEXTEDITINGEVENT_TEXT_SIZE (32)
typedef struct SDL_TextEditingEvent
SDL_TextEditingEvent;
#define SDL_TEXTINPUTEVENT_TEXT_SIZE (32)
typedef struct SDL_TextInputEvent
SDL_TextInputEvent;
typedef struct SDL_MouseMotionEvent
SDL_MouseMotionEvent;
typedef struct SDL_MouseButtonEvent
SDL_MouseButtonEvent;
typedef struct SDL_MouseWheelEvent
SDL_MouseWheelEvent;
typedef struct SDL_JoyAxisEvent
SDL_JoyAxisEvent;
typedef struct SDL_JoyBallEvent
SDL_JoyBallEvent;
typedef struct SDL_JoyHatEvent
SDL_JoyHatEvent;
typedef struct SDL_JoyButtonEvent
SDL_JoyButtonEvent;
typedef struct SDL_JoyDeviceEvent
SDL_JoyDeviceEvent;
typedef struct SDL_ControllerAxisEvent
SDL_ControllerAxisEvent;
typedef struct SDL_ControllerButtonEvent
SDL_ControllerButtonEvent;
typedef struct SDL_ControllerDeviceEvent
SDL_ControllerDeviceEvent;
typedef struct SDL_AudioDeviceEvent
SDL_AudioDeviceEvent;
typedef struct SDL_TouchFingerEvent
SDL_TouchFingerEvent;
typedef struct SDL_MultiGestureEvent
SDL_MultiGestureEvent;
typedef struct SDL_DollarGestureEvent
SDL_DollarGestureEvent;
typedef struct SDL_DropEvent
SDL_DropEvent;
typedef struct SDL_QuitEvent
SDL_QuitEvent;
typedef struct SDL_OSEvent
SDL_OSEvent;
typedef struct SDL_UserEvent
SDL_UserEvent;
struct SDL_SysWMmsg;
typedef struct SDL_SysWMmsg SDL_SysWMmsg;
typedef struct SDL_SysWMEvent
SDL_SysWMEvent;
typedef union SDL_Event
SDL_Event;
extern DECLSPEC void SDLCALL SDL_PumpEvents(void);
typedef enum
SDL_eventaction;
extern DECLSPEC int SDLCALL SDL_PeepEvents(SDL_Event * events, int numevents,
SDL_eventaction action,
Uint32 minType, Uint32 maxType);
extern DECLSPEC SDL_bool SDLCALL SDL_HasEvent(Uint32 type);
extern DECLSPEC SDL_bool SDLCALL SDL_HasEvents(Uint32 minType, Uint32 maxType);
extern DECLSPEC void SDLCALL SDL_FlushEvent(Uint32 type);
extern DECLSPEC void SDLCALL SDL_FlushEvents(Uint32 minType, Uint32 maxType);
extern DECLSPEC int SDLCALL SDL_PollEvent(SDL_Event * event);
extern DECLSPEC int SDLCALL SDL_WaitEvent(SDL_Event * event);
extern DECLSPEC int SDLCALL SDL_WaitEventTimeout(SDL_Event * event,
int timeout);
extern DECLSPEC int SDLCALL SDL_PushEvent(SDL_Event * event);
typedef int (SDLCALL * SDL_EventFilter) (void *userdata, SDL_Event * event);
extern DECLSPEC void SDLCALL SDL_SetEventFilter(SDL_EventFilter filter,
void *userdata);
extern DECLSPEC SDL_bool SDLCALL SDL_GetEventFilter(SDL_EventFilter * filter,
void **userdata);
extern DECLSPEC void SDLCALL SDL_AddEventWatch(SDL_EventFilter filter,
void *userdata);
extern DECLSPEC void SDLCALL SDL_DelEventWatch(SDL_EventFilter filter,
void *userdata);
extern DECLSPEC void SDLCALL SDL_FilterEvents(SDL_EventFilter filter,
void *userdata);
#define SDL_QUERY   -1
#define SDL_IGNORE   0
#define SDL_DISABLE  0
#define SDL_ENABLE   1
extern DECLSPEC Uint8 SDLCALL SDL_EventState(Uint32 type, int state);
#define SDL_GetEventState(type) SDL_EventState(type, SDL_QUERY)
extern DECLSPEC Uint32 SDLCALL SDL_RegisterEvents(int numevents);
