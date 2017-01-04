#define _SDL_mouse_c_h
typedef Uint32 SDL_MouseID;
struct SDL_Cursor
;
typedef struct
SDL_MouseClickState;
typedef struct
SDL_Mouse;
extern int SDL_MouseInit(void);
SDL_Mouse *SDL_GetMouse(void);
extern void SDL_SetDoubleClickTime(Uint32 interval);
extern void SDL_SetDefaultCursor(SDL_Cursor * cursor);
extern void SDL_SetMouseFocus(SDL_Window * window);
extern int SDL_SendMouseMotion(SDL_Window * window, SDL_MouseID mouseID, int relative, int x, int y);
extern int SDL_SendMouseButton(SDL_Window * window, SDL_MouseID mouseID, Uint8 state, Uint8 button);
extern int SDL_SendMouseButtonClicks(SDL_Window * window, SDL_MouseID mouseID, Uint8 state, Uint8 button, int clicks);
extern int SDL_SendMouseWheel(SDL_Window * window, SDL_MouseID mouseID, int x, int y, SDL_MouseWheelDirection direction);
extern void SDL_MouseQuit(void);
