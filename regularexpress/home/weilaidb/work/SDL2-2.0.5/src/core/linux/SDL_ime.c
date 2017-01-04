typedef SDL_bool (*_SDL_IME_Init)();
typedef void (*_SDL_IME_Quit)();
typedef void (*_SDL_IME_SetFocus)(SDL_bool);
typedef void (*_SDL_IME_Reset)();
typedef SDL_bool (*_SDL_IME_ProcessKeyEvent)(Uint32, Uint32);
typedef void (*_SDL_IME_UpdateTextRect)(SDL_Rect *);
typedef void (*_SDL_IME_PumpEvents)();
static _SDL_IME_Init SDL_IME_Init_Real = NULL;
static _SDL_IME_Quit SDL_IME_Quit_Real = NULL;
static _SDL_IME_SetFocus SDL_IME_SetFocus_Real = NULL;
static _SDL_IME_Reset SDL_IME_Reset_Real = NULL;
static _SDL_IME_ProcessKeyEvent SDL_IME_ProcessKeyEvent_Real = NULL;
static _SDL_IME_UpdateTextRect SDL_IME_UpdateTextRect_Real = NULL;
static _SDL_IME_PumpEvents SDL_IME_PumpEvents_Real = NULL;
static void
InitIME()
SDL_bool
SDL_IME_Init(void)
void
SDL_IME_Quit(void)
void
SDL_IME_SetFocus(SDL_bool focused)
void
SDL_IME_Reset(void)
SDL_bool
SDL_IME_ProcessKeyEvent(Uint32 keysym, Uint32 keycode)
void
SDL_IME_UpdateTextRect(SDL_Rect *rect)
void
SDL_IME_PumpEvents()
