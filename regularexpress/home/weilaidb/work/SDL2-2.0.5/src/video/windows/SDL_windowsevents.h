#define _SDL_windowsevents_h
extern LPTSTR SDL_Appname;
extern Uint32 SDL_Appstyle;
extern HINSTANCE SDL_Instance;
extern LRESULT CALLBACK WIN_WindowProc(HWND hwnd, UINT msg, WPARAM wParam,
LPARAM lParam);
extern void WIN_PumpEvents(_THIS);
