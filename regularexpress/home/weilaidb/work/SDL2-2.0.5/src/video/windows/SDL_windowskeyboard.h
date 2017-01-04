#define _SDL_windowskeyboard_h
extern void WIN_InitKeyboard(_THIS);
extern void WIN_UpdateKeymap(void);
extern void WIN_QuitKeyboard(_THIS);
extern void WIN_ResetDeadKeys(void);
extern void WIN_StartTextInput(_THIS);
extern void WIN_StopTextInput(_THIS);
extern void WIN_SetTextInputRect(_THIS, SDL_Rect *rect);
extern SDL_bool IME_HandleMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM *lParam, struct SDL_VideoData *videodata);
