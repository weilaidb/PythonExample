#define _SDL_ibus_h
#define SDL_USE_IBUS 1
extern SDL_bool SDL_IBus_Init(void);
extern void SDL_IBus_Quit(void);
extern void SDL_IBus_SetFocus(SDL_bool focused);
extern void SDL_IBus_Reset(void);
extern SDL_bool SDL_IBus_ProcessKeyEvent(Uint32 keysym, Uint32 keycode);
extern void SDL_IBus_UpdateTextRect(SDL_Rect *window_relative_rect);
extern void SDL_IBus_PumpEvents();
