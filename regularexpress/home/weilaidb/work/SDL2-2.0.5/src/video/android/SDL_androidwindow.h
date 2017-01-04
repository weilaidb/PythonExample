#define _SDL_androidwindow_h
extern int Android_CreateWindow(_THIS, SDL_Window * window);
extern void Android_SetWindowTitle(_THIS, SDL_Window * window);
extern void Android_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool Android_GetWindowWMInfo(_THIS, SDL_Window * window, struct SDL_SysWMinfo * info);
typedef struct
SDL_WindowData;
