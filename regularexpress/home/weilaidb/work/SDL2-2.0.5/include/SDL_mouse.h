#define _SDL_mouse_h
typedef struct SDL_Cursor SDL_Cursor;
typedef enum
SDL_SystemCursor;
typedef enum
SDL_MouseWheelDirection;
extern DECLSPEC SDL_Window * SDLCALL SDL_GetMouseFocus(void);
extern DECLSPEC Uint32 SDLCALL SDL_GetMouseState(int *x, int *y);
extern DECLSPEC Uint32 SDLCALL SDL_GetGlobalMouseState(int *x, int *y);
extern DECLSPEC Uint32 SDLCALL SDL_GetRelativeMouseState(int *x, int *y);
extern DECLSPEC void SDLCALL SDL_WarpMouseInWindow(SDL_Window * window,
int x, int y);
extern DECLSPEC int SDLCALL SDL_WarpMouseGlobal(int x, int y);
extern DECLSPEC int SDLCALL SDL_SetRelativeMouseMode(SDL_bool enabled);
extern DECLSPEC int SDLCALL SDL_CaptureMouse(SDL_bool enabled);
extern DECLSPEC SDL_bool SDLCALL SDL_GetRelativeMouseMode(void);
extern DECLSPEC SDL_Cursor *SDLCALL SDL_CreateCursor(const Uint8 * data,
const Uint8 * mask,
int w, int h, int hot_x,
int hot_y);
extern DECLSPEC SDL_Cursor *SDLCALL SDL_CreateColorCursor(SDL_Surface *surface,
int hot_x,
int hot_y);
extern DECLSPEC SDL_Cursor *SDLCALL SDL_CreateSystemCursor(SDL_SystemCursor id);
extern DECLSPEC void SDLCALL SDL_SetCursor(SDL_Cursor * cursor);
extern DECLSPEC SDL_Cursor *SDLCALL SDL_GetCursor(void);
extern DECLSPEC SDL_Cursor *SDLCALL SDL_GetDefaultCursor(void);
extern DECLSPEC void SDLCALL SDL_FreeCursor(SDL_Cursor * cursor);
extern DECLSPEC int SDLCALL SDL_ShowCursor(int toggle);
#define SDL_BUTTON(X)       (1 << ((X)-1))
#define SDL_BUTTON_LEFT     1
#define SDL_BUTTON_MIDDLE   2
#define SDL_BUTTON_RIGHT    3
#define SDL_BUTTON_X1       4
#define SDL_BUTTON_X2       5
#define SDL_BUTTON_LMASK    SDL_BUTTON(SDL_BUTTON_LEFT)
#define SDL_BUTTON_MMASK    SDL_BUTTON(SDL_BUTTON_MIDDLE)
#define SDL_BUTTON_RMASK    SDL_BUTTON(SDL_BUTTON_RIGHT)
#define SDL_BUTTON_X1MASK   SDL_BUTTON(SDL_BUTTON_X1)
#define SDL_BUTTON_X2MASK   SDL_BUTTON(SDL_BUTTON_X2)
